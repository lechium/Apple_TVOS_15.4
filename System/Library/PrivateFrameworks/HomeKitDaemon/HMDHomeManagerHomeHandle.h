//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface HMDHomeManagerHomeHandle : HMFObject <NSSecureCoding>
{
    NSUUID *_backingStoreUUID;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000959e9c
- (void).cxx_destruct;	// IMP=0x0000000000959e6b
@property(readonly) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly) NSUUID *backingStoreUUID; // @synthesize backingStoreUUID=_backingStoreUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000959d91
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000959ccc
- (id)initWithBackingStoreUUID:(id)arg1 homeUUID:(id)arg2;	// IMP=0x0000000000959c2a

@end
