//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REEngineLocationManagerObserver-Protocol.h>
#import <RelevanceEngine/RELocationPredictorProperties-Protocol.h>

@class NSDictionary, NSLock, NSMapTable, NSMutableDictionary, NSString, RTRoutineManager;

@interface RELocationPredictor <REEngineLocationManagerObserver, RELocationPredictorProperties>
{
    RTRoutineManager *_manager;	// 8 = 0x8
    NSMapTable *_routineData;	// 16 = 0x10
    NSMutableDictionary *_overrideRoutineType;	// 24 = 0x18
    NSLock *_routineDataLock;	// 32 = 0x20
}

+ (id)supportedFeatures;	// IMP=0x00000000000d90d1
+ (double)updateInterval;	// IMP=0x00000000000d90c3
- (void).cxx_destruct;	// IMP=0x00000000000db0ea
@property(readonly, nonatomic) NSDictionary *routineDataByEngine;
- (void)locationManagerDidUpdateLocation:(id)arg1;	// IMP=0x00000000000dae55
- (void)_setOverrideLocation:(long long)arg1 forEngine:(id)arg2;	// IMP=0x00000000000dad1b
- (id)predictedLocationNameForEngine:(id)arg1;	// IMP=0x00000000000dac27
- (id)predictedLocationIdentifierForEngine:(id)arg1;	// IMP=0x00000000000dab10
- (id)_routineDataForEngine:(id)arg1;	// IMP=0x00000000000daa7a
- (id)locationForEngine:(id)arg1 userLocation:(long long)arg2;	// IMP=0x00000000000da7f5
- (void)removeRelevanceEngine:(id)arg1;	// IMP=0x00000000000da66c
- (void)addRelevanceEngine:(id)arg1;	// IMP=0x00000000000da5c7
- (void)update;	// IMP=0x00000000000d9958
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;	// IMP=0x00000000000d93a0
- (id)_init;	// IMP=0x00000000000d91ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
