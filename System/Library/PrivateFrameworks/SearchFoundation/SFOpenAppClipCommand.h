//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFOpenAppClipCommand-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFOpenAppClipCommand <SFOpenAppClipCommand, NSSecureCoding, NSCopying>
{
    NSString *_clipIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e5a8c
- (void).cxx_destruct;	// IMP=0x00000000001e5a79
@property(copy, nonatomic) NSString *clipIdentifier; // @synthesize clipIdentifier=_clipIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e59f2
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e58a3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e57f1
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001dae2d

// Remaining properties
@property(copy, nonatomic) NSString *commandDetail;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
