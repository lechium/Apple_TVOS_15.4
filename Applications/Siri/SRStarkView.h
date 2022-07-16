//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SRStarkGatekeeperHeaderView, SRStarkMessagesContactContainerView, UIButton, UIFocusContainerGuide, UITapGestureRecognizer;
@protocol SRStarkViewDelegate, UIFocusItem;

@interface SRStarkView : UIView
{
    _Bool _touchPassthroughEnabled;	// 8 = 0x8
    UIView *_snippetView;	// 16 = 0x10
    SRStarkMessagesContactContainerView *_messagesContactContainerView;	// 24 = 0x18
    SRStarkGatekeeperHeaderView *_gatekeeperHeader;	// 32 = 0x20
    id <SRStarkViewDelegate> _delegate;	// 40 = 0x28
    UIView *_dismisserView;	// 48 = 0x30
    UIButton *_selectButton;	// 56 = 0x38
    UIFocusContainerGuide *_selectButtonFocusContainerGuide;	// 64 = 0x40
    id <UIFocusItem> _userFocusedItem;	// 72 = 0x48
    UITapGestureRecognizer *_backButtonTapGestureRecognizer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000002bc03
@property(retain, nonatomic) UITapGestureRecognizer *backButtonTapGestureRecognizer; // @synthesize backButtonTapGestureRecognizer=_backButtonTapGestureRecognizer;
@property(retain, nonatomic) id <UIFocusItem> userFocusedItem; // @synthesize userFocusedItem=_userFocusedItem;
@property(retain, nonatomic) UIFocusContainerGuide *selectButtonFocusContainerGuide; // @synthesize selectButtonFocusContainerGuide=_selectButtonFocusContainerGuide;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(readonly, nonatomic, getter=_dismisserView) UIView *dismisserView; // @synthesize dismisserView=_dismisserView;
@property(nonatomic) __weak id <SRStarkViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool touchPassthroughEnabled; // @synthesize touchPassthroughEnabled=_touchPassthroughEnabled;
@property(retain, nonatomic) SRStarkGatekeeperHeaderView *gatekeeperHeader; // @synthesize gatekeeperHeader=_gatekeeperHeader;
@property(retain, nonatomic) SRStarkMessagesContactContainerView *messagesContactContainerView; // @synthesize messagesContactContainerView=_messagesContactContainerView;
@property(retain, nonatomic) UIView *snippetView; // @synthesize snippetView=_snippetView;
- (_Bool)canBecomeFirstResponder;	// IMP=0x001000000002bae6
- (void)layoutSubviews;	// IMP=0x001000000002b312
@property(readonly, nonatomic, getter=_snippetYOrigin) double snippetYOrigin;
- (void)gatekeeperHeaderViewRequestsFocusUpdate:(id)arg1;	// IMP=0x001000000002b201
- (void)gatekeeperHeaderDismissalButtonPressed:(id)arg1;	// IMP=0x001000000002b1b0
- (void);	// IMP=0x001000000002af18
- (_Bool)canBecomeFocused;	// IMP=0x001000000002aee3
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x001000000002ab8e
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x001000000002aa86
- (id)preferredFocusEnvironments;	// IMP=0x001000000002a8a3
- (void)_setGatekeeperHeader:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000002a517
- (void)setGatekeeperHeader:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000002a505
- (void)_setSnippetView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000002a130
- (void)setSnippetView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000002a11e
- (void)_setMessagesContactContainerView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000029e1f
- (void)setMessagesContactContainerView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000029e0d
- (void)_dismissalTapped:(id)arg1;	// IMP=0x0010000000029b27
- (void)_selectButtonTapped:(id)arg1;	// IMP=0x0010000000029adb
- (void)_handleBackButtonTapGestureRecognizer:(id)arg1;	// IMP=0x0010000000029a66
- (_Bool)isOrbFocused;	// IMP=0x0010000000029a49
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000297aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
