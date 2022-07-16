//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSSet, NSString, PXCArrayStore, PXNumberAnimator, PXStoryModel, PXStoryStyleManager, PXStoryViewModel;

@interface PXStoryStyleChromeContainerLayout <PXChangeObserver>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    struct _NSRange _styleSublayoutRange;	// 32 = 0x20
    PXCArrayStore *_framesArrayStore;	// 48 = 0x30
    PXStoryViewModel *_viewModel;	// 56 = 0x38
    PXNumberAnimator *_visibilityAnimator;	// 64 = 0x40
    PXStoryStyleManager *_styleManager;	// 72 = 0x48
    PXStoryModel *_storyModel;	// 80 = 0x50
    NSSet *_artworkPreloadingRecords;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000007f68b4
@property(retain, nonatomic) NSSet *artworkPreloadingRecords; // @synthesize artworkPreloadingRecords=_artworkPreloadingRecords;
@property(retain, nonatomic) PXStoryModel *storyModel; // @synthesize storyModel=_storyModel;
@property(retain, nonatomic) PXStoryStyleManager *styleManager; // @synthesize styleManager=_styleManager;
@property(readonly, nonatomic) PXNumberAnimator *visibilityAnimator; // @synthesize visibilityAnimator=_visibilityAnimator;
@property(retain, nonatomic) PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000007f66e7
- (void)_updateResourcePreloading;	// IMP=0x00000000007f651a
- (void)_invalidateResourcePreloading;	// IMP=0x00000000007f6423
- (void)_updateStyleLayoutsContent;	// IMP=0x00000000007f5faf
- (void)_invalidateStyleLayoutsContent;	// IMP=0x00000000007f5ebb
- (void)_updateVisibilityAnimator:(_Bool)arg1;	// IMP=0x00000000007f5d60
- (void)_invalidateVisibilityAnimator;	// IMP=0x00000000007f5c6c
- (void)_updateStyleLayouts;	// IMP=0x00000000007f5b1d
- (void)_invalidateStyleLayouts;	// IMP=0x00000000007f5a29
- (void)_updateStyleManager;	// IMP=0x00000000007f59ba
- (void)_invalidateStyleManager;	// IMP=0x00000000007f58c6
- (void)_updateStoryModel;	// IMP=0x00000000007f5857
- (void)_invalidateStoryModel;	// IMP=0x00000000007f5763
- (void)update;	// IMP=0x00000000007f51fc
- (void)screenScaleDidChange;	// IMP=0x00000000007f51bb
- (void)referenceDepthDidChange;	// IMP=0x00000000007f517a
- (void)referenceSizeDidChange;	// IMP=0x00000000007f5139
- (void)dealloc;	// IMP=0x00000000007f50e9
- (id)init;	// IMP=0x00000000007f4d66
- (id)initWithViewModel:(id)arg1;	// IMP=0x00000000007f4bde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
