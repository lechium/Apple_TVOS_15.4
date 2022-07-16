//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, UIVisualEffectView, UIWindow;

@interface VUIUserSwitchLoadingView : UIView
{
    _Bool _hiding;	// 8 = 0x8
    UIWindow *_userSwitchOverlayWindow;	// 16 = 0x10
    UIView *_userSwitchSnapshotView;	// 24 = 0x18
    UIVisualEffectView *_userSwitchEffectView;	// 32 = 0x20
    UILabel *_userSwitchLabel;	// 40 = 0x28
    UIActivityIndicatorView *_userSpinnerView;	// 48 = 0x30
}

+ (id)loadingScreen;	// IMP=0x00000000001b6418
- (void).cxx_destruct;	// IMP=0x00000000001b7a59
@property(nonatomic) _Bool hiding; // @synthesize hiding=_hiding;
@property(retain, nonatomic) UIActivityIndicatorView *userSpinnerView; // @synthesize userSpinnerView=_userSpinnerView;
@property(retain, nonatomic) UILabel *userSwitchLabel; // @synthesize userSwitchLabel=_userSwitchLabel;
@property(retain, nonatomic) UIVisualEffectView *userSwitchEffectView; // @synthesize userSwitchEffectView=_userSwitchEffectView;
@property(retain, nonatomic) UIView *userSwitchSnapshotView; // @synthesize userSwitchSnapshotView=_userSwitchSnapshotView;
@property(retain, nonatomic) UIWindow *userSwitchOverlayWindow; // @synthesize userSwitchOverlayWindow=_userSwitchOverlayWindow;
- (id)_textForUserSwitchState:(long long)arg1;	// IMP=0x00000000001b78e2
- (_Bool)isVisible;	// IMP=0x00000000001b78b9
- (void)hide;	// IMP=0x00000000001b73f9
- (void)_timeout;	// IMP=0x00000000001b73c2
- (void)showOverKeyWindowUserSwitchState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b64ee
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001b637d

@end

