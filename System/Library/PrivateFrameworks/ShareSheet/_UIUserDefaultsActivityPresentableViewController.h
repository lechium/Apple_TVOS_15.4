//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@interface _UIUserDefaultsActivityPresentableViewController : UIViewController
{
    UIViewController *_navigationController;	// 8 = 0x8
    UIViewController *_userDefaultsViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000361b8
@property(retain, nonatomic) UIViewController *userDefaultsViewController; // @synthesize userDefaultsViewController=_userDefaultsViewController;
@property(retain, nonatomic) UIViewController *navigationController; // @synthesize navigationController=_navigationController;
- (void)_loadNavigationController;	// IMP=0x0000000000035d9b
- (void)viewDidLoad;	// IMP=0x0000000000035d5a
- (id)initWithUserDefaultsViewController:(id)arg1;	// IMP=0x0000000000035c8b

@end
