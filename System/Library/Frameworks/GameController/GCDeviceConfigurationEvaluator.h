//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface GCDeviceConfigurationEvaluator : NSObject
{
    NSSet *_configurationsIN;	// 8 = 0x8
    NSDictionary *_deviceManagersIN;	// 16 = 0x10
    NSDictionary *_physicalDevicesIN;	// 24 = 0x18
    NSSet *_viableConfigurationsOUT;	// 32 = 0x20
    NSDictionary *_deviceOwnersOUT;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000cdf9
@property(readonly, nonatomic) NSDictionary *deviceOwnersOUT; // @synthesize deviceOwnersOUT=_deviceOwnersOUT;
@property(readonly, nonatomic) NSSet *viableConfigurationsOUT; // @synthesize viableConfigurationsOUT=_viableConfigurationsOUT;
@property(copy, nonatomic) NSDictionary *physicalDevicesIN; // @synthesize physicalDevicesIN=_physicalDevicesIN;
@property(copy, nonatomic) NSDictionary *deviceManagersIN; // @synthesize deviceManagersIN=_deviceManagersIN;
@property(copy, nonatomic) NSSet *configurationsIN; // @synthesize configurationsIN=_configurationsIN;
- (void)evaluate;	// IMP=0x000000000000cb36
- (unsigned long long)viableConfigurations:(id *)arg1 deviceOwners:(id *)arg2;	// IMP=0x000000000000b736

@end

