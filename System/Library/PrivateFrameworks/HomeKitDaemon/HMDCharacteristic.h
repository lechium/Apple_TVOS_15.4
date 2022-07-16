//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDCharacteristicMetadata, HMDHAPAccessory, HMDService, NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSUUID;
@protocol HMFLocking;

@interface HMDCharacteristic : HMFObject <HMDBulletinIdentifiers, HMFLogging, NSSecureCoding, HMFDumpState>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSMutableSet *_notificationRegistrations;	// 16 = 0x10
    _Bool _notificationRegisteredWithRemoteGateway;	// 24 = 0x18
    _Bool _broadcastNotificationEnabled;	// 25 = 0x19
    NSSet *_hapCharacteristicTuples;	// 32 = 0x20
    HMDCharacteristicMetadata *_metadata;	// 40 = 0x28
    NSDate *_notificationEnabledTime;	// 48 = 0x30
    HMDHAPAccessory *_accessory;	// 56 = 0x38
    HMDService *_service;	// 64 = 0x40
    NSNumber *_stateNumber;	// 72 = 0x48
    id _previousValue;	// 80 = 0x50
    NSData *_authorizationData;	// 88 = 0x58
    NSString *_characteristicType;	// 96 = 0x60
    id _lastKnownValue;	// 104 = 0x68
    NSDate *_lastKnownValueUpdateTime;	// 112 = 0x70
    NSNumber *_characteristicInstanceID;	// 120 = 0x78
    long long _characteristicProperties;	// 128 = 0x80
    NSData *_notificationContext;	// 136 = 0x88
}

+ (id)currentTargetStateCharacteristicTypeMap;	// IMP=0x00000000005605dc
+ (id)logCategory;	// IMP=0x00000000005605ac
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000005605a4
+ (_Bool)value:(id)arg1 differentThan:(id)arg2;	// IMP=0x0000000000560591
+ (CDUnknownBlockType)sortComparatorForCharacteristicDictionary;	// IMP=0x0000000000560584
- (void).cxx_destruct;	// IMP=0x000000000056003d
@property(retain, nonatomic) NSData *notificationContext; // @synthesize notificationContext=_notificationContext;
@property(nonatomic) long long characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(retain, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(retain, nonatomic) NSDate *lastKnownValueUpdateTime; // @synthesize lastKnownValueUpdateTime=_lastKnownValueUpdateTime;
@property(retain, nonatomic) id lastKnownValue; // @synthesize lastKnownValue=_lastKnownValue;
@property(retain, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(nonatomic) _Bool broadcastNotificationEnabled; // @synthesize broadcastNotificationEnabled=_broadcastNotificationEnabled;
@property(copy, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property(retain, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(copy, nonatomic, setter=setStateNumber:) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(readonly, nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
- (id)attributeDescriptions;	// IMP=0x000000000055f945
- (id)logIdentifier;	// IMP=0x000000000055f840
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000055ef3b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000055e98c
- (id)contextDataForWriteRequestWithIdentifier:(id)arg1;	// IMP=0x000000000055e6ea
@property(readonly) _Bool supportsNotificationContext;
@property(readonly) _Bool shouldIgnoreCacheValueForRead;
- (void)updateService:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000055e203
- (_Bool)deregisterNotificationForClientIdentifier:(id)arg1;	// IMP=0x000000000055e1a6
- (_Bool)deregisterNotificationIfNotLastForClientIdentifier:(id)arg1;	// IMP=0x000000000055e18c
- (void)setNotificationEnabled:(_Bool)arg1 forClientIdentifier:(id)arg2;	// IMP=0x000000000055e174
- (_Bool)setNotificationEnabled:(_Bool)arg1 forClientIdentifier:(id)arg2 removeLast:(_Bool)arg3;	// IMP=0x000000000055de49
@property(retain, nonatomic) NSDate *notificationEnabledTime; // @synthesize notificationEnabledTime=_notificationEnabledTime;
- (_Bool)isNotificationEnabledForClientIdentifierPrefix:(id)arg1;	// IMP=0x000000000055db77
- (_Bool)isNotificationEnabledForClientIdentifier:(id)arg1;	// IMP=0x000000000055daf8
- (_Bool)isNonClientNotificationEnabled;	// IMP=0x000000000055d9ae
- (_Bool)isNonHomeNotificationsEnabled;	// IMP=0x000000000055d81f
- (_Bool)isClientNotificationEnabled;	// IMP=0x000000000055d6d5
- (_Bool)isNotificationEnabled;	// IMP=0x000000000055d68d
- (_Bool)supportsWrite;	// IMP=0x000000000055d678
- (_Bool)supportsRead;	// IMP=0x000000000055d664
- (_Bool)supportsNotification;	// IMP=0x000000000055d652
- (id)validateValue:(id)arg1 outValue:(id *)arg2;	// IMP=0x000000000055d52d
- (id)validateValueForNotify:(id)arg1 outValue:(id *)arg2;	// IMP=0x000000000055d49e
- (id)validateValueForWrite:(id)arg1 outValue:(id *)arg2;	// IMP=0x000000000055d40f
- (_Bool)isValueUpdatedFromHAPCharacteristic:(id)arg1;	// IMP=0x000000000055d0a7
- (void)updateLastKnownValue;	// IMP=0x000000000055cce6
- (void)updateValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 notificationContext:(id)arg4;	// IMP=0x000000000055c6e7
@property(readonly, copy, nonatomic) id value;
@property(readonly, nonatomic) long long properties;
- (id)characteristicForHAPAccessory:(id)arg1;	// IMP=0x000000000055c1cb
@property(readonly, copy, nonatomic) NSNumber *instanceID;
@property(readonly, copy, nonatomic) NSString *type;
- (void)unconfigureForServerIdentifier:(id)arg1 linkType:(long long)arg2;	// IMP=0x000000000055c052
- (void)unconfigure;	// IMP=0x000000000055bf4c
- (void)configureWithCharacteristic:(id)arg1;	// IMP=0x000000000055bc5c
- (id)getCharacteristicDictionary;	// IMP=0x000000000055bb16
- (_Bool)updateWithDictionary:(id)arg1;	// IMP=0x000000000055b9e9
- (id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(long long)arg2;	// IMP=0x000000000055b7ed
@property(readonly, nonatomic) NSString *serializedIdentifier;
- (id)dumpState;	// IMP=0x000000000055b08f
@property(readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
- (id)characteristicTypeDescription;	// IMP=0x000000000055aef1
@property(readonly, copy, nonatomic) NSSet *notificationRegistrations;
- (id)shortTypeDescription;	// IMP=0x000000000055add2
- (id)shortDescription;	// IMP=0x000000000055ad15
@property(readonly, nonatomic) HMDCharacteristicMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSSet *hapCharacteristicTuples; // @synthesize hapCharacteristicTuples=_hapCharacteristicTuples;
@property(nonatomic) _Bool notificationRegisteredWithRemoteGateway; // @synthesize notificationRegisteredWithRemoteGateway=_notificationRegisteredWithRemoteGateway;
- (id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;	// IMP=0x000000000055a6fc
- (id)init;	// IMP=0x000000000055a5b6
@property(readonly, nonatomic) NSDictionary *bulletinContext;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
