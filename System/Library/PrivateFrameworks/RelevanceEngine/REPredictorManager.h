//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSArray, NSDictionary, NSString, REObserverStore, RERelevanceEngine;

@interface REPredictorManager : NSObject <REPredictorObserver>
{
    NSArray *_predictors;	// 8 = 0x8
    NSDictionary *_predictorsMap;	// 16 = 0x10
    REObserverStore *_observer;	// 24 = 0x18
    RERelevanceEngine *_engine;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006f236
- (void)predictor:(id)arg1 didFinishActivity:(id)arg2;	// IMP=0x000000000006f125
- (void)predictor:(id)arg1 didBeginActivity:(id)arg2;	// IMP=0x000000000006f014
- (void)predictorDidUpdate:(id)arg1;	// IMP=0x000000000006ef30
- (void)enumeratePredictors:(CDUnknownBlockType)arg1;	// IMP=0x000000000006ee01
- (void)removeObserver:(id)arg1;	// IMP=0x000000000006edeb
- (void)addObserver:(id)arg1;	// IMP=0x000000000006edd5
- (void)pause;	// IMP=0x000000000006ebc7
- (void)resume;	// IMP=0x000000000006e9b9
- (void)enumerateValuesForElement:(id)arg1 trainingContext:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000006e60e
- (void)dealloc;	// IMP=0x000000000006e3ce
- (id)initWithPredictors:(id)arg1 featureSet:(id)arg2 relevanceEngine:(id)arg3;	// IMP=0x000000000006ddcf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

