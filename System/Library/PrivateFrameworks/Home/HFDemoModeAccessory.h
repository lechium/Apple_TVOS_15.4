//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessory.h>

#import <Home/HFUserNotificationServiceSettingsProviding-Protocol.h>

@class HFUserNotificationServiceSettings, HMHome, NSPredicate, NSString, NSUUID;

@interface HFDemoModeAccessory : HMAccessory <HFUserNotificationServiceSettingsProviding>
{
    _Bool _notificationsEnabled;	// 8 = 0x8
    _Bool _isInternallyCertified;	// 9 = 0x9
    NSUUID *_internalUniqueIdentifier;	// 16 = 0x10
    NSPredicate *_notificationCondition;	// 24 = 0x18
    HMHome *_home;	// 32 = 0x20
}

+ (_Bool)_hasValidKeys:(id)arg1;	// IMP=0x00000000001c5471
+ (id)accessoryWithContentsOfDictionary:(id)arg1 forHome:(id)arg2;	// IMP=0x00000000001c5401
- (void).cxx_destruct;	// IMP=0x00000000001c684f
@property(nonatomic) _Bool isInternallyCertified; // @synthesize isInternallyCertified=_isInternallyCertified;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSPredicate *notificationCondition; // @synthesize notificationCondition=_notificationCondition;
@property(nonatomic, getter=areNotificationsEnabled) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(retain, nonatomic) NSUUID *internalUniqueIdentifier; // @synthesize internalUniqueIdentifier=_internalUniqueIdentifier;
- (_Bool)_shouldShowAppleInternalManufacturerInfo;	// IMP=0x00000000001c6720
- (_Bool)_isAppleInternalAccessory;	// IMP=0x00000000001c6659
- (void)_updateManufacturerInfoWithString:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001c653e
@property(readonly, copy) NSString *description;
- (id)initWithContentsOfDictionary:(id)arg1 forHome:(id)arg2;	// IMP=0x00000000001c6235
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c6183
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c60d1
- (id)hf_serviceNameComponents;	// IMP=0x00000000001c5fee
- (id)hf_updateUserNotificationSettings:(id)arg1;	// IMP=0x00000000001c5fd5
@property(readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
- (id)hf_updateIsFavorite:(_Bool)arg1;	// IMP=0x00000000001c5f3f
- (_Bool)hf_shouldShowInFavorites;	// IMP=0x00000000001c5f08
- (_Bool)hf_hasSetFavorite;	// IMP=0x00000000001c5e9e
- (_Bool)hf_isFavorite;	// IMP=0x00000000001c5e29
- (id)category;	// IMP=0x00000000001c5e21
- (_Bool)hf_shouldShowSoftwareUpdateInfo;	// IMP=0x00000000001c5e19
- (long long)certificationStatus;	// IMP=0x00000000001c5e00
- (id)symptomsHandler;	// IMP=0x00000000001c5df8
- (_Bool)isReachable;	// IMP=0x00000000001c5df0
- (id)services;	// IMP=0x00000000001c5dd7
- (id)name;	// IMP=0x00000000001c5d87
- (id)room;	// IMP=0x00000000001c5bf7
- (id)serialNumber;	// IMP=0x00000000001c5a5b
@property(readonly, copy, nonatomic) NSString *model;
@property(readonly, copy, nonatomic) NSString *manufacturer;
@property(readonly, copy, nonatomic) NSString *firmwareVersion;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

