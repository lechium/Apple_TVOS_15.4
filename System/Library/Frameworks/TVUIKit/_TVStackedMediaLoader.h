//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVUIKit/_TVStackedVideoAssetLoaderDelegate-Protocol.h>

@class NSArray, NSString, _TVStackedMediaDocument;
@protocol _TVStackedMediaLoaderDelegate;

__attribute__((visibility("hidden")))
@interface _TVStackedMediaLoader : NSObject <_TVStackedVideoAssetLoaderDelegate>
{
    long long _state;	// 8 = 0x8
    id <_TVStackedMediaLoaderDelegate> _delegate;	// 16 = 0x10
    _TVStackedMediaDocument *_document;	// 24 = 0x18
    NSArray *_videoLoaders;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002b5f9
@property(retain, nonatomic) NSArray *videoLoaders; // @synthesize videoLoaders=_videoLoaders;
@property(retain, nonatomic) _TVStackedMediaDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak id <_TVStackedMediaLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)_prettyState:(long long)arg1;	// IMP=0x000000000002b530
- (id)_prettyEvent:(long long)arg1;	// IMP=0x000000000002b4ce
- (void)stackedVideoAssetLoader:(id)arg1 completedWithSuccess:(_Bool)arg2 playerLayer:(id)arg3 error:(id)arg4 forEntry:(id)arg5;	// IMP=0x000000000002b3a4
- (void)_transitionPreviewToVideo;	// IMP=0x000000000002b358
- (void)_transitionVideoToPreview;	// IMP=0x000000000002b30c
- (void)_releaseVideoLoaders;	// IMP=0x000000000002b2f8
- (_Bool)_allLoadersHaveLoaded;	// IMP=0x000000000002b171
- (void)_cancelVideoLoaders;	// IMP=0x000000000002afee
- (_Bool)_loadVideoAssets;	// IMP=0x000000000002ae37
- (void)_createVideoLoaders;	// IMP=0x000000000002ab0c
- (void)_handleEventPreviewToVideoTransitionCompleted;	// IMP=0x000000000002a9eb
- (void)_handleEventVideoToPreviewTransitionCompleted;	// IMP=0x000000000002a8e6
- (void)_handleEventBecomeInactive;	// IMP=0x000000000002a83e
- (void)_handleEventBecomeActive;	// IMP=0x000000000002a7c4
- (void)_handleEventVideoAssetFailed;	// IMP=0x000000000002a6d4
- (void)_handleEventVideoAssetLoaded;	// IMP=0x000000000002a59e
- (void)_processEvent:(long long)arg1;	// IMP=0x000000000002a52c
- (void)_becomeActive;	// IMP=0x000000000002a515
- (void)videoToPreviewTransitionCompleted;	// IMP=0x000000000002a4fe
- (void)previewToVideoTransitionCompleted;	// IMP=0x000000000002a4e7
- (void)becomeInactive;	// IMP=0x000000000002a49f
- (void)becomeActive;	// IMP=0x000000000002a47c
- (void)dealloc;	// IMP=0x000000000002a43e
- (id)initWithDocument:(id)arg1;	// IMP=0x000000000002a3ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

