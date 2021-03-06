//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/UISystemInputViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIImage, UILabel, UIStackView, UISystemInputViewController, UITapGestureRecognizer, UITextField, UIView, VSCredentialEntryField, VSFontCenter;
@protocol VSCredentialEntryFieldViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryFieldViewController : UIViewController <UITextFieldDelegate, UISystemInputViewControllerDelegate>
{
    _Bool _menuOverride;	// 8 = 0x8
    _Bool _recentsOverride;	// 9 = 0x9
    _Bool _rebuildingTextField;	// 10 = 0xa
    _Bool _isShowingRecentsChildViewController;	// 11 = 0xb
    id <VSCredentialEntryFieldViewControllerDelegate> _delegate;	// 16 = 0x10
    VSCredentialEntryField *_credentialEntryField;	// 24 = 0x18
    NSArray *_buttonModels;	// 32 = 0x20
    UIImage *_logo;	// 40 = 0x28
    NSString *_headerTitle;	// 48 = 0x30
    NSString *_headerMessageText;	// 56 = 0x38
    NSString *_footerMessageText;	// 64 = 0x40
    long long _currentKeyboardLayout;	// 72 = 0x48
    UITextField *_textField;	// 80 = 0x50
    UIView *_headerView;	// 88 = 0x58
    UILabel *_footerLabel;	// 96 = 0x60
    UISystemInputViewController *_inputViewController;	// 104 = 0x68
    UIView *_inputView;	// 112 = 0x70
    NSArray *_inputViewManagedConstraints;	// 120 = 0x78
    id _textFieldTextDidChangeObserver;	// 128 = 0x80
    VSFontCenter *_fontCenter;	// 136 = 0x88
    UITapGestureRecognizer *_menuRecognizer;	// 144 = 0x90
    UITapGestureRecognizer *_doneRecognizer;	// 152 = 0x98
    UIButton *_continueButton;	// 160 = 0xa0
    NSArray *_bottomButtons;	// 168 = 0xa8
    NSLayoutConstraint *_continueButtonCenterYConstraint;	// 176 = 0xb0
    NSArray *_bottomButtonConstraints;	// 184 = 0xb8
    UIView *_container;	// 192 = 0xc0
    NSArray *_containerConstraints;	// 200 = 0xc8
    UIStackView *_buttonContainer;	// 208 = 0xd0
    UIView *_gridLayoutContainer;	// 216 = 0xd8
    NSLayoutConstraint *_gridLayoutSpacingConstraint;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0000000000008660
@property(retain, nonatomic) NSLayoutConstraint *gridLayoutSpacingConstraint; // @synthesize gridLayoutSpacingConstraint=_gridLayoutSpacingConstraint;
@property(retain, nonatomic) UIView *gridLayoutContainer; // @synthesize gridLayoutContainer=_gridLayoutContainer;
@property(retain, nonatomic) UIStackView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(retain, nonatomic) NSArray *containerConstraints; // @synthesize containerConstraints=_containerConstraints;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) NSArray *bottomButtonConstraints; // @synthesize bottomButtonConstraints=_bottomButtonConstraints;
@property(retain, nonatomic) NSLayoutConstraint *continueButtonCenterYConstraint; // @synthesize continueButtonCenterYConstraint=_continueButtonCenterYConstraint;
@property(retain, nonatomic) NSArray *bottomButtons; // @synthesize bottomButtons=_bottomButtons;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) _Bool isShowingRecentsChildViewController; // @synthesize isShowingRecentsChildViewController=_isShowingRecentsChildViewController;
@property(nonatomic) _Bool rebuildingTextField; // @synthesize rebuildingTextField=_rebuildingTextField;
@property(nonatomic) _Bool recentsOverride; // @synthesize recentsOverride=_recentsOverride;
@property(nonatomic) _Bool menuOverride; // @synthesize menuOverride=_menuOverride;
@property(retain, nonatomic) UITapGestureRecognizer *doneRecognizer; // @synthesize doneRecognizer=_doneRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(nonatomic) __weak id textFieldTextDidChangeObserver; // @synthesize textFieldTextDidChangeObserver=_textFieldTextDidChangeObserver;
@property(retain, nonatomic) NSArray *inputViewManagedConstraints; // @synthesize inputViewManagedConstraints=_inputViewManagedConstraints;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UISystemInputViewController *inputViewController; // @synthesize inputViewController=_inputViewController;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) long long currentKeyboardLayout; // @synthesize currentKeyboardLayout=_currentKeyboardLayout;
@property(copy, nonatomic) NSString *footerMessageText; // @synthesize footerMessageText=_footerMessageText;
@property(copy, nonatomic) NSString *headerMessageText; // @synthesize headerMessageText=_headerMessageText;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) UIImage *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSArray *buttonModels; // @synthesize buttonModels=_buttonModels;
@property(retain, nonatomic) VSCredentialEntryField *credentialEntryField; // @synthesize credentialEntryField=_credentialEntryField;
@property(nonatomic) __weak id <VSCredentialEntryFieldViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)systemInputViewControllerDidAcceptRecentInput:(id)arg1;	// IMP=0x00000000000081e3
- (void)systemInputViewController:(id)arg1 didChangeAccessoryVisibility:(_Bool)arg2;	// IMP=0x000000000000819c
- (void)layoutBottomButtonForGridKeyboard;	// IMP=0x0000000000007e0c
- (void)layoutTopButtonForGridKeyboard;	// IMP=0x0000000000007ac3
- (void)layoutViewForGridKeyboard;	// IMP=0x00000000000079dd
- (void)layoutViewForTouchKeyboard;	// IMP=0x00000000000079d7
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000007899
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000007824
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000077ba
- (void)viewDidLoad;	// IMP=0x0000000000006e5f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000006dcc
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;	// IMP=0x0000000000006c7e
- (void)bottomButtonPressed:(id)arg1;	// IMP=0x0000000000006b05
- (void)menuPressed:(id)arg1;	// IMP=0x0000000000006a40
- (void)handleButtonPress;	// IMP=0x0000000000006a03
- (void)continueButtonPressed:(id)arg1;	// IMP=0x0000000000006955
- (void)remoteContinueButtonPressed:(id)arg1;	// IMP=0x00000000000068a7
- (void)replaceButtonConstraints:(id)arg1;	// IMP=0x000000000000670b
- (void)didSelectRecentAccount;	// IMP=0x00000000000066ad
- (void)showViewElementsAfterRecents;	// IMP=0x0000000000006376
- (void)rebuildUIAfterRecents;	// IMP=0x0000000000005edd
- (void)_addRemoteAppSupportFor:(id)arg1;	// IMP=0x0000000000005e02
- (void)addSystemInputViewController;	// IMP=0x000000000000548f
- (void)replaceInputViewManagedConstraintsWith:(id)arg1;	// IMP=0x00000000000053f2
- (void)buildAndSetGridLayoutContainer;	// IMP=0x0000000000003d4a
- (void)_configureTextField;	// IMP=0x00000000000025ed
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x00000000000025e5
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x00000000000025dd
- (void)dealloc;	// IMP=0x000000000000253f
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000023a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

