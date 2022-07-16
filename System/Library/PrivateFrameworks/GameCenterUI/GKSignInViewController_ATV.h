//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class OBPrivacyLinkController, UIButton, UILabel, UIView;

@interface GKSignInViewController_ATV : UIViewController
{
    CDUnknownBlockType _callback;	// 8 = 0x8
    UILabel *_mainTitle;	// 16 = 0x10
    UILabel *_subtitle;	// 24 = 0x18
    UIView *_privacyContainer;	// 32 = 0x20
    UIButton *_signinButton;	// 40 = 0x28
    UIButton *_notNowButton;	// 48 = 0x30
    OBPrivacyLinkController *_privacyLink;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000fb604
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(retain, nonatomic) UIButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(retain, nonatomic) UIButton *signinButton; // @synthesize signinButton=_signinButton;
@property(retain, nonatomic) UIView *privacyContainer; // @synthesize privacyContainer=_privacyContainer;
@property(retain, nonatomic) UILabel *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (id)preferredFocusEnvironments;	// IMP=0x00000000000fb479
- (void)notNowButtonPressed:(id)arg1;	// IMP=0x00000000000fb2b1
- (void)signinButtonPressed:(id)arg1;	// IMP=0x00000000000faffe
- (void)addPrivacyLink;	// IMP=0x00000000000fac76
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000fac08
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000fab8c
- (void)viewDidLoad;	// IMP=0x00000000000fa793

@end
