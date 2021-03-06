//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexPath, UICollectionView;

@interface UICollectionViewFocusUpdateContext
{
    _Bool _didSetPreviouslyFocusedIndexPath;	// 8 = 0x8
    _Bool _didSetNextFocusedIndexPath;	// 9 = 0x9
    NSIndexPath *_previouslyFocusedIndexPath;	// 16 = 0x10
    NSIndexPath *_nextFocusedIndexPath;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
}

+ (id)_contextWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3;	// IMP=0x000000000060dfd2
+ (id)_contextWithContext:(id)arg1 collectionView:(id)arg2;	// IMP=0x000000000060df63
- (void).cxx_destruct;	// IMP=0x000000000060e476
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) NSIndexPath *nextFocusedIndexPath; // @synthesize nextFocusedIndexPath=_nextFocusedIndexPath;
@property(readonly, nonatomic) NSIndexPath *previouslyFocusedIndexPath; // @synthesize previouslyFocusedIndexPath=_previouslyFocusedIndexPath;
- (id)_initWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3;	// IMP=0x000000000060e060

@end

