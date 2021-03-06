//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class TVSUIStackedButtonsViewControllerConfiguration, UILabel, UILayoutGuide, UIView;

@interface TVSUIStackedButtonsViewController : UIViewController
{
    UIView *_supplementaryView;	// 8 = 0x8
    TVSUIStackedButtonsViewControllerConfiguration *_configuration;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UILabel *_footerLabel;	// 40 = 0x28
    UILayoutGuide *_supplementaryLockup;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000041f13
@property(retain, nonatomic) UILayoutGuide *supplementaryLockup; // @synthesize supplementaryLockup=_supplementaryLockup;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) TVSUIStackedButtonsViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UIView *supplementaryView; // @synthesize supplementaryView=_supplementaryView;
- (void)_updateCompositingEffects;	// IMP=0x0000000000041d12
- (void)_addSupplementaryView;	// IMP=0x0000000000041a5c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000004199b
- (void)viewDidLoad;	// IMP=0x00000000000409e0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000040948

@end

