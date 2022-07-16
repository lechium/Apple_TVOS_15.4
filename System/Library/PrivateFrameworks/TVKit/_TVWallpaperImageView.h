//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class NSArray, UIView, _TVWallpaperProxy;

@interface _TVWallpaperImageView : UIImageView
{
    long long _variant;	// 8 = 0x8
    NSArray *_userInterfaceStyles;	// 16 = 0x10
    long long _currentUserInterfaceStyle;	// 24 = 0x18
    _TVWallpaperProxy *_wallpaperProxy;	// 32 = 0x20
    UIView *_noiseView;	// 40 = 0x28
    UIView *_overlayView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000004d19
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) UIView *noiseView; // @synthesize noiseView=_noiseView;
@property(readonly, nonatomic) _TVWallpaperProxy *wallpaperProxy; // @synthesize wallpaperProxy=_wallpaperProxy;
@property(readonly, nonatomic) long long currentUserInterfaceStyle; // @synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle;
@property(readonly, copy, nonatomic) NSArray *userInterfaceStyles; // @synthesize userInterfaceStyles=_userInterfaceStyles;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
- (void)_updateWallpaperForReducedTransparency:(_Bool)arg1;	// IMP=0x0000000000004b92
- (void)_updateWallpaperImageAnimated:(_Bool)arg1;	// IMP=0x00000000000049c3
- (void)reducedTransparencyDidChange:(id)arg1;	// IMP=0x00000000000049ac
- (void)updateWallpaperImage:(id)arg1;	// IMP=0x0000000000004998
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000047e8
- (void)dealloc;	// IMP=0x0000000000004742
- (id)initWithFrame:(struct CGRect)arg1 variant:(long long)arg2 userInterfaceStyles:(id)arg3;	// IMP=0x00000000000044d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000044c2

@end

