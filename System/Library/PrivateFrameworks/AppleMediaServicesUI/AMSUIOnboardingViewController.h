//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AppleMediaServicesUI/UIScrollViewDelegate-Protocol.h>

@class AMSUIOnboardingHeaderView, AMSUIOnboardingMultiFeatureHeaderView, NSObject, NSString, OBPrivacyLinkController, OBWelcomeController, UIButton, UIImage, UIImageView, UITraitCollection, UIView, _UIBackdropView;
@protocol OS_dispatch_queue;

@interface AMSUIOnboardingViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _viewHasAppeared;	// 8 = 0x8
    UIImage *_rightImage;	// 16 = 0x10
    NSString *_titleText;	// 24 = 0x18
    NSString *_descriptionText;	// 32 = 0x20
    NSString *_primaryButtonText;	// 40 = 0x28
    OBPrivacyLinkController *_privacyLinkController;	// 48 = 0x30
    CDUnknownBlockType _primaryButtonCallback;	// 56 = 0x38
    OBWelcomeController *_welcomeController;	// 64 = 0x40
    UIImage *_image;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_metricsQueue;	// 80 = 0x50
    _UIBackdropView *_backdropView;	// 88 = 0x58
    AMSUIOnboardingHeaderView *_headerView;	// 96 = 0x60
    AMSUIOnboardingMultiFeatureHeaderView *_multiFeatureHeaderView;	// 104 = 0x68
    UIButton *_primaryButton;	// 112 = 0x70
    UIView *_leftContentView;	// 120 = 0x78
    UIView *_rightContentView;	// 128 = 0x80
    UIImageView *_rightImageView;	// 136 = 0x88
}

+ (id)privacyLinkIdentifiersFromController:(id)arg1;	// IMP=0x000000000002f53e
- (void).cxx_destruct;	// IMP=0x000000000002f974
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIView *rightContentView; // @synthesize rightContentView=_rightContentView;
@property(retain, nonatomic) UIView *leftContentView; // @synthesize leftContentView=_leftContentView;
@property(retain, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(retain, nonatomic) AMSUIOnboardingMultiFeatureHeaderView *multiFeatureHeaderView; // @synthesize multiFeatureHeaderView=_multiFeatureHeaderView;
@property(retain, nonatomic) AMSUIOnboardingHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) OBWelcomeController *welcomeController; // @synthesize welcomeController=_welcomeController;
@property(copy, nonatomic) CDUnknownBlockType primaryButtonCallback; // @synthesize primaryButtonCallback=_primaryButtonCallback;
@property(retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // @synthesize privacyLinkController=_privacyLinkController;
@property(retain, nonatomic) NSString *primaryButtonText; // @synthesize primaryButtonText=_primaryButtonText;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIImage *rightImage; // @synthesize rightImage=_rightImage;
@property(readonly, nonatomic) _Bool isPresentedInFormSheet;
- (void)didTapPrimaryButton:(id)arg1;	// IMP=0x000000000002f41d
@property(readonly, nonatomic) UIImage *headerImage;
- (void)updateOverrideTraits;	// IMP=0x000000000002f268
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000002f11f
- (id)childTraitCollectionForViewController:(id)arg1;	// IMP=0x000000000002f0b6
@property(readonly, nonatomic) UITraitCollection *cappedTraitCollection;
- (id)preferredFocusEnvironments;	// IMP=0x000000000002ed99
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000002ed46
- (void)viewDidLayoutSubviews;	// IMP=0x000000000002dcfe
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000002dca3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002dbef
- (void)viewDidLoad;	// IMP=0x000000000002cea8
- (void)commonInitWithPrimaryButtonText:(id)arg1 privacyLinkController:(id)arg2;	// IMP=0x000000000002cd0d
- (void)commonSetupWithPrimaryButtonText:(id)arg1 privacyLinkBundleIdentifiers:(id)arg2;	// IMP=0x000000000002ccdb
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkBundleIdentifier:(id)arg4;	// IMP=0x000000000002ccae
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 features:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5;	// IMP=0x000000000002cb0a
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5;	// IMP=0x000000000002c842
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4;	// IMP=0x000000000002c75d
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkController:(id)arg5;	// IMP=0x000000000002c550

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

