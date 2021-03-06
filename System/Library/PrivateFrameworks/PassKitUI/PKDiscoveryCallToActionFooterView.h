//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>

@class NSString, PKContinuousButton, PKDiscoveryCallToAction, PKDiscoveryMedia, PKLinkedApplication, UIImageView, UILabel;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCallToActionFooterView : UIView <PKLinkedApplicationObserver>
{
    PKDiscoveryCallToAction *_callToAction;	// 8 = 0x8
    PKDiscoveryMedia *_media;	// 16 = 0x10
    UIImageView *_iconImageView;	// 24 = 0x18
    PKContinuousButton *_button;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_editorialDescriptionLabel;	// 48 = 0x30
    UILabel *_expandedTitleLabel;	// 56 = 0x38
    UILabel *_expandedEditorialDescriptionLabel;	// 64 = 0x40
    long long _displayType;	// 72 = 0x48
    _Bool _hasIcon;	// 80 = 0x50
    _Bool _hasButton;	// 81 = 0x51
    _Bool _useAccessibilityLayout;	// 82 = 0x52
    PKLinkedApplication *_linkedApplication;	// 88 = 0x58
    CDUnknownBlockType _callToActionTappedOverride;	// 96 = 0x60
    _Bool _showActivityIndicator;	// 104 = 0x68
    id <PKDiscoveryCardViewDelegate> _delegate;	// 112 = 0x70
    NSString *_itemIdentifier;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000e0d39
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) __weak id <PKDiscoveryCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
- (void)_loadImageData;	// IMP=0x00000000000e0767
- (struct CGSize)_iconSize;	// IMP=0x00000000000e06b1
- (double)_buttonWidthForLabelWidth:(double)arg1;	// IMP=0x00000000000e06a3
- (struct CGSize)_buttonSizeForBounds:(struct CGRect)arg1;	// IMP=0x00000000000e0356
- (id)_editorialDescriptionLabelFont;	// IMP=0x00000000000e0326
- (id)_titleLabelFont;	// IMP=0x00000000000e02f3
- (id)_descriptionLabelWithLocalizedDescription:(id)arg1;	// IMP=0x00000000000e01f6
- (id)_titleLabelWithLocalizedTitle:(id)arg1;	// IMP=0x00000000000e00f9
- (void)_buttonPressed:(id)arg1;	// IMP=0x00000000000e002b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000dfdc6
- (id)_descriptionLabelColor;	// IMP=0x00000000000dfd24
- (id)_titleLabelColor;	// IMP=0x00000000000dfc9c
- (void)setCallToActionTappedOverride:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dfc4b
- (void)linkedApplicationDidChangeState:(id)arg1;	// IMP=0x00000000000dfadf
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000dfad1
- (void)layoutSubviews;	// IMP=0x00000000000df245
- (id)initWithCallToAction:(id)arg1 displayType:(long long)arg2;	// IMP=0x00000000000df230
- (id)initWithCallToAction:(id)arg1 displayType:(long long)arg2 itemIdentifier:(id)arg3;	// IMP=0x00000000000de9b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

