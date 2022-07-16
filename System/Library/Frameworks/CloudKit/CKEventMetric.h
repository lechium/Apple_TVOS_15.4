//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableDictionary, NSString, NSUUID;

@interface CKEventMetric : NSObject <NSSecureCoding>
{
    _Bool _isPushTriggerFired;	// 8 = 0x8
    _Bool _hasBeenSubmitted;	// 9 = 0x9
    _Bool _inferredAllowsCellular;	// 10 = 0xa
    _Bool _inferredAllowsExpensive;	// 11 = 0xb
    _Bool _inferredPreferAnonymousRequests;	// 12 = 0xc
    _Bool _isCKInternalMetric;	// 13 = 0xd
    NSString *_eventName;	// 16 = 0x10
    NSDate *_startTime;	// 24 = 0x18
    NSDate *_endTime;	// 32 = 0x20
    NSMutableDictionary *_attributes;	// 40 = 0x28
    NSUUID *_metricUUID;	// 48 = 0x30
    long long _inferredDatabaseScope;	// 56 = 0x38
    NSString *_inferredDeviceIdentifier;	// 64 = 0x40
    NSString *_inferredSourceApplicationBundleIdentifier;	// 72 = 0x48
    NSString *_inferredApplicationBundleIdentifierOverrideForContainerAccess;	// 80 = 0x50
    NSString *_inferredApplicationBundleIdentifierOverrideForNetworkAttribution;	// 88 = 0x58
    NSString *_inferredSourceApplicationSecondaryIdentifier;	// 96 = 0x60
    NSMutableDictionary *_associatedOperations;	// 104 = 0x68
    NSMutableDictionary *_associatedOperationGroups;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017a1d5
- (void).cxx_destruct;	// IMP=0x000000000017a8c0
@property(readonly, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) _Bool isPushTriggerFired; // @synthesize isPushTriggerFired=_isPushTriggerFired;
@property(copy) NSDate *endTime; // @synthesize endTime=_endTime;
@property(copy) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017a3a9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017a1dd
- (id)generateEventMetricInfo;	// IMP=0x000000000017a08d
- (void)setMetricValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000017a07b
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000000179fa6
- (_Bool)associateWithCompletedOperation:(id)arg1;	// IMP=0x00000000001798a8
- (id)initWithEventName:(id)arg1 atTime:(id)arg2;	// IMP=0x0000000000179734
- (id)initWithEventName:(id)arg1;	// IMP=0x00000000001796b3

@end

