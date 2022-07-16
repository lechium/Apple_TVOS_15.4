//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/BSXPCSecureCoding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSSecureCoding-Protocol.h>

@class BSServiceConnectionEndpoint, NSString;

@interface FBSSceneIdentityToken : NSObject <BSXPCSecureCoding, BSXPCCoding, NSSecureCoding, NSCopying>
{
    NSString *_stringRepresentation;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_workspaceIdentifier;	// 24 = 0x18
    BSServiceConnectionEndpoint *_endpoint;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000021be3
+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0000000000021a7a
- (void).cxx_destruct;	// IMP=0x0000000000021d8e
@property(readonly, nonatomic) BSServiceConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, copy, nonatomic) NSString *workspaceIdentifier; // @synthesize workspaceIdentifier=_workspaceIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021c6e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000021beb
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000021b60
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000021a82
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000021a27
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000219cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000219c2
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000218c8
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 workspaceID:(id)arg2 endpoint:(id)arg3;	// IMP=0x000000000002133f
- (id)init;	// IMP=0x0000000000021211

// Remaining properties
@property(readonly) Class superclass;

@end
