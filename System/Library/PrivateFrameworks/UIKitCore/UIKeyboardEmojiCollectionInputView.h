//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/TUIEmojiSearchInputViewControllerDelegate-Protocol.h>
#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSString, TUIEmojiSearchInputViewController, TUIEmojiSearchTextField, UICollectionViewFlowLayout, UIKBTree, UIKeyboardEmojiCategory, UIKeyboardEmojiCollectionView, UIKeyboardEmojiGraphicsTraits, UIResponder;
@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionInputView <UICollectionViewDataSource, UICollectionViewDelegate, TUIEmojiSearchInputViewControllerDelegate>
{
    UIKeyboardEmojiCollectionView *_collectionView;	// 80 = 0x50
    UICollectionViewFlowLayout *_flowLayout;	// 88 = 0x58
    UIKeyboardEmojiCategory *_category;	// 96 = 0x60
    NSIndexPath *_tappedSkinToneEmoji;	// 104 = 0x68
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;	// 112 = 0x70
    _Bool _isDraggingInputView;	// 120 = 0x78
    unsigned long long _currentSection;	// 128 = 0x80
    _Bool _inputDelegateCanSupportAnimoji;	// 136 = 0x88
    _Bool _hasShownAnimojiFirstTimeExperience;	// 137 = 0x89
    _Bool _shouldRetryFetchingAnimojiRecents;	// 138 = 0x8a
    _Bool _useWideAnimojiCell;	// 139 = 0x8b
    _Bool _hasShownAnimojiCell;	// 140 = 0x8c
    double _frameInset;	// 144 = 0x90
    _Bool _showingVariants;	// 152 = 0x98
    long long _selectedVariant;	// 160 = 0xa0
    long long _currentVariantRow;	// 168 = 0xa8
    UIKBTree *_selectedPopupKey;	// 176 = 0xb0
    _Bool _supportsMemoji;	// 184 = 0xb8
    _Bool _hasCheckedMemojiPreference;	// 185 = 0xb9
    _Bool _currentlyCheckingMemojiPreference;	// 186 = 0xba
    _Bool _isSearching;	// 187 = 0xbb
    CDUnknownBlockType _completionBlock;	// 192 = 0xc0
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;	// 200 = 0xc8
    TUIEmojiSearchInputViewController *_emojiSearchInputViewController;	// 208 = 0xd0
    TUIEmojiSearchTextField *_emojiSearchField;	// 216 = 0xd8
    NSIndexPath *_selectedIndexPath;	// 224 = 0xe0
    NSArray *_searchResults;	// 232 = 0xe8
}

+ (_Bool)shouldHighlightEmoji:(id)arg1;	// IMP=0x000000000091c903
+ (_Bool)wantsScreenTraits;	// IMP=0x0000000000918b84
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property _Bool isSearching; // @synthesize isSearching=_isSearching;
@property _Bool currentlyCheckingMemojiPreference; // @synthesize currentlyCheckingMemojiPreference=_currentlyCheckingMemojiPreference;
@property _Bool hasCheckedMemojiPreference; // @synthesize hasCheckedMemojiPreference=_hasCheckedMemojiPreference;
@property _Bool supportsMemoji; // @synthesize supportsMemoji=_supportsMemoji;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) TUIEmojiSearchTextField *emojiSearchField; // @synthesize emojiSearchField=_emojiSearchField;
@property(retain, nonatomic) TUIEmojiSearchInputViewController *emojiSearchInputViewController; // @synthesize emojiSearchInputViewController=_emojiSearchInputViewController;
@property(nonatomic) NSIndexPath *tappedSkinToneEmoji; // @synthesize tappedSkinToneEmoji=_tappedSkinToneEmoji;
@property(nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly) _Bool isDraggingInputView; // @synthesize isDraggingInputView=_isDraggingInputView;
@property UIKeyboardEmojiCategory *category; // @synthesize category=_category;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;	// IMP=0x000000000092143f
- (void)updateOffsetForSearchResults;	// IMP=0x00000000009211df
- (void)updateToCategory:(long long)arg1;	// IMP=0x0000000000920e61
- (void)didMoveToWindow;	// IMP=0x0000000000920a63
- (long long)indexForPrettyCategoryDisplay:(id)arg1;	// IMP=0x00000000009209ba
- (double)snappedXOffsetForOffset:(double)arg1 scrubbing:(_Bool)arg2;	// IMP=0x00000000009205df
- (double)_recentlyUsedMediaRoundedOffset:(double)arg1 recentlyUsedMediaCellWidth:(double)arg2;	// IMP=0x00000000009204f4
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000920357
- (id)firstFullyVisibleHeader;	// IMP=0x00000000009201ba
- (id)itemInRect:(struct CGRect)arg1;	// IMP=0x0000000000920044
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000920012
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000091ff5f
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000091ff42
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000000091ff25
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000000091ff08
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000091fdbb
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000091fc34
- (void)emojiSearchDidReceiveResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3;	// IMP=0x000000000091f806
- (void)emojiSearchTextFieldDidReset:(id)arg1;	// IMP=0x000000000091f65e
- (void)emojiSearchTextFieldWillClear:(id)arg1;	// IMP=0x000000000091f61a
- (void)emojiSearchTextFieldDidBecomeInactive:(id)arg1;	// IMP=0x000000000091f57b
- (void)emojiSearchTextFieldWillBecomeInactive:(id)arg1;	// IMP=0x000000000091f521
- (void)emojiSearchTextFieldDidBecomeActive:(id)arg1;	// IMP=0x000000000091f4e9
- (void)emojiSearchTextFieldWillBecomeActive:(id)arg1;	// IMP=0x000000000091f485
- (_Bool)cellShouldScrollWhenSelectedAtIndexPath:(id)arg1;	// IMP=0x000000000091f32f
- (_Bool)keySupportsVariants:(id)arg1;	// IMP=0x000000000091f2c4
- (void)resetSelectionIfNeeded;	// IMP=0x000000000091f232
- (void)updateLastSeenItemForIndexPath:(id)arg1;	// IMP=0x000000000091f176
- (void)preferencesControllerChanged:(id)arg1;	// IMP=0x000000000091f146
- (void)updateMemojiPreference;	// IMP=0x000000000091efdc
- (void)updatePreferencesForSelectedEmoji:(id)arg1;	// IMP=0x000000000091ef0d
- (long long)keyCodeForCurrentEnvironmentFromKeyCode:(long long)arg1;	// IMP=0x000000000091eecf
- (void)insertSelectedEmoji:(id)arg1 shouldDismissPopover:(_Bool)arg2;	// IMP=0x000000000091ece4
- (void)updateHighlightForIndexPath:(id)arg1 scrollIfNeeded:(_Bool)arg2 animateScroll:(_Bool)arg3;	// IMP=0x000000000091eb94
- (_Bool)handleSelectionEvent:(id)arg1;	// IMP=0x000000000091eb06
- (_Bool)_handleBaseKeySelectionEvent:(id)arg1;	// IMP=0x000000000091e742
- (_Bool)_handleVariantSelectionEvent:(id)arg1;	// IMP=0x000000000091e56f
- (_Bool)_handleInitialSelectionEvent:(id)arg1;	// IMP=0x000000000091e3d8
- (_Bool)handleKeyInputForFamilySelector:(id)arg1;	// IMP=0x000000000091dc70
- (_Bool)handleKeyInputForCollectionViewNavigation:(id)arg1;	// IMP=0x000000000091d3d8
- (_Bool)handleKeyInputForVariantSelector:(id)arg1;	// IMP=0x000000000091d090
- (_Bool)handleKeyEvent:(id)arg1;	// IMP=0x000000000091cf76
- (long long)emojiCategoryTypeForSection:(long long)arg1;	// IMP=0x000000000091cf1f
- (_Bool)showingRecents;	// IMP=0x000000000091ceed
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000091cce2
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000091c91c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000091c7a7
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000091c73d
- (_Bool)_shouldShowRecentlyUsedMedia;	// IMP=0x000000000091c735
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000091bccb
- (void)shouldDismissModalDisplayView:(id)arg1;	// IMP=0x000000000091bc78
- (long long)didInputSubTree:(id)arg1;	// IMP=0x000000000091b8af
- (id)selectedChildSkinToneEmoji:(id)arg1;	// IMP=0x000000000091b7c0
- (_Bool)genderEmojiBaseStringNeedVariantSelector:(id)arg1;	// IMP=0x000000000091b763
- (id)treeForCell:(id)arg1;	// IMP=0x000000000091987b
- (id)subTreeHitTest:(struct CGPoint)arg1;	// IMP=0x00000000009197af
- (_Bool)baseStringIsCoupleEmoji:(id)arg1;	// IMP=0x00000000009196b0
- (_Bool)skinToneWasUsedForEmoji:(id)arg1;	// IMP=0x000000000091967f
- (id)emojiBaseString:(id)arg1;	// IMP=0x000000000091959d
- (id)emojiBaseFirstCharacterString:(id)arg1;	// IMP=0x0000000000919566
- (void)_setUserHasSelectedSkinToneEmoji:(_Bool)arg1;	// IMP=0x000000000091952f
- (_Bool)_userHasSelectedSkinToneEmoji;	// IMP=0x00000000009194de
- (void)dimKeys:(id)arg1;	// IMP=0x00000000009193ce
- (void)setContentScaleFactor:(double)arg1;	// IMP=0x0000000000919378
- (void)dealloc;	// IMP=0x000000000091922c
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000000919217
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;	// IMP=0x0000000000918b8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

