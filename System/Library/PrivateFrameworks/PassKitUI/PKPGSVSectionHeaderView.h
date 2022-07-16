//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPGSVSectionHeaderView-Protocol.h>

@class NSString, PKButtonBadgeView, UIActivityIndicatorView, UIButton, UILabel;
@protocol PKPGSVSectionHeaderViewDelegate;

@interface PKPGSVSectionHeaderView : UIView <PKPGSVSectionHeaderView>
{
    _Bool _sizesDirty;	// 8 = 0x8
    UILabel *_titleView;	// 16 = 0x10
    UILabel *_environmentLabel;	// 24 = 0x18
    UIButton *_actionButton;	// 32 = 0x20
    UIButton *_inboxButton;	// 40 = 0x28
    PKButtonBadgeView *_inboxBadge;	// 48 = 0x30
    UIActivityIndicatorView *_activityIndicator;	// 56 = 0x38
    struct UIEdgeInsets _margins;	// 64 = 0x40
    id <PKPGSVSectionHeaderViewDelegate> _delegate;	// 96 = 0x60
    _Bool _showActivityIndicator;	// 104 = 0x68
    unsigned long long _passType;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000ecf7e
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(readonly, nonatomic) unsigned long long passType; // @synthesize passType=_passType;
- (_Bool)needsUpdate;	// IMP=0x00000000000ece1f
- (id)trailingView;	// IMP=0x00000000000ecdf9
- (id)leadingView;	// IMP=0x00000000000ecde4
- (id)_inboxBadgeValue;	// IMP=0x00000000000ecd0b
- (_Bool)_shouldShowInboxButton;	// IMP=0x00000000000eccbe
- (_Bool)_shouldShowMoreInfoButtonForBarcodePass;	// IMP=0x00000000000ecc5c
- (void)_inboxTapped;	// IMP=0x00000000000ecc1b
- (void)_addTapped;	// IMP=0x00000000000eca6b
- (void)inboxTapped;	// IMP=0x00000000000eca3c
- (void)addTapped;	// IMP=0x00000000000eca0d
- (void)layoutSubviews;	// IMP=0x00000000000ec02b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000ebf61
- (id)initWithPassType:(unsigned long long)arg1 delegate:(id)arg2;	// IMP=0x00000000000eb37f
- (id)init;	// IMP=0x00000000000eb369

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

