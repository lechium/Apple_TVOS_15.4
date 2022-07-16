//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>

@class NSArray, NSError, NSString, PXImageRequester, PXLoadingFailureBadgeView, PXRoundProgressView, PXUIMediaProvider, UIImage;
@protocol PXDisplayAsset;

@interface PXDisplayAssetUIView : UIView <PXReusableObject, PXChangeObserver>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    _Bool _displayLoadingIndicator;	// 32 = 0x20
    _Bool _isDisplayingFullQualityContent;	// 33 = 0x21
    _Bool _animatedContentEnabled;	// 34 = 0x22
    id <PXDisplayAsset> _asset;	// 40 = 0x28
    long long _playbackStyle;	// 48 = 0x30
    PXUIMediaProvider *_mediaProvider;	// 56 = 0x38
    NSArray *_placeholderImageFilters;	// 64 = 0x40
    double _placeholderTransitionDuration;	// 72 = 0x48
    NSError *_error;	// 80 = 0x50
    UIView *_contentView;	// 88 = 0x58
    UIImage *_image;	// 96 = 0x60
    PXImageRequester *_imageRequester;	// 104 = 0x68
    PXRoundProgressView *_progressView;	// 112 = 0x70
    PXLoadingFailureBadgeView *_failureView;	// 120 = 0x78
    double _imageProgress;	// 128 = 0x80
    double _loadingProgress;	// 136 = 0x88
    struct CGSize _targetSize;	// 144 = 0x90
    struct CGRect _contentBounds;	// 160 = 0xa0
    struct CGRect _contentsRect;	// 192 = 0xc0
}

+ (void)checkInView:(id)arg1;	// IMP=0x00000000002ca556
+ (id)checkOutViewForAsset:(id)arg1 withPlaybackStyle:(long long)arg2;	// IMP=0x00000000002ca4a8
+ (id)checkOutViewForAsset:(id)arg1;	// IMP=0x00000000002ca440
+ (id)viewPool;	// IMP=0x00000000002ca410
- (void).cxx_destruct;	// IMP=0x00000000002ca12f
@property(readonly, nonatomic) double loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(readonly, nonatomic) double imageProgress; // @synthesize imageProgress=_imageProgress;
@property(retain, nonatomic) PXLoadingFailureBadgeView *failureView; // @synthesize failureView=_failureView;
@property(retain, nonatomic) PXRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isAnimatedContentEnabled) _Bool animatedContentEnabled; // @synthesize animatedContentEnabled=_animatedContentEnabled;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool isDisplayingFullQualityContent; // @synthesize isDisplayingFullQualityContent=_isDisplayingFullQualityContent;
@property(nonatomic) _Bool displayLoadingIndicator; // @synthesize displayLoadingIndicator=_displayLoadingIndicator;
@property(nonatomic) double placeholderTransitionDuration; // @synthesize placeholderTransitionDuration=_placeholderTransitionDuration;
@property(copy, nonatomic) NSArray *placeholderImageFilters; // @synthesize placeholderImageFilters=_placeholderImageFilters;
@property(retain, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(retain, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (void)_loadContentView;	// IMP=0x00000000002c9eec
- (void)_updateFailureView;	// IMP=0x00000000002c9da4
- (void)_updateProgressView;	// IMP=0x00000000002c9c74
- (void)_updateTargetSize;	// IMP=0x00000000002c9bb2
- (void)_updateIfNeeded;	// IMP=0x00000000002c994c
- (void)updateContent;	// IMP=0x00000000002c9622
- (void)imageProgressDidChange;	// IMP=0x00000000002c961c
- (void)isDisplayingFullQualityContentDidChange;	// IMP=0x00000000002c960a
- (void)placeholderTransitionDurationDidChange;	// IMP=0x00000000002c9604
- (void)contentModeDidChange;	// IMP=0x00000000002c95fe
- (void)animatedContentEnabledDidChange;	// IMP=0x00000000002c95f8
- (void)contentsRectDidChange;	// IMP=0x00000000002c95f2
- (void)placeholderImageFiltersDidChange;	// IMP=0x00000000002c95ec
- (void)imageDidChange;	// IMP=0x00000000002c95e6
- (void)invalidateLoadingProgress;	// IMP=0x00000000002c94f2
- (void)setImageProgress:(double)arg1;	// IMP=0x00000000002c94b9
- (void)setNeedsUpdateContent;	// IMP=0x00000000002c8ec7
@property(readonly, nonatomic) struct CGRect currentContentsRect;
@property(readonly, nonatomic) UIImage *currentImage;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000002c8d85
- (void)prepareForReuse;	// IMP=0x00000000002c8d7f
- (void)becomeReusable;	// IMP=0x00000000002c8cf5
- (void)setContentMode:(long long)arg1;	// IMP=0x00000000002c8c6d
- (void)layoutSubviews;	// IMP=0x00000000002c8a1b
- (void)setNeedsLayout;	// IMP=0x00000000002c89ec
- (void)didMoveToWindow;	// IMP=0x00000000002c89ab
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002c88f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

