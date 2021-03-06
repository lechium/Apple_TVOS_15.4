//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSMapTable, NSMutableDictionary, NSString, NSURLSessionConfiguration;

@interface NDAVBackgroundSession
{
    NSMutableDictionary *_identifiersToAVWrappers;	// 240 = 0xf0
    NSMutableDictionary *_identifiersToThroughputMonitors;	// 248 = 0xf8
    NSMutableDictionary *_identifiersToTCPConnections;	// 256 = 0x100
    NSMutableDictionary *_identifiersToDASActivities;	// 264 = 0x108
    NSMapTable *_assetDownloadTokensToAssets;	// 272 = 0x110
    NSURLSessionConfiguration *_clientConfig;	// 280 = 0x118
    MISSING_TYPE *_delayedWakeTimer;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x0020000000055c3a
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0010000000055988
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didResolveMediaSelectionPropertyList:(id)arg2;	// IMP=0x00100000000557af
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didFinishDownloadForMediaSelectionPropertyList:(id)arg2;	// IMP=0x0010000000055718
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4 forMediaSelectionPropertyList:(id)arg5;	// IMP=0x001000000005560d
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 willDownloadVariants:(id)arg2;	// IMP=0x00100000000554cf
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didUpdateProgressWithLastBytesWritten:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;	// IMP=0x0010000000055394
- (void)taskWithIdentifier:(unsigned long long)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0010000000054c5b
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0010000000054a6f
- (void)cancelTCPConnectionForTask:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x00100000000548c7
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x00100000000547ac
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000547a1
- (void)stopAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x00100000000546ab
- (void)startAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x00100000000544be
- (_Bool)ensureAVAssetDownloadSessionWrapperForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x001000000005417c
- (id)newAVAssetDownloadSessionWrapperForTaskInfo:(id)arg1;	// IMP=0x0010000000053d77
- (long long)adjustedTCPConnectionPriorityForTaskPriority:(long long)arg1;	// IMP=0x0010000000053c6a
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x00100000000539f9
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x00100000000537f1
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2;	// IMP=0x00100000000532fc
- (void)setPriority:(long long)arg1 forTCPConnectionWithTaskIdentifier:(unsigned long long)arg2;	// IMP=0x00100000000532f6
- (void)cancelAVDownloadAndFailTaskWithIdentifier:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x001000000005310b
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000053105
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000053021
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x0010000000052fc3
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000052dfd
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 childDownloadSessionIdentifier:(id)arg6 identifier:(unsigned long long)arg7 uniqueIdentifier:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x0010000000052692
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 taskKind:(unsigned long long)arg10 enableSPIDelegateCallbacks:(_Bool)arg11 reply:(CDUnknownBlockType)arg12;	// IMP=0x00100000000517be
- (_Bool)doesAVAssetDownloadSessionSupportMultipleDownloads;	// IMP=0x00100000000517a3
- (id)avAssetForURL:(id)arg1 downloadToken:(unsigned long long)arg2;	// IMP=0x0010000000051568
- (_Bool)hasEntitlementToSpecifyDownloadDestinationURL;	// IMP=0x0010000000051502
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 pipeHandle:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000514f1
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000514e0
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000514cf
- (void)applicationEndedTransitionalDiscretionaryBackgroundPeriod:(id)arg1;	// IMP=0x0010000000051441
- (void)backgroundUpdatesDisabledForApplication:(id)arg1;	// IMP=0x001000000005143b
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x00100000000513ad
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x001000000005131f
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0010000000051291
- (id)destinationURLToUseForTask:(id)arg1;	// IMP=0x0010000000050d76
- (id)downloadDirectoryToUse:(id)arg1;	// IMP=0x0010000000050cfb
- (id)avAssetDownloadsDirectory;	// IMP=0x00100000000507d3
- (void)updatePriorityForTaskID:(id)arg1;	// IMP=0x00100000000507cd
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x00100000000506e2
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x00100000000505f1
- (void)cancelThroughputMonitorForWrapper:(unsigned long long)arg1;	// IMP=0x00100000000504ed
- (void)setupThroughputMonitorForWrapper:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3;	// IMP=0x0010000000050372
- (void)cancelDelayedCompletionWakeTimer;	// IMP=0x0010000000050231
- (void)setupDelayedCompletionWakeTimer;	// IMP=0x0010000000050072
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 archiveQueue:(id)arg9;	// IMP=0x001000000004fda7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

