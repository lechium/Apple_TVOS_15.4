//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, PXCMMSuggestionsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMSuggestionsDataSource
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    PXCMMSuggestionsDataSourceState *__state;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000066c1ed
@property(readonly, nonatomic) PXCMMSuggestionsDataSourceState *_state; // @synthesize _state=__state;
- (long long)_adjustedIndexFromIndex:(long long)arg1;	// IMP=0x000000000066c0a2
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x000000000066be93
- (id)suggestionAtItemIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000066be81
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000066bc3d
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000066bbcf
- (long long)numberOfSections;	// IMP=0x000000000066bbc4
- (id)initWithState:(id)arg1;	// IMP=0x000000000066bb56

@end
