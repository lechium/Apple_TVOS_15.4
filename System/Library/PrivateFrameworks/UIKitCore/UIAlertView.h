//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, UIAlertController, UIViewController, _UIAlertControllerShimPresenter;

@interface UIAlertView
{
    UIAlertController *_alertController;	// 8 = 0x8
    _UIAlertControllerShimPresenter *_presenter;	// 16 = 0x10
    id _retainedSelf;	// 24 = 0x18
    NSMutableArray *_actions;	// 32 = 0x20
    long long _cancelIndex;	// 40 = 0x28
    long long _defaultButtonIndex;	// 48 = 0x30
    long long _firstOtherButtonIndex;	// 56 = 0x38
    NSString *_message;	// 64 = 0x40
    NSString *_subtitle;	// 72 = 0x48
    long long _alertViewStyle;	// 80 = 0x50
    _Bool _hasPreparedAlertActions;	// 88 = 0x58
    _Bool _isPresented;	// 89 = 0x59
    _Bool _alertControllerShouldDismiss;	// 90 = 0x5a
    _Bool _handlingAlertActionShouldDismiss;	// 91 = 0x5b
    _Bool _dismissingAlertController;	// 92 = 0x5c
    id _delegate;	// 96 = 0x60
    id _context;	// 104 = 0x68
    UIViewController *_externalViewControllerForPresentation;	// 112 = 0x70
}

+ (id)_alertViewForWindow:(id)arg1;	// IMP=0x0000000000f30974
+ (id)_alertViewForSessionWithRemoteViewController:(id)arg1;	// IMP=0x0000000000f3088a
+ (id)_remoteAlertViewWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f307e5
- (void).cxx_destruct;	// IMP=0x000000000001bd00
@property(retain, nonatomic, getter=_externalViewControllerForPresentation, setter=_setExternalViewControllerForPresentation:) UIViewController *externalViewControllerForPresentation; // @synthesize externalViewControllerForPresentation=_externalViewControllerForPresentation;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id)_alertController;	// IMP=0x000000000001bc74
- (void)setTableShouldShowMinimumContent:(_Bool)arg1;	// IMP=0x000000000001bc6e
- (id)_addButtonWithTitle:(id)arg1;	// IMP=0x000000000001bc59
- (id)tableView;	// IMP=0x000000000001bc51
- (id)keyboard;	// IMP=0x000000000001bc49
- (id)titleLabel;	// IMP=0x000000000001bc41
- (id)_titleLabel;	// IMP=0x000000000001bc2f
- (void)layout;	// IMP=0x000000000001bc29
- (void)dismiss;	// IMP=0x000000000001bc12
@property(retain, nonatomic) NSString *bodyText;
@property(nonatomic) _Bool groupsTextFields;
- (void)_setAccessoryView:(id)arg1;	// IMP=0x000000000001bb0c
@property(nonatomic) long long numberOfRows;
- (struct CGSize)backgroundSize;	// IMP=0x000000000001bae8
- (_Bool)_isAnimating;	// IMP=0x000000000001baa6
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001b96d
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001b8ab
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x000000000001b86b
- (void)show;	// IMP=0x000000000001b854
- (void)_showAnimated:(_Bool)arg1;	// IMP=0x000000000001b680
- (id)textFieldAtIndex:(long long)arg1;	// IMP=0x000000000001b5df
- (id)textField;	// IMP=0x000000000001b565
- (int)textFieldCount;	// IMP=0x000000000001b4f7
- (void)_textDidChangeInTextField:(id)arg1;	// IMP=0x000000000001b4e5
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;	// IMP=0x000000000001b4d3
- (id)_addTextFieldWithValue:(id)arg1 label:(id)arg2;	// IMP=0x000000000001b1dc
- (long long)_maximumNumberOfTextFieldsForCurrentStyle;	// IMP=0x000000000001b189
- (int)buttonCount;	// IMP=0x000000000001b177
@property(readonly, nonatomic) long long numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;	// IMP=0x000000000001b13d
- (void)_updateFirstOtherButtonEnabledState;	// IMP=0x000000000001b092
@property(readonly, nonatomic) long long firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(long long)arg1;	// IMP=0x000000000001b070
@property(nonatomic) long long cancelButtonIndex;
@property(nonatomic) long long defaultButtonIndex;
- (long long)addButtonWithTitle:(id)arg1;	// IMP=0x000000000001af52
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;	// IMP=0x000000000001af3d
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;	// IMP=0x000000000001af28
- (void)_setIsPresented:(_Bool)arg1;	// IMP=0x000000000001ae7d
- (void)_dismissForTappedIndex:(long long)arg1;	// IMP=0x000000000001ae66
- (_Bool)_prepareToDismissForTappedIndex:(long long)arg1;	// IMP=0x000000000001adac
- (id)window;	// IMP=0x000000000001ad8f
@property(nonatomic) long long alertViewStyle;
- (void)_updateMessageAndSubtitle;	// IMP=0x000000000001ab34
@property(retain, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)_prepareAlertActions;	// IMP=0x000000000001a6d6
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001a652
- (void)_updateButtonTitle:(id)arg1 buttonIndex:(unsigned long long)arg2;	// IMP=0x000000000001a5b2
- (void)dealloc;	// IMP=0x000000000001a539
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a50a
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;	// IMP=0x000000000001a2a6
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;	// IMP=0x000000000001a045
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;	// IMP=0x0000000000019dfa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000019c52

@end

