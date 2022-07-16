//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface UIKBRecentInputsView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _verticalLayout;	// 80 = 0x50
    UICollectionView *_collectionView;	// 88 = 0x58
    NSArray *_recentInputStrings;	// 96 = 0x60
    UICollectionViewFlowLayout *_flowLayout;	// 104 = 0x68
}

@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) NSArray *recentInputStrings; // @synthesize recentInputStrings=_recentInputStrings;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)displayLayer:(id)arg1;	// IMP=0x000000000086537b
- (void)scrollViewDidChangeContentSize:(id)arg1;	// IMP=0x0000000000865254
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000865175
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000008650fa
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000008650cf
- (void)setupCollectionView;	// IMP=0x0000000000864f7c
- (void)setRecentInputs:(id)arg1;	// IMP=0x0000000000864e55
- (void)setVerticalLayout:(_Bool)arg1;	// IMP=0x0000000000864e18
- (unsigned long long)focusableVariantCount;	// IMP=0x0000000000864ded
- (id)selectedRecentInputString;	// IMP=0x0000000000864d11
- (void)refreshSelectedRecent;	// IMP=0x0000000000864acd
- (void)dealloc;	// IMP=0x0000000000864a67
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x00000000008649f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
