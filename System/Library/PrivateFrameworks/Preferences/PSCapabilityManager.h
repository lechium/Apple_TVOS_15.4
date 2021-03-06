//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface PSCapabilityManager : NSObject
{
    NSMutableDictionary *_overrides;	// 8 = 0x8
    NSNumber *_overrideForAllBoolValues;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x000000000002bf9e
- (void).cxx_destruct;	// IMP=0x000000000002d261
@property(retain, nonatomic) NSNumber *overrideForAllBoolValues; // @synthesize overrideForAllBoolValues=_overrideForAllBoolValues;
@property(retain, nonatomic) NSMutableDictionary *overrides; // @synthesize overrides=_overrides;
- (id)supportPSPhoneNoiseCancellationCapability;	// IMP=0x000000000002d22f
- (id)supportPSPhotoFormatProRAWCapability;	// IMP=0x000000000002d222
- (id)supportPSRecordHDRVideoCapability;	// IMP=0x000000000002d215
- (id)supportsPSDeveloperSettingsCapability;	// IMP=0x000000000002d19e
- (id)supportsPSTTYCapability;	// IMP=0x000000000002d191
- (id)applicationDisplayIdentifiers;	// IMP=0x000000000002d152
- (id)supportsInEDUModeCapability;	// IMP=0x000000000002d127
- (id)supportsInStoreDemoModeCapability;	// IMP=0x000000000002d0eb
- (id)supportsNightShiftCapability;	// IMP=0x000000000002d054
- (id)supportsAutoWhiteBalanceCapability;	// IMP=0x000000000002cfbd
- (id)supportsRaiseToWakeCapability;	// IMP=0x000000000002cfb0
- (id)supportsDisplayZoomCapability;	// IMP=0x000000000002cf39
- (id)supportsPSExposureNotificationsCapability;	// IMP=0x000000000002cec8
- (id)supportsWalletApplePayCapability;	// IMP=0x000000000002ce4a
- (id)supportsPSCellularDataPlanCapability;	// IMP=0x000000000002ce3d
- (id)supportsPSPencilCapability;	// IMP=0x000000000002ce30
- (id)supportsPSHomeScreenPhoneCapability;	// IMP=0x000000000002cdf7
- (id)supportsPSTrackpadAndMouseCapability;	// IMP=0x000000000002cd44
- (id)supportsPSTrackpadOnlyCapability;	// IMP=0x000000000002cc8e
- (id)supportsListeningExperienceCapbility;	// IMP=0x000000000002cbec
- (id)supportsLightningAdapterCapability;	// IMP=0x000000000002cbdf
- (id)supportsPictureInPictureCapability;	// IMP=0x000000000002cbd2
- (id)preferencesCapabilityAnswer:(id)arg1;	// IMP=0x000000000002c80d
- (_Bool)hasCapabilities:(id)arg1;	// IMP=0x000000000002c382
- (void)resetOverrides;	// IMP=0x000000000002c324
- (void)setOverrideValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002c28d
- (_Bool)capabilityBoolAnswer:(id)arg1;	// IMP=0x000000000002c22a
- (id)capabilityAnswer:(id)arg1;	// IMP=0x000000000002c05e
- (id)init;	// IMP=0x000000000002bff3

@end

