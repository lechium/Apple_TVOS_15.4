//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGSublayoutProvider-Protocol.h>

@class NSString, PXGStackedSublayoutComposition, PXSectionedDataSource, PXStoryFeedItemDecorationSource, PXStoryFeedViewModel;

@interface PXStoryFeedContentLayout <PXGSublayoutProvider, PXChangeObserver>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    PXStoryFeedViewModel *_viewModel;	// 32 = 0x20
    PXStoryFeedItemDecorationSource *_decorationSource;	// 40 = 0x28
    PXSectionedDataSource *_presentedDataSource;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000007bc7d7
@property(retain, nonatomic) PXSectionedDataSource *presentedDataSource; // @synthesize presentedDataSource=_presentedDataSource;
@property(readonly, nonatomic) PXStoryFeedItemDecorationSource *decorationSource; // @synthesize decorationSource=_decorationSource;
@property(readonly, nonatomic) PXStoryFeedViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000007bc6ad
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;	// IMP=0x00000000007bc569
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;	// IMP=0x00000000007bc563
- (long long)anchoredSublayoutIndex;	// IMP=0x00000000007bc51b
- (void)_updateCompositionParameters;	// IMP=0x00000000007bc420
- (void)_invalidateCompositionParameters;	// IMP=0x00000000007bc32c
- (void)_updateFeedSelectionSnapshot;	// IMP=0x00000000007bc2b5
- (void)_invalidateFeedSelectionSnapshot;	// IMP=0x00000000007bc1c1
- (void)_updateFeedSectionSublayouts;	// IMP=0x00000000007bbf9d
- (void)_invalidateFeedSectionSublayouts;	// IMP=0x00000000007bbea9
- (void)update;	// IMP=0x00000000007bbb63
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000007bbb22
- (id)itemPlacementControllerForItemReference:(id)arg1;	// IMP=0x00000000007bb9d9
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x00000000007bb8ae
- (long long)scrollableAxis;	// IMP=0x00000000007bb86a
- (id)initWithViewModel:(id)arg1;	// IMP=0x00000000007bb75d
- (id)init;	// IMP=0x00000000007bb6e3

// Remaining properties
@property(readonly, nonatomic) PXGStackedSublayoutComposition *composition; // @dynamic composition;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

