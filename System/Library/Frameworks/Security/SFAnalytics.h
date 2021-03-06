//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Security/SFAnalyticsProtocol-Protocol.h>

@class NSMutableDictionary, NSString, SFAnalyticsSQLiteStore;
@protocol OS_dispatch_queue;

@interface SFAnalytics : NSObject <SFAnalyticsProtocol>
{
    SFAnalyticsSQLiteStore *_database;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_samplers;	// 24 = 0x18
    NSMutableDictionary *_multisamplers;	// 32 = 0x20
    unsigned int _disableLogging:1;	// 40 = 0x28
}

+ (void)addOSVersionToEvent:(id)arg1;	// IMP=0x000000000001e7f1
+ (id)hwModelID;	// IMP=0x000000000001e7c1
+ (id)fuzzyNumber:(id)arg1;	// IMP=0x000000000001e76d
+ (long long)fuzzyInteger:(long long)arg1;	// IMP=0x000000000001e70b
+ (long long)fuzzyDaysSinceDate:(id)arg1;	// IMP=0x000000000001e5e0
+ (id)defaultProtectedAnalyticsDatabasePath:(id)arg1;	// IMP=0x000000000001e5c5
+ (id)defaultProtectedAnalyticsDatabasePath:(id)arg1 uuid:(id)arg2;	// IMP=0x000000000001e444
+ (id)defaultAnalyticsDatabasePath:(id)arg1;	// IMP=0x000000000001e381
+ (id)databasePath;	// IMP=0x000000000001e379
+ (id)logger;	// IMP=0x000000000001e25b
- (void).cxx_destruct;	// IMP=0x000000000001d103
- (void)drainLogQueue;	// IMP=0x000000000001d0ee
- (void)logMetric:(id)arg1 withName:(id)arg2 oncePerReport:(_Bool)arg3;	// IMP=0x000000000001cf5d
- (void)logMetric:(id)arg1 withName:(id)arg2;	// IMP=0x000000000001cf48
- (id)startLogSystemMetricsForActivityNamed:(id)arg1;	// IMP=0x000000000001ce5e
- (id)logSystemMetricsForActivityNamed:(id)arg1 withAction:(CDUnknownBlockType)arg2;	// IMP=0x000000000001cd4d
- (void)removeMultiSamplerForName:(id)arg1;	// IMP=0x000000000001cc25
- (void)removeMetricSamplerForName:(id)arg1;	// IMP=0x000000000001cafd
- (id)existingMultiSamplerForName:(id)arg1;	// IMP=0x000000000001c9c5
- (id)existingMetricSamplerForName:(id)arg1;	// IMP=0x000000000001c88d
- (id)AddMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000001c5a2
- (id)addMetricSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000001c2b7
- (id)eventDictForEventName:(id)arg1 withAttributes:(id)arg2 eventClass:(long long)arg3 timestampBucket:(double)arg4;	// IMP=0x000000000001c135
- (void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3;	// IMP=0x000000000001c120
- (void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3 timestampBucket:(unsigned int)arg4;	// IMP=0x000000000001bf9a
- (void)noteEventNamed:(id)arg1;	// IMP=0x000000000001bf86
- (void)noteEventNamed:(id)arg1 timestampBucket:(unsigned int)arg2;	// IMP=0x000000000001bf69
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3 withAttributes:(id)arg4;	// IMP=0x000000000001bf47
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3 withAttributes:(id)arg4 timestampBucket:(unsigned int)arg5;	// IMP=0x000000000001bbea
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3;	// IMP=0x000000000001bbd5
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3 timestampBucket:(unsigned int)arg4;	// IMP=0x000000000001bbb0
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;	// IMP=0x000000000001bb9b
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 timestampBucket:(unsigned int)arg3;	// IMP=0x000000000001bb7e
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;	// IMP=0x000000000001bb69
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 timestampBucket:(unsigned int)arg3;	// IMP=0x000000000001bb4c
- (void)logSuccessForEventNamed:(id)arg1;	// IMP=0x000000000001bb38
- (void)logSuccessForEventNamed:(id)arg1 timestampBucket:(unsigned int)arg2;	// IMP=0x000000000001bb1e
- (void)dailyCoreAnalyticsMetrics:(id)arg1;	// IMP=0x000000000001b8b1
- (id)coreAnalyticsKeyFilter:(id)arg1;	// IMP=0x000000000001b7f6
- (id)init;	// IMP=0x000000000001b72a
- (id)numberPropertyForKey:(id)arg1;	// IMP=0x000000000001b5f2
- (void)setNumberProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001b4f9
- (void)incrementIntegerPropertyForKey:(id)arg1;	// IMP=0x000000000001b42d
- (id)datePropertyForKey:(id)arg1;	// IMP=0x000000000001b2f5
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001b1fc
- (void)removeState;	// IMP=0x000000000001b14a
- (id)database;	// IMP=0x000000000001b002

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

