//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKDiscoveryCardViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/UICollectionViewDataSource-Protocol.h>
#import <PassKitUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PassKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSMutableDictionary, NSObject, NSString, PKDiscoveryArticleLayout, PKDiscoveryCardView, PKDiscoveryCardViewTemplateInformation, PKDiscoveryDismissButton, UIActivityIndicatorView, UICollectionView, UILabel, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer;
@protocol OS_dispatch_queue;

@interface PKDiscoveryArticleViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, PKDiscoveryCardViewDelegate, PKPaymentSetupDelegate>
{
    PKDiscoveryArticleLayout *_articleLayout;	// 8 = 0x8
    struct UIEdgeInsets _contentInsets;	// 16 = 0x10
    PKDiscoveryDismissButton *_dismissButton;	// 48 = 0x30
    _Bool _isDownloading;	// 56 = 0x38
    UIActivityIndicatorView *_activityIndicator;	// 64 = 0x40
    UILabel *_downloadingLabel;	// 72 = 0x48
    NSString *_referrerIdentifierOverride;	// 80 = 0x50
    NSString *_callToActionIdentifier;	// 88 = 0x58
    CDUnknownBlockType _callToActionTappedOverride;	// 96 = 0x60
    UIPanGestureRecognizer *_panGestureRecognizer;	// 104 = 0x68
    UIScreenEdgePanGestureRecognizer *_screenEdgePanGestureRecognizer;	// 112 = 0x70
    NSMutableDictionary *_cellImageCache;	// 120 = 0x78
    NSMutableDictionary *_imageDownloads;	// 128 = 0x80
    struct os_unfair_lock_s _lockDownloads;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_loadImageQueue;	// 144 = 0x90
    _Bool _scrolledToBottom;	// 152 = 0x98
    _Bool _reportedScrolledToBottom;	// 153 = 0x99
    PKDiscoveryCardViewTemplateInformation *_cardTemplateInformation;	// 160 = 0xa0
    _Bool _hasSafeAreaInsetOverride;	// 168 = 0xa8
    _Bool _animatingCard;	// 169 = 0xa9
    _Bool _shouldHideStatusBar;	// 170 = 0xaa
    PKDiscoveryCardView *_cardView;	// 176 = 0xb0
    UICollectionView *_collectionView;	// 184 = 0xb8
    struct UIEdgeInsets _safeAreaOverrideInsets;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000002639a0
@property(nonatomic) _Bool shouldHideStatusBar; // @synthesize shouldHideStatusBar=_shouldHideStatusBar;
@property(nonatomic, getter=isAnimatingCard) _Bool animatingCard; // @synthesize animatingCard=_animatingCard;
@property(nonatomic) struct UIEdgeInsets safeAreaOverrideInsets; // @synthesize safeAreaOverrideInsets=_safeAreaOverrideInsets;
@property(nonatomic) _Bool hasSafeAreaInsetOverride; // @synthesize hasSafeAreaInsetOverride=_hasSafeAreaInsetOverride;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) PKDiscoveryCardView *cardView; // @synthesize cardView=_cardView;
- (void)_dismissForActionCompleted:(_Bool)arg1 withRelevantPassUniqueIdentifier:(id)arg2;	// IMP=0x00000000002636c1
- (_Bool)_hasCardInGalleryView;	// IMP=0x00000000002635e6
- (void)_leftScreenEdgePanSwipeGesture:(id)arg1;	// IMP=0x00000000002635a6
- (void)_handlePanGesture:(id)arg1;	// IMP=0x000000000026344d
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000002633d2
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000002633ca
- (long long)_dismissButtonStyleForCard;	// IMP=0x000000000026336f
- (void)_updateDismissButtonIfNecessary;	// IMP=0x000000000026323e
- (void)_loadMedia:(id)arg1 forShelfViewAtIndexPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000262548
- (void)_configureCallToActionShelfView:(id)arg1 forCallToActionShelf:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000002623bd
- (void)_configureInlineMediaShelfView:(id)arg1 forInlineMediaShelf:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000002621f7
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000002620e4
- (void)_systemTextSizeChanged;	// IMP=0x00000000002620c7
- (id)_shelfForIndexPath:(id)arg1;	// IMP=0x0000000000262033
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000261d69
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000261d1a
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000261d0f
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000000261c7a
- (long long)modalTransitionStyle;	// IMP=0x0000000000261c72
- (long long)modalPresentationStyle;	// IMP=0x0000000000261c67
- (void)paymentSetupDidFinish:(id)arg1;	// IMP=0x0000000000261bab
- (void)_showActivityIndicator:(_Bool)arg1 view:(id)arg2;	// IMP=0x0000000000261b3e
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;	// IMP=0x0000000000261ac3
- (void)_performProvisioningCTATapped:(id)arg1 callToAction:(id)arg2;	// IMP=0x0000000000261305
- (void)_performAccountUserInvitationFlowWithCTATapped:(id)arg1 callToAction:(id)arg2;	// IMP=0x0000000000261110
- (void)discoveryCardViewCTATapped:(id)arg1 callToAction:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x0000000000260d66
- (void)setIsDownloading:(_Bool)arg1;	// IMP=0x0000000000260bbd
- (void)setArticleLayout:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000260922
- (void)setCallToActionTappedOverride:(CDUnknownBlockType)arg1;	// IMP=0x00000000002608bb
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000026078d
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x00000000002606bd
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000000026064c
- (void)_dismissButtonTapped;	// IMP=0x0000000000260636
- (long long)preferredStatusBarUpdateAnimation;	// IMP=0x000000000026062b
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000000026061b
- (_Bool)isScrollable;	// IMP=0x00000000002605cc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000026058b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000026040f
- (void)viewWillLayoutSubviews;	// IMP=0x000000000025fefa
- (void)loadView;	// IMP=0x000000000025f7d1
- (void)dealloc;	// IMP=0x000000000025f6f4
- (void)_reportScolledToBottomIfNecessary;	// IMP=0x000000000025f58c
- (void)_applicationWillResignActive;	// IMP=0x000000000025f57a
- (void)_applicationWillTerminate;	// IMP=0x000000000025f568
- (id)initWithArticleLayout:(id)arg1 referrerIdentifier:(id)arg2 cardTemplateInformation:(id)arg3;	// IMP=0x000000000025f254
- (id)initWithItemIdentifier:(id)arg1 referrerIdentifier:(id)arg2;	// IMP=0x000000000025f1ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
