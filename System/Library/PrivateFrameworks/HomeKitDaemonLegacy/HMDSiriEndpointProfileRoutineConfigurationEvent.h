//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class HMDSiriEndpointProfileAccessorySettingFields, HMDSiriEndpointProfileFields, NSDictionary, NSString;

@interface HMDSiriEndpointProfileRoutineConfigurationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSString *_accessoryCategoryType;	// 8 = 0x8
    HMDSiriEndpointProfileFields *_profileFields;	// 16 = 0x10
    HMDSiriEndpointProfileAccessorySettingFields *_accessorySettingFields;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000843577
@property(readonly) HMDSiriEndpointProfileAccessorySettingFields *accessorySettingFields; // @synthesize accessorySettingFields=_accessorySettingFields;
@property(readonly) HMDSiriEndpointProfileFields *profileFields; // @synthesize profileFields=_profileFields;
@property(readonly) NSString *accessoryCategoryType; // @synthesize accessoryCategoryType=_accessoryCategoryType;
- (id)attributeDescriptions;	// IMP=0x00000000008433bf
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) NSDictionary *serializedEvent;
- (id)initWithAccessoryCategoryType:(id)arg1 profileFields:(id)arg2 accessorySettingFields:(id)arg3;	// IMP=0x00000000008430fc

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end
