//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGAbsoluteCompositeLayout.h>

#import <PhotosUIApps/PXGSublayoutProvider-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12PhotosUIApps37PUXStoryColorGradeEditorContentLayout : PXGAbsoluteCompositeLayout <PXGSublayoutProvider>
{
    MISSING_TYPE *viewModel;	// 8 = 0x8
    MISSING_TYPE *previewClip;	// 16 = 0x10
    MISSING_TYPE *previewClipTimeRange;	// 24 = 0x18
    MISSING_TYPE *captionHeightsByRow;	// 72 = 0x48
    MISSING_TYPE *storyModelObservation;	// 80 = 0x50
    MISSING_TYPE *viewModelObservation;	// 88 = 0x58
    MISSING_TYPE *updateFlags;	// 96 = 0x60
    MISSING_TYPE *hasVerticalScrollingContent;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000034cd0
- (id)init;	// IMP=0x0000000000034c70
- (id)initWithComposition:(id)arg1;	// IMP=0x0000000000034c40
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;	// IMP=0x0000000000034c30
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;	// IMP=0x0000000000034bc0
@property(nonatomic, readonly) long long scrollableAxis;
- (void)visibleRectDidChange;	// IMP=0x00000000000348d0
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(id *)arg3;	// IMP=0x0000000000032f50
- (void)referenceSizeDidChange;	// IMP=0x0000000000032b70
- (void)update;	// IMP=0x0000000000032b40

@end

