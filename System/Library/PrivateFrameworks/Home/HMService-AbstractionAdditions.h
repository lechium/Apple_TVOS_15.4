//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMService.h>

#import <Home/HFAccessoryLikeObjectRootHomeKitObjectProvider-Protocol.h>
#import <Home/HFAccessoryLikeObjectVendor-Protocol.h>
#import <Home/HFAccessoryRepresentable-Protocol.h>
#import <Home/HFFavoritable-Protocol.h>
#import <Home/HFHomeContainedObject-Protocol.h>
#import <Home/HFHomeStatusVisible-Protocol.h>
#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFRoomContextProviding-Protocol.h>
#import <Home/HFServiceNameComponentsProviding-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>
#import <Home/HFUIRepresentableHomeObject-Protocol.h>
#import <Home/HFUserNotificationServiceSettingsProviding-Protocol.h>

@class HFAccessoryLikeObject, HFAccessoryType, HFServiceNameComponents, HFUserNotificationServiceSettings, HMCharacteristic, HMHome, HMRoom, NSDate, NSSet, NSString, NSUUID;
@protocol HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable, HFHomeKitObject, HFUIRepresentableHomeObject;

@interface HMService (AbstractionAdditions) <HFAccessoryLikeObjectVendor, HFAccessoryRepresentable, HFStateDumpBuildable, HFFavoritable, HFUIRepresentableHomeObject, HFHomeStatusVisible, HFHomeContainedObject, HFRoomContextProviding, HFUserNotificationServiceSettingsProviding, HFAccessoryLikeObjectRootHomeKitObjectProvider, HFReorderableHomeKitObject, HFServiceNameComponentsProviding>
+ (id)hf_allRequiredCharacteristicTypesForStandardServices;	// IMP=0x0000000000115101
+ (id)hf_requiredCharacteristicTypesForDisplayMetadataWithServiceType:(id)arg1;	// IMP=0x0000000000114a53
+ (id)hf_sensorCharacteristicTypeForServiceType:(id)arg1;	// IMP=0x00000000001147f4
+ (id)hf_characteristicsInServices:(id)arg1;	// IMP=0x0000000000189095
+ (id)hf_descriptionForServiceSubtype:(id)arg1;	// IMP=0x0000000000188cec
+ (id)hf_defaultServiceSubtypeForServiceType:(id)arg1;	// IMP=0x0000000000188cad
+ (id)_hf_allowedChildServicesTypeMap;	// IMP=0x0000000000187f08
+ (id)hf_alarmSensorServiceTypes;	// IMP=0x0000000000187cc5
+ (id)hf_sensorServiceTypes;	// IMP=0x0000000000187b47
+ (id)hf_serviceTypesHiddenFromScenesOrAutomations;	// IMP=0x0000000000186d1c
+ (CDUnknownBlockType)hf_serviceComparator;	// IMP=0x0000000000186c1b
+ (id)hf_roomsForServices:(id)arg1;	// IMP=0x0000000000186b5a
+ (id)hf_standardServiceTypes;	// IMP=0x0000000000186a7e
+ (id)hf_programmableSwitchServiceTypes;	// IMP=0x0000000000189708
+ (id)hf_userFriendlyLocalizedLowercaseDescription:(id)arg1;	// IMP=0x000000000018a705
+ (id)hf_userFriendlyLocalizedCapitalizedDescription:(id)arg1;	// IMP=0x000000000018a684
+ (id)hf_getUserFriendlyDescriptionKey:(id)arg1;	// IMP=0x000000000018a08c
@property(readonly, nonatomic) HMRoom *hf_safeRoom;
@property(readonly, nonatomic) HFAccessoryType *hf_accessoryType;
@property(readonly, nonatomic) NSSet *hf_associatedAccessories;
@property(readonly, nonatomic) NSSet *hf_containedCharacteristics;
@property(readonly, nonatomic) NSSet *hf_containedProfiles;
@property(readonly, nonatomic) NSSet *hf_containedServices;
@property(readonly, nonatomic) Class hf_itemClass;
@property(readonly, nonatomic) HFAccessoryLikeObject *hf_accessoryLikeObject;
@property(readonly, nonatomic) id <HFHomeKitObject> hf_homeKitObject;
- (_Bool)hf_isInRoom:(id)arg1;	// IMP=0x00000000000366bb
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0000000000074c87
- (id)hf_updateIsFavorite:(_Bool)arg1;	// IMP=0x000000000008c6a2
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
@property(readonly, nonatomic) id <HFUIRepresentableHomeObject> hf_topLevelUIRepresentableHomeObject;
@property(readonly, nonatomic) NSSet *hf_accessories;
@property(readonly, nonatomic) NSSet *hf_profiles;
@property(readonly, nonatomic) NSSet *hf_services;
- (id)hf_requiredCharacteristicTypesForDisplayMetadata;	// IMP=0x0000000000115299
- (_Bool)hf_isDisplayableSensor;	// IMP=0x000000000018941f
- (_Bool)hf_supportsNaturalLighting;	// IMP=0x000000000018930d
- (id)hf_lightProfiles;	// IMP=0x00000000001891db
- (id)hf_characteristicEqualToType:(id)arg1 forServiceType:(id)arg2;	// IMP=0x0000000000189117
- (_Bool)hf_canGroupWithService:(id)arg1;	// IMP=0x0000000000188ec3
- (id)hf_effectiveServiceSubtype;	// IMP=0x0000000000188bf9
- (id)hf_parentService;	// IMP=0x00000000001889ff
- (_Bool)_hf_isDirectlyOrIndirectlyLinkedToService:(id)arg1;	// IMP=0x00000000001886cc
- (id)hf_childServices;	// IMP=0x000000000018830e
- (id)hf_childServicesOfType:(id)arg1;	// IMP=0x0000000000187de1
- (_Bool)hf_requiresDeviceUnlock;	// IMP=0x0000000000187ae7
- (_Bool)hf_isCameraContainedMotionSensor;	// IMP=0x0000000000187a5a
- (_Bool)hf_isAlarmSensorService;	// IMP=0x00000000001879de
- (_Bool)hf_isSensorService;	// IMP=0x0000000000187962
- (_Bool)hf_isChildService;	// IMP=0x000000000018792f
- (_Bool)hf_isTelevision;	// IMP=0x00000000001878e1
- (_Bool)hf_showsAsServiceInControlCentre;	// IMP=0x00000000001878cc
- (_Bool)hf_isVisible;	// IMP=0x0000000000187858
- (_Bool)hf_isLegacyService;	// IMP=0x00000000001876a0
- (_Bool)hf_isInGroup;	// IMP=0x000000000018766d
- (id)hf_serviceGroup;	// IMP=0x0000000000187532
- (_Bool)hf_supportsGroups;	// IMP=0x0000000000187430
- (id)hf_updateIconDescriptor:(id)arg1;	// IMP=0x000000000018715e
- (id)hf_iconDescriptor;	// IMP=0x00000000001870a7
- (id)hf_effectiveServiceType;	// IMP=0x000000000018705e
- (id)hf_serviceDescriptor;	// IMP=0x0000000000186edc
- (id)hf_characteristicOfType:(id)arg1;	// IMP=0x0000000000186db5
- (id)_hf_firstLinkedServiceOfType:(id)arg1;	// IMP=0x0000000000189ca4
@property(readonly, nonatomic) HMCharacteristic *hf_labelNamespaceCharacteristic;
@property(readonly, nonatomic) HMCharacteristic *hf_labelIndexCharacteristic;
@property(readonly, nonatomic) unsigned long long hf_fallbackProgrammableSwitchIndex;
@property(readonly, nonatomic) _Bool hf_isProgrammableSwitch;
- (id)hf_userFriendlyLocalizedLowercaseDescription;	// IMP=0x000000000018a835
- (id)hf_userFriendlyLocalizedCapitalizedDescription;	// IMP=0x000000000018a786
- (id)hf_updateIsVisibleInHomeStatus:(_Bool)arg1;	// IMP=0x0000000000189f3d
@property(readonly, nonatomic) _Bool hf_isForcedVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_hasSetVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_isVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_supportsHomeStatus;
@property(readonly, nonatomic) __weak HMHome *home;
- (_Bool)hf_isValidObject;	// IMP=0x00000000001adfbf
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
- (id)hf_updateUserNotificationSettings:(id)arg1;	// IMP=0x00000000001d8fe0
@property(readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property(readonly, nonatomic) id <HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable> hf_rootAccessoryLikeHomeKitObject;
- (id)hf_updateDateAdded:(id)arg1;	// IMP=0x00000000002a5125
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

