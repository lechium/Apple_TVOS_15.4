//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUIApps/PXGNamedImageSource-Protocol.h>
#import <PhotosUIApps/PXGSolidColorSource-Protocol.h>
#import <PhotosUIApps/PXGStringSource-Protocol.h>

@class MISSING_TYPE, NSIndexSet;

@interface PUXStoryColorGradeEditorItemOverlayLayout : PXGLayout <PXGStringSource, PXGNamedImageSource, PXGSolidColorSource>
{
    MISSING_TYPE *colorGradeKind;	// 8 = 0x8
    MISSING_TYPE *viewModel;	// 16 = 0x10
    MISSING_TYPE *backgroundSpriteIndex;	// 24 = 0x18
    MISSING_TYPE *captionSpriteIndex;	// 28 = 0x1c
    MISSING_TYPE *selectionBadgeSpriteIndex;	// 32 = 0x20
    MISSING_TYPE *accessibleSpriteIndexes;	// 0 = 0x0
    MISSING_TYPE *updateFlags;	// 0 = 0x0
    MISSING_TYPE *captionHeight;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000003f880
- (id)init;	// IMP=0x000000000003f830
@property(nonatomic, readonly) NSIndexSet *axSelectedSpriteIndexes;
- (id)axContentInfoAtSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000003f6b0
@property(nonatomic, readonly) NSIndexSet *axVisibleSpriteIndexes;
@property(nonatomic, readonly) NSIndexSet *axSpriteIndexes;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000003f300
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000003f200
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000003f1b0
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000003f160
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000003f070
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000003eff0
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000003efb0
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(id *)arg3;	// IMP=0x000000000003e400
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000003e3b0
- (void)screenScaleDidChange;	// IMP=0x000000000003e300
- (void)referenceSizeDidChange;	// IMP=0x000000000003e2e0
- (void)update;	// IMP=0x000000000003e1f0

@end

