//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVUIKit/_TVStackedMediaLoaderDelegate-Protocol.h>

@class NSMutableArray, NSString, UIImage, UIImageView, UIMotionEffectGroup, UIViewPropertyAnimator, _TVStackedMediaDocument, _TVStackedMediaLoader, _TVStackedMediaViewGimballingConfiguration;
@protocol _TVStackedMediaViewDelegate;

@interface _TVStackedMediaView : UIView <_TVStackedMediaLoaderDelegate>
{
    struct {
        unsigned int delegateWasNonNil:1;
        unsigned int delegateFailedToLoadVideoAtPath:1;
        unsigned int delegateFailedToLoadPreviewAssetAtPath:1;
    } _stackedMediaViewFlags;	// 8 = 0x8
    _Bool _active;	// 12 = 0xc
    _Bool _appearsHighlighted;	// 13 = 0xd
    _Bool _failedToLoadPreviewAsset;	// 14 = 0xe
    _Bool _failedToLoadVideoAsset;	// 15 = 0xf
    id <_TVStackedMediaViewDelegate> _delegate;	// 16 = 0x10
    UIImage *_placeholderImage;	// 24 = 0x18
    UIImage *_fallbackImage;	// 32 = 0x20
    UIView *_overlayView;	// 40 = 0x28
    _TVStackedMediaDocument *_document;	// 48 = 0x30
    UIView *_contentView;	// 56 = 0x38
    UIMotionEffectGroup *_motionEffect;	// 64 = 0x40
    NSMutableArray *_documentEntryViews;	// 72 = 0x48
    NSMutableArray *_documentGimballingEntryViews;	// 80 = 0x50
    NSMutableArray *_videoPlayerViews;	// 88 = 0x58
    UIImageView *_fallbackImageView;	// 96 = 0x60
    UIImage *_previewImage;	// 104 = 0x68
    NSString *_currentPreviewAssetPath;	// 112 = 0x70
    _TVStackedMediaLoader *_mediaLoader;	// 120 = 0x78
    UIViewPropertyAnimator *_videoViewsAnimator;	// 128 = 0x80
    _TVStackedMediaViewGimballingConfiguration *_gimballingConfiguration;	// 136 = 0x88
    long long _videoAnimatorConfiguration;	// 144 = 0x90
    long long _currentDisplayMode;	// 152 = 0x98
    double _maxGimbalMovement;	// 160 = 0xa0
    struct CGPoint _focusMovementDirection;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000001ddaf
@property(nonatomic) _Bool failedToLoadVideoAsset; // @synthesize failedToLoadVideoAsset=_failedToLoadVideoAsset;
@property(nonatomic) _Bool failedToLoadPreviewAsset; // @synthesize failedToLoadPreviewAsset=_failedToLoadPreviewAsset;
@property(nonatomic) double maxGimbalMovement; // @synthesize maxGimbalMovement=_maxGimbalMovement;
@property(nonatomic) struct CGPoint focusMovementDirection; // @synthesize focusMovementDirection=_focusMovementDirection;
@property(nonatomic) long long currentDisplayMode; // @synthesize currentDisplayMode=_currentDisplayMode;
@property(nonatomic) long long videoAnimatorConfiguration; // @synthesize videoAnimatorConfiguration=_videoAnimatorConfiguration;
@property(retain, nonatomic) _TVStackedMediaViewGimballingConfiguration *gimballingConfiguration; // @synthesize gimballingConfiguration=_gimballingConfiguration;
@property(retain, nonatomic) UIViewPropertyAnimator *videoViewsAnimator; // @synthesize videoViewsAnimator=_videoViewsAnimator;
@property(retain, nonatomic) _TVStackedMediaLoader *mediaLoader; // @synthesize mediaLoader=_mediaLoader;
@property(retain, nonatomic) NSString *currentPreviewAssetPath; // @synthesize currentPreviewAssetPath=_currentPreviewAssetPath;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) UIImageView *fallbackImageView; // @synthesize fallbackImageView=_fallbackImageView;
@property(retain, nonatomic) NSMutableArray *videoPlayerViews; // @synthesize videoPlayerViews=_videoPlayerViews;
@property(retain, nonatomic) NSMutableArray *documentGimballingEntryViews; // @synthesize documentGimballingEntryViews=_documentGimballingEntryViews;
@property(retain, nonatomic) NSMutableArray *documentEntryViews; // @synthesize documentEntryViews=_documentEntryViews;
@property(retain, nonatomic) UIMotionEffectGroup *motionEffect; // @synthesize motionEffect=_motionEffect;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool appearsHighlighted; // @synthesize appearsHighlighted=_appearsHighlighted;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) _TVStackedMediaDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImage *fallbackImage; // @synthesize fallbackImage=_fallbackImage;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) __weak id <_TVStackedMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stackedMediaLoaderVideoToPreviewTransitionCompleted:(id)arg1;	// IMP=0x000000000001d57c
- (void)stackedMediaLoaderReadyToTransitionVideoToPreview:(id)arg1;	// IMP=0x000000000001ce8e
- (void)stackedMediaLoaderPreviewToVideoTransitionCompleted:(id)arg1;	// IMP=0x000000000001cd61
- (void)stackedMediaLoaderReadyToTransitionPreviewToVideo:(id)arg1;	// IMP=0x000000000001ca60
- (void)stackedMediaLoader:(id)arg1 failedToLoadVideoForEntry:(id)arg2;	// IMP=0x000000000001c936
- (void)stackedMediaLoader:(id)arg1 readyWithPlayerLayer:(id)arg2 forEntry:(id)arg3;	// IMP=0x000000000001c773
- (void)_playVideoViews:(_Bool)arg1;	// IMP=0x000000000001c635
- (struct CGRect)_viewFrameForEntryAtLayerIndex:(unsigned long long)arg1;	// IMP=0x000000000001c579
- (void)_uninstallMotionEffect;	// IMP=0x000000000001c4ec
- (void)_installMotionEffect;	// IMP=0x000000000001c308
- (void)_calculateMaxGimbalAmount;	// IMP=0x000000000001c239
- (void)_applyGimbalMovementToView:(id)arg1 withFrame:(struct CGRect)arg2 gimbalMovement:(double)arg3;	// IMP=0x000000000001c130
- (void)_positionOverlayView;	// IMP=0x000000000001bee0
- (void)_positionGimballingDocumentView:(id)arg1 forLayerAtIndex:(unsigned long long)arg2;	// IMP=0x000000000001bd84
- (void)_positionGimballingDocumentViews;	// IMP=0x000000000001bbd4
- (void)_positionFallbackImageView;	// IMP=0x000000000001baf1
- (void)_positionGimballingViews;	// IMP=0x000000000001ba4c
- (void)_positionContentView;	// IMP=0x000000000001b838
- (void)_unloadEntriesAndPreviewImage;	// IMP=0x000000000001b5c0
- (_Bool)_loadPreviewAssetIfNecessary;	// IMP=0x000000000001acf0
- (void)_teardownDocumentViews;	// IMP=0x000000000001aae3
- (void)_createViewForEntry:(id)arg1 layerIndex:(unsigned long long)arg2;	// IMP=0x000000000001a7e9
- (void)_createDocumentViewsIfNecessaryAnimated:(_Bool)arg1;	// IMP=0x000000000001a5c8
- (void)_teardownFallbackImageView;	// IMP=0x000000000001a53e
- (void)_displayFallbackImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001a197
- (void)_updateContentDisplayWithActive:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000019c43
- (void)resetVideoPlayback;	// IMP=0x0000000000019b16
- (void)pauseVideoPlayback;	// IMP=0x0000000000019b02
- (void)resumeVideoPlayback;	// IMP=0x0000000000019aeb
- (void)updateActive:(_Bool)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000199bf
- (void)updateDocument:(id)arg1;	// IMP=0x0000000000019865
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;	// IMP=0x000000000001978a
- (void)layoutSubviews;	// IMP=0x000000000001971a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001956c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
