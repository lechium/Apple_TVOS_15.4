//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, PXPhotoKitPeopleSuggestionsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXPhotoKitPeopleSuggestionsDataSource
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    PXPhotoKitPeopleSuggestionsDataSourceState *__state;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000045185c
@property(readonly, nonatomic) PXPhotoKitPeopleSuggestionsDataSourceState *_state; // @synthesize _state=__state;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x000000000045163c
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000004514f7
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x0000000000451489
- (long long)numberOfSections;	// IMP=0x000000000045147e
- (id)initWithState:(id)arg1;	// IMP=0x0000000000451410

@end

