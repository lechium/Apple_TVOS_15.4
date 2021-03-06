//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateFormatter, NSMutableDictionary, NSOperationQueue, NSURL, NSURLSession, NSURLSessionConfiguration, PallasResponseVerifier;
@protocol NSURLSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface DownloadManager : NSObject
{
    _Bool _haveSyncedSplunkData;	// 8 = 0x8
    _Bool _currentlyBatchingSplunk;	// 9 = 0x9
    _Bool _haveSyncedSplunkState;	// 10 = 0xa
    _Bool _timerRunning;	// 11 = 0xb
    NSMutableDictionary *_downloadTasksInFlight;	// 16 = 0x10
    NSMutableDictionary *_cachedMetaDataForAssetType;	// 24 = 0x18
    NSURLSessionConfiguration *_backgroundDiscretionaryConfiguration;	// 32 = 0x20
    NSURLSessionConfiguration *_splunkDiscretionaryConfiguration;	// 40 = 0x28
    NSURLSessionConfiguration *_inProcessConfig;	// 48 = 0x30
    NSOperationQueue *_operationQueue;	// 56 = 0x38
    NSOperationQueue *_splunkOperationQueue;	// 64 = 0x40
    id <NSURLSessionDelegate> _delegate;	// 72 = 0x48
    id <NSURLSessionDelegate> _splunkDelegate;	// 80 = 0x50
    NSURLSession *_backgroundSession;	// 88 = 0x58
    NSURLSession *_splunkSession;	// 96 = 0x60
    NSURLSession *_pallasSession;	// 104 = 0x68
    NSURLSession *_inProcessSession;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_splunkStateQueue;	// 128 = 0x80
    long long _currentState;	// 136 = 0x88
    PallasResponseVerifier *_pallasVerifier;	// 144 = 0x90
    NSDateFormatter *_dateFormatter;	// 152 = 0x98
    NSURL *_splunkUrl;	// 160 = 0xa0
    NSMutableDictionary *_currentSplunkEvent;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_timer;	// 176 = 0xb0
    NSDate *_previousTimeEstimatePoint;	// 184 = 0xb8
    CDUnknownBlockType _timerHandler;	// 192 = 0xc0
}

@property(readonly, nonatomic) CDUnknownBlockType timerHandler; // @synthesize timerHandler=_timerHandler;
@property(readonly, nonatomic) _Bool timerRunning; // @synthesize timerRunning=_timerRunning;
@property(readonly, nonatomic) NSDate *previousTimeEstimatePoint; // @synthesize previousTimeEstimatePoint=_previousTimeEstimatePoint;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSMutableDictionary *currentSplunkEvent; // @synthesize currentSplunkEvent=_currentSplunkEvent;
@property(readonly, nonatomic) NSURL *splunkUrl; // @synthesize splunkUrl=_splunkUrl;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) PallasResponseVerifier *pallasVerifier; // @synthesize pallasVerifier=_pallasVerifier;
@property(readonly, nonatomic) _Bool haveSyncedSplunkState; // @synthesize haveSyncedSplunkState=_haveSyncedSplunkState;
@property(readonly, nonatomic) _Bool currentlyBatchingSplunk; // @synthesize currentlyBatchingSplunk=_currentlyBatchingSplunk;
@property(readonly, nonatomic) _Bool haveSyncedSplunkData; // @synthesize haveSyncedSplunkData=_haveSyncedSplunkData;
@property(readonly) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *splunkStateQueue; // @synthesize splunkStateQueue=_splunkStateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *downloadStateQueue; // @synthesize downloadStateQueue=_downloadStateQueue;
@property(readonly, nonatomic) NSURLSession *inProcessSession; // @synthesize inProcessSession=_inProcessSession;
@property(readonly, nonatomic) NSURLSession *pallasSession; // @synthesize pallasSession=_pallasSession;
@property(readonly, nonatomic) NSURLSession *splunkSession; // @synthesize splunkSession=_splunkSession;
@property(readonly, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(readonly, nonatomic) id <NSURLSessionDelegate> splunkDelegate; // @synthesize splunkDelegate=_splunkDelegate;
@property(readonly, nonatomic) id <NSURLSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSOperationQueue *splunkOperationQueue; // @synthesize splunkOperationQueue=_splunkOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NSURLSessionConfiguration *inProcessConfig; // @synthesize inProcessConfig=_inProcessConfig;
@property(readonly, nonatomic) NSURLSessionConfiguration *splunkDiscretionaryConfiguration; // @synthesize splunkDiscretionaryConfiguration=_splunkDiscretionaryConfiguration;
@property(readonly, nonatomic) NSURLSessionConfiguration *backgroundDiscretionaryConfiguration; // @synthesize backgroundDiscretionaryConfiguration=_backgroundDiscretionaryConfiguration;
@property(readonly, nonatomic) NSMutableDictionary *cachedMetaDataForAssetType; // @synthesize cachedMetaDataForAssetType=_cachedMetaDataForAssetType;
@property(readonly, nonatomic) NSMutableDictionary *downloadTasksInFlight; // @synthesize downloadTasksInFlight=_downloadTasksInFlight;
- (id)lastModifiedDateFromResponse:(id)arg1;	// IMP=0x001000000001ec26
- (void)handleSuccessfulDownload:(id)arg1 task:(id)arg2 taskId:(id)arg3 shouldMove:(_Bool)arg4 extractorExists:(_Bool)arg5 postedDate:(id)arg6 notModified:(_Bool)arg7;	// IMP=0x001000000001e8fe
- (long long)processAssetDownload:(id)arg1 with:(id)arg2 and:(id)arg3 shouldMove:(_Bool)arg4 extractorExists:(_Bool)arg5;	// IMP=0x001000000001e7d3
- (long long)massagePmvAndPersist:(id)arg1 from:(id)arg2 to:(id)arg3 postedDate:(id)arg4;	// IMP=0x001000000001e5a3
- (void)taskFinishedUpdateState:(id)arg1 with:(long long)arg2;	// IMP=0x001000000001e58e
- (void)taskFinishedUpdateState:(id)arg1 with:(long long)arg2 extraInfo:(id)arg3;	// IMP=0x001000000001e0db
- (void)retryTask:(id)arg1 retryUrl:(id)arg2 modified:(id)arg3 using:(id)arg4 with:(id)arg5;	// IMP=0x001000000001def0
- (id)currentConfig;	// IMP=0x001000000001decb
- (id)currentSession;	// IMP=0x001000000001dea3
- (void)sendNotification:(id)arg1 suffix:(id)arg2;	// IMP=0x001000000001de4a
- (void)sendNotification:(id)arg1;	// IMP=0x001000000001dd7b
- (void)registerXmlDownloadJob:(id)arg1 using:(id)arg2 with:(id)arg3 clientName:(id)arg4;	// IMP=0x001000000001d1bd
- (void)registerPmvDownloadJob:(id)arg1 using:(id)arg2 with:(id)arg3 clientName:(id)arg4;	// IMP=0x001000000001cdf0
- (void)registerAssetDownloadJob:(id)arg1 forThis:(id)arg2 withBase:(id)arg3 relativeTo:(id)arg4 startingAt:(id)arg5 withLength:(id)arg6 extractWith:(id)arg7 using:(id)arg8 with:(id)arg9 notify:(unsigned long long)arg10;	// IMP=0x001000000001c85b
- (_Bool)checkPmvDownloadIsSkipped:(id)arg1 connection:(id)arg2 with:(id)arg3;	// IMP=0x001000000001c7cb
- (_Bool)checkCatalogDownloadIsSkipped:(id)arg1 connection:(id)arg2 with:(id)arg3;	// IMP=0x001000000001c73b
- (_Bool)checkAssetDownloadIsSkipped:(id)arg1 connection:(id)arg2 with:(id)arg3;	// IMP=0x001000000001c6ab
- (_Bool)checkDownloadIsSyncing:(id)arg1 with:(id)arg2;	// IMP=0x001000000001c652
- (void)updateProgressIfRequired:(id)arg1 totalWritten:(long long)arg2 totalExpected:(long long)arg3 notify:(_Bool)arg4;	// IMP=0x001000000001c32d
- (void)startDownloadAndUpdateState:(id)arg1 for:(id)arg2 startingAt:(id)arg3 withLength:(id)arg4 extractWith:(id)arg5 modified:(id)arg6 options:(id)arg7 using:(id)arg8 with:(id)arg9 notify:(unsigned long long)arg10;	// IMP=0x001000000001bad3
- (void)assessDownloadCompletion:(id)arg1 originalUrl:(id)arg2 taskDescription:(id)arg3 taskId:(id)arg4 error:(id)arg5 moveFile:(_Bool)arg6 extractorExists:(_Bool)arg7;	// IMP=0x001000000001b8e7
- (void)addLiveServerRequest:(id)arg1 using:(id)arg2 with:(id)arg3 task:(id)arg4 options:(id)arg5;	// IMP=0x001000000001b764
- (void)startDownloadAndUpdateState:(id)arg1 for:(id)arg2 modified:(id)arg3 options:(id)arg4 using:(id)arg5 with:(id)arg6;	// IMP=0x001000000001b725
- (long long)massageXmlAndPersist:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4 postedDate:(id)arg5;	// IMP=0x001000000001b341
- (long long)massageXmlAndPersist:(id)arg1 catalogInfo:(id)arg2 descriptor:(id)arg3 assets:(id)arg4 transformations:(id)arg5 to:(id)arg6 postedDate:(id)arg7 receiptResults:(id *)arg8 assetSetId:(id)arg9 pallasUrl:(id)arg10;	// IMP=0x001000000001ad0b
- (void)applyTransformsAndCheckReceipts:(id)arg1 transformations:(id)arg2 assetType:(id)arg3 assets:(id)arg4 receiptResults:(id *)arg5;	// IMP=0x001000000001a6bd
- (void)applyTransforms:(id)arg1 toAssets:(id)arg2;	// IMP=0x001000000001a309
- (id)startDownloadTask:(id)arg1 downloadSize:(long long)arg2 for:(id)arg3 startingAt:(id)arg4 withLength:(id)arg5 extractWith:(id)arg6 options:(id)arg7 modified:(id)arg8 session:(id)arg9;	// IMP=0x001000000001a290
- (id)startDownloadTask:(id)arg1 downloadSize:(long long)arg2 for:(id)arg3 startingAt:(id)arg4 withLength:(id)arg5 extractWith:(id)arg6 options:(id)arg7 modified:(id)arg8 session:(id)arg9 isCachingServer:(_Bool)arg10;	// IMP=0x0010000000019d1a
- (void)getCurrentInflightDownloads:(CDUnknownBlockType)arg1;	// IMP=0x00100000000198bc
- (void)syncSplunkTasks;	// IMP=0x00100000000195fd
- (void)pallasRequestV2:(id)arg1 normalizedType:(id)arg2 options:(id)arg3 using:(id)arg4 with:(id)arg5 clientName:(id)arg6 then:(CDUnknownBlockType)arg7;	// IMP=0x0010000000017934
- (id)addSUOptions:(id)arg1 options:(id)arg2;	// IMP=0x00100000000174c9
- (id)newAssetAudience:(_Bool)arg1;	// IMP=0x00100000000173ae
- (void)checkSplunkStatus:(id)arg1 failureReason:(id)arg2 productVersion:(id)arg3 sessionId:(id)arg4 nonce:(id)arg5 url:(id)arg6 statusCode:(long long)arg7 assetAudience:(id)arg8 version:(id)arg9 receiptResults:(id)arg10 baseUrl:(id)arg11;	// IMP=0x0010000000016b28
- (id)newDefaultEventDictionary:(id)arg1 sessionId:(id)arg2 nonce:(id)arg3 url:(id)arg4 statusCode:(long long)arg5 assetAudience:(id)arg6 uuid:(id)arg7 assetType:(id)arg8 version:(id)arg9 receiptResults:(id)arg10 baseUrl:(id)arg11;	// IMP=0x0010000000016626
- (void)isDownloading:(id)arg1 then:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016171
- (void)cancelAllDownloading:(id)arg1 withPurpose:(id)arg2 includingAssets:(_Bool)arg3 includingCatalog:(_Bool)arg4 includingOther:(_Bool)arg5 clientName:(id)arg6 then:(CDUnknownBlockType)arg7;	// IMP=0x0010000000015ce4
- (void)allDownloading:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015aa3
- (void)queryNSUrlSessiondAndUpdateState;	// IMP=0x0010000000015264
- (void)updateStateAndNotifyIfRequired;	// IMP=0x00100000000151fe
- (void)sendDownloadResult:(id)arg1 with:(long long)arg2 extraInfo:(id)arg3;	// IMP=0x0010000000014f2b
- (void)sendDownloadCannotStartResult:(long long)arg1 connection:(id)arg2 requestMessage:(id)arg3;	// IMP=0x0010000000014ea1
- (void)configDownload:(id)arg1 clientName:(id)arg2 using:(id)arg3 with:(id)arg4;	// IMP=0x0010000000014a5b
- (void)sendEvents:(id)arg1 sessionId:(id)arg2;	// IMP=0x0010000000014617
- (_Bool)addInFailedJobs:(id)arg1 finalEvents:(id)arg2;	// IMP=0x001000000001407b
- (void)handleSplunkReportFinished:(id)arg1 result:(_Bool)arg2;	// IMP=0x0010000000013e76
- (void)initializeSessionsAsync;	// IMP=0x0010000000013b99
- (void)updateEstimateInfo:(double)arg1;	// IMP=0x00100000000138bf
- (void)startDownloadTimer;	// IMP=0x00100000000135cd
- (void)stopTimerIfNoDownloadsInProgress;	// IMP=0x001000000001355d
- (void)dealloc;	// IMP=0x001000000001345a
- (id)init;	// IMP=0x00100000000131f1

@end

