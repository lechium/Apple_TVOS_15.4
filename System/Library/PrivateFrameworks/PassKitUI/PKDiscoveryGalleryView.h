//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKDiscoveryCardViewDelegate-Protocol.h>
#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKPGSVSectionSubheaderView-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, PKDiscoveryCardView, PKDiscoveryCardViewTemplateInformation, PKDiscoveryDataSource, UIImage, UIPageControl, UIScrollView;
@protocol PKPGSVSectionSubheaderDelegate;

@interface PKDiscoveryGalleryView : UIView <PKDiscoveryCardViewDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPGSVSectionSubheaderView>
{
    NSMutableArray *_cardViews;	// 8 = 0x8
    NSArray *_displayedCardViews;	// 16 = 0x10
    NSMutableArray *_discoveryCardViews;	// 24 = 0x18
    id <PKPGSVSectionSubheaderDelegate> _subheaderDelegate;	// 32 = 0x20
    PKDiscoveryCardView *_passWelcomeView;	// 40 = 0x28
    PKDiscoveryCardView *_paymentWelcomeView;	// 48 = 0x30
    UIScrollView *_horizontalScrollView;	// 56 = 0x38
    UIPageControl *_pageControl;	// 64 = 0x40
    UIImage *_dismissImage;	// 72 = 0x48
    _Bool _needsUpdateAsHeaderSubview;	// 80 = 0x50
    unsigned long long _pendingDeletes;	// 88 = 0x58
    struct {
        unsigned int hasPaymentPassWelcomeCard:1;
        unsigned int hasBarcodePassWelcomeCard:1;
        unsigned int barcodePassWelcomeCardIsDismissable:1;
        unsigned int hasDiscoveryCards:1;
    } _layoutState;	// 96 = 0x60
    _Bool _cardSizeStateIsDirty;	// 97 = 0x61
    NSString *_lastReportedDiscoveryItemIdentifier;	// 104 = 0x68
    CDStruct_973bafd3 _foregroundState;	// 112 = 0x70
    double _lastTimeForegroundActive;	// 120 = 0x78
    _Bool _articleLayoutsUpdatedAfterEnteringForegroundActive;	// 128 = 0x80
    PKDiscoveryCardViewTemplateInformation *_cardTemplateInformation;	// 136 = 0x88
    PKDiscoveryCardViewTemplateInformation *_welcomeCardTemplateInformation;	// 144 = 0x90
    unsigned char _visibilityState;	// 152 = 0x98
    _Bool _animatingCard;	// 153 = 0x99
    PKDiscoveryCardView *_pressedDiscoveryCardView;	// 160 = 0xa0
    PKDiscoveryDataSource *_dataSource;	// 168 = 0xa8
}

+ (id)passWelcomeCardMessageAttributedString;	// IMP=0x00000000002792b0
+ (_Bool)isVisibileForPKPGSVLayoutState:(CDStruct_d8808cea)arg1 dataSource:(id)arg2;	// IMP=0x0000000000274d10
+ (_Bool)paymentWelcomeCardIsAvailable;	// IMP=0x0000000000274c88
- (void).cxx_destruct;	// IMP=0x000000000027a281
@property(retain, nonatomic) PKDiscoveryDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isAnimatingCard) _Bool animatingCard; // @synthesize animatingCard=_animatingCard;
@property(readonly, nonatomic) __weak PKDiscoveryCardView *pressedDiscoveryCardView; // @synthesize pressedDiscoveryCardView=_pressedDiscoveryCardView;
- (void)_appStorePressed;	// IMP=0x000000000027a186
- (void)_scanCodePressed;	// IMP=0x000000000027a0f1
- (id)_createPassWelcomeCardView;	// IMP=0x0000000000279987
- (id)_createPaymentWelcomeCardView;	// IMP=0x0000000000279621
- (void)setSubheaderDelegate:(id)arg1;	// IMP=0x000000000027929c
- (_Bool)needsUpdate;	// IMP=0x0000000000279288
- (void)discoveryCardViewCTATapped:(id)arg1 callToAction:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x0000000000278c34
- (void)discoveryCardViewRemoveTapped:(id)arg1;	// IMP=0x0000000000278bb0
- (void)discoveryCardViewTapped:(id)arg1;	// IMP=0x0000000000278877
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000002787c4
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000278784
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000278740
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000002786e9
@property(readonly, nonatomic) NSString *frontmostItemIdentifier;
- (unsigned long long)displayIndex;	// IMP=0x000000000027852c
- (void)_reportCurrentDiscoveryCardToDiscoveryService;	// IMP=0x000000000027814d
- (void)_updatePageControlVisibilityWithDelay:(double)arg1;	// IMP=0x0000000000277f94
- (void)_updatePageControlWithDisplayIndex;	// IMP=0x0000000000277f15
- (void)updatePageControlFrame;	// IMP=0x0000000000277e18
- (void)_pageControlChanged:(id)arg1;	// IMP=0x0000000000277da4
- (void)_updateScrollViewToCardIndex:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000277cab
- (_Bool)_requestDismissalIfNecessaryAfterLayoutStateUpdate;	// IMP=0x0000000000277c27
- (void)_removeCardView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000027747c
- (unsigned long long)_indexForCardViewWithIdentifier:(id)arg1;	// IMP=0x00000000002772d2
- (struct CGSize)_contentSize;	// IMP=0x0000000000277268
- (double)_defaultHeight;	// IMP=0x0000000000277228
- (void)_updateCardViews;	// IMP=0x0000000000276c0f
- (void)_updateCardViewsAnimated:(_Bool)arg1 overrideFrontmostCardToIdentifier:(id)arg2;	// IMP=0x0000000000276852
- (void)_updateCardViewsAnimated:(_Bool)arg1;	// IMP=0x000000000027683e
- (void)_updateDiscoveryCardViewsForUpdatedArticleLayouts:(id)arg1 overrideFrontmostCardToIdentifier:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000276245
- (void)_updateCardSizeIfNecessary;	// IMP=0x0000000000275ecd
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;	// IMP=0x0000000000275dca
- (void)updateForPKPGSVLayoutState:(CDStruct_d8808cea)arg1;	// IMP=0x0000000000275c80
- (id)cardViewForCardWithItemIdentifier:(id)arg1;	// IMP=0x00000000002759d9
- (void)updateArticleLayouts:(id)arg1;	// IMP=0x0000000000275798
- (void)layoutSubviews;	// IMP=0x0000000000275363
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000275297
- (void)dealloc;	// IMP=0x00000000002751d8
- (id)initWithFrame:(struct CGRect)arg1 cardTemplateInformation:(id)arg2;	// IMP=0x0000000000274daf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

