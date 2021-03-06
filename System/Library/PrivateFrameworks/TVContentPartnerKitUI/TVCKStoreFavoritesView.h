//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVContentPartnerKitUI/TVCKStoreFavoriteItemCellDelegate-Protocol.h>
#import <TVContentPartnerKitUI/UICollectionViewDataSource-Protocol.h>
#import <TVContentPartnerKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSString, TVCKStoreFavoriteItemCell, UICollectionView, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer, UIVisualEffectView;
@protocol TVCKStoreFavoritesViewDelegate;

@interface TVCKStoreFavoritesView : UIView <TVCKStoreFavoriteItemCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UIVisualEffectView *_labelVisualEffect;	// 8 = 0x8
    _Bool _editing;	// 16 = 0x10
    _Bool _batchUpdatesAllowed;	// 17 = 0x11
    unsigned long long _category;	// 24 = 0x18
    id <TVCKStoreFavoritesViewDelegate> _delegate;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSArray *_contentItems;	// 48 = 0x30
    UILabel *_headerView;	// 56 = 0x38
    UICollectionView *_collectionView;	// 64 = 0x40
    UIPanGestureRecognizer *_panGestureRecognizer;	// 72 = 0x48
    UITapGestureRecognizer *_menuButtonGestureRecognizer;	// 80 = 0x50
    UITapGestureRecognizer *_upArrowGestureRecognizer;	// 88 = 0x58
    UITapGestureRecognizer *_downArrowGestureRecognizer;	// 96 = 0x60
    UITapGestureRecognizer *_leftArrowGestureRecognizer;	// 104 = 0x68
    UITapGestureRecognizer *_rightArrowGestureRecognizer;	// 112 = 0x70
    TVCKStoreFavoriteItemCell *_editedCell;	// 120 = 0x78
    long long _panLockDirection;	// 128 = 0x80
    struct CGSize _itemSize;	// 136 = 0x88
    struct CGPoint _lastVelocity;	// 152 = 0x98
}

+ (id)_darkModeListTitleTextColor;	// IMP=0x0000000000045e16
+ (id)_lightModeListTitleTextColor;	// IMP=0x0000000000045da6
+ (id)listTitleTextColor;	// IMP=0x0000000000045ce5
- (void).cxx_destruct;	// IMP=0x00000000000460e3
@property(nonatomic) struct CGPoint lastVelocity; // @synthesize lastVelocity=_lastVelocity;
@property(nonatomic) long long panLockDirection; // @synthesize panLockDirection=_panLockDirection;
@property(retain, nonatomic) TVCKStoreFavoriteItemCell *editedCell; // @synthesize editedCell=_editedCell;
@property(retain, nonatomic) UITapGestureRecognizer *rightArrowGestureRecognizer; // @synthesize rightArrowGestureRecognizer=_rightArrowGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *leftArrowGestureRecognizer; // @synthesize leftArrowGestureRecognizer=_leftArrowGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *downArrowGestureRecognizer; // @synthesize downArrowGestureRecognizer=_downArrowGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *upArrowGestureRecognizer; // @synthesize upArrowGestureRecognizer=_upArrowGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *menuButtonGestureRecognizer; // @synthesize menuButtonGestureRecognizer=_menuButtonGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) _Bool batchUpdatesAllowed; // @synthesize batchUpdatesAllowed=_batchUpdatesAllowed;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *headerView; // @synthesize headerView=_headerView;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(copy, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <TVCKStoreFavoritesViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void)layoutSubviews;	// IMP=0x0000000000045b4b
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000045ae2
- (id)preferredFocusEnvironments;	// IMP=0x0000000000045a57
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000045a0a
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000004597c
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000000000458c1
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x0000000000045823
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000456d0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000004568c
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000004566f
- (void)didLongPressStoreFavoriteItemCell:(id)arg1;	// IMP=0x0000000000045669
- (void)_disableEditing:(_Bool)arg1;	// IMP=0x00000000000453fb
- (void)_enableEditing;	// IMP=0x000000000004514f
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000044908
- (void)_upArrowPressed:(id)arg1;	// IMP=0x00000000000448eb
- (void)_downArrowPressed:(id)arg1;	// IMP=0x00000000000448ce
- (void)_rightArrowPressed:(id)arg1;	// IMP=0x00000000000448b1
- (void)_leftArrowPressed:(id)arg1;	// IMP=0x0000000000044894
- (void)_genericHandleDirectionPress:(struct CGPoint)arg1;	// IMP=0x00000000000444a7
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x000000000004446b
- (void)_updateEditPosition;	// IMP=0x00000000000443f1
- (void)_panGestureRecognized:(id)arg1;	// IMP=0x00000000000441ad
- (struct CGPoint)_genericHandlePanChange;	// IMP=0x0000000000043f03
- (struct CGPoint)_contentSizeClamp:(struct CGPoint)arg1;	// IMP=0x0000000000043e5e
- (void)_didEndEditingItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000043dfc
- (void)_willBeginEditingItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000043d9a
- (void)_configureCell:(id)arg1 withItem:(id)arg2;	// IMP=0x0000000000043cac
- (id)_imageURLForItem:(id)arg1;	// IMP=0x0000000000043beb
- (void)_didSelectItem:(id)arg1;	// IMP=0x0000000000043b71
- (id)_itemAtIndexPath:(id)arg1;	// IMP=0x0000000000043aff
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000043a01
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000439df
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000439bd
- (id)initWithItemSize:(struct CGSize)arg1;	// IMP=0x0000000000043190

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

