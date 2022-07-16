//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTaskDelegate-Protocol.h>

@class GEODataSessionTask, NSString, NSURL;
@protocol NSObject, OS_dispatch_queue;

@interface GEOResourceManifestDownloadTask : NSObject <GEODataSessionTaskDelegate>
{
    struct GEOOnce_s _started;	// 8 = 0x8
    struct GEOOnce_s _finished;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id <NSObject> _transaction;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
    NSString *_existingETag;	// 48 = 0x30
    GEODataSessionTask *_task;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 64 = 0x40
    CDUnknownBlockType _callback;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000fa5a08
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;	// IMP=0x0000000000fa55bc
- (void)_captureNetworkEventForTask:(id)arg1;	// IMP=0x0000000000fa54f2
- (void)_finishWithUpdatedManifest:(id)arg1 newETag:(id)arg2 isExistingManifestCurrent:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000fa52a6
- (void)cancel;	// IMP=0x0000000000fa51c5
- (void)startWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000fa4e75
- (id)initWithURL:(id)arg1 eTag:(id)arg2;	// IMP=0x0000000000fa4d98
- (id)init;	// IMP=0x0000000000fa4d6e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
