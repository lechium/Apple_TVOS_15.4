//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKWristDetectionSettingManager;

@interface HKWristDetectionSettingDataSource
{
    HKWristDetectionSettingManager *_wristDetectionSettingManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000011ea7a
@property(readonly, nonatomic) HKWristDetectionSettingManager *wristDetectionSettingManager; // @synthesize wristDetectionSettingManager=_wristDetectionSettingManager;
- (void)unregisterBridgedObserver:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000011ea4c
- (id)makeAndRegisterBridgedObserverForKey:(id)arg1 handle:(id)arg2;	// IMP=0x000000000011e9d8
- (id)initWithWristDetectionSettingManager:(id)arg1;	// IMP=0x000000000011e96a

@end
