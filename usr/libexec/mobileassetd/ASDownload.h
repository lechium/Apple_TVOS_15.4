//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASAssetRepository, MobileAssetReport, NSDictionary, NSString, NSURL, NSURLRequest;
@protocol ASDownloadDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ASDownload : NSObject
{
    struct __MobileAsset *_asset;	// 8 = 0x8
    NSURL *_remoteURL;	// 16 = 0x10
    NSURL *_archiveURL;	// 24 = 0x18
    NSURL *_assetURL;	// 32 = 0x20
    NSURL *_localCacheServerURL;	// 40 = 0x28
    NSDictionary *_downloadOptions;	// 48 = 0x30
    NSString *_currentOperationString;	// 56 = 0x38
    float _lastProgressUpdate;	// 64 = 0x40
    _Bool _checkedForLocalCache;	// 68 = 0x44
    _Bool _downloadDidEnd;	// 69 = 0x45
    _Bool _cancelled;	// 70 = 0x46
    _Bool _paused;	// 71 = 0x47
    MobileAssetReport *_report;	// 72 = 0x48
    NSObject<OS_dispatch_semaphore> *_pauseSemaphore;	// 80 = 0x50
    id <ASDownloadDelegate> _delegate;	// 88 = 0x58
    CDUnknownBlockType _progressHandler;	// 96 = 0x60
    CDUnknownBlockType _pauseCompletion;	// 104 = 0x68
    CDUnknownBlockType _resumeCompletion;	// 112 = 0x70
    CDUnknownBlockType _cancelCompletion;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_queue;	// 128 = 0x80
    _Bool downloadDidEnd;	// 136 = 0x88
    _Bool _isPreinstalled;	// 137 = 0x89
    _Bool _isAutoUpdate;	// 138 = 0x8a
    _Bool _isBackgrounded;	// 139 = 0x8b
    _Bool _nowServingDidFail;	// 140 = 0x8c
    _Bool _didUseNowServing;	// 141 = 0x8d
    ASAssetRepository *_assetRepository;	// 144 = 0x90
    NSURLRequest *_lastNowServingRequest;	// 152 = 0x98
}

+ (id)downloadWithAsset:(struct __MobileAsset *)arg1 downloadDelegate:(id)arg2 assetRepository:(id)arg3;	// IMP=0x0020000000023754
+ (id)downloadWithAsset:(struct __MobileAsset *)arg1 downloadOptions:(id)arg2 downloadDelegate:(id)arg3 assetRepository:(id)arg4;	// IMP=0x0010000000023708
+ (id)downloadsDict;	// IMP=0x00100000000236c3
+ (id)downloadsDictQueue;	// IMP=0x001000000002367c
+ (void)setContentCacheURLs:(id)arg1;	// IMP=0x00100000000235ea
@property(retain, nonatomic) NSURLRequest *lastNowServingRequest; // @synthesize lastNowServingRequest=_lastNowServingRequest;
@property(nonatomic) _Bool didUseNowServing; // @synthesize didUseNowServing=_didUseNowServing;
@property(nonatomic) _Bool nowServingDidFail; // @synthesize nowServingDidFail=_nowServingDidFail;
@property(nonatomic) _Bool isBackgrounded; // @synthesize isBackgrounded=_isBackgrounded;
@property(retain, nonatomic) ASAssetRepository *assetRepository; // @synthesize assetRepository=_assetRepository;
@property(nonatomic) _Bool isAutoUpdate; // @synthesize isAutoUpdate=_isAutoUpdate;
@property(nonatomic) _Bool isPreinstalled; // @synthesize isPreinstalled=_isPreinstalled;
@property(retain, nonatomic) NSString *currentOperationString; // @synthesize currentOperationString=_currentOperationString;
@property(retain, nonatomic) NSDictionary *downloadOptions; // @synthesize downloadOptions=_downloadOptions;
@property(copy, nonatomic) CDUnknownBlockType cancelCompletion; // @synthesize cancelCompletion=_cancelCompletion;
@property(copy, nonatomic) CDUnknownBlockType resumeCompletion; // @synthesize resumeCompletion=_resumeCompletion;
@property(copy, nonatomic) CDUnknownBlockType pauseCompletion; // @synthesize pauseCompletion=_pauseCompletion;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) NSURL *localCacheServerURL; // @synthesize localCacheServerURL=_localCacheServerURL;
@property(readonly, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(readonly, nonatomic) NSURL *archiveURL; // @synthesize archiveURL=_archiveURL;
@property(retain, nonatomic) id <ASDownloadDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct __MobileAsset *mobileAsset; // @synthesize mobileAsset=_asset;
@property(nonatomic) _Bool downloadDidEnd; // @synthesize downloadDidEnd;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
// Error: Property attributes should begin with the type ('T') attribute, property name: cancelled
// Property attributes: (null)

- (_Bool)isCancelled;	// IMP=0x0010000000028d10
- (id)downloadRequestForURL:(id)arg1 useQueuingService:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000028945
@property(readonly, nonatomic, getter=isStalled) _Bool stalled;
- (void)usePreinstalledAssetArchive:(id)arg1;	// IMP=0x00100000000287cf
- (void)logDownload:(_Bool)arg1;	// IMP=0x0010000000028748
- (int)verifyArchiveHash;	// IMP=0x001000000002842a
- (void)notifyResumeClients:(int)arg1;	// IMP=0x00100000000283b6
- (void)notifyPauseClients:(int)arg1;	// IMP=0x00100000000282c3
- (void)notifyCancelClients:(int)arg1;	// IMP=0x001000000002826e
- (_Bool)verifyFreeDiskSpace:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000002810a
- (void)fireErrorWithError:(id)arg1;	// IMP=0x0010000000027fe7
- (void)fireErrorInDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;	// IMP=0x0010000000027faf
- (void)fireProgressWithOperation:(id)arg1 progress:(float)arg2 callbackState:(id)arg3;	// IMP=0x0010000000027eae
- (void)resetProgressWithOperation:(id)arg1;	// IMP=0x0010000000027e8a
- (void)downloadDidFail:(id)arg1;	// IMP=0x0010000000027db7
- (void)_downloadDidFail:(id)arg1;	// IMP=0x0010000000027a5b
- (void)_retryDownloadWithoutNowServing;	// IMP=0x001000000002785a
- (void)_retryDownloadAfterInterval:(id)arg1 withQueueToken:(id)arg2;	// IMP=0x001000000002763d
- (void)downloadDidFinish;	// IMP=0x00100000000266d0
- (void)cancel:(CDUnknownBlockType)arg1;	// IMP=0x0010000000026661
- (void)_cancel:(CDUnknownBlockType)arg1;	// IMP=0x0010000000026210
- (void)cancellationDidFinish:(int)arg1;	// IMP=0x00100000000261f9
- (void)resume:(CDUnknownBlockType)arg1;	// IMP=0x001000000002618a
- (void)_resume:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025e42
- (void)resumeDidFinish:(int)arg1;	// IMP=0x0010000000025c75
- (void)waitForUnpause;	// IMP=0x0010000000025bae
- (void)pause:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025b3f
- (void)_pause:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025813
- (void)pauseDidFinish:(int)arg1;	// IMP=0x0010000000025646
- (int)resumeAfterDownload;	// IMP=0x00100000000255de
- (void)stopObservingDownload;	// IMP=0x00100000000254bf
- (void)updateOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002518e
- (void)_saveDownloadOptions;	// IMP=0x001000000002503d
- (void)startBackgroundedDownload:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024e4a
- (void)_startDownload:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024392
- (void)_handleFileURLDownload;	// IMP=0x00100000000241b1
- (void)startDownload:(CDUnknownBlockType)arg1;	// IMP=0x001000000002412c
- (int)populateURLs;	// IMP=0x0010000000024078
- (void)_populatelocalCacheServerURL;	// IMP=0x0010000000023dca
@property(readonly, nonatomic) NSDictionary *assetAttributes;
- (id)assetType;	// IMP=0x0010000000023d94
@property(readonly, nonatomic) _Bool useStreamingZip;
- (_Bool)boolDownloadOption:(id)arg1 default:(_Bool)arg2;	// IMP=0x0010000000023c81
- (id)downloadOption:(id)arg1;	// IMP=0x0010000000023c16
- (void)setDownloadOptionsOnQueue:(id)arg1;	// IMP=0x0010000000023ba7
- (void)dealloc;	// IMP=0x0010000000023a51
- (id)initWithAsset:(struct __MobileAsset *)arg1 downloadDelegate:(id)arg2 assetRepository:(id)arg3;	// IMP=0x0010000000023982

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

