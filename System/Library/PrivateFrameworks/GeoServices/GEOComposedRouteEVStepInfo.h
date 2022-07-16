//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOComposedRouteEVStepInfo : NSObject <NSSecureCoding>
{
    unsigned int _remainingBatteryPercentage;	// 8 = 0x8
    unsigned int _remainingBatteryCharge;	// 12 = 0xc
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a332ec
@property(readonly, nonatomic) unsigned int remainingBatteryPercentage; // @synthesize remainingBatteryPercentage=_remainingBatteryPercentage;
@property(readonly, nonatomic) unsigned int remainingBatteryCharge; // @synthesize remainingBatteryCharge=_remainingBatteryCharge;
- (id)description;	// IMP=0x0000000000a33406
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a33398
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a332f4
- (id)initWithEVStateInfo:(id)arg1;	// IMP=0x0000000000a33259
- (id)init;	// IMP=0x0000000000a3322f

@end

