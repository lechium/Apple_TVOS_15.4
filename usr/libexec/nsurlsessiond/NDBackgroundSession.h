//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDApplication, NDCallbackQueue, NDCredentialStorage, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSURLSession, NSUUID, NSXPCConnection;
@protocol NDBackgroundSessionDelegate, NSXPCProxyCreating><NDBackgroundSessionClient, OS_dispatch_queue;

@interface NDBackgroundSession : NSObject
{
    NSURLSession *_userInitiatedSession;	// 8 = 0x8
    NSURLSession *_discretionaryPrioritySession;	// 16 = 0x10
    NDCredentialStorage *_credentialStorage;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_archiveQueue;	// 32 = 0x20
    NDApplication *_clientApplication;	// 40 = 0x28
    NDApplication *_connectedExtension;	// 48 = 0x30
    NSMutableDictionary *_tasksToIdentifiers;	// 56 = 0x38
    NSMutableDictionary *_identifiersToTasks;	// 64 = 0x40
    NSMutableDictionary *_identifiersToMonitors;	// 72 = 0x48
    NSMutableDictionary *_identifiersToStreams;	// 80 = 0x50
    NSMutableDictionary *_identifiersToStreamQueues;	// 88 = 0x58
    NSMutableArray *_outstandingTaskIDs;	// 96 = 0x60
    double _lastArchiveTime;	// 104 = 0x68
    _Bool _archiveWasDeferred;	// 112 = 0x70
    NSURL *_sessionDirectory;	// 120 = 0x78
    NSURL *_downloadDirectory;	// 128 = 0x80
    NSURL *_uploadsDirectory;	// 136 = 0x88
    _Bool _performsEVCertCheck;	// 144 = 0x90
    _Bool _clientImplementsWillSendRequest;	// 145 = 0x91
    _Bool _clientImplementsWillBeginDelayedRequest;	// 146 = 0x92
    _Bool _clientImplementsSessionChallenge;	// 147 = 0x93
    _Bool _clientImplementsTaskChallenge;	// 148 = 0x94
    _Bool _sendsLaunchEvents;	// 149 = 0x95
    _Bool _discretionary;	// 150 = 0x96
    _Bool _obliterated;	// 151 = 0x97
    _Bool _cleanedUp;	// 152 = 0x98
    _Bool _hasBeenSignalledToDeliverPendingEvents;	// 153 = 0x99
    _Bool _infersDiscretionary;	// 154 = 0x9a
    _Bool _shouldPullInitialCredentials;	// 155 = 0x9b
    CDUnknownBlockType _completeReconnectionBlock;	// 160 = 0xa0
    int _clientPID;	// 168 = 0xa8
    NSXPCConnection *_xpcConn;	// 176 = 0xb0
    NSString *_watchExtensionBundleIdentifier;	// 184 = 0xb8
    _Bool _retryDataTasks;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_workQueue;	// 200 = 0xc8
    NDCallbackQueue *_callbackQueue;	// 208 = 0xd0
    NDApplication *_monitoredApplication;	// 216 = 0xd8
    NSMutableDictionary *_identifiersToTaskInfo;	// 224 = 0xe0
    id <NSXPCProxyCreating><NDBackgroundSessionClient> _clientProxy;	// 232 = 0xe8
    id <NDBackgroundSessionDelegate> _delegate;	// 240 = 0xf0
    NSUUID *_uuid;	// 248 = 0xf8
    NSString *_identifier;	// 256 = 0x100
    NSString *_clientBundleID;	// 264 = 0x108
    NSString *_monitoredAppBundleID;	// 272 = 0x110
    NSString *_secondaryID;	// 280 = 0x118
    CDUnknownBlockType _invalidateReply;	// 288 = 0x120
    NSString *_sharedContainerIdentifier;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x00200000000286a3
@property(copy) NSString *sharedContainerIdentifier; // @synthesize sharedContainerIdentifier=_sharedContainerIdentifier;
@property(copy) CDUnknownBlockType invalidateReply; // @synthesize invalidateReply=_invalidateReply;
@property(readonly) NSString *secondaryID; // @synthesize secondaryID=_secondaryID;
@property(readonly) NSString *monitoredAppBundleID; // @synthesize monitoredAppBundleID=_monitoredAppBundleID;
@property(readonly) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak id <NDBackgroundSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000027f01
- (void)_URLSession:(id)arg1 openFileAtPath:(id)arg2 mode:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000027a80
- (id)_URLSession:(id)arg1 downloadTaskNeedsDownloadDirectory:(id)arg2;	// IMP=0x0010000000027a03
- (void)_URLSession:(id)arg1 downloadTask:(id)arg2 didReceiveResponse:(id)arg3;	// IMP=0x0010000000027710
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x0010000000027536
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;	// IMP=0x0010000000027324
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000026b10
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x0010000000026966
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;	// IMP=0x00100000000266ee
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0010000000026412
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;	// IMP=0x0010000000026067
- (void)URLSession:(id)arg1 dataTask:(id)arg2 _didReceiveData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000025b23
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002547a
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002546a
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00100000000240db
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x0010000000023d0d
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0010000000023bf1
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000022ef8
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000021fd7
- (_Bool)trustPassesExtendedValidation:(struct __SecTrust *)arg1;	// IMP=0x0010000000021d8e
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0010000000021c43
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021a1b
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000219cd
- (void)setTLSSessionCachePrefix:(id)arg1;	// IMP=0x0010000000021966
- (void)setDiscretionaryOverride:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00100000000214f3
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00100000000213b0
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x001000000002126d
- (void)setExpectedProgressTarget:(unsigned long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000021121
- (void)setBytesPerSecondLimit:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000020ec7
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000020b68
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000020334
- (void)setDescription:(id)arg1 forTask:(unsigned long long)arg2;	// IMP=0x00100000000201cb
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(id)arg2 propKey:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001feee
- (void)resumeTaskWithIdentifier:(unsigned long long)arg1 withProperties:(id)arg2;	// IMP=0x001000000001fa65
- (void)suspendTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x001000000001f848
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x001000000001f60b
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f41b
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 childDownloadSessionIdentifier:(id)arg6 identifier:(unsigned long long)arg7 uniqueIdentifier:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x001000000001f40a
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 taskKind:(unsigned long long)arg10 enableSPIDelegateCallbacks:(_Bool)arg11 reply:(CDUnknownBlockType)arg12;	// IMP=0x001000000001f3f9
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001f043
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 sandboxExtensionData:(id)arg4 identifier:(unsigned long long)arg5 uniqueIdentifier:(id)arg6 potentialCredentials:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x001000000001e8a8
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 downloadFilePath:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001e299
- (void)downloadTaskWithResumeData:(id)arg1 identifier:(unsigned long long)arg2 uniqueIdentifier:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001de23
- (void)pingForXPCObjectValidityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001de18
- (void)performCommonSetupForTask:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3 discretionaryStatus:(_Bool)arg4;	// IMP=0x001000000001d9e6
- (void)setupDASPropertiesOnTask:(id)arg1 taskInfo:(id)arg2 discretionaryStatus:(_Bool)arg3;	// IMP=0x001000000001d215
- (void)wakeUpClient:(long long)arg1;	// IMP=0x001000000001caa6
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x001000000001c788
- (void)errorOccurredDuringAuthCallbackDelivery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c641
- (void)errorOccurredDuringFinishedCallbackDelivery:(id)arg1;	// IMP=0x001000000001c4f7
- (id)getClientProxy;	// IMP=0x001000000001c4e6
- (id)inputStreamWithFileHandle:(id)arg1 taskIdentifier:(unsigned long long)arg2;	// IMP=0x001000000001c32c
- (id)makeTempUploadFile:(id)arg1 withExtensionData:(id)arg2;	// IMP=0x001000000001bf2a
- (void)requeueTask:(unsigned long long)arg1;	// IMP=0x001000000001bf16
- (void)requeueTask:(unsigned long long)arg1 skipResume:(_Bool)arg2;	// IMP=0x001000000001bec1
- (void)removeOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x001000000001be59
- (void)addOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x001000000001bdf1
- (void)enqueueTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x001000000001bcf1
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x001000000001ba4b
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x001000000001b6c5
- (void)handleWillBeginDelayedRequestForTaskWithIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001aea1
- (void)handleEarliestBeginDateForTaskWithIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a920
- (void)cancelMonitorForTask:(unsigned long long)arg1;	// IMP=0x001000000001a82b
- (_Bool)currentDiscretionaryStatus:(id)arg1 withOptionalTaskInfo:(id)arg2;	// IMP=0x0010000000019e5d
- (long long)priorityForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x0010000000019e47
- (id)getTLSSessionCachePrefix;	// IMP=0x0010000000019e0c
- (id)getTasksForReconnection;	// IMP=0x0010000000019cb3
- (void)fillInPropertiesForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x0010000000019bee
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x0010000000019ae8
- (void)allowReconnect;	// IMP=0x0010000000019a9a
- (void)reconnectClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019795
- (void)clientDidDisconnect;	// IMP=0x0010000000019431
- (void)cancelTasksRequiringClientConnectionAndResumeUnstartedTasks;	// IMP=0x0010000000018e24
- (_Bool)finalizeTaskCompletionWithSuppressedWake:(_Bool)arg1;	// IMP=0x0010000000018d9e
- (void)handleCompletionOfTask:(id)arg1 identifier:(unsigned long long)arg2 taskInfo:(id)arg3 isRecoverable:(_Bool)arg4 suppressWake:(_Bool)arg5;	// IMP=0x0000000000018d5c
- (_Bool)clientIsActive;	// IMP=0x0010000000018c08
- (_Bool)sessionHasOutstandingTasks;	// IMP=0x0010000000018af1
- (void)removeUploadFileForTaskInfo:(id)arg1;	// IMP=0x0010000000018a8a
- (void)removeDownloadFileForTaskInfo:(id)arg1;	// IMP=0x0010000000018930
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2 transactionMetrics:(id)arg3;	// IMP=0x0010000000017eaa
- (id)clientErrorForError:(id)arg1;	// IMP=0x0010000000017c5b
- (id)restoreTasks:(_Bool *)arg1;	// IMP=0x0010000000017adb
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x00100000000179ea
- (id)restoreTask:(id)arg1 isOutstanding:(_Bool *)arg2;	// IMP=0x0010000000017407
- (id)restoreCompletedTask:(id)arg1;	// IMP=0x0010000000016d02
- (id)restoreInProgressTask:(id)arg1;	// IMP=0x0010000000016496
- (id)createNewTaskFromInfo:(id)arg1;	// IMP=0x0010000000015dd1
- (void)ensureSessionDownloadDirectoryExists;	// IMP=0x0010000000015be6
- (void)configureTask:(id)arg1 withTaskInfo:(id)arg2;	// IMP=0x0010000000015960
- (void)configureAdditionalPropertiesOnTask:(id)arg1 taskInfo:(id)arg2;	// IMP=0x0010000000015793
- (id)sanitizeTaskProperties:(id)arg1;	// IMP=0x0010000000014af6
- (id)adjustDiscretionaryStatusForTaskInfo:(id)arg1;	// IMP=0x0010000000014a6d
- (void)updateTaskInfoBasedOnCurrentDiscretionaryStatus:(id)arg1;	// IMP=0x0010000000014834
- (id)requestWithAdjustedWindowForTaskInfo:(id)arg1;	// IMP=0x0010000000014450
- (id)descriptionForTCPConnectionWaitingReason:(long long)arg1;	// IMP=0x00100000000142f9
- (id)descriptionForRequest:(id)arg1;	// IMP=0x00100000000141bb
- (id)descriptionForTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x00100000000140e0
- (void)_onqueue_archiveTaskInfo;	// IMP=0x0010000000013fbe
- (void)archiveTimerFired;	// IMP=0x0010000000013f73
- (void)archiveTaskInfo:(_Bool)arg1;	// IMP=0x0010000000013f11
- (id)tasksArchivePath;	// IMP=0x0010000000013ea2
- (void)obliterate;	// IMP=0x0010000000013bd9
- (void)cleanupSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000139fa
- (id)setupDownloadDirectory;	// IMP=0x0010000000013706
- (void)clientApplicationWasReinstalled;	// IMP=0x0010000000013126
- (void)backgroundUpdatesEnabledForApplication:(id)arg1;	// IMP=0x0010000000013098
- (void)applicationWasSuspended:(id)arg1;	// IMP=0x001000000001300a
- (_Bool)hasConnectedClient;	// IMP=0x0010000000012ea7
- (void)setXPCConnection:(id)arg1;	// IMP=0x0010000000012b07
- (id)sessionForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x0010000000012af6
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 archiveQueue:(id)arg9;	// IMP=0x00100000000118dc
- (id)configurationWithClientConfiguration:(id)arg1 discretionary:(_Bool)arg2;	// IMP=0x0010000000010a1d
- (double)defaultWindowDurationForResourceTimeout:(double)arg1;	// IMP=0x0010000000010a02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

