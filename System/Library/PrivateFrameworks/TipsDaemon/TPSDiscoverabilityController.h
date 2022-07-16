//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsDaemon/TPSDEventsProviderManagerDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, TPSEventsHistoryController, TPSEventsProviderManager, TPSTipStatusController;
@protocol OS_dispatch_queue, TPSDiscoverabilityControllerDelegate;

@interface TPSDiscoverabilityController : NSObject <TPSDEventsProviderManagerDelegate>
{
    long long _overrideHintMaxDisplayedCount;	// 8 = 0x8
    NSMutableDictionary *_contextualInfoMap;	// 16 = 0x10
    NSMutableSet *_registeredEventIdentifiers;	// 24 = 0x18
    TPSEventsProviderManager *_eventsProviderManager;	// 32 = 0x20
    TPSEventsHistoryController *_eventsHistoryController;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_eventRegistrationQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_eventResultsProcessingQueue;	// 56 = 0x38
    id <TPSDiscoverabilityControllerDelegate> _delegate;	// 64 = 0x40
    TPSTipStatusController *_tipStatusController;	// 72 = 0x48
}

+ (id)contextualInfoMap;	// IMP=0x000000000002ef39
+ (void)removeContextualInfoCache;	// IMP=0x000000000002eee3
- (void).cxx_destruct;	// IMP=0x0000000000033c0e
@property(retain, nonatomic) TPSTipStatusController *tipStatusController; // @synthesize tipStatusController=_tipStatusController;
@property(nonatomic) __weak id <TPSDiscoverabilityControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dataProviderManager:(id)arg1 didReceiveCallbackWithResult:(id)arg2 type:(long long)arg3;	// IMP=0x00000000000337d9
- (void)dataProviderManager:(id)arg1 didFinishQueryWithResults:(id)arg2 type:(long long)arg3;	// IMP=0x0000000000033721
- (void)updateHintDismissedForIdentifier:(id)arg1 dismissType:(id)arg2 context:(id)arg3;	// IMP=0x00000000000333ad
- (void)updateHintWouldHaveBeenDisplayedForIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x00000000000330e7
- (void)addHintDisplayedForIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x0000000000032e23
- (void)updateContentViewedForIdentifier:(id)arg1;	// IMP=0x0000000000032bd7
- (long long)customizationIDForContentID:(id)arg1;	// IMP=0x0000000000032b7f
- (void)_reconcileRegisteredEvents;	// IMP=0x0000000000032a9d
- (void)_registerWakingCallbackForContextualInfo:(id)arg1;	// IMP=0x000000000003289e
- (id)monitoringEventsForContentID:(id)arg1;	// IMP=0x000000000003284a
- (_Bool)_isConditionMet:(id)arg1 hasUpdates:(_Bool *)arg2 forIdentifier:(id)arg3;	// IMP=0x0000000000032171
- (id)_matchingIdentifiersForConditionWithType:(unsigned long long)arg1 forObserverIdentifiers:(id)arg2 hasUpdates:(_Bool *)arg3;	// IMP=0x0000000000031e3e
- (_Bool)_updateTriggerConditionForObserverIdentifers:(id)arg1;	// IMP=0x0000000000031a27
- (_Bool)updateDesiredOutcomeConditionForObserverIdentifers:(id)arg1;	// IMP=0x0000000000031638
- (id)discoverabilityTipWithMetadata:(id)arg1 contentDictionary:(id)arg2 preconditions:(id)arg3;	// IMP=0x0000000000031593
- (void)markHintIneligibleForIdentifiers:(id)arg1 bundleID:(id)arg2 context:(id)arg3 reason:(long long)arg4;	// IMP=0x000000000003114c
- (void)markHintIneligibleForIdentifiers:(id)arg1 context:(id)arg2 reason:(long long)arg3;	// IMP=0x0000000000031132
- (_Bool)isContentHintDisplayMaxDisplayedCountExceededForIdentifier:(id)arg1;	// IMP=0x000000000003107c
- (_Bool)isContextualInfoExistForIdentifier:(id)arg1;	// IMP=0x0000000000031045
- (void)_updateContextualInfoMapCache;	// IMP=0x000000000003101e
- (void)_updateRegisteredEventIdentifiers;	// IMP=0x0000000000030ff7
- (void)_removeCacheData;	// IMP=0x0000000000030f52
- (void)_updateCacheData;	// IMP=0x0000000000030f0d
- (void)processEventProviderQueryResults:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000030c44
- (void)queryCurrentEvents;	// IMP=0x00000000000309a4
- (void)contextualEligibilityWithTipIdentifiers:(id)arg1 tipsDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 experimentCampChangesToAll:(_Bool)arg4;	// IMP=0x000000000002fb04
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)arg1 updateCache:(_Bool)arg2;	// IMP=0x000000000002f8d5
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)arg1;	// IMP=0x000000000002f8be
- (void)restartTriggerTrackingIfNotDisplayedForIdentifiers:(id)arg1;	// IMP=0x000000000002f782
- (void)_cleanupContextualInfoMap;	// IMP=0x000000000002f2f5
- (id)contextualInfoForIdentifier:(id)arg1;	// IMP=0x000000000002f2df
@property(readonly, copy, nonatomic) TPSEventsHistoryController *eventsHistoryController;
@property(readonly, nonatomic) NSDictionary *contextualInfoMap; // @dynamic contextualInfoMap;
- (id)init;	// IMP=0x000000000002f271
- (id)initWithTipStatusController:(id)arg1;	// IMP=0x000000000002efe1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
