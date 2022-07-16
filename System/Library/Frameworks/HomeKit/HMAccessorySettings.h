//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>

@class HMAccessory, HMAccessorySettingGroup, HMFUnfairLock, NSString, NSUUID, _HMContext;
@protocol HMAccessorySettingsContainer, HMAccessorySettingsContainerInternal, HMAccessorySettingsDelegate, HMControllable;

@interface HMAccessorySettings <HMFLogging, HMObjectMerge>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    id <HMControllable> _settingsControl;	// 16 = 0x10
    id <HMAccessorySettingsContainerInternal> _settingsContainerInternal;	// 24 = 0x18
    id <HMAccessorySettingsDelegate> _delegate;	// 32 = 0x20
    HMAccessorySettingGroup *_rootGroup;	// 40 = 0x28
    _HMContext *_context;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x000000000013a0cc
+ (id)localizationKeyForKeyPath:(id)arg1;	// IMP=0x0000000000139ff0
- (void).cxx_destruct;	// IMP=0x0000000000139531
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly) HMAccessorySettingGroup *rootGroup; // @synthesize rootGroup=_rootGroup;
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x0000000000139286
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (void)_notifyDelegateDidUpdateKeyPath:(id)arg1;	// IMP=0x000000000013900c
- (void)_updateSettingsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000138d0e
@property(readonly, getter=isControllable) _Bool controllable;
@property __weak id <HMAccessorySettingsDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMControllable> settingsControl; // @synthesize settingsControl=_settingsControl;
@property __weak id <HMAccessorySettingsContainerInternal> settingsContainerInternal; // @synthesize settingsContainerInternal=_settingsContainerInternal;
@property(readonly) __weak id <HMAccessorySettingsContainer> settingsContainer;
@property(readonly) __weak HMAccessory *accessory;
- (void)_configureWithContext:(id)arg1;	// IMP=0x00000000001388ba
- (id)initWithSettingsContainer:(id)arg1 settingsControl:(id)arg2 rootGroup:(id)arg3;	// IMP=0x00000000001387be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
