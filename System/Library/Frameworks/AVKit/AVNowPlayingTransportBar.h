//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AVKit/AVTransportControlsProviding-Protocol.h>

@class AVAnimatingLabel, AVBlockedView, AVDurationTimeFormatter, AVFrameSet, AVGradientView, AVNowPlayingTransportBarCaptureView, AVPlayer, AVPlayerItem, AVPlayerLayerThumbnailView, AVSpinnerView, AVTransportBarMask, AVWheelScrubberView, NSArray, NSDate, NSDateFormatter, NSLayoutConstraint, NSString, UIAttachmentBehavior, UIDynamicAnimator, UIDynamicItemBehavior, UIImage, UIImageView, UILabel, UIPushBehavior, UIViewPropertyAnimator, UIVisualEffectView;
@protocol AVThumbLayerController, AVTransportControlsFrameSource;

__attribute__((visibility("hidden")))
@interface AVNowPlayingTransportBar : UIView <AVTransportControlsProviding>
{
    UIView *_barView;	// 8 = 0x8
    UIView *_barBorderView;	// 16 = 0x10
    UIImageView *_barFillImageView;	// 24 = 0x18
    UIView *_visualEffectMaskView;	// 32 = 0x20
    UIView *_barVisualEffectContainerView;	// 40 = 0x28
    UIVisualEffectView *_leftVisualEffectView;	// 48 = 0x30
    UIVisualEffectView *_middleVisualEffectView;	// 56 = 0x38
    UIVisualEffectView *_rightVisualEffectView;	// 64 = 0x40
    UIView *_scrubNeedleMaskView;	// 72 = 0x48
    UIView *_visibleScrubNeedle;	// 80 = 0x50
    NSLayoutConstraint *_scrubNeedleMaskHeight;	// 88 = 0x58
    NSLayoutConstraint *_scrubNeedleHeight;	// 96 = 0x60
    NSLayoutConstraint *_scrubNeedleBottom;	// 104 = 0x68
    NSLayoutConstraint *_elapsedTimeMarkerWidth;	// 112 = 0x70
    NSLayoutConstraint *_elapsedTimeMarkerHeight;	// 120 = 0x78
    UIView *_animatedScrubNeedle;	// 128 = 0x80
    UIDynamicAnimator *_scrubNeedleAnimator;	// 136 = 0x88
    UIDynamicItemBehavior *_scrubNeedleBehavior;	// 144 = 0x90
    UIAttachmentBehavior *_scrubNeedleMovementBehavior;	// 152 = 0x98
    UIAttachmentBehavior *_scrubNeedleSlidingBehavior;	// 160 = 0xa0
    UIPushBehavior *_scrubNeedleMomentumBehavior;	// 168 = 0xa8
    double _accumulatedScrubTranslation;	// 176 = 0xb0
    CDStruct_f25faad3 _initialScrubGestureInfo;	// 184 = 0xb8
    CDStruct_f25faad3 _lastScrubGestureInfo;	// 200 = 0xc8
    UIView *_rotaryElapsedTimeMarker;	// 216 = 0xd8
    UIView *_rotaryElapsedTimeMarkerCircle;	// 224 = 0xe0
    AVWheelScrubberView *_rotaryScrubNeedle;	// 232 = 0xe8
    UIView *_rotaryScrubCenterPunchout;	// 240 = 0xf0
    double _rotaryScrubNeedleLabelOffset;	// 248 = 0xf8
    NSLayoutConstraint *_layoutConstraintElapsedTimeLabelTopFromRotaryNeedle;	// 256 = 0x100
    UIViewPropertyAnimator *_rotaryScrubHideAnimator;	// 264 = 0x108
    UIViewPropertyAnimator *_rotaryScrubUnhideAnimator;	// 272 = 0x110
    UIViewPropertyAnimator *_rotaryScrubBackwardsFingerPositionAnimator;	// 280 = 0x118
    UIView *_elapsedTimeMarker;	// 288 = 0x120
    NSLayoutConstraint *_elapsedTimeMarkerLeft;	// 296 = 0x128
    UIView *_thumbnailView;	// 304 = 0x130
    NSLayoutConstraint *_thumbnailWidthZero;	// 312 = 0x138
    NSLayoutConstraint *_thumbnailHeightZero;	// 320 = 0x140
    AVPlayerLayerThumbnailView *_clonedPlayerView;	// 328 = 0x148
    AVPlayerLayerThumbnailView *_scrubPlayerView;	// 336 = 0x150
    UIImageView *_scrubImageView;	// 344 = 0x158
    AVGradientView *_gradientView;	// 352 = 0x160
    _Bool _isClonedPlayerViewActive;	// 360 = 0x168
    _Bool _shouldFadeTimeLabels;	// 361 = 0x169
    UILabel *_scrubNeedleTimeLabel;	// 368 = 0x170
    AVAnimatingLabel *_elapsedTimeLabel;	// 376 = 0x178
    AVAnimatingLabel *_currentClockTimeLabel;	// 384 = 0x180
    NSLayoutConstraint *_layoutConstraintBarViewTop;	// 392 = 0x188
    NSLayoutConstraint *_layoutConstraintElapsedTimeLabelTop;	// 400 = 0x190
    UILabel *_startTimeLabel;	// 408 = 0x198
    AVAnimatingLabel *_remainingTimeLabel;	// 416 = 0x1a0
    AVAnimatingLabel *_endingClockTimeLabel;	// 424 = 0x1a8
    UILabel *_interstitialTimeLabel;	// 432 = 0x1b0
    UIImageView *_hintIconLeft;	// 440 = 0x1b8
    UILabel *_scanningSpeedLeft;	// 448 = 0x1c0
    UIImageView *_hintIconRight;	// 456 = 0x1c8
    UILabel *_scanningSpeedRight;	// 464 = 0x1d0
    NSLayoutConstraint *_hintIconLeftRelativeTimeHorizontalConstraint;	// 472 = 0x1d8
    NSLayoutConstraint *_hintIconLeftClockTimeHorizontalConstraint;	// 480 = 0x1e0
    NSLayoutConstraint *_hintIconRightRelativeTimeHorizontalConstraint;	// 488 = 0x1e8
    NSLayoutConstraint *_hintIconRightClockTimeHorizontalConstraint;	// 496 = 0x1f0
    AVSpinnerView *_loadingSpinner;	// 504 = 0x1f8
    NSLayoutConstraint *_loadingSpinnerLeftHorizontalConstraint;	// 512 = 0x200
    NSLayoutConstraint *_loadingSpinnerRightHorizontalConstraint;	// 520 = 0x208
    AVBlockedView *_blockedView;	// 528 = 0x210
    double _timeCorrespondingToElapsedTimeTextLabel;	// 536 = 0x218
    double _timeCorrespondingToRemainingTimeTextLabel;	// 544 = 0x220
    double _timeIntervalFromStreamTimeToClockDate;	// 552 = 0x228
    double _timeOfLastCoastingAliveUpdate;	// 560 = 0x230
    AVPlayer *_clonedPlayer;	// 568 = 0x238
    AVPlayerItem *_scrubPlayerItem;	// 576 = 0x240
    _Bool _animatingVisibility;	// 584 = 0x248
    _Bool _live;	// 585 = 0x249
    _Bool _loading;	// 586 = 0x24a
    _Bool _unusable;	// 587 = 0x24b
    _Bool _hidesSeekableRange;	// 588 = 0x24c
    _Bool _displaysClockTimes;	// 589 = 0x24d
    _Bool _honorsActualThumbnailTime;	// 590 = 0x24e
    _Bool _displaysCurrentTime;	// 591 = 0x24f
    _Bool _displaysRemainingTime;	// 592 = 0x250
    _Bool _scrubbing;	// 593 = 0x251
    _Bool _displaysScrubbingFrames;	// 594 = 0x252
    _Bool _coastingAlive;	// 595 = 0x253
    _Bool _trackingScrubTouch;	// 596 = 0x254
    UIImage *_maskImage;	// 600 = 0x258
    AVNowPlayingTransportBarCaptureView *_transportBarCaptureView;	// 608 = 0x260
    id <AVTransportControlsFrameSource> _frameSource;	// 616 = 0x268
    id <AVThumbLayerController> _thumbLayerController;	// 624 = 0x270
    long long _focusTracking;	// 632 = 0x278
    double _focusTrackingTension;	// 640 = 0x280
    double _startTime;	// 648 = 0x288
    NSDate *_startDate;	// 656 = 0x290
    NSDate *_endDate;	// 664 = 0x298
    NSDate *_clockDateForTimeZero;	// 672 = 0x2a0
    double _duration;	// 680 = 0x2a8
    double _currentTimeInterval;	// 688 = 0x2b0
    double _savedTimeInterval;	// 696 = 0x2b8
    NSString *_needleText;	// 704 = 0x2c0
    long long _hint;	// 712 = 0x2c8
    long long _scrubMode;	// 720 = 0x2d0
    unsigned long long _scanningSpeedHintNumber;	// 728 = 0x2d8
    NSArray *_interstitialTimes;	// 736 = 0x2e0
    AVTransportBarMask *_mask;	// 744 = 0x2e8
    AVDurationTimeFormatter *_durationTimeFormatter;	// 752 = 0x2f0
    double _unavailableFractionLeading;	// 760 = 0x2f8
    double _availableFraction;	// 768 = 0x300
    NSDateFormatter *_dateFormatter;	// 776 = 0x308
    NSDateFormatter *_currentDateFormatter;	// 784 = 0x310
    NSDate *_dateCorrespondingToStartTimeTextLabel;	// 792 = 0x318
    NSDate *_dateCorrespondingToTimeRemainingTextLabel;	// 800 = 0x320
    struct CGRect _scrubbingRegionBounds;	// 808 = 0x328
}

+ (struct CGSize)maximumSizeForFrameImages;	// IMP=0x000000000002e17c
- (void).cxx_destruct;	// IMP=0x000000000002bc6a
@property(nonatomic, getter=_isTrackingScrubTouch, setter=_setTrackingScrubTouch:) _Bool trackingScrubTouch; // @synthesize trackingScrubTouch=_trackingScrubTouch;
@property(nonatomic, getter=_isCoastingAlive, setter=_setCoastingAlive:) _Bool coastingAlive; // @synthesize coastingAlive=_coastingAlive;
@property(retain, nonatomic) NSDate *dateCorrespondingToTimeRemainingTextLabel; // @synthesize dateCorrespondingToTimeRemainingTextLabel=_dateCorrespondingToTimeRemainingTextLabel;
@property(retain, nonatomic) NSDate *dateCorrespondingToStartTimeTextLabel; // @synthesize dateCorrespondingToStartTimeTextLabel=_dateCorrespondingToStartTimeTextLabel;
@property(readonly) NSDateFormatter *currentDateFormatter; // @synthesize currentDateFormatter=_currentDateFormatter;
@property(readonly) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) double availableFraction; // @synthesize availableFraction=_availableFraction;
@property(nonatomic) double unavailableFractionLeading; // @synthesize unavailableFractionLeading=_unavailableFractionLeading;
@property(readonly) AVDurationTimeFormatter *durationTimeFormatter; // @synthesize durationTimeFormatter=_durationTimeFormatter;
@property(readonly) AVTransportBarMask *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) NSArray *interstitialTimes; // @synthesize interstitialTimes=_interstitialTimes;
@property(nonatomic) unsigned long long scanningSpeedHintNumber; // @synthesize scanningSpeedHintNumber=_scanningSpeedHintNumber;
@property(nonatomic) long long scrubMode; // @synthesize scrubMode=_scrubMode;
@property(nonatomic) long long hint; // @synthesize hint=_hint;
@property(copy, nonatomic) NSString *needleText; // @synthesize needleText=_needleText;
@property(nonatomic) struct CGRect scrubbingRegionBounds; // @synthesize scrubbingRegionBounds=_scrubbingRegionBounds;
@property(nonatomic) _Bool displaysScrubbingFrames; // @synthesize displaysScrubbingFrames=_displaysScrubbingFrames;
@property(readonly, nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic, getter=isRemainingTimeDisplayed) _Bool displaysRemainingTime; // @synthesize displaysRemainingTime=_displaysRemainingTime;
@property(nonatomic, getter=isCurrentTimeDisplayed) _Bool displaysCurrentTime; // @synthesize displaysCurrentTime=_displaysCurrentTime;
@property(nonatomic) _Bool honorsActualThumbnailTime; // @synthesize honorsActualThumbnailTime=_honorsActualThumbnailTime;
@property(readonly, nonatomic) double savedTimeInterval; // @synthesize savedTimeInterval=_savedTimeInterval;
@property(readonly, nonatomic) double currentTimeInterval; // @synthesize currentTimeInterval=_currentTimeInterval;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool displaysClockTimes; // @synthesize displaysClockTimes=_displaysClockTimes;
@property(retain, nonatomic) NSDate *clockDateForTimeZero; // @synthesize clockDateForTimeZero=_clockDateForTimeZero;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool hidesSeekableRange; // @synthesize hidesSeekableRange=_hidesSeekableRange;
@property(nonatomic, getter=isUnusable) _Bool unusable; // @synthesize unusable=_unusable;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic, getter=isLive) _Bool live; // @synthesize live=_live;
@property(nonatomic) double focusTrackingTension; // @synthesize focusTrackingTension=_focusTrackingTension;
@property(nonatomic) long long focusTracking; // @synthesize focusTracking=_focusTracking;
@property(retain, nonatomic) id <AVThumbLayerController> thumbLayerController; // @synthesize thumbLayerController=_thumbLayerController;
@property(nonatomic) __weak id <AVTransportControlsFrameSource> frameSource; // @synthesize frameSource=_frameSource;
@property(retain, nonatomic) AVNowPlayingTransportBarCaptureView *transportBarCaptureView; // @synthesize transportBarCaptureView=_transportBarCaptureView;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(readonly, nonatomic, getter=isAnimatingVisibility) _Bool animatingVisibility; // @synthesize animatingVisibility=_animatingVisibility;
- (id)layoutConstraintsForPresentationInView:(id)arg1;	// IMP=0x000000000002b626
- (id)accessibilityElements;	// IMP=0x000000000002b543
- (id)makeMaskImageWasDirty:(_Bool *)arg1;	// IMP=0x000000000002b148
@property(retain, nonatomic) NSArray *interstitialDisplayTimes;
- (void)reloadFrames;	// IMP=0x000000000002b015
- (void)_updateThumbnailImage;	// IMP=0x000000000002a94e
@property(retain, nonatomic) AVFrameSet *scrubFrameSet;
@property(retain, nonatomic) AVPlayerItem *scrubPlayerItem;
@property(retain, nonatomic) AVPlayer *clonedPlayer;
@property(readonly, nonatomic) unsigned long long currentFrameIndex;
- (unsigned long long)frameIndexForTime:(double)arg1;	// IMP=0x000000000002a332
- (void)_updateAccessoryVisibilityAnimated:(_Bool)arg1;	// IMP=0x0000000000029dd5
- (void)_updateAccessoryVisibility;	// IMP=0x0000000000029dbe
- (void)setScrubMode:(long long)arg1 gestureInfo:(CDStruct_f25faad3)arg2;	// IMP=0x0000000000029577
- (void)_setLoadingSpinnerLocationLeft:(_Bool)arg1;	// IMP=0x0000000000029460
- (void)_stopScrubNeedleMomentum;	// IMP=0x0000000000029111
- (void)scrubEndedWithTranslation:(double)arg1 velocity:(double)arg2;	// IMP=0x0000000000028a6a
- (void)scrubMovedWithTranslation:(double)arg1 velocity:(double)arg2 enableSnapping:(_Bool)arg3 gestureInfo:(CDStruct_f25faad3)arg4;	// IMP=0x000000000002835c
- (void)scrubBegan;	// IMP=0x0000000000028330
- (struct CGAffineTransform)_rotaryTransformForInitialScrubInfo:(CDStruct_f25faad3)arg1 currentInfo:(CDStruct_f25faad3)arg2;	// IMP=0x0000000000028308
- (void)updateRotaryFingerPositionWithScrubInfo:(CDStruct_f25faad3)arg1;	// IMP=0x0000000000028220
- (void)_updateRotaryNeedleElapsedTimeLabelOffset;	// IMP=0x0000000000027ee7
- (void)maskCornersForNeedlePosition:(double)arg1;	// IMP=0x0000000000027c97
- (void)_updateNeedlePositionsShouldUpdateElapsedTimeMarker:(_Bool)arg1;	// IMP=0x00000000000279db
- (void)_updateNeedlePositions;	// IMP=0x00000000000279a8
- (void)updateNeedlePositionToReflectThumbnailTime;	// IMP=0x0000000000027530
- (double)_timeIntervalFromScrubNeedlePositionOrThumbnail;	// IMP=0x0000000000027244
- (double)_timeIntervalFromScrubNeedlePosition;	// IMP=0x000000000002705d
- (void)_setCurrentTimeInterval:(double)arg1 updatingNeedlePositions:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000026ca7
- (void)setCurrentTimeInterval:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000026c8e
- (void)_updateTimeLabelVisibility;	// IMP=0x00000000000264c8
- (_Bool)_areTimeLabelsVisible;	// IMP=0x0000000000026415
- (void)_updateElapsedTimeText;	// IMP=0x0000000000025e20
- (void)_updateRemainingTimeText;	// IMP=0x000000000002583d
- (void)_updateStartTimeText;	// IMP=0x0000000000025634
- (void)setDisplaysClockTimes:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000253d2
- (void)_updateBorderWidth;	// IMP=0x0000000000025309
- (void)_updateTransportBarMaskIfNeeded;	// IMP=0x0000000000024f3e
- (void)layoutSubviews;	// IMP=0x0000000000024ece
- (void)_updateScrubbingRegionBounds;	// IMP=0x0000000000024de4
- (void)stopScrubbingWithResetToPauseMarker:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000248a9
@property(readonly, nonatomic) double currentTimeIntervalForThumbnailOrNeedle;
- (void)startScrubbingForPauseTime:(double)arg1;	// IMP=0x000000000002467c
- (double)_savedTimeFraction;	// IMP=0x000000000002426f
- (id)_endDate;	// IMP=0x00000000000241af
- (double)_currentTimeFraction;	// IMP=0x0000000000023fb3
- (id)currentDateReal;	// IMP=0x0000000000023edf
- (double)timeIntervalSinceNow;	// IMP=0x0000000000023e65
@property(readonly, nonatomic) double endTime;
- (void)setAvailableTimeFrom:(double)arg1 to:(double)arg2;	// IMP=0x0000000000023d53
- (void)setAvailableFractionFrom:(double)arg1 to:(double)arg2 animated:(_Bool)arg3;	// IMP=0x000000000002362d
- (_Bool)_isScrubberCoasting;	// IMP=0x00000000000235a8
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 withCoordinator:(id)arg3;	// IMP=0x0000000000022edd
- (_Bool)isHidden;	// IMP=0x0000000000022e86
@property(readonly, nonatomic) UIView *barVisualEffectContainerView;
- (void)setAnimatingVisibility:(_Bool)arg1;	// IMP=0x0000000000022bd5
- (_Bool)isHiddenOrHasHiddenAncestor;	// IMP=0x0000000000022b8f
- (void)_setupScrubNeedleAnimatorIfNeeded;	// IMP=0x00000000000227ae
- (CDStruct_f25faad3)_attachmentRangeForScrubNeedle;	// IMP=0x0000000000022491
- (void)_setBarFocusAppearance:(_Bool)arg1;	// IMP=0x00000000000220a4
- (void)_setFocusedAppearance:(_Bool)arg1 forLabel:(id)arg2;	// IMP=0x0000000000021b57
- (void)_updateBackgroundAppearanceOfLabel:(id)arg1;	// IMP=0x0000000000021a31
- (void)_updateScanningSpeedHintLabel;	// IMP=0x000000000002185a
- (void)createViews;	// IMP=0x000000000001ba46
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000001b9da
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001b757

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
