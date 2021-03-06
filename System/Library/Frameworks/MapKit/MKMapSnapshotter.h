//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapSnapshotOptions, NSXPCConnection, VKMapSnapshotCreator, geo_isolater;
@protocol OS_dispatch_queue;

@interface MKMapSnapshotter : NSObject
{
    MKMapSnapshotOptions *_options;	// 8 = 0x8
    int _loadingFlag;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    geo_isolater *_isolation;	// 40 = 0x28
    NSXPCConnection *_snapshotService;	// 48 = 0x30
    VKMapSnapshotCreator *_snapshotCreator;	// 56 = 0x38
    _Bool _needsResume;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000023325b
- (void)cancel;	// IMP=0x00000000002331ca
- (void)_performSnapshot;	// IMP=0x0000000000231c04
- (void)_setupCustomFeaturesForAnnotationViewsIfNeeded;	// IMP=0x00000000002318e0
- (void)startWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002315f9
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002315ba
- (void)_deliverSnapshot:(id)arg1;	// IMP=0x00000000002310ca
- (void)_drawAppleLogoIfNecessaryOnSnapshot:(id)arg1;	// IMP=0x00000000002310b8
- (void)_succeedWithSnapshot:(id)arg1;	// IMP=0x0000000000230dac
- (void)_failWithError:(id)arg1;	// IMP=0x00000000002309d2
- (void)_cleanupSnapshotCreator;	// IMP=0x0000000000230988
- (void)_cancel;	// IMP=0x00000000002307e8
- (void)_exitBackground:(id)arg1;	// IMP=0x00000000002307b3
- (void)_enterBackground:(id)arg1;	// IMP=0x00000000002304d8
- (void)dealloc;	// IMP=0x000000000023031d
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000000230084
- (id)init;	// IMP=0x0000000000230070
@property(readonly, nonatomic, getter=isLoading) _Bool loading;

@end

