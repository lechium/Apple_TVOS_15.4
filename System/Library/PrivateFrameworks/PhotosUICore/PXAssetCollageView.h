//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSMutableIndexSet, PXLayoutPerformerOutput, PXRoundedCornerOverlayView, PXUIMediaProvider, UIColor;

@interface PXAssetCollageView : UIView
{
    _Bool _allowVideoPlayback;	// 8 = 0x8
    _Bool _allowLoopPlayback;	// 9 = 0x9
    _Bool _allowAnimatedImagePlayback;	// 10 = 0xa
    PXUIMediaProvider *_mediaProvider;	// 16 = 0x10
    double _spacing;	// 24 = 0x18
    double _cornerRadius;	// 32 = 0x20
    UIColor *_cornerBackgroundColor;	// 40 = 0x28
    NSMutableDictionary *_assets;	// 48 = 0x30
    NSMutableDictionary *_assetViews;	// 56 = 0x38
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;	// 64 = 0x40
    NSMutableIndexSet *_hiddenItemIndexes;	// 72 = 0x48
    PXLayoutPerformerOutput *_layoutOutput;	// 80 = 0x50
}

+ (long long)maximumNumberOfItems;	// IMP=0x000000000081aab7
- (void).cxx_destruct;	// IMP=0x000000000081a873
@property(readonly, nonatomic) PXLayoutPerformerOutput *layoutOutput; // @synthesize layoutOutput=_layoutOutput;
@property(readonly, nonatomic) NSMutableIndexSet *hiddenItemIndexes; // @synthesize hiddenItemIndexes=_hiddenItemIndexes;
@property(readonly, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView; // @synthesize roundedCornerOverlayView=_roundedCornerOverlayView;
@property(readonly, nonatomic) NSMutableDictionary *assetViews; // @synthesize assetViews=_assetViews;
@property(readonly, nonatomic) NSMutableDictionary *assets; // @synthesize assets=_assets;
@property(nonatomic) _Bool allowAnimatedImagePlayback; // @synthesize allowAnimatedImagePlayback=_allowAnimatedImagePlayback;
@property(nonatomic) _Bool allowLoopPlayback; // @synthesize allowLoopPlayback=_allowLoopPlayback;
@property(nonatomic) _Bool allowVideoPlayback; // @synthesize allowVideoPlayback=_allowVideoPlayback;
@property(retain, nonatomic) UIColor *cornerBackgroundColor; // @synthesize cornerBackgroundColor=_cornerBackgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
- (void)_updateRoundedCornerOverlayView;	// IMP=0x000000000081a63f
- (void)_removeAllAssetViews;	// IMP=0x000000000081a50a
- (void)_removeAssetView:(id)arg1;	// IMP=0x000000000081a4a6
- (double)_firstAssetAspectRatio;	// IMP=0x000000000081a3d3
- (id)_displayAssetViewWithIndex:(long long)arg1;	// IMP=0x000000000081a25d
- (id)_displayAssetViews;	// IMP=0x000000000081a20d
- (void)_updateAssetViewsAnimatedContentEnabled;	// IMP=0x000000000081a037
- (id)_checkoutAndConfigureAssetViewForAsset:(id)arg1 withIndex:(long long)arg2;	// IMP=0x0000000000819eb2
- (void)_updateHiddenViews;	// IMP=0x0000000000819df0
- (void)resetViewState;	// IMP=0x0000000000819d37
- (id)displayAssetViewAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000819b6b
- (id)displayAssetViewWithAsset:(id)arg1;	// IMP=0x0000000000819963
- (void)setHidden:(_Bool)arg1 forItemAtIndex:(long long)arg2;	// IMP=0x00000000008198e9
- (void)setAsset:(id)arg1 forItemAtIndex:(long long)arg2;	// IMP=0x00000000008195ab
@property(readonly, nonatomic) long long numberOfItems;
- (void)layoutSubviews;	// IMP=0x0000000000819224
@property(readonly, nonatomic) _Bool portraitBias;
- (id)initWithFrame:(struct CGRect)arg1 mediaProvider:(id)arg2;	// IMP=0x0000000000818f2d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000818eaa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000818e30

@end

