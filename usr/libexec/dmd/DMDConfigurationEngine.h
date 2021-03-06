//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperation, CATOperationQueue, DMDActivationPredicateObserverManager, DMDConfigurationDatabase, DMDEngineDatabaseInitializationOperation, DMDEventSubscriptionManager, DMDPolicyPersistence, MISSING_TYPE, NSError, NSMutableDictionary, NSString;
@protocol DMDConfigurationEngineDelegate, DMDDeviceStateProvider, DMDTaskOperationProvider;

@interface DMDConfigurationEngine : NSObject
{
    DMDPolicyPersistence *_policyPersistence;	// 8 = 0x8
    id <DMDConfigurationEngineDelegate> _delegate;	// 16 = 0x10
    NSObject<DMDDeviceStateProvider> *_deviceStateProvider;	// 24 = 0x18
    NSObject<DMDTaskOperationProvider> *_taskOperationProvider;	// 32 = 0x20
    DMDActivationPredicateObserverManager *_activationPredicateObserverManager;	// 40 = 0x28
    DMDConfigurationDatabase *_database;	// 48 = 0x30
    CATOperationQueue *_queue;	// 56 = 0x38
    NSError *_initializationError;	// 64 = 0x40
    DMDEngineDatabaseInitializationOperation *_databaseInitializationOperation;	// 72 = 0x48
    MISSING_TYPE *_initializationOperation;	// 80 = 0x50
    NSMutableDictionary *_organizationControllerByIdentifier;	// 88 = 0x58
    DMDEventSubscriptionManager *_eventSubscriptionManager;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000002f1bb
@property(retain, nonatomic) DMDEventSubscriptionManager *eventSubscriptionManager; // @synthesize eventSubscriptionManager=_eventSubscriptionManager;
@property(retain, nonatomic) NSMutableDictionary *organizationControllerByIdentifier; // @synthesize organizationControllerByIdentifier=_organizationControllerByIdentifier;
@property(retain, nonatomic) CATOperation *initializationOperation; // @synthesize initializationOperation=_initializationOperation;
@property(retain, nonatomic) DMDEngineDatabaseInitializationOperation *databaseInitializationOperation; // @synthesize databaseInitializationOperation=_databaseInitializationOperation;
@property(retain) NSError *initializationError; // @synthesize initializationError=_initializationError;
@property(retain, nonatomic) CATOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) DMDConfigurationDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) DMDActivationPredicateObserverManager *activationPredicateObserverManager; // @synthesize activationPredicateObserverManager=_activationPredicateObserverManager;
@property(retain, nonatomic) NSObject<DMDTaskOperationProvider> *taskOperationProvider; // @synthesize taskOperationProvider=_taskOperationProvider;
@property(retain, nonatomic) NSObject<DMDDeviceStateProvider> *deviceStateProvider; // @synthesize deviceStateProvider=_deviceStateProvider;
@property(nonatomic) __weak id <DMDConfigurationEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) DMDPolicyPersistence *policyPersistence; // @synthesize policyPersistence=_policyPersistence;
- (void)delegateWillSuspend;	// IMP=0x001000000002f01e
- (void)delegateDidResume;	// IMP=0x001000000002efc1
- (void)registerConfigurationSourceOperation:(id)arg1 didUpdateRegistrationForConfigurationSource:(id)arg2;	// IMP=0x001000000002ea6e
- (id)engineProcessingOperation:(id)arg1 assetResolverForOrganizationWithIdentifier:(id)arg2;	// IMP=0x001000000002e993
- (id)engineProcessingOperation:(id)arg1 enqueuedOperationsForOrganizationWithIdentifier:(id)arg2;	// IMP=0x001000000002e943
- (void)configurationSourceController:(id)arg1 fetchEventsWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e03f
- (void)configurationSourceController:(id)arg1 fetchStatusUpdatesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002cd9c
- (void)activationPredicateObserverManager:(id)arg1 didObserveChangeForPredicateWithIdentifier:(id)arg2;	// IMP=0x001000000002cd58
- (void)_cleanupOrphanedPolicies;	// IMP=0x001000000002c366
- (void)updateEventSubscriptions;	// IMP=0x001000000002c0eb
- (void)updateOrganizationControllers;	// IMP=0x001000000002baee
- (void)_updateOrganizationControllers;	// IMP=0x001000000002bad0
- (void)enqueueOperations:(id)arg1;	// IMP=0x001000000002b866
- (void)enqueueOperation:(id)arg1;	// IMP=0x001000000002b6bc
- (void)enqueueDeclarationProcessingOperationIfNeeded;	// IMP=0x001000000002b0eb
- (void)declarationModificationOperationDidFinish:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b06d
- (void)enqueueDatabaseModificationOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002afe5
- (void)databaseInitializationOperationDidFinish;	// IMP=0x001000000002ad52
- (void)initializationOperationDidFinish:(id)arg1;	// IMP=0x001000000002acdf
- (void)sendEvents:(id)arg1 organizationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002a426
- (void)handleRemoveSubscriptionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029fd3
- (void)handleInstallSubscriptionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029ac1
- (void)handleUpdateCommandsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000299a7
- (void)refreshStatusForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029794
- (void)processStatusForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000295c5
- (void)processDeclarationsForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028fa4
- (void)handleFetchDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028dd7
- (void)handleUpdateDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028c14
- (void)handleSetDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028a51
- (void)handleConfigurationSourceRegistrationRequest:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000028905
- (void)handleFetchStreamEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000283ec
- (void)handleFetchConfigurationOrganizationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028071
- (void)handleDeactivateConfigurationOrganizationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000027f14
- (void)handleCreateConfigurationOrganizationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000027d48
- (void)suspend;	// IMP=0x0010000000027b4e
- (void)resume;	// IMP=0x0010000000027940
@property(readonly, copy) NSString *description;
- (id)initWithDatabase:(id)arg1 policyPersistence:(id)arg2 activationManager:(id)arg3;	// IMP=0x0010000000027080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

