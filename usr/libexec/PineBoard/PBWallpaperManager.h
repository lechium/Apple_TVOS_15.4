//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSystemOverlayController, PBWallpaperViewController;

@interface PBWallpaperManager : NSObject
{
    PBSystemOverlayController *_overlayController;	// 8 = 0x8
    PBWallpaperViewController *_wallpaperViewController;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000001bdae0
+ (id)dependencyDescription;	// IMP=0x00100000001bd940
- (void).cxx_destruct;	// IMP=0x00200000001be2f0
@property(readonly, nonatomic) PBWallpaperViewController *wallpaperViewController; // @synthesize wallpaperViewController=_wallpaperViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001be250
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)updateWallpaperWithTransitionContext:(id)arg1;	// IMP=0x00100000001be1c0
- (void)dismissWallpaperAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001be0b0
- (void)presentWallpaperAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bdf90
- (id)init;	// IMP=0x00100000001bdba0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
