//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVKit/UITextFieldDelegate-Protocol.h>

@class NSArray, NSIndexSet, NSString, UILabel, UISystemInputViewController, UITextField, UIView, _TVDigitGroupView;
@protocol _TVDigitEntryViewControllerDelegate;

@interface _TVDigitEntryViewController : UIViewController <UIGestureRecognizerDelegate, UITextFieldDelegate>
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
    _TVDigitGroupView *_digitGroupView;	// 80 = 0x50
    UIView *_accessoryView;	// 88 = 0x58
    id <_TVDigitEntryViewControllerDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000268ac
@property(nonatomic) __weak id <_TVDigitEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)_setupConstraints;	// IMP=0x000000000002618c
- (void)_removeSystemInputController;	// IMP=0x00000000000260cb
- (void)_addSystemInputController;	// IMP=0x0000000000025f84
- (id)_textField;	// IMP=0x0000000000025dac
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x0000000000025da4
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x0000000000025d9c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000025c86
- (void)_textDidChange;	// IMP=0x0000000000025b0a
- (void)_handleMenuButton:(id)arg1;	// IMP=0x0000000000025a6d
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000025a2a
- (void)_updatedTextLabels;	// IMP=0x0000000000025981
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000258c0
@property(readonly, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) _TVDigitGroupView *digitGroupView; // @synthesize digitGroupView=_digitGroupView;
- (void)updateViewConstraints;	// IMP=0x0000000000025118
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000024fa1
- (id)preferredFocusedView;	// IMP=0x0000000000024f64
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000024f08
- (void)viewDidLoad;	// IMP=0x0000000000024ba9
- (void)dealloc;	// IMP=0x0000000000024b0d
- (id)initWithNumberOfDigits:(unsigned long long)arg1 separatorIndexes:(id)arg2;	// IMP=0x0000000000024a72
- (id)initWithNumberOfDigits:(unsigned long long)arg1;	// IMP=0x0000000000024a5e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024a50
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000024a42
- (id)init;	// IMP=0x0000000000024a34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

