//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKitUI/AKAppleIDAuthenticationInAppContextPasswordDelegate-Protocol.h>
#import <AuthKitUI/UITextFieldDelegate-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, AKTextField, NSString, UIActivityIndicatorView, UIButton, UIColor, UIView;

@interface AKInlineSignInViewController <UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate>
{
    _Bool _usesDarkMode;	// 8 = 0x8
    _Bool _usesVibrancy;	// 9 = 0x9
    _Bool _createAppleIDAllowed;	// 10 = 0xa
    long long _blurEffectStyle;	// 16 = 0x10
    NSString *_secondaryButtonTitle;	// 24 = 0x18
    NSString *_tertiaryButtonTitle;	// 32 = 0x20
    AKAppleIDAuthenticationInAppContext *_context;	// 40 = 0x28
    CDUnknownBlockType _passwordRequiredCompletion;	// 48 = 0x30
    _Bool _wantsAuthenticationProgress;	// 56 = 0x38
    _Bool _primaryButtonHidden;	// 57 = 0x39
    _Bool _shouldPromptForPasswordOnly;	// 58 = 0x3a
    NSString *_primaryButtonTitle;	// 64 = 0x40
    UIColor *_fieldBackgroundColor;	// 72 = 0x48
    UIColor *_entryDescriptionTextColor;	// 80 = 0x50
    UIColor *_entryFieldTextColor;	// 88 = 0x58
    UIView *_loginFieldsContainer;	// 96 = 0x60
    AKTextField *_appleIDField;	// 104 = 0x68
    AKTextField *_passwordField;	// 112 = 0x70
    UIButton *_signInButton;	// 120 = 0x78
    UIButton *_iforgotButton;	// 128 = 0x80
    UIButton *_createAppleIDButton;	// 136 = 0x88
    UIActivityIndicatorView *_spinner;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000000101a8
@property(retain) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain) UIButton *createAppleIDButton; // @synthesize createAppleIDButton=_createAppleIDButton;
@property(retain) UIButton *iforgotButton; // @synthesize iforgotButton=_iforgotButton;
@property(retain) UIButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain) AKTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain) AKTextField *appleIDField; // @synthesize appleIDField=_appleIDField;
@property(retain) UIView *loginFieldsContainer; // @synthesize loginFieldsContainer=_loginFieldsContainer;
@property(nonatomic) _Bool shouldPromptForPasswordOnly; // @synthesize shouldPromptForPasswordOnly=_shouldPromptForPasswordOnly;
@property(nonatomic, getter=isPrimaryButtonHidden) _Bool primaryButtonHidden; // @synthesize primaryButtonHidden=_primaryButtonHidden;
@property(retain, nonatomic) UIColor *entryFieldTextColor; // @synthesize entryFieldTextColor=_entryFieldTextColor;
@property(retain, nonatomic) UIColor *entryDescriptionTextColor; // @synthesize entryDescriptionTextColor=_entryDescriptionTextColor;
@property(retain, nonatomic) UIColor *fieldBackgroundColor; // @synthesize fieldBackgroundColor=_fieldBackgroundColor;
@property(readonly) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property _Bool wantsAuthenticationProgress; // @synthesize wantsAuthenticationProgress=_wantsAuthenticationProgress;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000000000fdd3
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000000f905
- (void)context:(id)arg1 needsPasswordWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f8b0
@property(nonatomic) long long blurEffectStyle;
@property(nonatomic) _Bool usesVibrancy;
- (void)_updateFonts:(id)arg1;	// IMP=0x000000000000f493
- (void)_updateSignInButtonState;	// IMP=0x000000000000f2b7
- (void)_passwordTextFieldDidChange:(id)arg1;	// IMP=0x000000000000f2a5
- (void)_appleIDTextFieldDidChange:(id)arg1;	// IMP=0x000000000000f293
- (void)_setPasswordFieldHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000f04f
- (void)stopAnimating;	// IMP=0x000000000000ee35
- (void)startAnimating;	// IMP=0x000000000000ec3d
- (void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)arg1;	// IMP=0x000000000000ea32
- (void)createAppleIDButtonWasTapped:(id)arg1;	// IMP=0x000000000000e9c1
- (void)iForgotButtonWasTapped:(id)arg1;	// IMP=0x000000000000e950
- (void)signInButtonWasTapped:(id)arg1;	// IMP=0x000000000000e939
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000e891
- (void)_updateVibrancyAndBlurInTextFields;	// IMP=0x000000000000e5e0
- (void)_prefillAuthFields;	// IMP=0x000000000000e471
- (void)_updateSignInFieldStatuses;	// IMP=0x000000000000e3a9
- (void)_updatePlaceholderIfNeeded;	// IMP=0x000000000000e1af
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000000e1a7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000e166
- (void)viewDidLoad;	// IMP=0x000000000000d0eb
- (void)setContext:(id)arg1;	// IMP=0x000000000000d042
- (id)context;	// IMP=0x000000000000d02d
- (void)setTertiaryButtonTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000000cf44
- (void)setSecondaryButtonTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000000ce5b
- (void)refreshCreateAppleIDButton;	// IMP=0x000000000000cd91
@property(copy) NSString *tertiaryButtonTitle;
@property(copy) NSString *secondaryButtonTitle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000cb9c
- (void)dealloc;	// IMP=0x000000000000cb1a
- (id)init;	// IMP=0x000000000000c744
- (_Bool)usesDarkMode;	// IMP=0x00000000000102f4
- (void)setUsesDarkMode:(_Bool)arg1;	// IMP=0x00000000000102b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
