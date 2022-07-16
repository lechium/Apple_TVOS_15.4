//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGHighlightItemEnrichmentRule-Protocol.h>

@class NSString, PGGraphMomentNodeCollection;
@protocol OS_os_log, PGHighlightItemModelReader;

@interface PGMonthEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>
{
    PGGraphMomentNodeCollection *_momentNodesAtWork;	// 8 = 0x8
    id <PGHighlightItemModelReader> _modelReader;	// 16 = 0x10
    NSObject<OS_os_log> *_loggingConnection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000041a91c
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(readonly, nonatomic) id <PGHighlightItemModelReader> modelReader; // @synthesize modelReader=_modelReader;
- (id)sortedItemsByWeekOfMonthFromItems:(id)arg1 sortDescriptors:(id)arg2;	// IMP=0x000000000041a56b
- (id)bestItemsFromSortedItemsByWeekOfMonth:(id)arg1 previouslySelectedItemsCountByWeek:(id)arg2 maximumNumberOfItems:(unsigned long long)arg3 sortDescriptors:(id)arg4;	// IMP=0x0000000000419e27
- (id)_momentNodesAtWorkWithGraph:(id)arg1;	// IMP=0x0000000000419d6a
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withGraph:(id)arg2 neighborScoreComputer:(id)arg3 usingBlock:(CDUnknownBlockType)arg4 maximumNumberOfVisibleItems:(unsigned long long)arg5 maximumNumberOfVisibleRegularItems:(unsigned long long)arg6;	// IMP=0x0000000000418b55
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withGraph:(id)arg2 neighborScoreComputer:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000418a76
- (id)_sampleAssets:(id)arg1 withSize:(unsigned long long)arg2;	// IMP=0x0000000000418960
- (id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;	// IMP=0x0000000000417f84
- (id)fallbackKeyAssetWithHighlightItemList:(id)arg1;	// IMP=0x0000000000417c5f
- (id)firstKeyAssetWithHighlightItemList:(id)arg1;	// IMP=0x0000000000417a04
- (id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;	// IMP=0x00000000004178d3
- (double)promotionScoreForHighlightItemList:(id)arg1;	// IMP=0x0000000000417750
- (id)initWithModelReader:(id)arg1 loggingConnection:(id)arg2;	// IMP=0x00000000004176b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

