//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVAsset, AVVideoComposition, CAShapeLayer, NSObject, UIImageView, _PXLivePhotoTrimScrubberLoupeViewImageRequest;
@protocol OS_dispatch_queue;

@interface PXLivePhotoTrimScrubberLoupeView : UIView
{
    UIView *_container;	// 8 = 0x8
    CAShapeLayer *_maskLayer;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    _Bool _imageIsValid;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    _PXLivePhotoTrimScrubberLoupeViewImageRequest *_currentImageRequest;	// 48 = 0x30
    CDStruct_1b6d18a9 _frameTime;	// 56 = 0x38
    CAShapeLayer *_borderLayer;	// 80 = 0x50
    _Bool _playheadIsValid;	// 88 = 0x58
    double _needleWidth;	// 96 = 0x60
    unsigned long long _playheadStyle;	// 104 = 0x68
    AVAsset *_asset;	// 112 = 0x70
    AVVideoComposition *_videoComposition;	// 120 = 0x78
    double _aspectRatio;	// 128 = 0x80
    UIView *_playerView;	// 136 = 0x88
    double _verticalInset;	// 144 = 0x90
    double _outerCornerRadius;	// 152 = 0x98
    double _innerCornerRadius;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000711b4a
@property(nonatomic) double innerCornerRadius; // @synthesize innerCornerRadius=_innerCornerRadius;
@property(nonatomic) double outerCornerRadius; // @synthesize outerCornerRadius=_outerCornerRadius;
@property(nonatomic) double verticalInset; // @synthesize verticalInset=_verticalInset;
@property(nonatomic) CDStruct_1b6d18a9 frameTime; // @synthesize frameTime=_frameTime;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) unsigned long long playheadStyle; // @synthesize playheadStyle=_playheadStyle;
- (void)_updatePlayheadBorderAnimate:(_Bool)arg1;	// IMP=0x00000000007110c3
- (void)_updatePlayheadIfNeeded;	// IMP=0x000000000071109c
- (void)_invalidatePlayhead;	// IMP=0x000000000071107f
- (id)_transitionPathForBounds:(struct CGRect)arg1 needsCutout:(_Bool)arg2;	// IMP=0x0000000000710f4a
- (id)_expandedPathForBounds:(struct CGRect)arg1 needsCutout:(_Bool)arg2;	// IMP=0x0000000000710e1a
- (id)_collapsedPathForBounds:(struct CGRect)arg1;	// IMP=0x0000000000710d98
- (void)_presentImage:(id)arg1;	// IMP=0x0000000000710b8a
- (void)_extractImageFromImageRequest:(id)arg1;	// IMP=0x00000000007107dc
- (void)_updateImageIfNeeded;	// IMP=0x00000000007104b1
- (void)_invalidateImage;	// IMP=0x0000000000710484
- (struct CGRect)_loupeFrameWithBounds:(struct CGRect)arg1;	// IMP=0x0000000000710313
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000007100fd
- (void)setAsset:(id)arg1 videoComposition:(id)arg2;	// IMP=0x000000000071000c
- (void)_setPlayheadStyle:(unsigned long long)arg1 animate:(_Bool)arg2;	// IMP=0x000000000070ff99
- (void)setShowLoupePlayerAnimate:(_Bool)arg1;	// IMP=0x000000000070ff6f
- (void)setShowLoupeThumbnailWithFrameTime:(CDStruct_1b6d18a9)arg1 animate:(_Bool)arg2;	// IMP=0x000000000070fed5
- (void)setShowNeedleWithWidth:(double)arg1 animate:(_Bool)arg2;	// IMP=0x000000000070fe92
- (void)setShowPlayerView:(_Bool)arg1;	// IMP=0x000000000070fe1f
- (_Bool)showPlayerView;	// IMP=0x000000000070fe02
- (void)layoutSubviews;	// IMP=0x000000000070fdac
- (void)_PXLivePhotoTrimScrubberLoupeView_commonInit;	// IMP=0x000000000070fa5b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000070fa0f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000070f9b2

@end

