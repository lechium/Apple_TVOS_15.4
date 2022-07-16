//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFDatabaseProvider-Protocol.h>

@class NSHashTable, NSManagedObjectContext, NSPersistentStoreDescription, NSString, NSURL, WFCoreDataChangeNotification;
@protocol OS_dispatch_queue;

@interface WFDatabase : NSObject <WFDatabaseProvider>
{
    _Bool _destroysOnDeallocation;	// 8 = 0x8
    struct os_unfair_lock_s _observersLock;	// 12 = 0xc
    NSURL *_fileURL;	// 16 = 0x10
    long long _transactionCount;	// 24 = 0x18
    NSPersistentStoreDescription *_persistentStoreDescription;	// 32 = 0x20
    WFCoreDataChangeNotification *_pendingChangeNotification;	// 40 = 0x28
    NSHashTable *_resultsToNotify;	// 48 = 0x30
    NSHashTable *_observers;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 64 = 0x40
    NSManagedObjectContext *_suggestionsContext;	// 72 = 0x48
    NSManagedObjectContext *_context;	// 80 = 0x50
}

+ (id)createDatabaseForTesting;	// IMP=0x000000000017b988
+ (void)setDefaultDatabase:(id)arg1;	// IMP=0x000000000017b974
+ (id)defaultDatabase;	// IMP=0x000000000017b963
- (void).cxx_destruct;	// IMP=0x00000000001794cb
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSManagedObjectContext *suggestionsContext; // @synthesize suggestionsContext=_suggestionsContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) struct os_unfair_lock_s observersLock; // @synthesize observersLock=_observersLock;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSHashTable *resultsToNotify; // @synthesize resultsToNotify=_resultsToNotify;
@property(retain, nonatomic) WFCoreDataChangeNotification *pendingChangeNotification; // @synthesize pendingChangeNotification=_pendingChangeNotification;
@property(retain, nonatomic) NSPersistentStoreDescription *persistentStoreDescription; // @synthesize persistentStoreDescription=_persistentStoreDescription;
@property(nonatomic) long long transactionCount; // @synthesize transactionCount=_transactionCount;
@property(nonatomic) _Bool destroysOnDeallocation; // @synthesize destroysOnDeallocation=_destroysOnDeallocation;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)updateAppDescriptor:(id)arg1 atKey:(id)arg2 actionUUID:(id)arg3 actionIndex:(id)arg4 actionIdentifier:(id)arg5 workflowID:(id)arg6;	// IMP=0x0000000000179258
- (void)removeRunEventsWithoutAssociatedShortcuts;	// IMP=0x00000000001790fb
- (void)addSyncHashesToShortcutsIfNecessary;	// IMP=0x0000000000178f9e
- (void)addActionCountsToShortcutsIfNecessary;	// IMP=0x0000000000178e41
- (id)visiblePredicate;	// IMP=0x0000000000178d02
- (id)tombstonedShortcutsPredicate;	// IMP=0x0000000000178cc7
- (_Bool)reloadRecord:(id)arg1 withDescriptor:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000178bad
- (_Bool)saveRecord:(id)arg1 withDescriptor:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000178a78
- (Class)recordClassForObjectType:(unsigned long long)arg1;	// IMP=0x0000000000178a0b
- (id)missingErrorForDescriptor:(id)arg1;	// IMP=0x00000000001787e3
- (_Bool)startObservingChangesForResult:(id)arg1;	// IMP=0x0000000000178722
- (unsigned long long)countForResult:(id)arg1;	// IMP=0x0000000000178664
- (id)descriptorsForResult:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001785b6
- (void)notifyResultsAboutChange:(id)arg1;	// IMP=0x0000000000178041
- (void)remoteContextDidSave:(id)arg1;	// IMP=0x0000000000177e50
- (void)contextDidSave:(id)arg1;	// IMP=0x000000000017774a
- (id)objectOfClass:(Class)arg1 withIdentifier:(id)arg2 forKey:(id)arg3 createIfNecessary:(_Bool)arg4 properties:(id)arg5;	// IMP=0x00000000001774b6
- (id)recordWithDescriptor:(id)arg1 properties:(id)arg2 error:(id *)arg3;	// IMP=0x000000000017735b
- (id)recordWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000177344
- (void)accessStorageForDescriptor:(id)arg1 forWriting:(_Bool)arg2 readingRecordProperties:(id)arg3 usingBlock:(CDUnknownBlockType)arg4 withError:(id *)arg5;	// IMP=0x0000000000176ffc
- (id)objectForDescriptor:(id)arg1 properties:(id)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x0000000000176eb1
- (id)objectForDescriptor:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000176e9c
- (id)performSaveOperationWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000176dee
- (id)performOperationWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000176c12
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000176b70
- (void)removeObjectObserver:(id)arg1;	// IMP=0x0000000000176af8
- (void)addObjectObserver:(id)arg1;	// IMP=0x0000000000176a80
- (_Bool)mergeAutomationsAndShortcuts;	// IMP=0x0000000000176a2e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000176970
- (void)dealloc;	// IMP=0x0000000000176832
- (id)initWithStoreDescription:(id)arg1 runMigrationsIfNecessary:(_Bool)arg2 useLockFile:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000175d9a
- (_Bool)isReference:(id)arg1 allowedToRunOnDomain:(id)arg2;	// IMP=0x000000000002a35a
- (void)setTrustedToRunScripts:(_Bool)arg1 forReference:(id)arg2 onDomain:(id)arg3;	// IMP=0x000000000002a1b3
- (id)databaseWithError:(id *)arg1;	// IMP=0x0000000000033059
- (id)mostRunOrLatestImportedVisibleShortcut;	// IMP=0x0000000000037e2a
- (_Bool)saveContextOrRollback:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a5e6e
- (id)performSuggestionsOperationWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00000000000a5cac
- (void)deleteShortcutSuggestionsFromApps:(id)arg1;	// IMP=0x00000000000a5b7a
- (id)allShortcutSuggestions;	// IMP=0x00000000000a5a70
- (id)shortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 shortcutAvailability:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000a5a07
- (id)shortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 shortcutAvailability:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000a58d7
- (_Bool)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a55fb
- (id)_syncTokenWithError:(id *)arg1;	// IMP=0x00000000000e1261
- (id)syncToken;	// IMP=0x00000000000e1204
- (void)setSyncToken:(id)arg1;	// IMP=0x00000000000e1094
- (void)clearTombstonesAndSyncState;	// IMP=0x00000000000e0fd3
- (id)generateAndPersistUUIDForActionWithIdentifier:(id)arg1 actionIndex:(unsigned long long)arg2 workflowIdentifier:(id)arg3;	// IMP=0x00000000000fe24c
- (void)deleteAllSmartPromptStateDataForReference:(id)arg1;	// IMP=0x00000000000fe0dc
- (void)deleteSmartPromptStatesForDeletedActionUUIDs:(id)arg1 forReference:(id)arg2;	// IMP=0x00000000000fdf46
- (void)_deleteSmartPromptState:(id)arg1 forReference:(id)arg2;	// IMP=0x00000000000fdc3b
- (void)deleteSmartPromptState:(id)arg1 forReference:(id)arg2;	// IMP=0x00000000000fda9e
- (void)_updateDeletionAuthorizationsToMatchAuthorization:(id)arg1 forWorkflow:(id)arg2;	// IMP=0x00000000000fd686
- (void)_updateStatesToMatchSmartPromptState:(id)arg1 forWorkflow:(id)arg2;	// IMP=0x00000000000fcea6
- (void)_saveSmartPromptStateData:(id)arg1 actionUUID:(id)arg2 forWorkflow:(id)arg3;	// IMP=0x00000000000fc91b
- (_Bool)saveSmartPromptStateData:(id)arg1 actionUUID:(id)arg2 reference:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000fc79c
- (id)allStatesDataForReference:(id)arg1 actionUUID:(id)arg2;	// IMP=0x00000000000fc600
- (id)deletionAuthorizationStatesForReference:(id)arg1;	// IMP=0x00000000000fc5a7
- (id)currentDeletionAuthorizationStatusWithContentItemClassName:(id)arg1 actionUUID:(id)arg2 actionIdentifier:(id)arg3 actionIndex:(unsigned long long)arg4 count:(unsigned long long)arg5 reference:(id)arg6;	// IMP=0x00000000000fc00a
- (id)smartPromptStatesForReference:(id)arg1 actionUUID:(id)arg2;	// IMP=0x00000000000fbfb3
- (id)smartPromptStatesForReference:(id)arg1;	// IMP=0x00000000000fbf9f
- (void)saveSmartPromptStatesForInsertedAction:(id)arg1 contentDestination:(id)arg2 reference:(id)arg3;	// IMP=0x00000000000fbb5a
- (void)createSmartPromptStatesForInsertedActions:(id)arg1 forReference:(id)arg2;	// IMP=0x00000000000fb727
- (id)migrateAccountStateToAppOriginIfNecessary:(id)arg1 reference:(id)arg2 actionUUID:(id)arg3;	// IMP=0x00000000000fb49f
- (_Bool)shouldPromptForCurrentContentItemCount:(unsigned long long)arg1 previousCount:(unsigned long long)arg2;	// IMP=0x00000000000fb3bc
- (id)performDatabaseLookupForState:(id)arg1 actionUUID:(id)arg2 reference:(id)arg3;	// IMP=0x00000000000fa41f
- (id)fetchFirstAllowedStateMatching:(id)arg1 actionUUID:(id)arg2 forReference:(id)arg3;	// IMP=0x00000000000fa350
- (id)approvalResultForContentAttributionSet:(id)arg1 contentDestination:(id)arg2 actionUUID:(id)arg3 actionIdentifier:(id)arg4 actionIndex:(unsigned long long)arg5 reference:(id)arg6 allowedOnceStates:(id)arg7;	// IMP=0x00000000000f904c
- (id)conflictForWorkflowReference:(id)arg1;	// IMP=0x0000000000163b10
- (id)allShortcutBookmarks;	// IMP=0x000000000018a250
- (_Bool)deleteAllBookmarksForWorkflowID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000018a1aa
- (id)bookmarksForWorkflowID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000018a0fc
- (id)bookmarkDataForWorkflowID:(id)arg1 path:(id)arg2 error:(id *)arg3;	// IMP=0x000000000018a027
- (id)createBookmarkWithWorkflowID:(id)arg1 path:(id)arg2 bookmarkData:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000189f23
- (void)deleteDonationsForShortcutWithIdentifier:(id)arg1;	// IMP=0x000000000018dccf
- (id)duplicateNameErrorWithName:(id)arg1;	// IMP=0x000000000018db64
- (id)validateWorkflowName:(id)arg1 forCreation:(_Bool)arg2 overwriting:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000018d7fa
- (id)duplicateReference:(id)arg1 newName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000018d725
- (id)_createWorkflowWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000018d677
- (id)suggestedWorkflowNameForName:(id)arg1;	// IMP=0x000000000018d379
- (void)setConflictingReference:(id)arg1 forReference:(id)arg2;	// IMP=0x000000000018d1dc
- (_Bool)hasConflictingReferenceForReference:(id)arg1;	// IMP=0x000000000018d11e
- (id)localConflictingReferenceForReference:(id)arg1;	// IMP=0x000000000018d078
- (id)remoteConflictingReferenceForReference:(id)arg1;	// IMP=0x000000000018cfd2
- (id)conflictingReferenceForReference:(id)arg1;	// IMP=0x000000000018cf2c
- (_Bool)deleteReference:(id)arg1 tombstone:(_Bool)arg2 deleteConflictIfPresent:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000018cd30
- (_Bool)deleteReference:(id)arg1 error:(id *)arg2;	// IMP=0x000000000018ccbf
- (id)renameReference:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x000000000018c7b8
- (id)duplicateReference:(id)arg1 error:(id *)arg2;	// IMP=0x000000000018c691
- (_Bool)createWorkflowWithIdentifier:(id)arg1 record:(id)arg2 error:(id *)arg3;	// IMP=0x000000000018c541
- (id)createWorkflowWithOptions:(id)arg1 nameCollisionBehavior:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000018c419
- (id)createWorkflowWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000018c402
- (id)createWorkflowWithError:(id *)arg1;	// IMP=0x000000000018c3a5
- (_Bool)hasConflictWithName:(id)arg1;	// IMP=0x000000000018c2b6
- (_Bool)hasVisibleWorkflowsWithName:(id)arg1;	// IMP=0x000000000018c26e
- (id)uniqueVisibleReferenceForWorkflowName:(id)arg1;	// IMP=0x000000000018c1ff
- (id)referenceForWorkflowID:(id)arg1;	// IMP=0x000000000018c0e0
- (id)recentlyRunShortcuts;	// IMP=0x000000000018bf26
- (id)recentlyModifiedShortcuts;	// IMP=0x000000000018bd65
- (id)deletedWorkflows;	// IMP=0x000000000018bc0f
- (id)visibleReferencesForWorkflowName:(id)arg1;	// IMP=0x000000000018bb69
- (id)allShortcuts;	// IMP=0x000000000018ba2f
- (id)workflowsWithTombstonedConflicts;	// IMP=0x000000000018b8e7
- (id)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier:(id)arg1;	// IMP=0x000000000018b6ee
- (id)sortedVisibleWorkflowsByName;	// IMP=0x000000000018b5b7
- (id)workflowFetchRequestWithCollectionID:(id)arg1 includeTombstones:(_Bool)arg2 limit:(unsigned long long)arg3;	// IMP=0x000000000018b3a4
- (id)sortedWorkflowsWithQuery:(id)arg1;	// IMP=0x000000000018ae69
- (id)sortedVisibleWorkflowsWithType:(id)arg1;	// IMP=0x000000000018addf
- (unsigned long long)countOfAllVisibleWorkflows;	// IMP=0x000000000018ac89
- (id)workflowResultWithFetchOperation:(id)arg1;	// IMP=0x000000000018abe2
- (id)workflowResultWithFetchRequest:(id)arg1;	// IMP=0x000000000018ab58
- (id)allConfiguredTriggersNeedingRunningNotifications;	// IMP=0x000000000020bac1
- (id)sortedTriggerEventsWithConfirmationOnly:(_Bool)arg1;	// IMP=0x000000000020b94b
- (void)setConfirmedForTriggerEventWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020b8ad
- (id)triggerEventForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020b77a
- (id)createTriggerEventWithTriggerID:(id)arg1 eventInfo:(id)arg2 confirmed:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000020b69e
- (id)configuredTriggerForTriggerID:(id)arg1;	// IMP=0x000000000020b572
- (id)triggerResultWithFetchRequest:(id)arg1;	// IMP=0x000000000020b4d7
- (id)allConfiguredTriggers;	// IMP=0x000000000020b39a
- (id)configuredTriggersForWorkflowID:(id)arg1;	// IMP=0x000000000020b235
- (id)createTriggerWithRecord:(id)arg1 workflow:(id)arg2 error:(id *)arg3;	// IMP=0x000000000020b15d
- (id)visibleCollectionForFolderName:(id)arg1;	// IMP=0x000000000023bba7
- (id)validateFolderName:(id)arg1 forCollection:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023b833
- (id)collectionResultWithFetchRequest:(id)arg1;	// IMP=0x000000000023b78c
- (id)orphanedShortcuts;	// IMP=0x000000000023b72f
- (id)orphanedWorkflowsPredicate;	// IMP=0x000000000023b703
- (id)orphanedFolders;	// IMP=0x000000000023b6a6
- (id)orphanedFoldersPredicate;	// IMP=0x000000000023b639
- (id)suggestedFolderNameForName:(id)arg1;	// IMP=0x000000000023b325
- (id)collectionRecordForCollectionIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x000000000023b23d
- (id)deletedFolders;	// IMP=0x000000000023b0a1
- (id)allCollections;	// IMP=0x000000000023af14
- (_Bool)moveCollections:(id)arg1 toIndexes:(id)arg2 ofCollectionWithIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000023ad6c
- (_Bool)moveCollections:(id)arg1 toIndexes:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023ad50
- (_Bool)moveCollections:(id)arg1 toIndex:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000023acb2
- (_Bool)removeReferences:(id)arg1 fromCollectionWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023abb3
- (_Bool)prependReferences:(id)arg1 toCollectionWithType:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023aac7
- (_Bool)prependReferences:(id)arg1 toCollection:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023aa09
- (_Bool)moveReferences:(id)arg1 toIndexes:(id)arg2 ofCollection:(id)arg3 visible:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000023a8df
- (_Bool)moveReferences:(id)arg1 toIndex:(long long)arg2 ofCollection:(id)arg3 visible:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000023a7c0
- (_Bool)moveReferences:(id)arg1 toIndexes:(id)arg2 ofCollection:(id)arg3 error:(id *)arg4;	// IMP=0x000000000023a79b
- (_Bool)moveReferences:(id)arg1 toIndex:(long long)arg2 ofCollection:(id)arg3 error:(id *)arg4;	// IMP=0x000000000023a776
- (id)sortedVisibleWorkflowsInCollection:(id)arg1;	// IMP=0x000000000023a6a9
- (id)collectionWithIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x000000000023a5fc
- (id)collectionWithIdentifier:(id)arg1;	// IMP=0x000000000023a556
- (id)collectionForWorkflowType:(id)arg1;	// IMP=0x000000000023a4b0
- (id)folderForWorkflowReference:(id)arg1;	// IMP=0x000000000023a3a8
- (id)collectionsForWorkflowReference:(id)arg1;	// IMP=0x000000000023a302
- (id)updateFolder:(id)arg1 newName:(id)arg2 newIcon:(unsigned short)arg3 error:(id *)arg4;	// IMP=0x000000000023a225
- (id)createFolderWithName:(id)arg1 icon:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x000000000023a16f
- (id)sortedVisibleFolders;	// IMP=0x000000000023a020
- (unsigned long long)countOfWorkflowsInAFolder;	// IMP=0x0000000000239df3
- (id)latestRunEvent;	// IMP=0x000000000023f2c5
- (id)triggerRunEventsInTheLastWeek;	// IMP=0x000000000023f190
- (id)sortedRunEventsForTriggerID:(id)arg1;	// IMP=0x000000000023f027
- (id)sortedRunEventsWithSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000000023ed6b
- (id)sortedRunEventsWithSource:(id)arg1;	// IMP=0x000000000023ed54
- (void)setOutcome:(long long)arg1 forRunEvent:(id)arg2;	// IMP=0x000000000023ebdf
- (id)logRunOfWorkflow:(id)arg1 atDate:(id)arg2 withIdentifier:(id)arg3 source:(id)arg4 triggerID:(id)arg5;	// IMP=0x000000000023e996
- (id)logRunOfWorkflow:(id)arg1 withSource:(id)arg2 triggerID:(id)arg3;	// IMP=0x000000000023e87d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
