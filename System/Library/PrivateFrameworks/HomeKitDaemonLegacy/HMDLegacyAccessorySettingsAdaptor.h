//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDLegacyAccessorySettingsAdaptor-Protocol.h>
#import <HomeKitDaemonLegacy/HMEEventConsumer-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSString, NSUUID;
@protocol HMDLegacyAccessorySettingsAdaptorDelegate, HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider, HMESubscriptionProviding, OS_dispatch_queue;

@interface HMDLegacyAccessorySettingsAdaptor : NSObject <HMEEventConsumer, HMFLogging, HMDLegacyAccessorySettingsAdaptor>
{
    id <HMDLegacyAccessorySettingsAdaptorDelegate> delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSUUID *_homeUUID;	// 24 = 0x18
    NSUUID *_accessoryUUID;	// 32 = 0x20
    id <HMESubscriptionProviding> _subscriptionProvider;	// 40 = 0x28
    id <HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> _currentAccessorySettingsController;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x000000000059192a
- (void).cxx_destruct;	// IMP=0x0000000000590fcc
@property(readonly, nonatomic) __weak id <HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> currentAccessorySettingsController; // @synthesize currentAccessorySettingsController=_currentAccessorySettingsController;
@property(readonly, nonatomic) id <HMESubscriptionProviding> subscriptionProvider; // @synthesize subscriptionProvider=_subscriptionProvider;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMDLegacyAccessorySettingsAdaptorDelegate> delegate; // @synthesize delegate;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000590b80
- (id)_parsedLanguageSetting:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000590864
- (id)_parsedIntegerSettingEvent:(id)arg1 topic:(id)arg2;	// IMP=0x000000000059061e
- (id)_parsedBoolSettingEvent:(id)arg1 topic:(id)arg2;	// IMP=0x00000000005902ef
- (id)_transformLegacyLanguageSettingValueToImmutableSetting:(id)arg1;	// IMP=0x00000000005900c4
- (id)_settingValueForKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x000000000058f8b9
- (id)languageValueList;	// IMP=0x000000000058f8ac
- (void)updateSettingWithKeyPath:(id)arg1 settingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000058f5a7
- (void)startup;	// IMP=0x000000000058f257
- (id)initWithQueue:(id)arg1 homeUUID:(id)arg2 accessoryUUID:(id)arg3 settingsController:(id)arg4 subscriptionProvider:(id)arg5;	// IMP=0x000000000058f14f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

