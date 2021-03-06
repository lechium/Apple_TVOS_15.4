//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class TVDigitEntryViewController;

@interface TVSUIRestrictionsPasscodeEntryViewController : UIViewController
{
    TVDigitEntryViewController *_passcodeEntryViewController;	// 8 = 0x8
    UIViewController *_guardedViewController;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

+ (id)restrictionsPasscodeEntryViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016f97
+ (id)restrictionsPasscodeEntryViewControllerGuarding:(id)arg1;	// IMP=0x0000000000016e66
- (void).cxx_destruct;	// IMP=0x00000000000179df
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UIViewController *guardedViewController; // @synthesize guardedViewController=_guardedViewController;
@property(retain, nonatomic) TVDigitEntryViewController *passcodeEntryViewController; // @synthesize passcodeEntryViewController=_passcodeEntryViewController;
- (void)_handleFinishedWithResult:(id)arg1;	// IMP=0x00000000000176e3
- (void)_handleCancelled;	// IMP=0x0000000000017671
- (void)setOverrideUserInterfaceStyle:(long long)arg1;	// IMP=0x000000000001761b
- (void)shake;	// IMP=0x00000000000175f9
- (id)preferredFocusEnvironments;	// IMP=0x0000000000017511
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000017423
- (void)viewDidLoad;	// IMP=0x0000000000017385
- (id)initWithTitle:(id)arg1 prompt:(id)arg2 guarding:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000170e0
- (id)initWithTitle:(id)arg1 prompt:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000170c8

@end

