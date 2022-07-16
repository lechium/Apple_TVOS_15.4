//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PLImageView, PLManagedAsset, PLVideoView;

@interface PLExpandableImageView
{
    PLImageView *_imageView;	// 208 = 0xd0
    int _imageID;	// 216 = 0xd8
    struct CGSize _originalSize;	// 224 = 0xe0
    double _originalWidth;	// 240 = 0xf0
    double _originalAngle;	// 248 = 0xf8
    struct CGPoint _anchorPoint;	// 256 = 0x100
    double _imageRotationAngle;	// 272 = 0x110
    double _pinchWidth;	// 280 = 0x118
    double _pinchAngle;	// 288 = 0x120
    double _pinchScale;	// 296 = 0x128
    struct CGRect _initialExpandingFrame;	// 304 = 0x130
    struct CGRect _originalBounds;	// 336 = 0x150
    float _currentAngle;	// 368 = 0x170
    struct CGSize _centerOffset;	// 376 = 0x178
    PLManagedAsset *_photo;	// 392 = 0x188
    struct {
        unsigned int isRotating:1;
        unsigned int didTrack:1;
        unsigned int updateFrame:1;
        unsigned int didLayout:1;
        unsigned int alwaysDoLayout:1;
        unsigned int didComputeCenterOffset:1;
        unsigned int imageIsFullScreen:1;
    } _exImageFlags;	// 400 = 0x190
}

+ (double)imageBorderWidth;	// IMP=0x000000000000f5d9
@property(retain, nonatomic) PLManagedAsset *photo; // @synthesize photo=_photo;
- (void)renderSnapshotInContext:(struct CGContext *)arg1;	// IMP=0x000000000000f4b9
- (void)setTextBadgeString:(id)arg1;	// IMP=0x000000000000f49c
- (_Bool)isBeingManipulated;	// IMP=0x000000000000f479
- (double)transitionProgress;	// IMP=0x000000000000f45c
- (void)setTransitionProgress:(double)arg1;	// IMP=0x000000000000f43f
- (_Bool)isShadowEnabled;	// IMP=0x000000000000f422
- (void)setShadowEnabled:(_Bool)arg1;	// IMP=0x000000000000f405
- (double)imageRotationAngle;	// IMP=0x000000000000f3f3
@property(retain, nonatomic) PLVideoView *videoView;
- (struct CGRect)frameOfImage;	// IMP=0x000000000000f2fa
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)imageView;	// IMP=0x000000000000f2b3
- (void)setShowsPlaceholder:(_Bool)arg1;	// IMP=0x000000000000f296
@property(readonly, nonatomic) _Bool showsPlaceholder;
@property(copy, nonatomic) NSString *name;
- (void)setFullSizeImageJPEGData:(id)arg1 size:(struct CGSize)arg2 orientation:(long long)arg3;	// IMP=0x000000000000f222
- (id)image;	// IMP=0x000000000000f205
- (void)setImage:(id)arg1;	// IMP=0x000000000000f1f1
- (void)setImage:(id)arg1 isFullscreen:(_Bool)arg2;	// IMP=0x000000000000f133
@property(nonatomic, getter=isBorderAndAccessoriesVisible) _Bool borderAndAccessoriesVisible;
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x000000000000f08f
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000000f015
- (id)_contentView;	// IMP=0x000000000000f00d
- (void)finishTransition;	// IMP=0x000000000000efc2
- (void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void *)arg3;	// IMP=0x000000000000eef1
- (void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void *)arg3;	// IMP=0x000000000000ed2f
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;	// IMP=0x000000000000e30f
- (void)setTransformAndCenterForFrame:(struct CGRect)arg1;	// IMP=0x000000000000e2a9
- (struct CGSize)_newSizeFromSize:(struct CGSize)arg1;	// IMP=0x000000000000e204
- (float)continueTrackingPinch:(id)arg1;	// IMP=0x000000000000dc2a
- (void)_updatePinchWidthAndScaleWithLeftPoint:(struct CGPoint)arg1 rightPoint:(struct CGPoint)arg2;	// IMP=0x000000000000dba3
- (void)_updateBorderAndAccessoriesAlpha;	// IMP=0x000000000000db54
- (float)_borderAlphaForExpansionFraction:(float)arg1;	// IMP=0x000000000000db23
- (void)setSize:(struct CGSize)arg1 angle:(float)arg2;	// IMP=0x000000000000d8d6
- (void)beginTrackingPinch:(id)arg1;	// IMP=0x000000000000d472
- (void)_setOriginalSize:(struct CGSize)arg1;	// IMP=0x000000000000d45a
- (void)stateDidChangeFrom:(int)arg1;	// IMP=0x000000000000d388
- (struct CGRect)_snappedExpandedFrame;	// IMP=0x000000000000d337
- (float)_expansionFraction;	// IMP=0x000000000000d103
- (float)_expandedScale;	// IMP=0x000000000000d084
- (float)_currentScale;	// IMP=0x000000000000cff9
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000000ceb9
- (void)layoutSubviews;	// IMP=0x000000000000cd45
- (void)dealloc;	// IMP=0x000000000000cced
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000ccd6
- (id)initWithFrame:(struct CGRect)arg1 frameStyle:(int)arg2;	// IMP=0x000000000000ccbf
- (id)initWithFrame:(struct CGRect)arg1 frameStyle:(int)arg2 withBorder:(_Bool)arg3;	// IMP=0x000000000000cbbe

@end

