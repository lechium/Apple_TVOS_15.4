//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REElementRelevanceProviderGenerator-Protocol.h>
#import <RelevanceEngine/RERelevanceProviderEnvironmentProperties-Protocol.h>

@class NSDictionary, NSHashTable, NSLock, NSMapTable, NSMutableArray, NSMutableSet, REDependencyGraph, REFeatureSet, REUpNextDisjointSet, REUpNextScheduler;
@protocol RERelevanceProviderEnvironmentDelegate;

@interface RERelevanceProviderEnvironment <RERelevanceProviderEnvironmentProperties, REElementRelevanceProviderGenerator>
{
    NSMutableArray *_relevanceManagers;	// 8 = 0x8
    NSMapTable *_relevanceClassManagerMap;	// 16 = 0x10
    NSMapTable *_relevanceHistogramMap;	// 24 = 0x18
    REUpNextDisjointSet *_relevanceProviderSet;	// 32 = 0x20
    REDependencyGraph *_dependencyGraph;	// 40 = 0x28
    NSMapTable *_relevanceValues;	// 48 = 0x30
    NSHashTable *_customProviders;	// 56 = 0x38
    NSLock *_relevanceValuesLock;	// 64 = 0x40
    REFeatureSet *_supportedFeatures;	// 72 = 0x48
    REUpNextScheduler *_scheduler;	// 80 = 0x50
    NSHashTable *_providersToUpdate;	// 88 = 0x58
    NSMutableSet *_providerManagersToUpdate;	// 96 = 0x60
    NSMutableArray *_updateCompletionBlocks;	// 104 = 0x68
    _Bool _allowsLocationUse;	// 112 = 0x70
    id <RERelevanceProviderEnvironmentDelegate> _delegate;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000849f7
@property(nonatomic) _Bool allowsLocationUse; // @synthesize allowsLocationUse=_allowsLocationUse;
@property(nonatomic) __weak id <RERelevanceProviderEnvironmentDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *allProviderValues;
@property(readonly, nonatomic) REFeatureSet *supportedFeatures;
- (id)createRelevaneProviderWithType:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000000000846bd
- (id)encodeRelevaneProvider:(id)arg1;	// IMP=0x0000000000084494
- (id)_relevaneProviderWithType:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000000000840e0
- (id)featuresForRelevanceProvider:(id)arg1;	// IMP=0x0000000000083f7e
- (void)_scaleRelevanceProviderValues:(id)arg1 values:(id)arg2;	// IMP=0x0000000000083b98
- (id)relevancesForRelevanceProvider:(id)arg1;	// IMP=0x0000000000083a51
- (id)relevancesForRelevanceProvider:(id)arg1 usingContext:(id)arg2;	// IMP=0x00000000000838b3
- (_Bool)isRelevanceProviderHistoric:(id)arg1;	// IMP=0x00000000000837f8
- (void)relateRelevanceProvider:(id)arg1 toRelevanceProvider:(id)arg2;	// IMP=0x00000000000837cf
- (_Bool)isRelevanceProviderLoaded:(id)arg1;	// IMP=0x0000000000083707
- (_Bool)containsRelevanceProvider:(id)arg1;	// IMP=0x00000000000836c5
- (void)removeRelevanceProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008356d
- (void)addRelevanceProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000083412
@property(readonly, nonatomic) unsigned long long relevanceProviderCount;
- (id)_histogramForFeature:(id)arg1;	// IMP=0x0000000000083354
- (id)_histogramForProvider:(id)arg1;	// IMP=0x0000000000083227
- (id)_providerManagerForProvider:(id)arg1;	// IMP=0x00000000000831f5
- (void)_addRelevanceValue:(id)arg1 forProvider:(id)arg2;	// IMP=0x0000000000083100
- (void)_removeRelevanceValueForProvider:(id)arg1;	// IMP=0x0000000000082ff2
- (void)_queue_performUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000814c2
- (void)_setupRelevanceProviderManagers;	// IMP=0x0000000000080c8c
- (void)resume;	// IMP=0x0000000000080791
- (void)pause;	// IMP=0x0000000000080654
- (void)dealloc;	// IMP=0x00000000000803de
- (id)initWithRelevanceEngine:(id)arg1;	// IMP=0x000000000007feec
- (void)accessHistogramForFeature:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000084caf
- (void)scheduleUpdateForRelevanceProviderManager:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000084c05
- (void)scheduleUpdateForRelevanceProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000084b5b
- (void)immediateUpdateForRelevanceProviderManager:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000084af2
- (_Bool)isSupportedRelevanceProvider:(id)arg1;	// IMP=0x0000000000084d6b
- (id)currentRelevanceProvidersState;	// IMP=0x0000000000084e34

@end
