//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/NSURLSessionDelegate-Protocol.h>

@class NSOperationQueue, NSString, NSURLCache, NSURLSession;

@interface ResourceLoader : NSObject <NSURLSessionDelegate>
{
    NSOperationQueue *_queue;	// 8 = 0x8
    NSURLSession *_session;	// 16 = 0x10
    NSURLCache *_urlCache;	// 24 = 0x18
}

+ (id)_localDateFormatter;	// IMP=0x0000000000058860
+ (id)_rfc1123DateFormatter;	// IMP=0x00000000000587b0
- (void).cxx_destruct;	// IMP=0x0000000000059758
@property(retain, nonatomic) NSURLCache *urlCache; // @synthesize urlCache=_urlCache;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (double)_simulatedLatency;	// IMP=0x0000000000059660
- (void)flushCache;	// IMP=0x0000000000059623
- (void)asynchronousDataFromURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059138
- (void)refreshCacheForRequest:(id)arg1 usingCachedResponse:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000058af5
- (id)init;	// IMP=0x000000000005891d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

