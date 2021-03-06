//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIFocusContainerGuide, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _TVListTemplateView : UIView
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    UIVisualEffectView *_bgVisualEffectView;	// 16 = 0x10
    double _bgVisualEffectOffset;	// 24 = 0x18
    UIFocusContainerGuide *_previewFocusGuide;	// 32 = 0x20
    UIFocusContainerGuide *_overallFocusGuide;	// 40 = 0x28
    _Bool _backdropEnabled;	// 48 = 0x30
    _Bool _floatingBanner;	// 49 = 0x31
    _Bool _shouldAdjustListForTabBar;	// 50 = 0x32
    _Bool _shouldAdjustPreviewForTabBar;	// 51 = 0x33
    UIView *_bgImageView;	// 56 = 0x38
    UIView *_bannerView;	// 64 = 0x40
    UIView *_listView;	// 72 = 0x48
    UIView *_previewView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000b9530
@property(nonatomic) _Bool shouldAdjustPreviewForTabBar; // @synthesize shouldAdjustPreviewForTabBar=_shouldAdjustPreviewForTabBar;
@property(nonatomic) _Bool shouldAdjustListForTabBar; // @synthesize shouldAdjustListForTabBar=_shouldAdjustListForTabBar;
@property(nonatomic) _Bool floatingBanner; // @synthesize floatingBanner=_floatingBanner;
@property(nonatomic, getter=isBackdropEnabled) _Bool backdropEnabled; // @synthesize backdropEnabled=_backdropEnabled;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void)layoutSubviews;	// IMP=0x00000000000b8515
@property(readonly, nonatomic) long long listAlignment;
- (void)adjustScrollForListView:(id)arg1;	// IMP=0x00000000000b8395
- (id)preferredFocusEnvironments;	// IMP=0x00000000000b831c
- (void)setOverlayBlurOffset:(double)arg1;	// IMP=0x00000000000b81b9
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000000b7c11
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b7b3e

@end

