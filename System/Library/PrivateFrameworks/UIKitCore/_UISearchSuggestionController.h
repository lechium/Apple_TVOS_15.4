//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/UICollectionViewDelegate-Protocol.h>
#import <UIKitCore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSString, UICollectionView;
@protocol _UISearchSuggestionControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UISearchSuggestionController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _shouldDisplayDefaultSuggestion;	// 8 = 0x8
    id <_UISearchSuggestionControllerDelegate> _delegate;	// 16 = 0x10
    NSArray *_suggestions;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    NSString *_suggestionCellIdentifier;	// 40 = 0x28
    NSArray *_allSuggestions;	// 48 = 0x30
    NSString *_searchString;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000b38671
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSArray *allSuggestions; // @synthesize allSuggestions=_allSuggestions;
@property(retain, nonatomic) NSString *suggestionCellIdentifier; // @synthesize suggestionCellIdentifier=_suggestionCellIdentifier;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool shouldDisplayDefaultSuggestion; // @synthesize shouldDisplayDefaultSuggestion=_shouldDisplayDefaultSuggestion;
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(nonatomic) __weak id <_UISearchSuggestionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000b3852c
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000b3844f
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000b38372
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000b380b1
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000b380a9
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000b38002
- (void)updateCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000b37b7b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000b37ac4
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000b37a80
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000b37a75
- (void)update;	// IMP=0x0000000000b37844
- (void)updateSearchString:(id)arg1;	// IMP=0x0000000000b3773f
- (void)updateSuggestions:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x0000000000b374e4
- (id)makeCollectionView;	// IMP=0x0000000000b372c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

