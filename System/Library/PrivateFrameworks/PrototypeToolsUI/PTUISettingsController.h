//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class UIBarButtonItem;

@interface PTUISettingsController : UINavigationController
{
    UIBarButtonItem *_dismissButton;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000afd4
@property(retain, nonatomic) UIBarButtonItem *dismissButton; // @synthesize dismissButton=_dismissButton;
- (void)_reloadWithRootModule:(id)arg1;	// IMP=0x000000000000ae96
- (void)_dismiss;	// IMP=0x000000000000ae52
- (id)_defaultDismissButton;	// IMP=0x000000000000ae13
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000ad70
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000000aba5
- (id)initWithRootModuleController:(id)arg1;	// IMP=0x000000000000aae0
- (id)_initWithRootModule:(id)arg1;	// IMP=0x000000000000aa60
- (id)initWithRootSettings:(id)arg1;	// IMP=0x000000000000a9e2

@end
