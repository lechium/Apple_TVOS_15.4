//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/TPSSerializableObject.h>

@class NSArray, NSString, TPSContextualCondition, TPSMonitoringEvents;

@interface TPSContextualInfo : TPSSerializableObject
{
    int _priority;	// 8 = 0x8
    long long _customizationID;	// 16 = 0x10
    long long _displayMaxCount;	// 24 = 0x18
    long long _lastModifiedDate;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSArray *_displayBundleIDs;	// 48 = 0x30
    NSArray *_eligibleContext;	// 56 = 0x38
    TPSMonitoringEvents *_monitoringEvents;	// 64 = 0x40
    NSArray *_usageEvents;	// 72 = 0x48
    TPSContextualCondition *_triggerCondition;	// 80 = 0x50
    TPSContextualCondition *_desiredOutcomeCondition;	// 88 = 0x58
}

+ (void)eventsInfoArrayForContextualInfoDictionary:(id)arg1 triggerEvents:(id *)arg2 desiredOutcomeEvents:(id *)arg3;	// IMP=0x000000000001b3eb
+ (id)identifierFromDictionary:(id)arg1;	// IMP=0x000000000001b3cf
+ (id)contentDictionaryWithTipDeliveryInfoId:(id)arg1 deliveryInfoMap:(id)arg2;	// IMP=0x000000000001b0d8
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001b0d0
- (void).cxx_destruct;	// IMP=0x000000000001c639
@property(copy, nonatomic) TPSContextualCondition *desiredOutcomeCondition; // @synthesize desiredOutcomeCondition=_desiredOutcomeCondition;
@property(copy, nonatomic) TPSContextualCondition *triggerCondition; // @synthesize triggerCondition=_triggerCondition;
@property(copy, nonatomic) NSArray *usageEvents; // @synthesize usageEvents=_usageEvents;
@property(copy, nonatomic) TPSMonitoringEvents *monitoringEvents; // @synthesize monitoringEvents=_monitoringEvents;
@property(copy, nonatomic) NSArray *eligibleContext; // @synthesize eligibleContext=_eligibleContext;
@property(copy, nonatomic) NSArray *displayBundleIDs; // @synthesize displayBundleIDs=_displayBundleIDs;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(nonatomic) long long displayMaxCount; // @synthesize displayMaxCount=_displayMaxCount;
@property(nonatomic) long long customizationID; // @synthesize customizationID=_customizationID;
@property(readonly, nonatomic) int priority; // @synthesize priority=_priority;
- (id)debugDescription;	// IMP=0x000000000001c205
- (void)restartDesiredOutcomeTracking;	// IMP=0x000000000001c1e8
- (void)restartTriggerTracking;	// IMP=0x000000000001c1cb
- (id)conditionForType:(unsigned long long)arg1;	// IMP=0x000000000001c1a4
- (long long)_lastModifiedDateFromDictionary:(id)arg1;	// IMP=0x000000000001c188
- (_Bool)hasChangesFromDictionary:(id)arg1;	// IMP=0x000000000001c15d
- (id)desiredOutcomeEventIdentifiers;	// IMP=0x000000000001c140
- (id)triggerEventIdentifiers;	// IMP=0x000000000001c123
- (id)displayBundleID;	// IMP=0x000000000001c106
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001bfd0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001be1b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001bac2
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001b4d9

@end
