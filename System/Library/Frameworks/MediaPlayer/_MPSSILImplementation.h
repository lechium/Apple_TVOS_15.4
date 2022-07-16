//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPRandomDistribution, NSMutableArray;
@protocol _MPSSILDelegate;

__attribute__((visibility("hidden")))
@interface _MPSSILImplementation
{
    MPRandomDistribution *_randomDistribution;	// 16 = 0x10
    NSMutableArray *_candidateItems;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005a517
- (void).cxx_destruct;	// IMP=0x000000000005938d
@property(retain, nonatomic) NSMutableArray *candidateItems; // @synthesize candidateItems=_candidateItems;
@property(readonly, nonatomic) MPRandomDistribution *randomDistribution; // @synthesize randomDistribution=_randomDistribution;
- (void)_dequeueCandidatesWithQuota:(long long)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x0000000000058ecf
- (id)_createShuffleCloneForItem:(id)arg1 inSection:(id)arg2 withExclusiveAccessToken:(id)arg3;	// IMP=0x0000000000058d8a
- (void)_appendShuffledItems:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x0000000000058c47
- (void)_addShuffleSection:(id)arg1 dataSource:(id)arg2 withExclusiveAccessToken:(id)arg3;	// IMP=0x0000000000058b38
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x0000000000058acb
- (_Bool)_isSequentialSection:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x00000000000589aa
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3;	// IMP=0x00000000000588e1
- (long long)itemCount;	// IMP=0x000000000005883e
- (void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000005877f
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;	// IMP=0x00000000000586a0
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000005853c
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;	// IMP=0x00000000000583b6
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000058252
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3;	// IMP=0x000000000005818f
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 afterTailOfSection:(id)arg4;	// IMP=0x000000000005809c
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 afterItem:(id)arg4 inSection:(id)arg5;	// IMP=0x0000000000057f6d
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3;	// IMP=0x0000000000057eaa
- (void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000057deb
- (void)dequeueCandidatesWithQuota:(long long)arg1;	// IMP=0x0000000000057d98
- (void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x0000000000057bbb
- (void)_beforeInitWithCoder:(id)arg1;	// IMP=0x0000000000057917
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005756b
- (id)initWithSectionedIdentifierList:(id)arg1 randomSource:(id)arg2 startingItemEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;	// IMP=0x0000000000056efd

// Remaining properties
@property(nonatomic) __weak id <_MPSSILDelegate> delegate; // @dynamic delegate;

@end
