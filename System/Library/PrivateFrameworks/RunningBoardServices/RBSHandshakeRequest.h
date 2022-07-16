//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSArray, NSSet, NSString;

@interface RBSHandshakeRequest : NSObject <RBSXPCSecureCoding>
{
    unsigned int _auid;	// 8 = 0x8
    unsigned int _euid;	// 12 = 0xc
    NSSet *_assertionDescriptors;	// 16 = 0x10
    NSArray *_savedEndowments;	// 24 = 0x18
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0000000000030cfd
- (void).cxx_destruct;	// IMP=0x0000000000030ec1
@property(retain, nonatomic) NSArray *savedEndowments; // @synthesize savedEndowments=_savedEndowments;
@property(retain, nonatomic) NSSet *assertionDescriptors; // @synthesize assertionDescriptors=_assertionDescriptors;
@property(nonatomic) unsigned int euid; // @synthesize euid=_euid;
@property(nonatomic) unsigned int auid; // @synthesize auid=_auid;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000030d73
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000030d05
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000030bd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

