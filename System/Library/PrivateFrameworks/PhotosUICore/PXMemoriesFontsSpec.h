//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PXMemoriesFontsSpec : NSObject
{
    NSDictionary *_titleTextAttributes;	// 8 = 0x8
    NSDictionary *_fallbackTitleTextAttributes;	// 16 = 0x10
    NSDictionary *_subtitleTextAttributes;	// 24 = 0x18
    double _baselineDistance;	// 32 = 0x20
    struct UIEdgeInsets _padding;	// 40 = 0x28
}

+ (double)_playButtonPaddingForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 deviceMargin:(double)arg4 forHeaderTile:(_Bool)arg5;	// IMP=0x000000000057352d
+ (long long)_memoryLabelKindForDescriptor:(struct PXViewSpecDescriptor)arg1;	// IMP=0x000000000057347f
+ (void)_getSpecSet:(out long long *)arg1 variant:(out long long *)arg2 forDescriptor:(struct PXViewSpecDescriptor)arg3 extendedTraitCollection:(id)arg4;	// IMP=0x0000000000573398
+ (id)supportedTitleFontNames;	// IMP=0x0000000000573368
+ (id)_titleFontNameByFontSet;	// IMP=0x0000000000573338
+ (id)_fontSetByTitleFontName;	// IMP=0x0000000000573308
+ (id)memoriesFontsSpecForDescriptor:(struct PXViewSpecDescriptor)arg1 extendedTraitCollection:(id)arg2;	// IMP=0x0000000000573065
+ (struct UIEdgeInsets)paddingForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 layoutMargins:(struct UIEdgeInsets)arg4 width:(double)arg5 shouldScale:(_Bool)arg6 forHeaderTile:(_Bool)arg7;	// IMP=0x0000000000572e5d
+ (double)baselineDistanceForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 size:(struct CGSize)arg4 shouldScale:(_Bool)arg5;	// IMP=0x0000000000572d8f
+ (id)textAttributesForFontSet:(long long)arg1 specSet:(long long)arg2 labelKind:(long long)arg3 variant:(long long)arg4 size:(struct CGSize)arg5 shouldScale:(_Bool)arg6;	// IMP=0x0000000000572b60
+ (id)textAttributesForFontName:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 tracking:(double)arg4 stroke:(double)arg5 shadow:(id)arg6 capitalizationStyle:(long long)arg7;	// IMP=0x00000000005728ad
+ (long long)numberOfLinesForLabelKind:(long long)arg1;	// IMP=0x0000000000572824
+ (long long)capitalizationStyleForLabelKind:(long long)arg1;	// IMP=0x000000000057279b
+ (id)_fontSpecCache;	// IMP=0x000000000057276b
+ (void)preloadFontsSpecsForExtendedTraitCollection:(id)arg1;	// IMP=0x00000000005726bb
- (void).cxx_destruct;	// IMP=0x0000000000572688
@property(readonly, nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) double baselineDistance; // @synthesize baselineDistance=_baselineDistance;
@property(readonly, nonatomic) NSDictionary *subtitleTextAttributes; // @synthesize subtitleTextAttributes=_subtitleTextAttributes;
@property(readonly, nonatomic) NSDictionary *fallbackTitleTextAttributes; // @synthesize fallbackTitleTextAttributes=_fallbackTitleTextAttributes;
@property(readonly, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
- (id)_initWithIdentifier:(struct PXMemoryFontsSpecIdentifier)arg1;	// IMP=0x00000000005723dd

@end
