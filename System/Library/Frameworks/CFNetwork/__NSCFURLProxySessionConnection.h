//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLSessionDataDelegate-Protocol.h>
#import <CFNetwork/NSURLSessionDataDelegatePrivate-Protocol.h>
#import <CFNetwork/NSURLSessionDelegate_Internal-Protocol.h>
#import <CFNetwork/NSURLSessionTaskDelegatePrivate-Protocol.h>

@class NSArray, NSCachedURLResponse, NSString, NSURLRequest, NSURLSessionTask;

@interface __NSCFURLProxySessionConnection <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDelegate_Internal>
{
    NSURLSessionTask *_proxyTask;	// 64 = 0x40
    NSURLSessionTask *_cacheTask;	// 72 = 0x48
    _Bool _shouldCancelOnCacheTaskCompletion;	// 80 = 0x50
    _Bool _clientWantsCacheOnly;	// 81 = 0x51
    _Bool _completedLocalCacheLookup;	// 82 = 0x52
    _Bool _requestIsUncacheable;	// 83 = 0x53
    _Bool _handledNeedNewBodyStream;	// 84 = 0x54
    NSCachedURLResponse *_cachedResponseForConditionalRequest;	// 88 = 0x58
    NSURLRequest *_conditionalRequest;	// 96 = 0x60
    NSArray *_cachedResponseDataArray;	// 104 = 0x68
    NSString *_originalUploadFilePath;	// 112 = 0x70
}

- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000024f48f
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x000000000024f440
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x000000000024f424
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000024f394
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;	// IMP=0x000000000024f378
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000024f096
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x000000000024efa5
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x000000000024ef0f
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000024eef0
- (void)URLSession:(id)arg1 dataTask:(id)arg2 _didReceiveData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000024ee96
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000024ee22
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000024eab4
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x000000000024eaae
- (void)setIsDownload:(_Bool)arg1;	// IMP=0x000000000024eaa8
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x000000000024ea60
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x000000000024ea18
- (void)expectedProgressTargetChanged;	// IMP=0x000000000024e9d4
- (void)setPriorityHint:(float)arg1 incremental:(_Bool)arg2;	// IMP=0x000000000024e9ce
- (void)setPoolPriority:(long long)arg1;	// IMP=0x000000000024e986
- (void)resume;	// IMP=0x000000000024e942
- (void)suspend;	// IMP=0x000000000024e8fe
- (void)cancel;	// IMP=0x000000000024e8ba
- (void)dealloc;	// IMP=0x000000000024e82a
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x000000000024e54a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

