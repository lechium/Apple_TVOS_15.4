//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPaymentDashboardCellActionHandleable-Protocol.h>

@class NSString, PKContinuousButton, PKPaymentPass, PKPaymentPassAction, UIColor, UIImageView, UILabel;

@interface PKAdjustableSingleCellView : UIView <PKPaymentDashboardCellActionHandleable>
{
    UIImageView *_disclosureView;	// 8 = 0x8
    PKContinuousButton *_actionButton;	// 16 = 0x10
    double _topPadding;	// 24 = 0x18
    _Bool _isTemplateLayout;	// 32 = 0x20
    UILabel *_titleView;	// 40 = 0x28
    UILabel *_detailView;	// 48 = 0x30
    UILabel *_subDetailView;	// 56 = 0x38
    unsigned long long _deferUpdateCounter;	// 64 = 0x40
    _Bool _animated;	// 72 = 0x48
    _Bool _enableDisclosure;	// 73 = 0x49
    CDUnknownBlockType _actionHandler;	// 80 = 0x50
    PKPaymentPassAction *_action;	// 88 = 0x58
    PKPaymentPass *_pass;	// 96 = 0x60
    UIColor *_titleColor;	// 104 = 0x68
    UIColor *_detailColor;	// 112 = 0x70
    UIColor *_subDetailColor;	// 120 = 0x78
    long long _titleLineBreakMode;	// 128 = 0x80
    long long _detailLineBreakMode;	// 136 = 0x88
    long long _subDetailLineBreakMode;	// 144 = 0x90
    NSString *_title;	// 152 = 0x98
    NSString *_detail;	// 160 = 0xa0
    NSString *_subDetail;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000000205b1
@property(copy, nonatomic) NSString *subDetail; // @synthesize subDetail=_subDetail;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long subDetailLineBreakMode; // @synthesize subDetailLineBreakMode=_subDetailLineBreakMode;
@property(nonatomic) long long detailLineBreakMode; // @synthesize detailLineBreakMode=_detailLineBreakMode;
@property(nonatomic) long long titleLineBreakMode; // @synthesize titleLineBreakMode=_titleLineBreakMode;
@property(copy, nonatomic) UIColor *subDetailColor; // @synthesize subDetailColor=_subDetailColor;
@property(copy, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(copy, nonatomic) PKPaymentPassAction *action; // @synthesize action=_action;
@property(nonatomic) _Bool enableDisclosure; // @synthesize enableDisclosure=_enableDisclosure;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000203a4
- (void)_updateContent:(_Bool)arg1;	// IMP=0x000000000001fd74
- (void)endUpdates:(_Bool)arg1;	// IMP=0x000000000001fd50
- (void)beginUpdates;	// IMP=0x000000000001fd3f
- (_Bool)_needsThirdLine;	// IMP=0x000000000001fd2a
- (void)layoutIfNeededAnimated:(_Bool)arg1;	// IMP=0x000000000001fcfe
- (void)_actionButtonTapped:(id)arg1;	// IMP=0x000000000001f785
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;	// IMP=0x000000000001ecb2
- (void)layoutSubviews;	// IMP=0x000000000001ec45
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001ebe7
- (void)_applyStyles;	// IMP=0x000000000001eae1
- (id)_subDetailFont;	// IMP=0x000000000001eab1
- (id)_smallerDetailFont;	// IMP=0x000000000001ea20
- (id)_detailFont;	// IMP=0x000000000001e98f
- (id)_titleFont;	// IMP=0x000000000001e919
- (void)_setupViews;	// IMP=0x000000000001e64d
- (void)_performInit;	// IMP=0x000000000001e5f3
- (void)prepareForReuse;	// IMP=0x000000000001e564
- (long long)viewType;	// IMP=0x000000000001e55c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001e4ff
- (id)init;	// IMP=0x000000000001e4b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

