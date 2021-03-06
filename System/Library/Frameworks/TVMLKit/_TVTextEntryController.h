//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/UISystemInputViewControllerDelegate-Protocol.h>

@class NSString, UILabel, UISystemInputViewController, UITextField, UIView, __TVTextEntryTextField;
@protocol TVTextEntryControllerDelegate;

@interface _TVTextEntryController : UIViewController <UISystemInputViewControllerDelegate>
{
    __TVTextEntryTextField *_textField;	// 8 = 0x8
    UIView *_topAccessoryView;	// 16 = 0x10
    UIView *_bottomAccessoryView;	// 24 = 0x18
    _Bool _isTouchEnabled;	// 32 = 0x20
    UIView *_preferredFocusedView;	// 40 = 0x28
    _Bool _hideAccessoryViews;	// 48 = 0x30
    id <TVTextEntryControllerDelegate> _delegate;	// 56 = 0x38
    UILabel *_textFieldHeaderLabel;	// 64 = 0x40
    UISystemInputViewController *_systemInputViewController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000003da8e
@property(readonly, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) UIView *bottomAccessoryView; // @synthesize bottomAccessoryView=_bottomAccessoryView;
@property(retain, nonatomic) UIView *topAccessoryView; // @synthesize topAccessoryView=_topAccessoryView;
@property(readonly, nonatomic) UILabel *textFieldHeaderLabel; // @synthesize textFieldHeaderLabel=_textFieldHeaderLabel;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <TVTextEntryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool textFieldAllowsFocus;
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x000000000003d975
- (void)systemInputViewControllerDidAcceptRecentInput:(id)arg1;	// IMP=0x000000000003d961
- (void)systemInputViewController:(id)arg1 didChangeAccessoryVisibility:(_Bool)arg2;	// IMP=0x000000000003d8da
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x000000000003d8d2
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x000000000003d8ca
- (void)viewDidLayoutSubviews;	// IMP=0x000000000003ce8b
- (void)textFieldDidChange:(id)arg1;	// IMP=0x000000000003ce4e
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000003cd66
- (id)preferredFocusEnvironments;	// IMP=0x000000000003cca4
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000000003cc47
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000003cbfc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000003cbae
- (void)viewWillLayoutSubviews;	// IMP=0x000000000003cb65
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x000000000003ca18
- (void)viewDidLoad;	// IMP=0x000000000003c963
- (void)loadView;	// IMP=0x000000000003c897
@property(nonatomic) unsigned long long maxLength;
- (void)dealloc;	// IMP=0x000000000003c5be
- (id)init;	// IMP=0x000000000003c5a8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000003c3b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

