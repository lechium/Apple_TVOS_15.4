//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REElementRelevanceEngineProperties-Protocol.h>
#import <RelevanceEngine/REFeatureTransformerInvalidationDelegate-Protocol.h>
#import <RelevanceEngine/REMLModelManagerDataStore-Protocol.h>
#import <RelevanceEngine/REMLModelManagerObserver-Protocol.h>
#import <RelevanceEngine/REPredictorObserver-Protocol.h>
#import <RelevanceEngine/RERelevanceProviderEnvironmentDelegate-Protocol.h>
#import <RelevanceEngine/RESectionDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject, NSString, REDataSourceManager, REFeatureSet, REFeatureTransmuter, REKeyMultiValueMap, REPredictorManager, RERelevanceProviderEnvironment, REUpNextScheduler;
@protocol OS_dispatch_queue, REElementRelevanceEngineDelegate;

@interface REElementRelevanceEngine <RESectionDelegate, RERelevanceProviderEnvironmentDelegate, REMLModelManagerObserver, REPredictorObserver, REElementRelevanceEngineProperties, REFeatureTransformerInvalidationDelegate, REMLModelManagerDataStore>
{
    NSMutableSet *_elementsNeedingRelevanceUpdate;	// 8 = 0x8
    NSMutableDictionary *_sections;	// 16 = 0x10
    NSMutableDictionary *_predictedElements;	// 24 = 0x18
    NSMapTable *_relevanceProviderElementMap;	// 32 = 0x20
    REKeyMultiValueMap *_identifierElementIdentifierMap;	// 40 = 0x28
    REFeatureSet *_persistenceFeatures;	// 48 = 0x30
    REPredictorManager *_predictorManager;	// 56 = 0x38
    RERelevanceProviderEnvironment *_providerEnvironment;	// 64 = 0x40
    REDataSourceManager *_dataSourceManager;	// 72 = 0x48
    REFeatureTransmuter *_featureTransmuter;	// 80 = 0x50
    REUpNextScheduler *_scheduler;	// 88 = 0x58
    REUpNextScheduler *_predictorUpdatedScheduler;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
    _Bool _deviceIsLocked;	// 112 = 0x70
    _Bool _ignoreDeviceLockState;	// 113 = 0x71
    id <REElementRelevanceEngineDelegate> _delegate;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000136cf
@property(nonatomic) __weak id <REElementRelevanceEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) RERelevanceProviderEnvironment *providerEnvironment;
@property(readonly, nonatomic) REPredictorManager *predictorManager;
@property(readonly, nonatomic) NSDictionary *sectionsMap;
- (id)elementRankerForSection:(id)arg1;	// IMP=0x0000000000013534
- (id)predictionForElement:(id)arg1;	// IMP=0x0000000000013416
- (id)featureProviderForElement:(id)arg1;	// IMP=0x00000000000133bf
- (id)_generateFeatureMapForElement:(id)arg1;	// IMP=0x00000000000132c0
- (id)featureMapForElement:(id)arg1 trainingContext:(id)arg2;	// IMP=0x0000000000013236
- (id)_queue_featureMapForElement:(id)arg1 trainingContext:(id)arg2;	// IMP=0x0000000000012d00
- (id)_queue_featureMapForElementWithId:(id)arg1 trainingContext:(id)arg2;	// IMP=0x0000000000012c6a
- (id)section:(id)arg1 groupForIdentifier:(id)arg2;	// IMP=0x0000000000012996
- (void)sectionDidUpdateContentOrder:(id)arg1;	// IMP=0x000000000001292f
- (void)_onqueue_async:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012917
- (id)_allCurrentElements;	// IMP=0x0000000000012702
- (void)_performUpdatesToDelegate:(CDUnknownBlockType)arg1;	// IMP=0x000000000001218c
- (void)_queue_updateElementRelevance;	// IMP=0x0000000000010aba
- (void)_queue_scheduleRelevanceUpdateForElement:(id)arg1;	// IMP=0x0000000000010a07
- (_Bool)_elementIsFullyLoaded:(id)arg1;	// IMP=0x0000000000010893
- (void)relevanceEnvironment:(id)arg1 didUpdateRelevanceProvider:(id)arg2;	// IMP=0x00000000000107cf
- (void)featureTransformerDidInvalidate:(id)arg1;	// IMP=0x00000000000107bb
- (void)predictorDidUpdate:(id)arg1;	// IMP=0x00000000000106f2
- (void)predictor:(id)arg1 didFinishActivity:(id)arg2;	// IMP=0x00000000000105f5
- (void)predictor:(id)arg1 didBeginActivity:(id)arg2;	// IMP=0x00000000000105da
- (void)_updateStateBasedOnPredictor;	// IMP=0x00000000000103e3
- (void)_checkPreferences;	// IMP=0x0000000000010354
- (void)pause;	// IMP=0x0000000000010337
- (void)resume;	// IMP=0x000000000001031a
- (id)sectionForElement:(id)arg1;	// IMP=0x0000000000010288
- (id)pathForElement:(id)arg1;	// IMP=0x0000000000010171
- (void)removeElement:(id)arg1;	// IMP=0x000000000000fd18
- (void)reloadElement:(id)arg1 withElement:(id)arg2;	// IMP=0x000000000000fc23
- (void)addElement:(id)arg1 section:(id)arg2;	// IMP=0x000000000000f69d
- (void)modelManagerDidUpdateModel:(id)arg1;	// IMP=0x000000000000f55f
- (void)_enumerateAndGenerateSectionComparators:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f3ab
- (_Bool)modelManager:(id)arg1 saveDataStoreToURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000f0e0
- (_Bool)modelManager:(id)arg1 loadDataStoreFromURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000ee1e
- (id)dataStoreKey;	// IMP=0x000000000000ee11
- (id)elementAtPath:(id)arg1;	// IMP=0x000000000000ed55
- (unsigned long long)numberOfElementsInSection:(id)arg1;	// IMP=0x000000000000ed06
@property(readonly, nonatomic) NSArray *sections;
- (void)dealloc;	// IMP=0x000000000000eba2
- (id)initWithRelevanceEngine:(id)arg1;	// IMP=0x000000000000db9d
- (id)_elementIdentifierForIdentifier:(id)arg1;	// IMP=0x0000000000013886
- (id)_identifierForElementIdentifier:(id)arg1;	// IMP=0x0000000000013869
- (id)relevanceProviderEnvironment;	// IMP=0x0000000000013854
- (id)featureMapForPredictedElement:(id)arg1 trainingContext:(id)arg2;	// IMP=0x00000000000137ca
- (void)refreshContent;	// IMP=0x00000000000138e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
