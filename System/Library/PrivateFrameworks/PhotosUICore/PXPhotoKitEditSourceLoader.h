//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXEditSourceLoader-Protocol.h>

@class NSDate, NSError, NSNumber, NSProgress, NSString, PHAsset, PLEditSource;
@protocol OS_dispatch_queue;

@interface PXPhotoKitEditSourceLoader : NSObject <PXEditSourceLoader>
{
    unsigned long long _loadingQueue_imageRequestID;	// 8 = 0x8
    NSDate *_mainQueue_loadingStartDate;	// 16 = 0x10
    NSProgress *_editSourceCreationProgress;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_loadingQueue;	// 32 = 0x20
    _Bool _overcaptureSourceIsActive;	// 40 = 0x28
    PLEditSource *_editSource;	// 48 = 0x30
    PLEditSource *_overcaptureEditSource;	// 56 = 0x38
    NSProgress *_progress;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
    long long _baseVersion;	// 80 = 0x50
    NSNumber *_loadDuration;	// 88 = 0x58
    NSString *_livePhotoPairingIdentifier;	// 96 = 0x60
    PHAsset *_asset;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001bbde0
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier; // @synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier;
@property(readonly, nonatomic) NSNumber *loadDuration; // @synthesize loadDuration=_loadDuration;
@property(readonly, nonatomic) long long baseVersion; // @synthesize baseVersion=_baseVersion;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) PLEditSource *overcaptureEditSource; // @synthesize overcaptureEditSource=_overcaptureEditSource;
@property(readonly, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property(readonly, nonatomic) PLEditSource *activeEditSource;
- (void)_handleContentEditingInputRequestCompletion:(id)arg1 info:(id)arg2 asset:(id)arg3;	// IMP=0x00000000001bbd56
- (void)_cancelContentInputRequest;	// IMP=0x00000000001bbd09
- (void)_resetProgress;	// IMP=0x00000000001bbc33
- (void)_handleCancellation;	// IMP=0x00000000001bbb49
- (void)beginLoading;	// IMP=0x00000000001bba3f
@property(readonly, copy, nonatomic) NSString *contentIdentifier;
- (id)initWithAsset:(id)arg1;	// IMP=0x00000000001bb881

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
