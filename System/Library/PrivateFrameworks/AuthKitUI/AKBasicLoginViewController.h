//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AuthKitUI/AKAppleIDAuthenticationInAppContextPasswordDelegate-Protocol.h>
#import <AuthKitUI/AKBasicLoginAnimateProtocol-Protocol.h>
#import <AuthKitUI/AKBasicLoginPasswordFieldProtocol-Protocol.h>
#import <AuthKitUI/UITableViewDataSource-Protocol.h>
#import <AuthKitUI/UITableViewDelegate-Protocol.h>
#import <AuthKitUI/UITextFieldDelegate-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, AKBasicLoginActions, AKBasicLoginOptionsViewController, AKBasicLoginTableViewCell, NSLayoutConstraint, NSString, UITableView, UIView;
@protocol AKBasicLoginControllerDelegate;

@interface AKBasicLoginViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKBasicLoginPasswordFieldProtocol, AKBasicLoginAnimateProtocol>
{
    _Bool _isPasswordFieldVisible;	// 8 = 0x8
    AKBasicLoginActions *_loginActions;	// 16 = 0x10
    id <AKBasicLoginControllerDelegate> _delegate;	// 24 = 0x18
    AKAppleIDAuthenticationInAppContext *_context;	// 32 = 0x20
    UIView *_loginOptions;	// 40 = 0x28
    AKBasicLoginOptionsViewController *_loginOptionsViewController;	// 48 = 0x30
    CDUnknownBlockType _passwordHandler;	// 56 = 0x38
    UITableView *_tableView;	// 64 = 0x40
    NSLayoutConstraint *_heightAnchor;	// 72 = 0x48
    AKBasicLoginTableViewCell *_usernameCell;	// 80 = 0x50
    AKBasicLoginTableViewCell *_passwordCell;	// 88 = 0x58
    UIView *_contentView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000002fedf
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) AKBasicLoginTableViewCell *passwordCell; // @synthesize passwordCell=_passwordCell;
@property(retain, nonatomic) AKBasicLoginTableViewCell *usernameCell; // @synthesize usernameCell=_usernameCell;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isPasswordFieldVisible; // @synthesize isPasswordFieldVisible=_isPasswordFieldVisible;
@property(copy, nonatomic) CDUnknownBlockType passwordHandler; // @synthesize passwordHandler=_passwordHandler;
@property(retain, nonatomic) AKBasicLoginOptionsViewController *loginOptionsViewController; // @synthesize loginOptionsViewController=_loginOptionsViewController;
@property(retain, nonatomic) UIView *loginOptions; // @synthesize loginOptions=_loginOptions;
@property(nonatomic) __weak AKAppleIDAuthenticationInAppContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <AKBasicLoginControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) AKBasicLoginActions *loginActions; // @synthesize loginActions=_loginActions;
- (void)_setContentInset:(double)arg1;	// IMP=0x000000000002fbf6
- (void)_keyboardDidHide:(id)arg1;	// IMP=0x000000000002fbe1
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000000002fb36
- (id)_tableView;	// IMP=0x000000000002f66b
- (id)_passwordCell;	// IMP=0x000000000002f5ce
- (id)_usernameCell;	// IMP=0x000000000002f531
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000000002f3aa
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000002f395
- (id)usernameCellTextField;	// IMP=0x000000000002f345
- (id)passwordCellTextField;	// IMP=0x000000000002f2f5
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002f25b
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002f21d
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002f20c
- (void)_initializeView;	// IMP=0x000000000002ea05
- (void)initializeUsernameCellTextField:(id)arg1;	// IMP=0x000000000002e81d
- (void)initializePasswordCellTextField:(id)arg1;	// IMP=0x000000000002e742
- (void)_setPasswordHiddenIfNeeded;	// IMP=0x000000000002e4ee
- (void)context:(id)arg1 needsPasswordWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002e254
- (void)_updatePlaceholderIfNeeded;	// IMP=0x000000000002e081
- (id)_signInBarButtonItem;	// IMP=0x000000000002df48
- (id)_cancelBarButtonItem;	// IMP=0x000000000002df06
- (id)_loginOptions;	// IMP=0x000000000002d543
- (_Bool)_shouldShowPassword;	// IMP=0x000000000002d4e1
- (_Bool)_shouldShowUserName;	// IMP=0x000000000002d49d
- (id)_title;	// IMP=0x000000000002d298
- (void)_signInPressed:(id)arg1;	// IMP=0x000000000002d085
- (void)_cancelPressed:(id)arg1;	// IMP=0x000000000002cf88
- (void)clearPasswordField;	// IMP=0x000000000002cf49
- (void)stopAnimating;	// IMP=0x000000000002ced9
- (void)startAnimating;	// IMP=0x000000000002ce23
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000002ce1b
- (_Bool)isPresentedModally;	// IMP=0x000000000002cd3c
- (void)viewDidLayoutSubviews;	// IMP=0x000000000002cc65
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000002cb62
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000002caf1
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000002ca1b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002c9ec
- (void)loadView;	// IMP=0x000000000002c8e8
- (id)initWithContext:(id)arg1;	// IMP=0x000000000002c824

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

