//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKOperation, CKOperationGroup, CPLSyncSession, MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress, NSString;
@protocol CPLCloudKitActivityRequest, CPLCloudKitTaskController, CPLCloudKitTransportTaskGate, CPLEngineStoreUserIdentifier, CPLEngineTransportGroup, OS_dispatch_queue, OS_xpc_object;

@interface CPLCloudKitTransportTask : NSObject
{
    NSMutableArray *_currentOperations;	// 8 = 0x8
    NSMutableArray *_lastOperationRequestUUIDs;	// 16 = 0x10
    NSMutableDictionary *_cachedScopes;	// 24 = 0x18
    NSMutableDictionary *_cacheScopeIdentifiersPerZoneID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    _Bool _mustCallTaskDidFinish;	// 48 = 0x30
    unsigned long long _nonCKOperationCount;	// 56 = 0x38
    _Bool _foregroundHasBeenChanged;	// 64 = 0x40
    _Bool _hasProgress;	// 65 = 0x41
    NSProgress *_progress;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_progressQueue;	// 80 = 0x50
    NSMutableSet *_associatedMetrics;	// 88 = 0x58
    id <CPLCloudKitActivityRequest> _activityRequest;	// 96 = 0x60
    NSObject<OS_xpc_object> *_activity;	// 104 = 0x68
    _Bool _cancelled;	// 112 = 0x70
    NSProgress *_callbackOperationProgress;	// 120 = 0x78
    struct _xpc_activity_eligibility_changed_handler_s *_activityEligibilityChangeHandler;	// 128 = 0x80
    _Bool _highPriorityBackground;	// 136 = 0x88
    _Bool _forcedTask;	// 137 = 0x89
    _Bool _backgroundTask;	// 138 = 0x8a
    _Bool _foreground;	// 139 = 0x8b
    _Bool _allowsCellular;	// 140 = 0x8c
    _Bool _boostable;	// 141 = 0x8d
    _Bool _isUpload;	// 142 = 0x8e
    _Bool _isMetadata;	// 143 = 0x8f
    id <CPLEngineStoreUserIdentifier> _transportUserIdentifier;	// 144 = 0x90
    id <CPLEngineTransportGroup> _transportGroup;	// 152 = 0x98
    id trackingContext;	// 160 = 0xa0
    id <CPLCloudKitTaskController> _controller;	// 168 = 0xa8
    id <CPLCloudKitTransportTaskGate> _gate;	// 176 = 0xb0
    MISSING_TYPE *_session;	// 184 = 0xb8
    NSString *_sourceBundleIdentifier;	// 192 = 0xc0
    double _timeoutIntervalForRequest;	// 200 = 0xc8
    double _timeoutIntervalForResource;	// 208 = 0xd0
    NSString *_idleDescription;	// 216 = 0xd8
    NSDictionary *_transportScopes;	// 224 = 0xe0
}

+ (_Bool)allowsCellularForDownloadOperationOfSize:(unsigned long long)arg1 isForeground:(_Bool)arg2 isHighPriority:(_Bool)arg3;	// IMP=0x00200000000adf44
+ (_Bool)allowsCellularForDownloadOperationOfResource:(id)arg1 isForeground:(_Bool)arg2 isHighPriority:(_Bool)arg3;	// IMP=0x00100000000adecd
+ (void)initialize;	// IMP=0x00100000000a958b
- (void).cxx_destruct;	// IMP=0x00100000000af348
@property(copy, nonatomic) NSDictionary *transportScopes; // @synthesize transportScopes=_transportScopes;
@property(copy) NSString *idleDescription; // @synthesize idleDescription=_idleDescription;
@property(nonatomic) _Bool isMetadata; // @synthesize isMetadata=_isMetadata;
@property(nonatomic) _Bool isUpload; // @synthesize isUpload=_isUpload;
@property(readonly, nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(readonly, nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic, getter=isBoostable) _Bool boostable; // @synthesize boostable=_boostable;
@property(nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(readonly, nonatomic) CPLSyncSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <CPLCloudKitTransportTaskGate> gate; // @synthesize gate=_gate;
@property(readonly, nonatomic) id <CPLCloudKitTaskController> controller; // @synthesize controller=_controller;
@property(retain, nonatomic) id trackingContext; // @synthesize trackingContext;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask; // @synthesize forcedTask=_forcedTask;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground; // @synthesize highPriorityBackground=_highPriorityBackground;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup; // @synthesize transportGroup=_transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier; // @synthesize transportUserIdentifier=_transportUserIdentifier;
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00100000000aefea
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x00100000000aef4d
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00100000000aed93
- (void)enumerateAllZonesWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000aec58
- (void)_enumerateAllZonesForSharedDatabase:(_Bool)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ae6e6
- (void)fetchUserRecordIDFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ae189
- (void)getUserRecordIDFetchIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000adf5c
- (id)_stringForNetworkBehavior:(unsigned long long)arg1;	// IMP=0x00100000000ade94
- (id)_stringForQoS:(long long)arg1;	// IMP=0x00100000000ade38
- (id)_statusForConfiguration:(id)arg1;	// IMP=0x00100000000add31
- (id)baseConfigurationForTask;	// IMP=0x00100000000ad9bf
- (void)setupConfigurationForOperation:(id)arg1;	// IMP=0x00100000000ad7ec
- (unsigned long long)_networkBehavior;	// IMP=0x00100000000ad754
- (void)runOperations;	// IMP=0x00100000000ad69b
- (void)processErrorIfNeeded:(id)arg1;	// IMP=0x00100000000ad67f
- (void)popTaskOperation;	// IMP=0x00100000000ad662
- (void)pushTaskOperation;	// IMP=0x00100000000ad645
- (void)taskDidFinish;	// IMP=0x00100000000ad38d
- (void)operationDidFinish:(id)arg1 error:(id)arg2;	// IMP=0x00100000000acebd
- (void)updateContextWithBlock:(CDUnknownBlockType)arg1 forOperation:(id)arg2;	// IMP=0x00100000000ace08
- (void)updateProgress:(double)arg1 forOperation:(id)arg2;	// IMP=0x00100000000acd63
- (void)updateOneBatchForOperation:(id)arg1;	// IMP=0x00100000000accd0
- (void)associateMetric:(id)arg1;	// IMP=0x00100000000acc41
@property(readonly, nonatomic) NSArray *lastOperationRequestUUIDs;
- (id)callbackOperationDidFinishWithError:(id)arg1;	// IMP=0x00100000000aca8b
- (void)dispatchCallbackOperation:(id)arg1 progress:(id)arg2;	// IMP=0x00100000000ac7d3
- (void)_cancelCallbackProgress;	// IMP=0x00100000000ac718
- (void)operationDidFinishWithError:(id)arg1;	// IMP=0x00100000000ac4eb
- (void)updateContextWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ac291
- (void)updateProgress:(double)arg1;	// IMP=0x00100000000ac044
- (void)updateOneBatch;	// IMP=0x00100000000abe30
- (void)launchOperation:(id)arg1 type:(long long)arg2 withContext:(id)arg3 sourceBundleIdentifiers:(id)arg4;	// IMP=0x00100000000ab0db
- (void)launchOperation:(id)arg1 type:(long long)arg2 withContext:(id)arg3;	// IMP=0x00100000000aaff7
@property(readonly, nonatomic) CKOperation *currentOperation;
- (_Bool)shouldRunOperationsWithError:(id *)arg1;	// IMP=0x00100000000aad09
- (void)dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000aab6a
- (void)dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000aa978
- (void)cancelIfBlocked;	// IMP=0x00100000000aa71d
- (void)_cancelAllOperationsIfBlocked;	// IMP=0x00100000000aa37f
- (void)cancel;	// IMP=0x00100000000a9f9b
- (void)runWithinSyncSession:(id)arg1;	// IMP=0x00100000000a9f89
- (void)runWithNoSyncSession;	// IMP=0x00100000000a9f75
- (void)_runWithSyncSession:(id)arg1;	// IMP=0x00100000000a9ac6
- (void)_acquireActivityOfTypeAndLaunchOperation:(long long)arg1;	// IMP=0x00100000000a989b
- (void)_reallyStartOperation;	// IMP=0x00100000000a97b3
@property(nonatomic) _Bool foreground; // @synthesize foreground=_foreground;
@property(readonly, nonatomic) CKOperationGroup *operationGroup;
- (id)initWithController:(id)arg1;	// IMP=0x00100000000a95dc
- (void)fetchRecordWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b8ac4
- (void)_fetchNextOperationType:(id)arg1 recordIDMapping:(id)arg2 inResult:(id)arg3 storeRequestUUIDsIn:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b8703
- (void)fetchRecordWithNames:(id)arg1 inScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b86e9
- (void)fetchRecordsWithIDs:(id)arg1 fetchResources:(_Bool)arg2 inScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b85cc
- (void)fetchRecordWithNames:(id)arg1 fetchResources:(_Bool)arg2 inScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b8091
- (void)fetchRecordsWithIDs:(id)arg1 fetchResources:(_Bool)arg2 type:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b75e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
