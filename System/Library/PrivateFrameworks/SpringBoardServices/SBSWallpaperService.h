//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBSWallpaperClient;
@protocol OS_dispatch_queue;

@interface SBSWallpaperService : NSObject
{
    SBSWallpaperClient *_client;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    _Bool _wasInvalidated;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000018358
- (void)acquireActiveWallpaperSceneAssertionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018204
- (void)restoreDefaultWallpaperWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000181ee
- (_Bool)setWallpaperColor:(id)arg1 darkColor:(id)arg2 forVariants:(unsigned long long)arg3;	// IMP=0x00000000000181d8
- (_Bool)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2;	// IMP=0x00000000000181c2
- (_Bool)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(struct CGRect)arg2 wallpaperMode:(long long)arg3;	// IMP=0x00000000000181a9
- (void)fetchContentCutoutBoundsForVariant:(long long)arg1 orientation:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001802a
- (void)fetchOriginalVideoURLForVariant:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017e9d
- (void)fetchOriginalImageForVariant:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017d10
- (void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017b83
- (void)invalidate;	// IMP=0x0000000000017b5e
- (void)dealloc;	// IMP=0x0000000000017aab
- (id)init;	// IMP=0x0000000000017a22

@end
