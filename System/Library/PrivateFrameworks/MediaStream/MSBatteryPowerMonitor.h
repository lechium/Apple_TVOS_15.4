//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MSBatteryPowerMonitor : NSObject
{
    _Bool _isExternalPowerConnected;	// 8 = 0x8
}

+ (id)defaultMonitor;	// IMP=0x0000000000007519
@property(readonly, nonatomic) _Bool isExternalPowerConnected; // @synthesize isExternalPowerConnected=_isExternalPowerConnected;
- (double)batteryPercentRemaining;	// IMP=0x0000000000007502

@end

