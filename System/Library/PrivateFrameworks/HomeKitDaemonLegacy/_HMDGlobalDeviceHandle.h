//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountHandle, NSData;

@interface _HMDGlobalDeviceHandle
{
    HMDAccountHandle *_accountHandle;	// 16 = 0x10
    NSData *_pushToken;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000024a561
+ (_Bool)isValidDestination:(id)arg1;	// IMP=0x000000000024a54b
- (void).cxx_destruct;	// IMP=0x000000000024a10c
@property(readonly, copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, copy) HMDAccountHandle *accountHandle; // @synthesize accountHandle=_accountHandle;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024a011
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000249e39
- (id)destination;	// IMP=0x0000000000249d7c
- (_Bool)isGlobal;	// IMP=0x0000000000249d74
- (id)privateDescription;	// IMP=0x0000000000249ced
- (id)description;	// IMP=0x0000000000249c9b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000249bc7
- (unsigned long long)hash;	// IMP=0x0000000000249b83
- (id)initWithDestination:(id)arg1;	// IMP=0x00000000002498bb
- (id)initWithPushToken:(id)arg1 accountHandle:(id)arg2;	// IMP=0x000000000024972c

@end

