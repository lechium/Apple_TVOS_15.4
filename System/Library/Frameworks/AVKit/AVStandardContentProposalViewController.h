//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVDurationTimeFormatter, NSLayoutConstraint, NSString, NSTimer, UIButton, UIFocusGuide, UILabel, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface AVStandardContentProposalViewController
{
    UIFocusGuide *_mainLayoutGuide;	// 8 = 0x8
    UIButton *_headingLabel;	// 16 = 0x10
    UIButton *_timeRemainingButton;	// 24 = 0x18
    UIButton *_titleButton;	// 32 = 0x20
    UILabel *_dismissalView;	// 40 = 0x28
    UIButton *_imageButton;	// 48 = 0x30
    NSString *_timeRemainingString;	// 56 = 0x38
    NSTimer *_countdownTimer;	// 64 = 0x40
    AVDurationTimeFormatter *_timeFormatter;	// 72 = 0x48
    UITapGestureRecognizer *_menuPressRecognizer;	// 80 = 0x50
    NSLayoutConstraint *_constraintOnScreen;	// 88 = 0x58
    NSLayoutConstraint *_constraintOffScreen;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000005e361
@property(retain, nonatomic) NSLayoutConstraint *constraintOffScreen; // @synthesize constraintOffScreen=_constraintOffScreen;
@property(retain, nonatomic) NSLayoutConstraint *constraintOnScreen; // @synthesize constraintOnScreen=_constraintOnScreen;
@property(retain, nonatomic) UITapGestureRecognizer *menuPressRecognizer; // @synthesize menuPressRecognizer=_menuPressRecognizer;
@property(retain, nonatomic) AVDurationTimeFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property(retain, nonatomic) NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) NSString *timeRemainingString; // @synthesize timeRemainingString=_timeRemainingString;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UILabel *dismissalView; // @synthesize dismissalView=_dismissalView;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) UIButton *timeRemainingButton; // @synthesize timeRemainingButton=_timeRemainingButton;
@property(retain, nonatomic) UIButton *headingLabel; // @synthesize headingLabel=_headingLabel;
@property(retain, nonatomic) UIFocusGuide *mainLayoutGuide; // @synthesize mainLayoutGuide=_mainLayoutGuide;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000005e01f
- (id)preferredFocusEnvironments;	// IMP=0x000000000005dec9
- (void)_countdownTimerFired:(id)arg1;	// IMP=0x000000000005dc98
- (void)hideCountdown;	// IMP=0x000000000005dc15
- (struct CGRect)desiredPlayerViewBounds;	// IMP=0x000000000005dbb6
- (void)setContentProposal:(id)arg1;	// IMP=0x000000000005db2c
- (void)updateViewsFromModel;	// IMP=0x000000000005d7c1
- (id)borderColorForFocusedImage;	// IMP=0x000000000005d7a8
- (id)borderColorForUnfocusedImage;	// IMP=0x000000000005d77f
- (id)scaledPreviewImage;	// IMP=0x000000000005d693
- (void)didPressMenuButton:(id)arg1;	// IMP=0x000000000005d674
- (void)didAbortCountdown:(id)arg1;	// IMP=0x000000000005d635
- (void)didAutoAccept;	// IMP=0x000000000005d5e9
- (void)didAccept:(id)arg1;	// IMP=0x000000000005d581
- (void)performAnimationForDismissal:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d4a5
- (void)setDateOfAutomaticAcceptance:(id)arg1;	// IMP=0x000000000005d398
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005d26d
- (void)viewDidLoad;	// IMP=0x000000000005bb81
- (_Bool)isUserInteractionAllowed;	// IMP=0x000000000005bb56
- (void)dealloc;	// IMP=0x000000000005bb0d

@end
