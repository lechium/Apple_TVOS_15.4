//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSProgressReporting-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSError, NSProgress, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionConfiguration, NSURLSessionTaskDependency, NSURLSessionTaskDependencyTree, NSURLSessionTaskHTTPAuthenticator, NSUUID, __CFN_TaskMetrics, __CFN_TransactionMetrics, __NSCFURLSessionDelegateWrapper;
@protocol NSURLSessionAppleIDContext, NSURLSessionTaskDelegate, OS_dispatch_queue, OS_nw_activity, OS_nw_endpoint, OS_voucher, SZExtractor, __NSURLSessionTaskGroupForConfiguration;

@interface NSURLSessionTask : NSObject <NSCopying, NSProgressReporting>
{
    NSProgress *_uploadProgress;	// 8 = 0x8
    NSProgress *_downloadProgress;	// 16 = 0x10
    struct __CFDictionary *_atsStateCache;	// 24 = 0x18
    struct os_unfair_lock_s _unfair_lock;	// 32 = 0x20
    _Bool _isInUpload;	// 36 = 0x24
    _Bool _undeterminedUploadProgressState;	// 37 = 0x25
    _Bool _undeterminedDownloadProgressState;	// 38 = 0x26
    _Bool _progressReportingFinished;	// 39 = 0x27
    _Bool _seenFirstResume;	// 40 = 0x28
    _Bool _shouldSkipPreferredClientCertificateLookup;	// 41 = 0x29
    _Bool _cacheOnly;	// 42 = 0x2a
    _Bool _preventsSystemHTTPProxyAuthentication;	// 43 = 0x2b
    _Bool _requiresSecureHTTPSProxyConnection;	// 44 = 0x2c
    _Bool _preventsAppSSO;	// 45 = 0x2d
    _Bool _appSSOFallback;	// 46 = 0x2e
    _Bool _appleIDContextRedirect;	// 47 = 0x2f
    _Bool _proxyHandshakePending;	// 48 = 0x30
    _Bool _shouldPipelineHTTP;	// 49 = 0x31
    _Bool _shouldUsePipelineHeuristics;	// 50 = 0x32
    _Bool _shouldSkipPipelineProbe;	// 51 = 0x33
    _Bool _shouldHandleCookies;	// 52 = 0x34
    _Bool _preventsIdleSystemSleep;	// 53 = 0x35
    _Bool _allowsCellular;	// 54 = 0x36
    _Bool _prohibitAuthUI;	// 55 = 0x37
    _Bool _strictContentLength;	// 56 = 0x38
    _Bool _connectionIsCellular;	// 57 = 0x39
    _Bool _connectionIsCompanionLink;	// 58 = 0x3a
    _Bool _allowsQUIC;	// 59 = 0x3b
    _Bool _extractorFinishedDecoding;	// 60 = 0x3c
    _Bool _extractorPreparedForExtraction;	// 61 = 0x3d
    _Bool _hasSZExtractor;	// 62 = 0x3e
    _Bool _doesSZExtractorConsumeExtractedData;	// 63 = 0x3f
    _Bool _authenticatorConfiguredViaTaskProperty;	// 64 = 0x40
    _Bool _isTopLevelNavigation;	// 65 = 0x41
    _Bool _disallowCellular;	// 66 = 0x42
    _Bool _assumesHTTP3Capable;	// 67 = 0x43
    _Bool _preconnect;	// 68 = 0x44
    _Bool _prefersIncrementalDeliveryAPIStorage;	// 69 = 0x45
    _Bool _isKnownTracker;	// 70 = 0x46
    _Bool _privacyProxyFailClosed;	// 71 = 0x47
    _Bool _callCompletionHandlerInline;	// 72 = 0x48
    unsigned short __TLSMinimumSupportedProtocolVersion;	// 74 = 0x4a
    unsigned short __TLSMaximumSupportedProtocolVersion;	// 76 = 0x4c
    unsigned short _TLSNegotiatedCipherSuite;	// 78 = 0x4e
    int _cookieAcceptPolicy;	// 80 = 0x50
    unsigned int _qos;	// 84 = 0x54
    unsigned int _powerAssertion;	// 88 = 0x58
    unsigned int _darkWakePowerAssertion;	// 92 = 0x5c
    int _allowsCellularOverride;	// 96 = 0x60
    int _allowsExpensiveOverride;	// 100 = 0x64
    int _allowsConstrainedOverride;	// 104 = 0x68
    int _networkServiceType;	// 108 = 0x6c
    float _priorityAPIStorage;	// 112 = 0x70
    unsigned long long _taskIdentifier;	// 120 = 0x78
    NSString *_taskDescription;	// 128 = 0x80
    NSString *_loggableDescription;	// 136 = 0x88
    NSURLRequest *_originalRequest;	// 144 = 0x90
    NSURLRequest *_currentRequest;	// 152 = 0x98
    NSURLResponse *_response;	// 160 = 0xa0
    long long _countOfBytesClientExpectsToSend;	// 168 = 0xa8
    long long _countOfBytesClientExpectsToReceive;	// 176 = 0xb0
    long long _countOfBytesReceived;	// 184 = 0xb8
    long long __countOfPendingBytesReceivedEncoded;	// 192 = 0xc0
    long long __countOfBytesReceivedEncoded;	// 200 = 0xc8
    long long _countOfBytesSent;	// 208 = 0xd0
    long long _countOfBytesExpectedToSend;	// 216 = 0xd8
    long long _countOfBytesExpectedToReceive;	// 224 = 0xe0
    long long _state;	// 232 = 0xe8
    NSError *_error;	// 240 = 0xf0
    double _startTime;	// 248 = 0xf8
    long long _priorityValue;	// 256 = 0x100
    double _loadingPriorityValue;	// 264 = 0x108
    __CFN_TransactionMetrics *_backgroundTransactionMetrics;	// 272 = 0x110
    NSString *_pathToDownloadTaskFile;	// 280 = 0x118
    struct _CFHSTSPolicy *_cfHSTS;	// 288 = 0x120
    const struct _CFURLCache *_cfCache;	// 296 = 0x128
    struct _CFURLCredentialStorage *_cfCreds;	// 304 = 0x130
    struct OpaqueCFHTTPCookieStorage *_cfCookies;	// 312 = 0x138
    unsigned long long _cachePolicy;	// 320 = 0x140
    double _timeoutInterval;	// 328 = 0x148
    double _timeoutIntervalForResource_ivar;	// 336 = 0x150
    NSDictionary *_proxySettings;	// 344 = 0x158
    NSDictionary *_sslSettings;	// 352 = 0x160
    NSArray *_contentDispositionFallbackArray;	// 360 = 0x168
    NSObject<OS_voucher> *_voucher;	// 368 = 0x170
    long long _suspensionThreshhold;	// 376 = 0x178
    unsigned long long _allowedProtocolTypes;	// 384 = 0x180
    long long _requestPriority;	// 392 = 0x188
    NSUUID *_uniqueIdentifier;	// 400 = 0x190
    NSString *_storagePartitionIdentifier;	// 408 = 0x198
    id _protocolForTask;	// 416 = 0x1a0
    NSURLSessionTaskHTTPAuthenticator *_authenticator;	// 424 = 0x1a8
    NSDictionary *_dependencyInfo_ivar;	// 432 = 0x1b0
    NSURLSessionTaskDependencyTree *_dependencyTree;	// 440 = 0x1b8
    NSURLSessionTaskDependency *_taskDependency;	// 448 = 0x1c0
    NSDictionary *_DuetActivityProperties;	// 456 = 0x1c8
    NSData *__TCPConnectionMetadata;	// 464 = 0x1d0
    NSDictionary *_trailers;	// 472 = 0x1d8
    long long _discretionaryOverride;	// 480 = 0x1e0
    id <SZExtractor> _extractor;	// 488 = 0x1e8
    id <NSURLSessionAppleIDContext> _appleIDContext;	// 496 = 0x1f0
    NSURL *_publishingURL;	// 504 = 0x1f8
    NSURL *_backgroundPublishingURL;	// 512 = 0x200
    NSString *_APSRelayTopic;	// 520 = 0x208
    NSURL *_siteForCookies;	// 528 = 0x210
    CDUnknownBlockType _httpConnectionInfoCompletionBlock;	// 536 = 0x218
    NSObject<OS_nw_endpoint> *_hostOverride;	// 544 = 0x220
    id <__NSURLSessionTaskGroupForConfiguration> __taskGroup;	// 552 = 0x228
    NSURLSessionConfiguration *_effectiveConfiguration;	// 560 = 0x230
    NSDate *earliestBeginDate;	// 568 = 0x238
    NSProgress *_progress;	// 576 = 0x240
    __CFN_TaskMetrics *_metrics;	// 584 = 0x248
    NSObject<OS_nw_activity> *_nw_activity;	// 592 = 0x250
    NSObject<OS_nw_activity> *_private_nw_activity;	// 600 = 0x258
    NSDictionary *_legacySocketStreamProperties;	// 608 = 0x260
    NSDictionary *_cachedSocketStreamProperties;	// 616 = 0x268
    long long _bytesPerSecondLimitValue;	// 624 = 0x270
    unsigned long long _expectedProgressTargetValue;	// 632 = 0x278
    long long _expectedWorkload;	// 640 = 0x280
    double _timeWindowDelay;	// 648 = 0x288
    double _timeWindowDuration;	// 656 = 0x290
    NSString *_boundInterfaceIdentifier;	// 664 = 0x298
    __NSCFURLSessionDelegateWrapper *_publicDelegateWrapper;	// 672 = 0x2a0
    __NSCFURLSessionDelegateWrapper *_internalDelegateWrapper;	// 680 = 0x2a8
    NSArray *_resolvedCNAMEChain;	// 688 = 0x2b0
    CDUnknownBlockType _cookieTransformCallback;	// 696 = 0x2b8
    unsigned long long _attribution;	// 704 = 0x2c0
    NSString *_trackerContext;	// 712 = 0x2c8
    NSData *_backtrace;	// 720 = 0x2d0
}

+ (id)new;	// IMP=0x000000000024bc3a
@property(nonatomic) _Bool _callCompletionHandlerInline; // @synthesize _callCompletionHandlerInline;
@property(retain, nonatomic) NSData *_backtrace; // @synthesize _backtrace;
@property _Bool _privacyProxyFailClosed; // @synthesize _privacyProxyFailClosed;
@property(copy) NSString *_trackerContext; // @synthesize _trackerContext;
@property _Bool _isKnownTracker; // @synthesize _isKnownTracker;
@property unsigned long long _attribution; // @synthesize _attribution;
@property(copy, nonatomic) CDUnknownBlockType _cookieTransformCallback; // @synthesize _cookieTransformCallback;
@property(readonly, nonatomic) NSArray *_resolvedCNAMEChain; // @synthesize _resolvedCNAMEChain;
@property _Bool _assumesHTTP3Capable; // @synthesize _assumesHTTP3Capable;
@property(copy) NSDictionary *_cachedSocketStreamProperties; // @synthesize _cachedSocketStreamProperties;
@property(retain) NSObject<OS_nw_activity> *_private_nw_activity; // @synthesize _private_nw_activity;
@property(retain) NSObject<OS_nw_activity> *_nw_activity; // @synthesize _nw_activity;
@property(retain) __CFN_TaskMetrics *_metrics; // @synthesize _metrics;
@property(copy) NSDate *earliestBeginDate; // @synthesize earliestBeginDate;
@property(copy, nonatomic) NSURLSessionConfiguration *_effectiveConfiguration; // @synthesize _effectiveConfiguration;
@property(readonly, retain) id <__NSURLSessionTaskGroupForConfiguration> _taskGroup; // @synthesize _taskGroup=__taskGroup;
@property(retain, nonatomic) NSObject<OS_nw_endpoint> *_hostOverride; // @synthesize _hostOverride;
@property(copy, nonatomic) CDUnknownBlockType _httpConnectionInfoCompletionBlock; // @synthesize _httpConnectionInfoCompletionBlock;
@property _Bool _isTopLevelNavigation; // @synthesize _isTopLevelNavigation;
@property(retain) NSURL *_siteForCookies; // @synthesize _siteForCookies;
@property(copy, nonatomic) NSString *_APSRelayTopic; // @synthesize _APSRelayTopic;
@property(retain, nonatomic) NSURL *_backgroundPublishingURL; // @synthesize _backgroundPublishingURL;
@property(retain, nonatomic) NSURL *_publishingURL; // @synthesize _publishingURL;
@property _Bool _authenticatorConfiguredViaTaskProperty; // @synthesize _authenticatorConfiguredViaTaskProperty;
@property(nonatomic) _Bool _doesSZExtractorConsumeExtractedData; // @synthesize _doesSZExtractorConsumeExtractedData;
@property(nonatomic) _Bool _hasSZExtractor; // @synthesize _hasSZExtractor;
@property _Bool _extractorPreparedForExtraction; // @synthesize _extractorPreparedForExtraction;
@property _Bool _extractorFinishedDecoding; // @synthesize _extractorFinishedDecoding;
@property(retain, nonatomic, setter=set_extractor:) id <SZExtractor> _extractor; // @synthesize _extractor;
@property(nonatomic) long long _discretionaryOverride; // @synthesize _discretionaryOverride;
@property(nonatomic) _Bool _allowsQUIC; // @synthesize _allowsQUIC;
@property(retain, nonatomic) NSDictionary *_trailers; // @synthesize _trailers;
@property(readonly) unsigned short _TLSNegotiatedCipherSuite; // @synthesize _TLSNegotiatedCipherSuite;
@property(copy) NSData *_TCPConnectionMetadata; // @synthesize _TCPConnectionMetadata=__TCPConnectionMetadata;
@property(copy) NSDictionary *_DuetActivityProperties; // @synthesize _DuetActivityProperties;
@property(retain, nonatomic) NSURLSessionTaskDependency *taskDependency; // @synthesize taskDependency=_taskDependency;
@property(retain, nonatomic) NSURLSessionTaskDependencyTree *dependencyTree; // @synthesize dependencyTree=_dependencyTree;
@property(retain, nonatomic) NSDictionary *_dependencyInfo; // @synthesize _dependencyInfo=_dependencyInfo_ivar;
@property(copy) NSURLSessionTaskHTTPAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(nonatomic) id _protocolForTask; // @synthesize _protocolForTask;
@property _Bool _connectionIsCompanionLink; // @synthesize _connectionIsCompanionLink;
@property(setter=_setConnectionIsCellular:) _Bool _connectionIsCellular; // @synthesize _connectionIsCellular;
@property unsigned int _darkWakePowerAssertion; // @synthesize _darkWakePowerAssertion;
@property unsigned int _powerAssertion; // @synthesize _powerAssertion;
@property(copy) NSString *_storagePartitionIdentifier; // @synthesize _storagePartitionIdentifier;
@property long long _requestPriority; // @synthesize _requestPriority;
@property unsigned long long _allowedProtocolTypes; // @synthesize _allowedProtocolTypes;
@property long long _suspensionThreshhold; // @synthesize _suspensionThreshhold;
@property _Bool _strictContentLength; // @synthesize _strictContentLength;
@property _Bool _prohibitAuthUI; // @synthesize _prohibitAuthUI;
@property(retain) NSObject<OS_voucher> *_voucher; // @synthesize _voucher;
@property(nonatomic) unsigned int _qos; // @synthesize _qos;
@property _Bool _allowsCellular; // @synthesize _allowsCellular;
@property(copy) NSArray *_contentDispositionFallbackArray; // @synthesize _contentDispositionFallbackArray;
@property _Bool _preventsIdleSystemSleep; // @synthesize _preventsIdleSystemSleep;
@property int _cookieAcceptPolicy; // @synthesize _cookieAcceptPolicy;
@property _Bool _shouldHandleCookies; // @synthesize _shouldHandleCookies;
@property _Bool _shouldSkipPipelineProbe; // @synthesize _shouldSkipPipelineProbe;
@property _Bool _shouldUsePipelineHeuristics; // @synthesize _shouldUsePipelineHeuristics;
@property _Bool _shouldPipelineHTTP; // @synthesize _shouldPipelineHTTP;
@property(copy) NSDictionary *_sslSettings; // @synthesize _sslSettings;
@property _Bool _proxyHandshakePending; // @synthesize _proxyHandshakePending;
@property(copy) NSDictionary *_proxySettings; // @synthesize _proxySettings;
@property double _timeoutInterval; // @synthesize _timeoutInterval;
@property unsigned long long _cachePolicy; // @synthesize _cachePolicy;
@property(retain) struct OpaqueCFHTTPCookieStorage *_cfCookies; // @synthesize _cfCookies;
@property(retain) struct _CFURLCredentialStorage *_cfCreds; // @synthesize _cfCreds;
@property(retain) const struct _CFURLCache *_cfCache; // @synthesize _cfCache;
@property(retain) struct _CFHSTSPolicy *_cfHSTS; // @synthesize _cfHSTS;
@property(copy) NSString *_pathToDownloadTaskFile; // @synthesize _pathToDownloadTaskFile;
@property _Bool _appleIDContextRedirect; // @synthesize _appleIDContextRedirect;
@property _Bool _appSSOFallback; // @synthesize _appSSOFallback;
@property _Bool _preventsAppSSO; // @synthesize _preventsAppSSO;
@property _Bool _requiresSecureHTTPSProxyConnection; // @synthesize _requiresSecureHTTPSProxyConnection;
@property _Bool _preventsSystemHTTPProxyAuthentication; // @synthesize _preventsSystemHTTPProxyAuthentication;
@property _Bool _cacheOnly; // @synthesize _cacheOnly;
@property _Bool _shouldSkipPreferredClientCertificateLookup; // @synthesize _shouldSkipPreferredClientCertificateLookup;
@property(retain) __CFN_TransactionMetrics *_backgroundTransactionMetrics; // @synthesize _backgroundTransactionMetrics;
@property double _loadingPriorityValue; // @synthesize _loadingPriorityValue;
@property long long _priorityValue; // @synthesize _priorityValue;
@property double startTime; // @synthesize startTime=_startTime;
@property(copy) NSError *error; // @synthesize error=_error;
@property long long state; // @synthesize state=_state;
@property long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property long long _countOfBytesReceivedEncoded; // @synthesize _countOfBytesReceivedEncoded=__countOfBytesReceivedEncoded;
@property long long _countOfPendingBytesReceivedEncoded; // @synthesize _countOfPendingBytesReceivedEncoded=__countOfPendingBytesReceivedEncoded;
@property long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property long long countOfBytesClientExpectsToReceive; // @synthesize countOfBytesClientExpectsToReceive=_countOfBytesClientExpectsToReceive;
@property long long countOfBytesClientExpectsToSend; // @synthesize countOfBytesClientExpectsToSend=_countOfBytesClientExpectsToSend;
@property(copy) NSURLResponse *response; // @synthesize response=_response;
@property(copy) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(copy) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(nonatomic) _Bool _preconnect; // @synthesize _preconnect;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000024a7bc
- (void)_finishProgressReporting;	// IMP=0x000000000024a6f8
- (void)_completeUploadProgress;	// IMP=0x000000000024a6c2
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
- (void)_consumePendingBytesReceivedEncoded;	// IMP=0x000000000024a10a
- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1;	// IMP=0x000000000024a0b6
- (id)_incompleteCurrentTaskTransactionMetrics;	// IMP=0x000000000024a059
- (id)_incompleteTaskMetrics;	// IMP=0x000000000024a019
- (void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse *)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000249c51
- (const struct __CFSet *)_getAuthenticatorStatusCodes;	// IMP=0x0000000000249c26
- (void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2;	// IMP=0x0000000000249bee
@property(copy, setter=_setAppleIDContext:) id <NSURLSessionAppleIDContext> _appleIDContext; // @synthesize _appleIDContext;
- (const struct __CFDictionary *)_copyATSState;	// IMP=0x0000000000249a33
@property(readonly, retain) NSURL *currentRequest_mainDocumentURL;
@property(readonly, retain) NSURL *currentRequest_URL;
- (void)_onSessionQueue_cleanupAndBreakCycles;	// IMP=0x000000000024991a
- (_Bool)shouldHandleCookiesAndSchemeIsAppropriate;	// IMP=0x00000000002498bf
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;	// IMP=0x00000000002498ad
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession *)arg1;	// IMP=0x0000000000249744
- (void)_setConnectionCacheKey:(void *)arg1;	// IMP=0x000000000024973e
- (void)_setSocketProperties:(struct __CFDictionary *)arg1 connectionProperties:(struct __CFDictionary *)arg2;	// IMP=0x000000000024965c
- (const struct XCredentialStorage *)_createXCredentialStorage;	// IMP=0x00000000002495ca
- (const struct XCookieStorage *)_createXCookieStorage;	// IMP=0x0000000000249530
- (void)_withXURLCache:(CDUnknownBlockType)arg1;	// IMP=0x000000000024947a
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;	// IMP=0x0000000000249403
- (void)_onqueue_releasePowerAsssertion;	// IMP=0x00000000002492cc
- (void)_releasePreventIdleSleepAssertionIfAppropriate;	// IMP=0x0000000000249273
- (void)_takePreventIdleSleepAssertionIfAppropriate;	// IMP=0x0000000000248f57
- (id)_timingData;	// IMP=0x0000000000248f22
- (const struct __CFDictionary *)_copySocketStreamProperties;	// IMP=0x0000000000247c02
- (long long)computeAdjustedPoolPriority;	// IMP=0x0000000000247ba5
@property(copy) NSDictionary *_legacySocketStreamProperties; // @synthesize _legacySocketStreamProperties;
@property(nonatomic) _Bool _keepDownloadTaskFile;
- (void)set_resolvedCNAMEChain:(id)arg1;	// IMP=0x0000000000247af8
@property int _networkServiceType; // @synthesize _networkServiceType;
@property int _allowsCellularOverride; // @synthesize _allowsCellularOverride;
@property int _allowsConstrainedOverride; // @synthesize _allowsConstrainedOverride;
@property int _allowsExpensiveOverride; // @synthesize _allowsExpensiveOverride;
@property _Bool _disallowCellular; // @synthesize _disallowCellular;
@property(copy) NSString *_boundInterfaceIdentifier; // @synthesize _boundInterfaceIdentifier;
- (void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1;	// IMP=0x000000000024799f
@property unsigned short _TLSMaximumSupportedProtocolVersion; // @synthesize _TLSMaximumSupportedProtocolVersion=__TLSMaximumSupportedProtocolVersion;
@property unsigned short _TLSMinimumSupportedProtocolVersion; // @synthesize _TLSMinimumSupportedProtocolVersion=__TLSMinimumSupportedProtocolVersion;
@property double _timeWindowDuration; // @synthesize _timeWindowDuration;
@property double _timeWindowDelay; // @synthesize _timeWindowDelay;
@property long long _expectedWorkload; // @synthesize _expectedWorkload;
- (void)updateCurrentRequest:(id)arg1;	// IMP=0x000000000024763d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000247632
@property double _loadingPriority;
@property long long _priority;
@property(nonatomic) unsigned long long _expectedProgressTarget; // @synthesize _expectedProgressTarget=_expectedProgressTargetValue;
@property long long _bytesPerSecondLimit; // @synthesize _bytesPerSecondLimit=_bytesPerSecondLimitValue;
- (void)_onqueue_adjustPriorityHint:(float)arg1 incremental:(_Bool)arg2;	// IMP=0x00000000002473d6
@property _Bool prefersIncrementalDelivery;
@property float priority;
@property(retain, nonatomic) id <NSURLSessionTaskDelegate> _internalDelegate;
@property(retain) id <NSURLSessionTaskDelegate> delegate;
@property(readonly, retain) NSObject<OS_dispatch_queue> *workQueue;
- (void)resume;	// IMP=0x0000000000246a5d
- (void)suspend;	// IMP=0x000000000024694d
- (void)cancel;	// IMP=0x000000000024686d
@property(readonly, nonatomic) NSString *_loggableDescription; // @synthesize _loggableDescription;
@property(copy) NSUUID *_uniqueIdentifier; // @synthesize _uniqueIdentifier;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *_description;
- (id)initWithTask:(id)arg1;	// IMP=0x00000000002458bd
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;	// IMP=0x0000000000245585
- (void)_onqueue_adoptEffectiveConfiguration:(id)arg1;	// IMP=0x00000000002454a8
@property double _timeoutIntervalForResource; // @synthesize _timeoutIntervalForResource=_timeoutIntervalForResource_ivar;
- (void)_didSendMetrics;	// IMP=0x0000000000245479
- (_Bool)_needSendingMetrics;	// IMP=0x0000000000245471
@property(readonly, nonatomic) _Bool _isAVAssetTask;
- (void)didReceiveInformationalResponse:(id)arg1;	// IMP=0x0000000000245463
- (void)_onqueue_expectedProgressTargetChanged;	// IMP=0x000000000024545d
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;	// IMP=0x0000000000245457
@property(readonly, retain) NSURLSession *session;
- (void)dealloc;	// IMP=0x00000000002450de
- (id)initWithTaskGroup:(id)arg1;	// IMP=0x0000000000245041
- (id)init;	// IMP=0x0000000000245001
- (void)_adoptEffectiveConfiguration:(id)arg1;	// IMP=0x000000000024cb74
- (void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000024cc48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
