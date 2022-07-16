//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDBitRateSetting : HAPNumberParser <NSSecureCoding>
{
    unsigned long long _bitrateSetting;	// 8 = 0x8
}

+ (id)arrayWithSettings:(id)arg1;	// IMP=0x000000000006b7a1
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006b799
@property(readonly, nonatomic) unsigned long long bitrateSetting; // @synthesize bitrateSetting=_bitrateSetting;
- (id)initWithBitRateSetting:(unsigned long long)arg1;	// IMP=0x000000000006b744
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000006b6ed
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006b632
- (id)description;	// IMP=0x000000000006b5be
- (unsigned long long)hash;	// IMP=0x000000000006b5ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006b529
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006b492
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006b3d5

@end
