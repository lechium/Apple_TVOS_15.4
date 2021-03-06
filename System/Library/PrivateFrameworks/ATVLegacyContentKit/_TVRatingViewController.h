//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ATVLegacyContentKit/TVCollectionViewDelegate-Protocol.h>
#import <ATVLegacyContentKit/UICollectionViewDataSource-Protocol.h>
#import <ATVLegacyContentKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSIndexPath, NSString, TVCollectionView, UIColor;
@protocol _TVRatingViewControllerDelegate;

@interface _TVRatingViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, TVCollectionViewDelegate>
{
    _Bool _performedInitialHighlight;	// 8 = 0x8
    NSIndexPath *_currentFocuedIndexPath;	// 16 = 0x10
    _Bool _initialRatingIsSuggestion;	// 24 = 0x18
    id <_TVRatingViewControllerDelegate> _delegate;	// 32 = 0x20
    TVCollectionView *_collectionView;	// 40 = 0x28
    unsigned long long _initialRating;	// 48 = 0x30
    UIColor *_starFillColor;	// 56 = 0x38
    UIColor *_starOutlineColor;	// 64 = 0x40
    UIColor *_starSuggestionFillColor;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000e7c38
@property(retain, nonatomic) UIColor *starSuggestionFillColor; // @synthesize starSuggestionFillColor=_starSuggestionFillColor;
@property(retain, nonatomic) UIColor *starOutlineColor; // @synthesize starOutlineColor=_starOutlineColor;
@property(retain, nonatomic) UIColor *starFillColor; // @synthesize starFillColor=_starFillColor;
@property(nonatomic) _Bool initialRatingIsSuggestion; // @synthesize initialRatingIsSuggestion=_initialRatingIsSuggestion;
@property(nonatomic) unsigned long long initialRating; // @synthesize initialRating=_initialRating;
@property(retain, nonatomic) TVCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <_TVRatingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_needsInitialSuggestionState;	// IMP=0x00000000000e7b3e
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000000e7b33
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000e7b28
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000e7a23
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000e79bf
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x00000000000e79aa
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000000e797f
- (void)_updateRatingForSelection:(id)arg1;	// IMP=0x00000000000e7715
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000e768e
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000000e7678
- (struct CGSize)preferredContentSize;	// IMP=0x00000000000e7390
- (id)preferredFocusEnvironments;	// IMP=0x00000000000e72eb
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000e7265
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000e712a
- (void)loadView;	// IMP=0x00000000000e6f3b
- (id)init;	// IMP=0x00000000000e6d3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

