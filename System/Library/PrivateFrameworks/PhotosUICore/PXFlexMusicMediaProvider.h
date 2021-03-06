//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAudioAssetMediaProvider-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PXFlexMusicMediaProvider : NSObject <PXAudioAssetMediaProvider>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_queue_requestByID;	// 16 = 0x10
    NSMutableDictionary *_queue_requestIDsByAsset;	// 24 = 0x18
    NSMutableDictionary *_queue_downloaderByAsset;	// 32 = 0x20
    _Atomic int _requestIDCounter;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000000005fa8fa
- (void).cxx_destruct;	// IMP=0x00000000005fa5eb
- (void)_deliverResultForAsset:(id)arg1 preferredDuration:(CDStruct_1b6d18a9)arg2 error:(id)arg3 toHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000005fa2e9
- (void)_queue_handleDownloaderFinishedForAsset:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000005f9fd7
- (void)_handleDownloaderFinishedForAsset:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000005f9ee1
- (void)_queue_startDownloadIfNeededForRequest:(id)arg1;	// IMP=0x00000000005f9c7b
- (void)_queue_cancelRequest:(long long)arg1;	// IMP=0x00000000005f99cf
- (long long)_nextRequestID;	// IMP=0x00000000005f99bb
- (void)cancelRequest:(long long)arg1;	// IMP=0x00000000005f992d
- (long long)requestMediaForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005f95a2
- (id)initWithQOSClass:(unsigned int)arg1;	// IMP=0x00000000005f94f1
- (id)init;	// IMP=0x00000000005f94da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

