//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UIButton, UILabel, UIStackView;
@protocol GKNicknameInputAccessoryViewDelegate;

@interface GKNicknameInputAccessoryView : UIView
{
    UILabel *_message;	// 8 = 0x8
    id <GKNicknameInputAccessoryViewDelegate> _delegate;	// 16 = 0x10
    UIButton *_firstSuggestion;	// 24 = 0x18
    UIButton *_secondSuggestion;	// 32 = 0x20
    UIButton *_thirdSuggestion;	// 40 = 0x28
    UILabel *_suggestionsLabel;	// 48 = 0x30
    UIView *_containerView;	// 56 = 0x38
    UIStackView *_nicknameStackView;	// 64 = 0x40
    NSLayoutConstraint *_titleToContainerViewConstraint;	// 72 = 0x48
    NSLayoutConstraint *_containerViewBottomConstriant;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000f7c16
@property(retain, nonatomic) NSLayoutConstraint *containerViewBottomConstriant; // @synthesize containerViewBottomConstriant=_containerViewBottomConstriant;
@property(retain, nonatomic) NSLayoutConstraint *titleToContainerViewConstraint; // @synthesize titleToContainerViewConstraint=_titleToContainerViewConstraint;
@property(retain, nonatomic) UIStackView *nicknameStackView; // @synthesize nicknameStackView=_nicknameStackView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *suggestionsLabel; // @synthesize suggestionsLabel=_suggestionsLabel;
@property(retain, nonatomic) UIButton *thirdSuggestion; // @synthesize thirdSuggestion=_thirdSuggestion;
@property(retain, nonatomic) UIButton *secondSuggestion; // @synthesize secondSuggestion=_secondSuggestion;
@property(retain, nonatomic) UIButton *firstSuggestion; // @synthesize firstSuggestion=_firstSuggestion;
@property __weak id <GKNicknameInputAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *message; // @synthesize message=_message;
- (void)suggestionPicked:(id)arg1;	// IMP=0x00000000000f79aa
@property(retain, nonatomic) NSArray *suggestions; // @dynamic suggestions;
- (void)layoutSubviews;	// IMP=0x00000000000f7401
- (void)awakeFromNib;	// IMP=0x00000000000f70e6

@end
