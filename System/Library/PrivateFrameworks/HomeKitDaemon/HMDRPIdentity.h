//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMFKey;

@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding>
{
    HMFKey *_deviceIRK;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000556b05
+ (id)logCategory;	// IMP=0x0000000000556ad5
+ (id)identityWithRPIdentity:(id)arg1;	// IMP=0x00000000005569ea
- (void).cxx_destruct;	// IMP=0x00000000005569d7
@property(readonly, copy) HMFKey *deviceIRK; // @synthesize deviceIRK=_deviceIRK;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000556945
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005568b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005568aa
- (id)logIdentifier;	// IMP=0x0000000000556890
- (_Bool)isEqualToRPIndentity:(id)arg1;	// IMP=0x00000000005567fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000556729
- (unsigned long long)hash;	// IMP=0x00000000005566e5
- (id)shortDescription;	// IMP=0x00000000005566cb
- (id)initWithDeviceIRK:(id)arg1;	// IMP=0x0000000000556626
- (id)init;	// IMP=0x000000000055657e

@end
