//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RERelevanceProviderManagerProperties-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSString, REFeatureSet, REPriorityQueue, RERelevanceProviderEnvironment, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface RERelevanceProviderManager : NSObject <RERelevanceProviderManagerProperties>
{
    RERelevanceProviderEnvironment *_environment;	// 8 = 0x8
    NSHashTable *_providers;	// 16 = 0x10
    REPriorityQueue *_scheduledUpdates;	// 24 = 0x18
    REUpNextTimer *_updateTimer;	// 32 = 0x20
    NSArray *_effectiveFeatures;	// 40 = 0x28
    NSDictionary *_inflectionValues;	// 48 = 0x30
    _Bool _dataStoresOpened;	// 56 = 0x38
    _Bool _hasSeperateRelevanceQueue;	// 57 = 0x39
    _Bool _implementsPrepareForUpdate;	// 58 = 0x3a
    NSObject<OS_dispatch_queue> *_relevanceQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_accessQueue;	// 72 = 0x48
    NSString *_loggingHeader;	// 80 = 0x50
    REFeatureSet *_supportedFeatures;	// 88 = 0x58
}

+ (_Bool)supportsHistoricProviders;	// IMP=0x0000000000086b7b
+ (_Bool)_supportsHistoricProviders;	// IMP=0x0000000000085e06
+ (_Bool)_wantsSeperateRelevanceQueue;	// IMP=0x0000000000085af7
+ (_Bool)_requiresLocationServices;	// IMP=0x0000000000085aef
+ (_Bool)_wantsDelayedUpdate;	// IMP=0x0000000000085ae7
+ (id)_dependencyClasses;	// IMP=0x0000000000085ace
+ (id)_features;	// IMP=0x00000000000f0ab1
+ (Class)_relevanceProviderClass;	// IMP=0x00000000000f0a7a
+ (id)providerManagerClasses;	// IMP=0x00000000000854f7
+ (void)setProviderManagerClassesLoadingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000854ce
- (void).cxx_destruct;	// IMP=0x0000000000088777
@property(retain, nonatomic) REFeatureSet *supportedFeatures; // @synthesize supportedFeatures=_supportedFeatures;
- (void)_loadLoggingHeader;	// IMP=0x0000000000088625
- (void)_accessQueue_scheduleUpdate:(id)arg1;	// IMP=0x0000000000088548
- (void)_accessQueue_resetTimer;	// IMP=0x000000000008850d
- (void)_accessQueue_performUpdate:(id)arg1;	// IMP=0x0000000000088419
- (void)_accessQueue_performPendingUpdatesAndScheduleTimerIfNeeded;	// IMP=0x000000000008819e
- (void)_accessQueue_performImmediateUpdate:(id)arg1;	// IMP=0x0000000000088140
- (void)_accessQueue_appendCompletionHandlerForScheduledUpdate:(id)arg1;	// IMP=0x0000000000087e8b
- (void)_relevanceQueue_openDataStores;	// IMP=0x0000000000087d61
@property(readonly, nonatomic) unsigned long long scheduledUpdatesCount;
@property(readonly, nonatomic) _Bool dataSourcesOpened;
@property(readonly, nonatomic) NSArray *allRelevanceProviders;
- (id)description;	// IMP=0x0000000000087d22
- (void)_prepareForUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000087c5a
- (void)_removeAllPendingUpdates;	// IMP=0x0000000000087bf5
- (void)_scheduleUpdate:(id)arg1;	// IMP=0x0000000000087b4d
- (void)_handleSignificantTimeChange;	// IMP=0x0000000000087aec
- (void)pauseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000087914
- (void)resumeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000087703
- (void)finishFetchingData;	// IMP=0x00000000000876e7
- (void)beginFetchingData;	// IMP=0x00000000000876cb
- (void)_enumerateProviders:(CDUnknownBlockType)arg1;	// IMP=0x000000000008752e
- (void)_prepareForUpdate;	// IMP=0x0000000000087528
- (void)_removeProvider:(id)arg1;	// IMP=0x0000000000087522
- (void)_addedProvider:(id)arg1;	// IMP=0x000000000008751c
- (id)_manager_queue;	// IMP=0x000000000008750e
- (_Bool)_dataSourcesOpened;	// IMP=0x0000000000087505
- (void)_closeDataStoresAndObserveChanges;	// IMP=0x00000000000874ff
- (void)_openDataStoresAndObserveChanges;	// IMP=0x00000000000874f9
- (void)resume;	// IMP=0x00000000000874e7
- (void)pause;	// IMP=0x00000000000874d5
- (unsigned long long)hash;	// IMP=0x00000000000874cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000874c0
- (_Bool)_isValidProvider:(id)arg1;	// IMP=0x0000000000087469
- (void)enumerateInflectionFeatureValues:(CDUnknownBlockType)arg1;	// IMP=0x00000000000871eb
- (void)endActivity:(id)arg1;	// IMP=0x000000000008718f
- (void)beginActivity:(id)arg1;	// IMP=0x0000000000087133
@property(nonatomic) __weak RERelevanceProviderEnvironment *environment;
- (void)relevanceForHistoricProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000086d41
- (void)isProviderHistoric:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000086b8d
@property(readonly, nonatomic) NSArray *allProviders;
- (id)relevanceForProvider:(id)arg1 context:(id)arg2;	// IMP=0x00000000000868f1
- (void)relevanceForProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000086709
- (_Bool)containsProvider:(id)arg1;	// IMP=0x00000000000866b8
- (void)removeProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000086507
- (void)addProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000862f4
@property(readonly, nonatomic) NSArray *effectiveFeatures;
- (id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2;	// IMP=0x0000000000085e1f
- (float)_relevanceForHistoricProvider:(id)arg1;	// IMP=0x0000000000085e16
- (_Bool)_isHistoricProvider:(id)arg1;	// IMP=0x0000000000085e0e
- (id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3;	// IMP=0x0000000000085b53
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;	// IMP=0x0000000000085b3e
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;	// IMP=0x0000000000085b08
- (float)_relevanceForProvider:(id)arg1;	// IMP=0x0000000000085aff
- (void)dealloc;	// IMP=0x0000000000085a1f
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000085712

@end

