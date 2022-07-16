//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVHomeUI/TVHMCameraProfileManagerDelegate-Protocol.h>
#import <TVHomeUI/UICollectionViewDelegate-Protocol.h>

@class HMCameraProfile, HMCameraSnapshotControl, HMCameraStreamPreferences, HMCameraView, NADecayingTimer, NSArray, NSDictionary, NSError, NSLayoutConstraint, NSString, NSTimer, TVHMCameraBadgeView, TVHMCameraProfileManager, TVHMNearbyAccessoriesViewController, UIActivityIndicatorView, UICollectionView, UICollectionViewDiffableDataSource, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface TVHMCameraContentView : UIView <UICollectionViewDelegate, TVHMCameraProfileManagerDelegate>
{
    _Bool _centered;	// 8 = 0x8
    _Bool _doorbell;	// 9 = 0x9
    _Bool _cameraControlViewsVisible;	// 10 = 0xa
    _Bool _nearbyAccessoryControlsVisible;	// 11 = 0xb
    _Bool _initialCameraSourceSet;	// 12 = 0xc
    _Bool _requestedStopStream;	// 13 = 0xd
    _Bool _wantsCameraControlViews;	// 14 = 0xe
    _Bool _wantsNearbyAccessoryControls;	// 15 = 0xf
    _Bool _insetPictureInPicture;	// 16 = 0x10
    _Bool _styleAllowsBadges;	// 17 = 0x11
    _Bool _styleAllowsFullScreenBadges;	// 18 = 0x12
    HMCameraView *_cameraView;	// 24 = 0x18
    HMCameraSnapshotControl *_snapshotControl;	// 32 = 0x20
    UIVisualEffectView *_errorEffectView;	// 40 = 0x28
    UILabel *_cameraNameLabel;	// 48 = 0x30
    UIImageView *_cameraSymbolImageView;	// 56 = 0x38
    UIImageView *_faceImageView;	// 64 = 0x40
    TVHMCameraBadgeView *_liveBadgeView;	// 72 = 0x48
    TVHMCameraBadgeView *_snapshotAgeBadgeView;	// 80 = 0x50
    UILabel *_fullScreenCameraNameLabel;	// 88 = 0x58
    UILabel *_fullScreenCameraDescriptionLabel;	// 96 = 0x60
    TVHMCameraBadgeView *_fullScreenLiveBadgeView;	// 104 = 0x68
    TVHMCameraBadgeView *_fullScreenSnapshotAgeBadgeView;	// 112 = 0x70
    HMCameraStreamPreferences *_streamPreferences;	// 120 = 0x78
    UIImage *_faceImage;	// 128 = 0x80
    UIImage *_placeholderSnapshot;	// 136 = 0x88
    double _overrideAspectRatio;	// 144 = 0x90
    unsigned long long _size;	// 152 = 0x98
    unsigned long long _cameraContentMode;	// 160 = 0xa0
    UICollectionView *_controlCollectionView;	// 168 = 0xa8
    TVHMNearbyAccessoriesViewController *_nearbyAccessoriesViewController;	// 176 = 0xb0
    TVHMCameraProfileManager *_cameraProfileManager;	// 184 = 0xb8
    UIImageView *_gradientImageView;	// 192 = 0xc0
    UIImageView *_placeholderSnapshotImageView;	// 200 = 0xc8
    NADecayingTimer *_snapshotAgeUpdateTimer;	// 208 = 0xd0
    NSError *_cachedStreamError;	// 216 = 0xd8
    UIActivityIndicatorView *_activityIndicator;	// 224 = 0xe0
    NSLayoutConstraint *_cameraViewWidthConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_cameraViewHeightConstraint;	// 240 = 0xf0
    NSLayoutConstraint *_cameraNameLabelWidthConstraint;	// 248 = 0xf8
    NSArray *_regularConstraints;	// 256 = 0x100
    NSArray *_fullScreenConstraints;	// 264 = 0x108
    NSLayoutConstraint *_controlCollectionViewWidthConstraint;	// 272 = 0x110
    NSArray *_accessoryControlsConstraints;	// 280 = 0x118
    NSTimer *_restartStreamTimer;	// 288 = 0x120
    UICollectionViewDiffableDataSource *_controlCollectionViewDataSource;	// 296 = 0x128
    NSDictionary *_controlViewsDict;	// 304 = 0x130
    long long _displayMode;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x000000000003c1c0
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) _Bool styleAllowsFullScreenBadges; // @synthesize styleAllowsFullScreenBadges=_styleAllowsFullScreenBadges;
@property(nonatomic) _Bool styleAllowsBadges; // @synthesize styleAllowsBadges=_styleAllowsBadges;
@property(nonatomic) _Bool insetPictureInPicture; // @synthesize insetPictureInPicture=_insetPictureInPicture;
@property(nonatomic) _Bool wantsNearbyAccessoryControls; // @synthesize wantsNearbyAccessoryControls=_wantsNearbyAccessoryControls;
@property(nonatomic) _Bool wantsCameraControlViews; // @synthesize wantsCameraControlViews=_wantsCameraControlViews;
@property(copy, nonatomic) NSDictionary *controlViewsDict; // @synthesize controlViewsDict=_controlViewsDict;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *controlCollectionViewDataSource; // @synthesize controlCollectionViewDataSource=_controlCollectionViewDataSource;
@property(retain, nonatomic) NSTimer *restartStreamTimer; // @synthesize restartStreamTimer=_restartStreamTimer;
@property(nonatomic) _Bool requestedStopStream; // @synthesize requestedStopStream=_requestedStopStream;
@property(nonatomic) _Bool initialCameraSourceSet; // @synthesize initialCameraSourceSet=_initialCameraSourceSet;
@property(retain, nonatomic) NSArray *accessoryControlsConstraints; // @synthesize accessoryControlsConstraints=_accessoryControlsConstraints;
@property(retain, nonatomic) NSLayoutConstraint *controlCollectionViewWidthConstraint; // @synthesize controlCollectionViewWidthConstraint=_controlCollectionViewWidthConstraint;
@property(retain, nonatomic) NSArray *fullScreenConstraints; // @synthesize fullScreenConstraints=_fullScreenConstraints;
@property(retain, nonatomic) NSArray *regularConstraints; // @synthesize regularConstraints=_regularConstraints;
@property(retain, nonatomic) NSLayoutConstraint *cameraNameLabelWidthConstraint; // @synthesize cameraNameLabelWidthConstraint=_cameraNameLabelWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraViewHeightConstraint; // @synthesize cameraViewHeightConstraint=_cameraViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraViewWidthConstraint; // @synthesize cameraViewWidthConstraint=_cameraViewWidthConstraint;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSError *cachedStreamError; // @synthesize cachedStreamError=_cachedStreamError;
@property(retain, nonatomic) NADecayingTimer *snapshotAgeUpdateTimer; // @synthesize snapshotAgeUpdateTimer=_snapshotAgeUpdateTimer;
@property(retain, nonatomic) UIImageView *placeholderSnapshotImageView; // @synthesize placeholderSnapshotImageView=_placeholderSnapshotImageView;
@property(retain, nonatomic) UIImageView *gradientImageView; // @synthesize gradientImageView=_gradientImageView;
@property(retain, nonatomic) TVHMCameraProfileManager *cameraProfileManager; // @synthesize cameraProfileManager=_cameraProfileManager;
@property(readonly, nonatomic) TVHMNearbyAccessoriesViewController *nearbyAccessoriesViewController; // @synthesize nearbyAccessoriesViewController=_nearbyAccessoriesViewController;
@property(readonly, nonatomic) UICollectionView *controlCollectionView; // @synthesize controlCollectionView=_controlCollectionView;
@property(nonatomic) unsigned long long cameraContentMode; // @synthesize cameraContentMode=_cameraContentMode;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) _Bool nearbyAccessoryControlsVisible; // @synthesize nearbyAccessoryControlsVisible=_nearbyAccessoryControlsVisible;
@property(nonatomic) _Bool cameraControlViewsVisible; // @synthesize cameraControlViewsVisible=_cameraControlViewsVisible;
@property(nonatomic, getter=isDoorbell) _Bool doorbell; // @synthesize doorbell=_doorbell;
@property(nonatomic, getter=isCentered) _Bool centered; // @synthesize centered=_centered;
@property(nonatomic) double overrideAspectRatio; // @synthesize overrideAspectRatio=_overrideAspectRatio;
@property(retain, nonatomic) UIImage *placeholderSnapshot; // @synthesize placeholderSnapshot=_placeholderSnapshot;
@property(retain, nonatomic) UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property(retain, nonatomic) HMCameraStreamPreferences *streamPreferences; // @synthesize streamPreferences=_streamPreferences;
@property(retain, nonatomic) TVHMCameraBadgeView *fullScreenSnapshotAgeBadgeView; // @synthesize fullScreenSnapshotAgeBadgeView=_fullScreenSnapshotAgeBadgeView;
@property(retain, nonatomic) TVHMCameraBadgeView *fullScreenLiveBadgeView; // @synthesize fullScreenLiveBadgeView=_fullScreenLiveBadgeView;
@property(retain, nonatomic) UILabel *fullScreenCameraDescriptionLabel; // @synthesize fullScreenCameraDescriptionLabel=_fullScreenCameraDescriptionLabel;
@property(retain, nonatomic) UILabel *fullScreenCameraNameLabel; // @synthesize fullScreenCameraNameLabel=_fullScreenCameraNameLabel;
@property(retain, nonatomic) TVHMCameraBadgeView *snapshotAgeBadgeView; // @synthesize snapshotAgeBadgeView=_snapshotAgeBadgeView;
@property(retain, nonatomic) TVHMCameraBadgeView *liveBadgeView; // @synthesize liveBadgeView=_liveBadgeView;
@property(retain, nonatomic) UIImageView *faceImageView; // @synthesize faceImageView=_faceImageView;
@property(retain, nonatomic) UIImageView *cameraSymbolImageView; // @synthesize cameraSymbolImageView=_cameraSymbolImageView;
@property(retain, nonatomic) UILabel *cameraNameLabel; // @synthesize cameraNameLabel=_cameraNameLabel;
@property(retain, nonatomic) UIVisualEffectView *errorEffectView; // @synthesize errorEffectView=_errorEffectView;
@property(retain, nonatomic) HMCameraSnapshotControl *snapshotControl; // @synthesize snapshotControl=_snapshotControl;
@property(retain, nonatomic) HMCameraView *cameraView; // @synthesize cameraView=_cameraView;
- (void)_updatePictureInPictureInsets;	// IMP=0x000000000003ac00
- (void)startStreamIfNecessary;	// IMP=0x000000000003ab50
- (id)preferredFocusEnvironments;	// IMP=0x000000000003aa00
- (_Bool)secureAccessoryConfirmationAlertVisible;	// IMP=0x000000000003a990
- (void)showLabelsAndControls;	// IMP=0x000000000003a740
- (void)hideLabelsAndControls;	// IMP=0x000000000003a670
- (void)dismissSecureAccessoryConfirmationAlert;	// IMP=0x000000000003a610
- (void)setWantsNearbyAccessoryControls:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003a010
- (void)removeNearbyAccessoryControlsFromParentViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000039f50
- (void)addNearbyAccessoryControlsToParent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000039e00
- (void)setWantsCameraViewControls:(_Bool)arg1 animated:(_Bool)arg2 delay:(double)arg3;	// IMP=0x0000000000039a30
- (void)setWantsCameraViewControls:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000399e0
- (void)setCameraControlViews:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000039550
- (void)setMuted:(_Bool)arg1;	// IMP=0x0000000000039500
- (void)_updateBadgeVisibility;	// IMP=0x0000000000039370
- (void)applyStyle:(id)arg1;	// IMP=0x00000000000390b0
- (id)_cameraSymbolImageWithError:(_Bool)arg1;	// IMP=0x0000000000038f60
- (id)_symbolFontForCurrentSize;	// IMP=0x0000000000038e70
- (id)_nameLabelFontForCurrentSize;	// IMP=0x0000000000038df0
- (void)_updateAudioStream:(_Bool)arg1;	// IMP=0x0000000000038da0
- (_Bool)_shouldDisplayErrorContent;	// IMP=0x0000000000038b40
- (_Bool)_shouldDisplayAccessModeErrorContent;	// IMP=0x0000000000038900
- (void)_updateErrorViewIfNeeded;	// IMP=0x00000000000384c0
- (void)_updateCameraNameLabels;	// IMP=0x0000000000037ff0
- (long long)_cameraState;	// IMP=0x0000000000037d80
- (void)_updateCameraSource:(id)arg1;	// IMP=0x0000000000037260
- (void)_updateCameraViewConstraints;	// IMP=0x0000000000036a40
- (void)didUpdateMostRecentSnapshot:(id)arg1;	// IMP=0x00000000000368c0
- (void)cameraProfileManager:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;	// IMP=0x0000000000036640
- (void)cameraProfileManager:(id)arg1 streamDidStopWithError:(id)arg2;	// IMP=0x00000000000362c0
- (void)streamDidStart:(id)arg1;	// IMP=0x00000000000361b0
@property(readonly, nonatomic) _Bool isReadyForSnapshotBadge;
@property(readonly, nonatomic) _Bool isReadyForLiveBadge;
- (_Bool)shouldShowSnapshotAgeBadgeFullScreen:(_Bool)arg1;	// IMP=0x0000000000035e90
- (_Bool)shouldShowLiveBadgeFullScreen:(_Bool)arg1;	// IMP=0x0000000000035df0
- (void)_setDisplayMode:(long long)arg1;	// IMP=0x00000000000353b0
- (long long)_displayModeForCentered:(_Bool)arg1;	// IMP=0x0000000000035370
- (void)setupNearbyViewConstraints;	// IMP=0x0000000000034cf0
- (void)endDisableExternalUpdatesForVisibleReason;	// IMP=0x0000000000034cb0
- (void)disableExternalUpdatesForVisibleReason;	// IMP=0x0000000000034c70
@property(retain, nonatomic) HMCameraProfile *cameraProfile;
- (void)layoutSubviews;	// IMP=0x0000000000034690
- (void)dealloc;	// IMP=0x0000000000034620
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002e7a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

