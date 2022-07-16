//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/HMSettingsDelegate-Protocol.h>
#import <MediaPlayer/HMUserDelegatePrivate-Protocol.h>

@class HMHome, HMSettings, HMUser, NSString;
@protocol OS_dispatch_queue;

@interface MPHomeUserMonitor : NSObject <HMSettingsDelegate, HMUserDelegatePrivate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    HMUser *_user;	// 24 = 0x18
    HMHome *_home;	// 32 = 0x20
    HMSettings *_privateHomeSettings;	// 40 = 0x28
    HMSettings *_sharedSettings;	// 48 = 0x30
    _Bool _allowExplicitCachedValue;	// 56 = 0x38
    _Bool _currentAccessoryPrivateListeningCachedValue;	// 57 = 0x39
}

+ (void)setPrivateListeningEnabledForCurrentUserAndAccessory:(_Bool)arg1;	// IMP=0x00000000002a6d66
+ (_Bool)isPrivateListeningEnabledForCurrentUserAndAccessory;	// IMP=0x00000000002a6c94
+ (void)setExplicitSettingEnabledForCurrentUser:(_Bool)arg1;	// IMP=0x00000000002a6bc2
+ (_Bool)isExplicitSettingEnabledForCurrentUser;	// IMP=0x00000000002a6af0
+ (id)monitorForCurrentUser;	// IMP=0x00000000002a6a7f
+ (id)userMonitorWithUserIdentity:(id)arg1 fromUserIdentityStore:(id)arg2;	// IMP=0x00000000002a6890
+ (id)userMonitorWithHomeIdentifiers:(id)arg1;	// IMP=0x00000000002a67fe
+ (id)userMonitorWithHomeIdentifier:(id)arg1;	// IMP=0x00000000002a676c
- (void).cxx_destruct;	// IMP=0x00000000002a5a28
- (void)user:(id)arg1 didUpdateUserListeningHistoryUpdateControl:(id)arg2 forHome:(id)arg3;	// IMP=0x00000000002a58e7
- (void)settingsDidUpdate:(id)arg1;	// IMP=0x00000000002a57da
- (void)_postNotificationWithName:(id)arg1;	// IMP=0x00000000002a574f
- (void)_notifyAllowExplicitUpdated;	// IMP=0x00000000002a5736
- (void)_notifyPrivateListeningUpdated;	// IMP=0x00000000002a571d
- (void)_updateUserListeningHistoryControlForAccessory:(id)arg1 enable:(_Bool)arg2;	// IMP=0x00000000002a570f
- (void)_loadCurrentAccessoryPrivateListening;	// IMP=0x00000000002a5617
- (void)_loadAllowExplicitValue;	// IMP=0x00000000002a540a
- (id)privateListeningEnabledForGroupWithRouteIDs:(id)arg1;	// IMP=0x00000000002a52f4
- (_Bool)privateListeningEnabledForAccessoryWithRouteID:(id)arg1;	// IMP=0x00000000002a52ec
- (_Bool)hasAccessoryWithRouteID:(id)arg1;	// IMP=0x00000000002a51cd
- (void)setPrivateListeningEnabledForAccessoryWithRouteID:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000002a51c7
@property(nonatomic, getter=isPrivateListeningEnabledForCurrentAccessory) _Bool privateListeningEnabledForCurrentAccessory;
@property(nonatomic, getter=isExplicitSettingEnabled) _Bool explicitSettingEnabled;
- (void)_update;	// IMP=0x00000000002a501d
- (id)initWithUser:(id)arg1 home:(id)arg2;	// IMP=0x00000000002a4ee8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

