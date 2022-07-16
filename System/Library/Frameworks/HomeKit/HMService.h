//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessory, HMApplicationData, HMBulletinBoardNotification, HMFUnfairLock, HMMutableArray, NSArray, NSDictionary, NSNumber, NSString, NSURL, NSUUID, _HMContext;

@interface HMService : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, HMMutableApplicationData>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _nameModifiable;	// 16 = 0x10
    _Bool _userInteractive;	// 17 = 0x11
    _Bool _primaryService;	// 18 = 0x12
    _Bool _mediaSourceDisplayOrderModifiable;	// 19 = 0x13
    NSUUID *_uniqueIdentifier;	// 24 = 0x18
    HMAccessory *_accessory;	// 32 = 0x20
    NSString *_serviceType;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSString *_configuredName;	// 56 = 0x38
    NSString *_defaultName;	// 64 = 0x40
    NSString *_associatedServiceType;	// 72 = 0x48
    NSString *_serviceSubtype;	// 80 = 0x50
    long long _configurationState;	// 88 = 0x58
    HMApplicationData *_applicationData;	// 96 = 0x60
    HMBulletinBoardNotification *_bulletinBoardNotificationInternal;	// 104 = 0x68
    NSURL *_homeObjectURLInternal;	// 112 = 0x70
    NSNumber *_mediaSourceIdentifier;	// 120 = 0x78
    NSString *_assistantIdentifier;	// 128 = 0x80
    _HMContext *_context;	// 136 = 0x88
    NSNumber *_instanceID;	// 144 = 0x90
    HMMutableArray *_currentCharacteristics;	// 152 = 0x98
    NSNumber *_lastKnownDiscoveryMode;	// 160 = 0xa0
    NSNumber *_lastKnownOperatingStateValue;	// 168 = 0xa8
    NSNumber *_lastKnownOperatingStateAbnormalReasonsValue;	// 176 = 0xb0
    NSUUID *_targetAccessoryUUID;	// 184 = 0xb8
    NSUUID *_uuid;	// 192 = 0xc0
    NSArray *_linkedServiceInstanceIDs;	// 200 = 0xc8
    NSArray *_mediaSourceDisplayOrder;	// 208 = 0xd0
}

+ (id)__localizedDescriptionForServiceType:(id)arg1;	// IMP=0x0000000000243c8d
+ (id)localizedDescriptionForServiceType:(id)arg1;	// IMP=0x0000000000243c74
+ (id)_serviceTypeAsString:(id)arg1;	// IMP=0x0000000000243bed
+ (id)_mapToIsConfiguredValueFromServiceConfigurationState:(long long)arg1;	// IMP=0x0000000000243bc7
+ (long long)_mapToServiceConfigurationStateFromIsConfiguredValue:(id)arg1;	// IMP=0x0000000000243b8b
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000243b83
+ (id)logCategory;	// IMP=0x0000000000243b53
+ (id)characteristicBlacklistForShortcutConditions;	// IMP=0x0000000000243b35
+ (id)defaultCharacteristicByServiceDictionary;	// IMP=0x0000000000243b17
+ (void)initializeCharacteristicDictionaries;	// IMP=0x0000000000243abf
+ (id)serviceWithServiceReference:(id)arg1 home:(id)arg2;	// IMP=0x000000000005fa44
+ (id)serviceWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x000000000005f98f
- (void).cxx_destruct;	// IMP=0x0000000000242b20
@property(nonatomic) _Bool mediaSourceDisplayOrderModifiable; // @synthesize mediaSourceDisplayOrderModifiable=_mediaSourceDisplayOrderModifiable;
@property(retain, nonatomic) NSArray *mediaSourceDisplayOrder; // @synthesize mediaSourceDisplayOrder=_mediaSourceDisplayOrder;
@property(readonly, copy, nonatomic) NSArray *linkedServiceInstanceIDs; // @synthesize linkedServiceInstanceIDs=_linkedServiceInstanceIDs;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSUUID *targetAccessoryUUID; // @synthesize targetAccessoryUUID=_targetAccessoryUUID;
@property(copy, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasonsValue; // @synthesize lastKnownOperatingStateAbnormalReasonsValue=_lastKnownOperatingStateAbnormalReasonsValue;
@property(copy, nonatomic) NSNumber *lastKnownOperatingStateValue; // @synthesize lastKnownOperatingStateValue=_lastKnownOperatingStateValue;
@property(copy, nonatomic) NSNumber *lastKnownDiscoveryMode; // @synthesize lastKnownDiscoveryMode=_lastKnownDiscoveryMode;
@property(copy, nonatomic) HMMutableArray *currentCharacteristics; // @synthesize currentCharacteristics=_currentCharacteristics;
@property(readonly, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic, getter=isPrimaryService) _Bool primaryService; // @synthesize primaryService=_primaryService;
@property(readonly, nonatomic, getter=isUserInteractive) _Bool userInteractive; // @synthesize userInteractive=_userInteractive;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property _Bool nameModifiable; // @synthesize nameModifiable=_nameModifiable;
- (_Bool)_hasCharacteristicOfType:(id)arg1;	// IMP=0x0000000000242820
@property(readonly, copy, nonatomic) NSString *localizedDescription;
- (id)_serviceTypeDescription;	// IMP=0x0000000000242753
- (void)_addCharacteristic:(id)arg1;	// IMP=0x00000000002426d8
- (void)_removeCharacteristic:(id)arg1;	// IMP=0x000000000024265d
- (_Bool)_hasCharacteristic:(id)arg1;	// IMP=0x0000000000242405
- (void)_handleMediaSourceIdentifierUpdated:(id)arg1;	// IMP=0x00000000002423f3
- (void)_handleUpdateConfigurationState:(long long)arg1;	// IMP=0x00000000002423e1
- (void)_handleUpdateServiceSubtype:(id)arg1;	// IMP=0x00000000002423cf
- (void)_handleUpdateAssociatedServiceType:(id)arg1;	// IMP=0x0000000000242378
- (void)_handleUpdateDefaultName:(id)arg1;	// IMP=0x0000000000242366
- (void)_handleUpdateName:(id)arg1;	// IMP=0x0000000000242354
- (void)_handleMarkServiceInteractive:(id)arg1;	// IMP=0x0000000000242331
- (void)_handleUpdateServicePrimary:(id)arg1;	// IMP=0x000000000024230e
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000024219d
- (void)_addLastKnownOperatingStateWithResponsesDidUpdateDelegateCallbackToOperations;	// IMP=0x0000000000242031
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x0000000000240e9c
- (id)_findCharacteristicWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000240cc9
- (id)_findCharacteristic:(id)arg1;	// IMP=0x0000000000240af6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000240af0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002402b3
- (id)logIdentifier;	// IMP=0x0000000000240263
@property(readonly, copy) NSUUID *applicationDataIdentifier;
- (void)_updateConfigurationState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023fcf3
- (void)updateConfigurationState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023fa28
- (void)_updateAssociatedServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023f844
- (void)updateAssociatedServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023f54a
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023f378
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023ee96
@property(readonly, copy, nonatomic) NSArray *linkedServices;
- (void)recomputeAssistantIdentifier;	// IMP=0x000000000023ebc6
@property(readonly, copy, nonatomic) NSUUID *accessoryUUID;
- (void)_recomputeAssistantIdentifier;	// IMP=0x000000000023e9c2
- (id)homeObjectURL;	// IMP=0x000000000023e9b0
@property(readonly, nonatomic) NSURL *homeObjectURLInternal; // @synthesize homeObjectURLInternal=_homeObjectURLInternal;
- (id)bulletinBoardNotification;	// IMP=0x000000000023e83d
@property(readonly, nonatomic) HMBulletinBoardNotification *bulletinBoardNotificationInternal; // @synthesize bulletinBoardNotificationInternal=_bulletinBoardNotificationInternal;
@property(retain, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
- (_Bool)isNameModifiable;	// IMP=0x000000000023e43d
@property(retain, nonatomic) NSNumber *mediaSourceIdentifier; // @synthesize mediaSourceIdentifier=_mediaSourceIdentifier;
- (unsigned long long)lastKnownOperatingStateAbnormalReasons;	// IMP=0x000000000023e15c
- (long long)lastKnownOperatingState;	// IMP=0x000000000023e06a
- (_Bool)hasOperatingStateAbnormalReasons;	// IMP=0x000000000023e037
- (_Bool)hasOperatingState;	// IMP=0x000000000023e004
- (long long)lastKnownSleepDiscoveryMode;	// IMP=0x000000000023dff9
- (_Bool)hasSleepDiscoveryMode;	// IMP=0x000000000023dff1
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)characteristicsSupportedForShortcutConditions;	// IMP=0x000000000023dc85
- (id)defaultCharacteristic;	// IMP=0x000000000023d96f
@property(readonly, copy, nonatomic) NSArray *characteristics;
@property(nonatomic) long long configurationState; // @synthesize configurationState=_configurationState;
@property(copy, nonatomic) NSString *serviceSubtype; // @synthesize serviceSubtype=_serviceSubtype;
@property(copy, nonatomic) NSString *associatedServiceType; // @synthesize associatedServiceType=_associatedServiceType;
@property(retain, nonatomic) NSString *defaultName; // @synthesize defaultName=_defaultName;
@property(copy, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void)_unconfigure;	// IMP=0x000000000023c8b9
- (void)_unconfigureContext;	// IMP=0x000000000023c84b
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000023c673
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023c5a0
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000023c35c
@property(readonly, copy) NSDictionary *serializedDictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
