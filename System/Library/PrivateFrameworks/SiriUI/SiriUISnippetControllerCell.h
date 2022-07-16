//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <SiriUI/SiriUIReusableView-Protocol.h>

@class NSString, SiriUIContentButton, SiriUIKeyline, SiriUISnippetViewController, UICollectionReusableView, UILabel, UIView;
@protocol SiriUIReusableView;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView>
{
    SiriUIKeyline *_bottomKeyline;	// 8 = 0x8
    SiriUIContentButton *_snippetPunchOutButton;	// 16 = 0x10
    UIView *_snippetBackgroundView;	// 24 = 0x18
    UIView *_materialView;	// 32 = 0x20
    UIView *_clippingContainerView;	// 40 = 0x28
    UIView *_cancelledTouchPreventionView;	// 48 = 0x30
    UILabel *_cancelledLabel;	// 56 = 0x38
    _Bool _cellIsUsingPlatterStyle;	// 64 = 0x40
    double _topPadding;	// 72 = 0x48
    UICollectionReusableView<SiriUIReusableView> *_headerView;	// 80 = 0x50
    UICollectionReusableView<SiriUIReusableView> *_footerView;	// 88 = 0x58
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;	// 96 = 0x60
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;	// 104 = 0x68
    SiriUISnippetViewController *_snippetViewController;	// 112 = 0x70
    struct UIEdgeInsets _snippetEdgeInsets;	// 120 = 0x78
}

+ (id)elementKind;	// IMP=0x000000000002543c
+ (double)defaultHeight;	// IMP=0x0000000000025433
+ (id)reuseIdentifier;	// IMP=0x00000000000253dd
+ (struct CGRect)contentBoundsForCollectionViewCellBounds:(struct CGRect)arg1 snippetViewController:(id)arg2;	// IMP=0x0000000000022d2e
- (void).cxx_destruct;	// IMP=0x000000000002552e
@property(nonatomic, getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:) struct UIEdgeInsets snippetEdgeInsets; // @synthesize snippetEdgeInsets=_snippetEdgeInsets;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController; // @synthesize snippetViewController=_snippetViewController;
- (void)setTopPadding:(double)arg1;	// IMP=0x00000000000254b9
- (void)setShowBackgroundView:(_Bool)arg1;	// IMP=0x0000000000025444
- (void)_snippetPunchOutButtonTapped:(id)arg1;	// IMP=0x00000000000253a0
- (void)animateSnippetResizeToSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024fb5
- (void)animateSnippetConfirmationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024c73
- (void)animateSnippetCancellationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024909
- (void)_setTransparentFooterView:(id)arg1;	// IMP=0x000000000002486c
- (void)_setTransparentHeaderView:(id)arg1;	// IMP=0x00000000000247cf
- (void)_setFooterView:(id)arg1;	// IMP=0x0000000000024750
- (void)_setHeaderView:(id)arg1;	// IMP=0x00000000000246d1
- (double)_heightForTransparentFooterView;	// IMP=0x0000000000023dbe
- (double)_heightForTransparentHeaderView;	// IMP=0x0000000000023cfa
- (double)_heightForFooterView;	// IMP=0x0000000000023c36
- (double)_heightForHeaderView;	// IMP=0x0000000000023b72
- (void)_configureSubviewsForCurrentInset;	// IMP=0x00000000000232ec
- (void)layoutSubviews;	// IMP=0x00000000000231ff
- (id)accessibilityIdentifier;	// IMP=0x00000000000231f2
- (void)prepareForReuse;	// IMP=0x00000000000230fb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000022dd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

