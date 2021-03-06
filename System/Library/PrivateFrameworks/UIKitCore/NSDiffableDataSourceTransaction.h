//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDiffableDataSourceSnapshot, NSOrderedCollectionDifference;

@interface NSDiffableDataSourceTransaction : NSObject
{
    NSDiffableDataSourceSnapshot *_initialSnapshot;	// 8 = 0x8
    NSDiffableDataSourceSnapshot *_finalSnapshot;	// 16 = 0x10
    NSOrderedCollectionDifference *_difference;	// 24 = 0x18
    NSArray *_sectionTransactions;	// 32 = 0x20
    NSArray *_reorderedItemIdentifiers;	// 40 = 0x28
    long long _source;	// 48 = 0x30
}

+ (id)_computeReorderingTransactionWithInitialSnapshot:(id)arg1 reorderingUpdate:(id)arg2 sectionSnapshotProvider:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a99be9
+ (id)reorderingTransactionWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 difference:(id)arg3 sectionTransactions:(id)arg4;	// IMP=0x0000000000a990d6
+ (id)applyTransactionWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 difference:(id)arg3 sectionTransactions:(id)arg4;	// IMP=0x0000000000a99013
- (void).cxx_destruct;	// IMP=0x0000000000a9b3a5
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) NSArray *reorderedItemIdentifiers; // @synthesize reorderedItemIdentifiers=_reorderedItemIdentifiers;
@property(readonly, nonatomic) NSArray *sectionTransactions; // @synthesize sectionTransactions=_sectionTransactions;
@property(readonly, nonatomic) NSOrderedCollectionDifference *difference; // @synthesize difference=_difference;
@property(readonly, nonatomic) NSDiffableDataSourceSnapshot *finalSnapshot; // @synthesize finalSnapshot=_finalSnapshot;
@property(readonly, nonatomic) NSDiffableDataSourceSnapshot *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
- (long long)finalSectionCount;	// IMP=0x0000000000a9b325
- (long long)initialSectionCount;	// IMP=0x0000000000a9b2e1
- (struct _NSRange)finalSectionGlobalItemRangeForSection:(long long)arg1;	// IMP=0x0000000000a9b288
- (struct _NSRange)initalSectionGlobalItemRangeForSection:(long long)arg1;	// IMP=0x0000000000a9b22f
- (id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2;	// IMP=0x0000000000a9b227
- (id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2;	// IMP=0x0000000000a9b21f
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;	// IMP=0x0000000000a9b085
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;	// IMP=0x0000000000a9aeeb
- (id)initialIndexPathForFinalIndexPath:(id)arg1;	// IMP=0x0000000000a9ae01
- (id)finalIndexPathForInitialIndexPath:(id)arg1;	// IMP=0x0000000000a9ad17
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;	// IMP=0x0000000000a9aba5
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;	// IMP=0x0000000000a9aa33
- (id)performDiffGeneratingUpdates;	// IMP=0x0000000000a9a97e
- (id)finalDataSourceSnapshotter;	// IMP=0x0000000000a9a835
- (id)initialDataSourceSnapshotter;	// IMP=0x0000000000a9a6ec
- (id)transactionWithSectionTransactions:(id)arg1;	// IMP=0x0000000000a99ad4
- (id)_spiCopy;	// IMP=0x0000000000a9982d
- (_Bool)_containsItemIdentifier:(id)arg1;	// IMP=0x0000000000a99658
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a994af
- (id)description;	// IMP=0x0000000000a993f1
- (_Bool)isReorderingTransaction;	// IMP=0x0000000000a993e3
- (_Bool)isApplyTransaction;	// IMP=0x0000000000a993d5
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 source:(long long)arg3 difference:(id)arg4 reorderedItemIdentifiers:(id)arg5 sectionTransactions:(id)arg6;	// IMP=0x0000000000a98ff1
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 source:(long long)arg3 difference:(id)arg4 finalSectionSnapshots:(id)arg5;	// IMP=0x0000000000a98cdf
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 source:(long long)arg3 reorderedItemIdentifiers:(id)arg4 difference:(id)arg5 sectionTransactions:(id)arg6;	// IMP=0x0000000000a98bdb

@end

