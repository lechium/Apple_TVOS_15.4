//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UITextView;

@interface TVTextAlertController : UIViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    _Bool _shouldDismissAutomatically;	// 8 = 0x8
    _Bool _hasLongText;	// 9 = 0x9
    UIImage *_headerImage;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    UIImageView *_headerImageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UITextView *_textView;	// 48 = 0x30
    UIButton *_cancelButton;	// 56 = 0x38
    UIButton *_initialFocusButton;	// 64 = 0x40
    NSMutableArray *_buttons;	// 72 = 0x48
    NSMapTable *_buttonHandlers;	// 80 = 0x50
    UITapGestureRecognizer *_menuRecognizer;	// 88 = 0x58
}

+ (id)_destructiveFocusedButtonBackgroundColor;	// IMP=0x000000000003a3a5
+ (id)_destructiveButtonBackgroundColor;	// IMP=0x000000000003a320
+ (id)_buttonBackgroundColor;	// IMP=0x000000000003a2ab
- (void).cxx_destruct;	// IMP=0x000000000003b0a5
@property(readonly, nonatomic) _Bool hasLongText; // @synthesize hasLongText=_hasLongText;
@property(readonly, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(readonly, nonatomic) NSMapTable *buttonHandlers; // @synthesize buttonHandlers=_buttonHandlers;
@property(readonly, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) UIButton *initialFocusButton; // @synthesize initialFocusButton=_initialFocusButton;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) _Bool shouldDismissAutomatically; // @synthesize shouldDismissAutomatically=_shouldDismissAutomatically;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
- (struct CGRect)_textViewLongTextFrame;	// IMP=0x000000000003ae42
- (struct CGRect)_titleLabelLongTextFrame;	// IMP=0x000000000003aba7
- (double)_buttonAreaLongTextHeight;	// IMP=0x000000000003ab75
- (void)_configureTextViews;	// IMP=0x000000000003a8ca
- (void)_updateForLongText;	// IMP=0x000000000003a680
- (void)_didSelectButton:(id)arg1;	// IMP=0x000000000003a5af
- (void)_handleMenuButton;	// IMP=0x000000000003a58b
- (id)_preferredButton;	// IMP=0x000000000003a42a
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000003a287
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000000003a217
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000003a1ec
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000003a1be
- (void)viewDidLayoutSubviews;	// IMP=0x000000000003934f
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000392eb
- (id)preferredFocusEnvironments;	// IMP=0x0000000000039233
- (void)removeAllButtons;	// IMP=0x000000000003908a
- (void)addButtonWithTitle:(id)arg1 type:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038c90
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)viewDidLoad;	// IMP=0x0000000000038624
- (void)loadView;	// IMP=0x0000000000038563
- (id)initWithTitle:(id)arg1 text:(id)arg2;	// IMP=0x0000000000038229
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038213
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000381fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
