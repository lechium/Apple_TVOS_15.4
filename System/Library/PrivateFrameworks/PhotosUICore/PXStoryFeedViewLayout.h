//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGScrollLayoutDelegate-Protocol.h>

@class NSString, PXStoryFeedContentLayout, PXStoryFeedViewModel;

@interface PXStoryFeedViewLayout <PXGScrollLayoutDelegate>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    _Bool _isClearingLastVisibleAreaAnchoringInformation;	// 32 = 0x20
    PXStoryFeedViewModel *_viewModel;	// 40 = 0x28
    PXStoryFeedContentLayout *_feedContentLayout;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000055dd6e
@property(readonly, nonatomic) PXStoryFeedContentLayout *feedContentLayout; // @synthesize feedContentLayout=_feedContentLayout;
@property(readonly, nonatomic) PXStoryFeedViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000055dca5
- (void)scrollLayoutWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000055da3c
- (void)clearLastVisibleAreaAnchoringInformation;	// IMP=0x000000000055d9b0
- (void)_updateScrollParameters;	// IMP=0x000000000055d8d3
- (void)_invalidateScrollParameters;	// IMP=0x000000000055d7df
- (void)_updateContentSize;	// IMP=0x000000000055d6c6
- (void)_invalidateContentSize;	// IMP=0x000000000055d5d2
- (void)_updateAnchorForVisibleArea;	// IMP=0x000000000055d560
- (void)_invalidateAnchorForVisibleArea;	// IMP=0x000000000055d46c
- (void)update;	// IMP=0x000000000055d126
- (id)itemPlacementControllerForItemReference:(id)arg1;	// IMP=0x000000000055d0a3
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;	// IMP=0x000000000055d00e
- (long long)scrollableAxis;	// IMP=0x000000000055d006
- (unsigned long long)contentChangeTrend;	// IMP=0x000000000055cffb
- (void)referenceSizeDidChange;	// IMP=0x000000000055cfba
- (id)initWithViewModel:(id)arg1;	// IMP=0x000000000055cebc
- (id)init;	// IMP=0x000000000055ce42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

