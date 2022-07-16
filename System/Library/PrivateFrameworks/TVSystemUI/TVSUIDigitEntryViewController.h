//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVSystemUI/UIGestureRecognizerDelegate-Protocol.h>
#import <TVSystemUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSIndexSet, NSString, TVSUIDigitGroupView, UILabel, UISystemInputViewController, UITextField, UIView;
@protocol TVSUIDigitEntryViewControllerDelegate;

@interface TVSUIDigitEntryViewController : UIViewController <UIGestureRecognizerDelegate, UITextFieldDelegate>
{
    unsigned long long _numberOfDigits;	// 8 = 0x8
    NSIndexSet *_separatorIndexes;	// 16 = 0x10
    UITextField *_textField;	// 24 = 0x18
    UIView *_systemInputView;	// 32 = 0x20
    UISystemInputViewController *_systemInputViewController;	// 40 = 0x28
    NSArray *_volatileConstraints;	// 48 = 0x30
    _Bool _editable;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    UILabel *_promptLabel;	// 72 = 0x48
    TVSUIDigitGroupView *_digitGroupView;	// 80 = 0x50
    UIView *_accessoryView;	// 88 = 0x58
    id <TVSUIDigitEntryViewControllerDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000004402d
@property(nonatomic) __weak id <TVSUIDigitEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)_setupConstraints;	// IMP=0x000000000004390d
- (void)_removeSystemInputController;	// IMP=0x000000000004384c
- (void)_addSystemInputController;	// IMP=0x0000000000043705
- (id)_textField;	// IMP=0x000000000004352d
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x0000000000043525
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x000000000004351d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000043407
- (void)_textDidChange;	// IMP=0x000000000004329c
- (void)_handleMenuButton:(id)arg1;	// IMP=0x000000000004323f
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000431fc
- (void)_updatedTextLabels;	// IMP=0x000000000004311b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000004305a
@property(readonly, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) TVSUIDigitGroupView *digitGroupView; // @synthesize digitGroupView=_digitGroupView;
- (void)updateViewConstraints;	// IMP=0x000000000004289e
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000042778
- (id)preferredFocusEnvironments;	// IMP=0x00000000000426b2
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000042656
- (void)viewDidLoad;	// IMP=0x00000000000422f7
- (void)dealloc;	// IMP=0x000000000004225b
- (id)initWithNumberOfDigits:(unsigned long long)arg1 separatorIndexes:(id)arg2;	// IMP=0x00000000000421c0
- (id)initWithNumberOfDigits:(unsigned long long)arg1;	// IMP=0x00000000000421ac
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004219e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000042190
- (id)init;	// IMP=0x0000000000042182

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
