//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REPredictorProperties-Protocol.h>

@class NSCountedSet, NSObject, REObserverStore, REUpNextScheduler;
@protocol OS_dispatch_queue;

@interface REPredictor <REPredictorProperties>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    REObserverStore *_engines;	// 16 = 0x10
    REUpNextScheduler *_refreshScheduler;	// 24 = 0x18
    NSCountedSet *_activities;	// 32 = 0x20
    struct os_unfair_lock_s _predictorLock;	// 40 = 0x28
    _Bool __isRunning;	// 44 = 0x2c
    long long _beginUpdatesCount;	// 48 = 0x30
}

+ (id)supportedFeatures;	// IMP=0x000000000008a7ff
+ (double)updateInterval;	// IMP=0x000000000008a7f1
+ (id)systemPredictorsSupportingFeatureSet:(id)arg1 relevanceEngine:(id)arg2;	// IMP=0x0000000000089859
+ (id)availablePredictors;	// IMP=0x000000000008971b
- (void).cxx_destruct;	// IMP=0x000000000008a8e0
@property(nonatomic) long long beginUpdatesCount; // @synthesize beginUpdatesCount=_beginUpdatesCount;
@property(setter=_setIsRunning:) _Bool _isRunning; // @synthesize _isRunning=__isRunning;
@property(readonly, nonatomic) _Bool running;
- (void)_performUpdate;	// IMP=0x000000000008a84f
- (void)invalidate;	// IMP=0x000000000008a832
- (void)update;	// IMP=0x000000000008a82c
- (void)resume;	// IMP=0x000000000008a826
- (void)pause;	// IMP=0x000000000008a820
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;	// IMP=0x000000000008a818
- (void)finishFetchingData;	// IMP=0x000000000008a7d5
- (void)beginFetchingData;	// IMP=0x000000000008a7b9
- (void)enumerateInflectionFeatureValues:(CDUnknownBlockType)arg1;	// IMP=0x000000000008a3ac
- (id)engines;	// IMP=0x000000000008a38f
- (void)removeRelevanceEngine:(id)arg1;	// IMP=0x000000000008a372
- (void)addRelevanceEngine:(id)arg1;	// IMP=0x000000000008a355
- (_Bool)isRunning;	// IMP=0x000000000008a343
- (void)_setRunning:(_Bool)arg1;	// IMP=0x000000000008a296
- (void)endUpdates;	// IMP=0x000000000008a21d
- (void)beginUpdates;	// IMP=0x000000000008a1a2
- (void)updateObservers;	// IMP=0x000000000008a104
- (void)onQueueSync:(CDUnknownBlockType)arg1;	// IMP=0x000000000008a0e6
- (void)onQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000008a0c8
- (id)queue;	// IMP=0x000000000008a0b3
- (id)description;	// IMP=0x000000000008a0a9
- (void)dealloc;	// IMP=0x000000000008a00e
- (id)_init;	// IMP=0x0000000000089b68
@property(readonly, nonatomic) NSCountedSet *outstandingActivities;
- (void)finishActivity:(id)arg1;	// IMP=0x000000000008aa57
- (void)beginActivity:(id)arg1;	// IMP=0x000000000008a933

@end

