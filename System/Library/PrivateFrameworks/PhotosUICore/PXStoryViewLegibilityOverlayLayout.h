//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGSolidColorSource-Protocol.h>

@class NSNumber, NSString, PXStoryViewModel;

@interface PXStoryViewLegibilityOverlayLayout <PXGSolidColorSource, PXChangeObserver>
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    unsigned int _solidDimmingSpriteIndex;	// 32 = 0x20
    unsigned int _topGradientDimmingSpriteIndex;	// 36 = 0x24
    unsigned int _bottomGradientDimmingSpriteIndex;	// 40 = 0x28
    unsigned short _gradientResizableCapInsetsIndex;	// 44 = 0x2c
    PXStoryViewModel *_viewModel;	// 48 = 0x30
    NSNumber *_alphaOverride;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000060096c
@property(retain, nonatomic) NSNumber *alphaOverride; // @synthesize alphaOverride=_alphaOverride;
@property(readonly, nonatomic) PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)axSpriteIndexes;	// IMP=0x0000000000600931
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000060086e
- (void)setDetailedPlacementOverride:(id)arg1 forItemReference:(id)arg2;	// IMP=0x00000000006007ed
- (void)getDetailedPresentedPlacement:(id)arg1 forItemReference:(id)arg2;	// IMP=0x000000000060079e
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000600724
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000060060a
- (void)_updateContent;	// IMP=0x000000000060049f
- (void)_invalidateContent;	// IMP=0x00000000006003ab
- (void)update;	// IMP=0x00000000006001ef
- (void)referenceSizeDidChange;	// IMP=0x000000000060013e
- (id)initWithViewModel:(id)arg1;	// IMP=0x00000000005fffcb
- (id)init;	// IMP=0x00000000005fff51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
