//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface _HMDLocalDeviceHandle
{
    NSUUID *_deviceIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000024afa9
+ (_Bool)isValidDestination:(id)arg1;	// IMP=0x000000000024af79
- (void).cxx_destruct;	// IMP=0x000000000024ad50
@property(readonly, copy, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024aca4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000024ac09
- (id)destination;	// IMP=0x000000000024ab88
- (_Bool)isLocal;	// IMP=0x000000000024ab80
- (id)privateDescription;	// IMP=0x000000000024aaf9
- (id)description;	// IMP=0x000000000024aaa9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024a9d5
- (unsigned long long)hash;	// IMP=0x000000000024a991
- (id)initWithDestination:(id)arg1;	// IMP=0x000000000024a6c4
- (id)initWithDeviceIdentifier:(id)arg1;	// IMP=0x000000000024a569

@end
