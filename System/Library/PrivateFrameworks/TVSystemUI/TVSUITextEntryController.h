//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVSystemUI/UISystemInputViewControllerDelegate-Protocol.h>

@class NSString, UILabel, UISystemInputViewController, UITextField, UIView, _TVSUITextEntryTextField;
@protocol TVSUITextEntryControllerDelegate;

@interface TVSUITextEntryController : UIViewController <UISystemInputViewControllerDelegate>
{
    _TVSUITextEntryTextField *_textField;	// 8 = 0x8
    UIView *_topAccessoryView;	// 16 = 0x10
    UIView *_bottomAccessoryView;	// 24 = 0x18
    _Bool _isTouchEnabled;	// 32 = 0x20
    UIView *_preferredFocusedView;	// 40 = 0x28
    _Bool _hideAccessoryViews;	// 48 = 0x30
    id <TVSUITextEntryControllerDelegate> _delegate;	// 56 = 0x38
    UILabel *_textFieldHeaderLabel;	// 64 = 0x40
    UISystemInputViewController *_systemInputViewController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000300c7
@property(readonly, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) UIView *bottomAccessoryView; // @synthesize bottomAccessoryView=_bottomAccessoryView;
@property(retain, nonatomic) UIView *topAccessoryView; // @synthesize topAccessoryView=_topAccessoryView;
@property(readonly, nonatomic) UILabel *textFieldHeaderLabel; // @synthesize textFieldHeaderLabel=_textFieldHeaderLabel;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <TVSUITextEntryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool textFieldAllowsFocus;
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x000000000002ffae
- (void)systemInputViewControllerDidAcceptRecentInput:(id)arg1;	// IMP=0x000000000002ff9a
- (void)systemInputViewController:(id)arg1 didChangeAccessoryVisibility:(_Bool)arg2;	// IMP=0x000000000002ff13
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x000000000002ff0b
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x000000000002ff03
- (void)viewDidLayoutSubviews;	// IMP=0x000000000002f393
- (void)textFieldDidChange:(id)arg1;	// IMP=0x000000000002f356
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000002f26e
- (id)preferredFocusEnvironments;	// IMP=0x000000000002f1ac
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000000002f14f
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000002f104
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002f0b6
- (void)viewWillLayoutSubviews;	// IMP=0x000000000002f06d
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x000000000002ef20
- (void)viewDidLoad;	// IMP=0x000000000002ee6b
- (void)loadView;	// IMP=0x000000000002ed9f
- (void)dealloc;	// IMP=0x000000000002eb00
- (id)init;	// IMP=0x000000000002eaea
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000002e8e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

