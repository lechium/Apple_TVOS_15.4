//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSProgressReporting-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSProgress, NSString, PXExpectation, PXFlexMusicAsset;
@protocol OS_dispatch_queue;

@interface PXFlexMusicDownloader : NSObject <PXChangeObserver, NSProgressReporting>
{
    CDUnknownBlockType _queue_completionHandler;	// 8 = 0x8
    _Bool _queue_isFinished;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    PXExpectation *_queue_downloadExpectation;	// 32 = 0x20
    long long _downloadSignpostID;	// 40 = 0x28
    NSProgress *_progress;	// 48 = 0x30
    PXFlexMusicAsset *_asset;	// 56 = 0x38
    long long _resource;	// 64 = 0x40
    double _downloadFractionCompleted;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000405a7e
@property(nonatomic) double downloadFractionCompleted; // @synthesize downloadFractionCompleted=_downloadFractionCompleted;
@property(readonly, nonatomic) long long resource; // @synthesize resource=_resource;
@property(readonly, nonatomic) PXFlexMusicAsset *asset; // @synthesize asset=_asset;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
- (void)_queue_handleDownloadFinished:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000040561d
- (void)_queue_finishIfPossible;	// IMP=0x00000000004054e0
- (void)_handleCancellation;	// IMP=0x0000000000405495
- (void)_queue_handleDownloadProgressChanged;	// IMP=0x00000000004052c6
- (void)_queue_startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000040521c
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000405086
- (void)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000404f4b
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000404dfd
- (id)initWithAsset:(id)arg1 resource:(long long)arg2;	// IMP=0x0000000000404bf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

