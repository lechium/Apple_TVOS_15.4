//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKTaskServerProxyProvider, HKWorkoutConfiguration, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HKLiveWorkoutDataSource : NSObject <_HKXPCExportable>
{
    HKWorkoutConfiguration *_workoutConfiguration;	// 8 = 0x8
    HKTaskServerProxyProvider *_proxyProvider;	// 16 = 0x10
    HKHealthStore *_healthStore;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSMutableSet *_mutableSampleTypesToCollect;	// 40 = 0x28
    NSMutableDictionary *_mutableFiltersBySampleType;	// 48 = 0x30
    NSUUID *_identifier;	// 56 = 0x38
}

+ (id)serverInterface;	// IMP=0x000000000010fe39
+ (id)clientInterface;	// IMP=0x000000000010fe19
+ (id)defaultConfigurationWithWorkoutConfiguration:(id)arg1 activityMoveMode:(long long)arg2;	// IMP=0x000000000010f95e
- (void).cxx_destruct;	// IMP=0x000000000011038e
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableDictionary *mutableFiltersBySampleType; // @synthesize mutableFiltersBySampleType=_mutableFiltersBySampleType;
@property(retain, nonatomic) NSMutableSet *mutableSampleTypesToCollect; // @synthesize mutableSampleTypesToCollect=_mutableSampleTypesToCollect;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
- (void)_queue_finishSetup;	// IMP=0x00000000001100b1
- (void)connectionInterrupted;	// IMP=0x000000000010ff19
- (void)connectionInvalidated;	// IMP=0x000000000010ff07
- (id)remoteInterface;	// IMP=0x000000000010feee
- (id)exportedInterface;	// IMP=0x000000000010fed5
- (void)workoutBuilderDidFinish;	// IMP=0x000000000010fdb3
- (id)_queue_dataSourceConfiguration;	// IMP=0x000000000010fd1e
- (void)disableCollectionForType:(id)arg1;	// IMP=0x000000000010f75f
- (void)enableCollectionForType:(id)arg1 predicate:(id)arg2;	// IMP=0x000000000010f4ca
@property(readonly, copy) NSSet *typesToCollect;
- (id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2;	// IMP=0x000000000010f203

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

