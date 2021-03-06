//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUI/CUIThemeImageSource-Protocol.h>
#import <CoreUI/NSCoding-Protocol.h>
#import <CoreUI/NSCopying-Protocol.h>

@class NSString;

@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCopying, NSCoding>
{
    struct _renditionkeytoken *_renditionKeyList;	// 8 = 0x8
    unsigned long long _themeIndex;	// 16 = 0x10
    long long _renditionType;	// 24 = 0x18
    struct CGSize _thumbnailSize;	// 32 = 0x20
    struct CGPoint _hotSpot;	// 48 = 0x30
    int _isTintable;	// 64 = 0x40
    struct {
        unsigned int hasCheckedButtonGlyph:1;
        unsigned int isButtonGlyph:1;
        unsigned int reserved:14;
    } _fFlags;	// 68 = 0x44
}

+ (_Bool)assetExistsForRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;	// IMP=0x0000000000047b73
+ (id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned long long)arg2;	// IMP=0x0000000000047708
+ (id)_facetWithKeyList:(const struct _renditionkeytoken *)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4;	// IMP=0x0000000000047451
+ (id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;	// IMP=0x0000000000047435
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 dimension2:(long long)arg4 fromTheme:(unsigned long long)arg5;	// IMP=0x0000000000047352
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 fromTheme:(unsigned long long)arg3;	// IMP=0x000000000004732d
+ (id)_bundleIdentifierForThemeRef:(unsigned long long)arg1;	// IMP=0x000000000004719f
+ (void)themeUnregisterThemeRef:(unsigned long long)arg1;	// IMP=0x0000000000046f4a
+ (unsigned long long)themeWithBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000046d5b
+ (unsigned long long)themeWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046b02
+ (unsigned long long)themeForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046ae8
+ (unsigned long long)themeNamed:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000046906
+ (void)initialize;	// IMP=0x00000000000468ca
+ (id)_themeStoreForThemeIndex:(unsigned long long)arg1;	// IMP=0x0000000000045d21
+ (void)_invalidateArtworkCaches;	// IMP=0x0000000000045cfe
- (id)maskWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;	// IMP=0x000000000004ba36
- (id)highlightWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;	// IMP=0x000000000004b96a
- (id)imageWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;	// IMP=0x000000000004b8c3
- (id)imageForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;	// IMP=0x000000000004b7de
- (id)maskForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;	// IMP=0x000000000004b6f9
@property(readonly, copy) NSString *description;
- (long long)_sliceIndexForSlice:(long long)arg1 ofRendition:(id)arg2;	// IMP=0x000000000004b633
- (void)_applyFixedAttributesToKey:(id)arg1;	// IMP=0x000000000004b617
- (struct CGSize)topLeftCapSize;	// IMP=0x000000000004b5c5
- (struct CGSize)thumbnailSize;	// IMP=0x000000000004b575
- (id)thumbnail;	// IMP=0x000000000004b48d
- (id)displayName;	// IMP=0x000000000004b417
- (id)properties;	// IMP=0x000000000004b3ec
- (_Bool)isTintable;	// IMP=0x000000000004b3ad
- (long long)renditionType;	// IMP=0x000000000004b373
- (id)renditionKey;	// IMP=0x000000000004b33c
- (id)themeRendition;	// IMP=0x000000000004b2de
- (unsigned long long)themeIndex;	// IMP=0x000000000004b2d4
- (void)_setThemeIndex:(unsigned long long)arg1;	// IMP=0x000000000004b2ca
- (id)gradientWithKeyAdjustment:(id)arg1 angle:(double *)arg2 style:(unsigned long long *)arg3;	// IMP=0x000000000004b1b7
- (struct CGSize)sizeForSegmentOfType:(int)arg1;	// IMP=0x000000000004b089
- (struct CGSize)imageSize;	// IMP=0x000000000004afaa
- (id)blendModeAsCAFilterString;	// IMP=0x000000000004af96
- (id)blendModeAsCAFilterStringWithKeyAjustment:(id)arg1;	// IMP=0x000000000004af63
- (int)blendMode;	// IMP=0x000000000004af4f
- (int)blendModeWithKeyAdjustment:(id)arg1;	// IMP=0x000000000004aeb2
- (double)alpha;	// IMP=0x000000000004ae9e
- (double)alphaWithKeyAdjustment:(id)arg1;	// IMP=0x000000000004ae01
- (id)image;	// IMP=0x000000000004aded
- (id)imageForSliceIndex:(long long)arg1;	// IMP=0x000000000004ada0
- (id)imageForState:(long long)arg1 value:(long long)arg2 size:(unsigned long long)arg3;	// IMP=0x000000000004acc5
- (id)imageForState:(long long)arg1 value:(long long)arg2;	// IMP=0x000000000004ac80
- (_Bool)isValidButtonImageSource;	// IMP=0x000000000004ac58
- (_Bool)hasValueSlices;	// IMP=0x000000000004aa6b
- (id)imageForState:(long long)arg1 withValue:(long long)arg2;	// IMP=0x000000000004aa59
- (id)imageForState:(long long)arg1;	// IMP=0x000000000004aa24
- (id)renditionSliceInformationForRect:(struct CGRect)arg1 keyAdjustment:(id)arg2;	// IMP=0x000000000004a924
- (id)renditionMetricsWithKeyAdjustment:(id)arg1;	// IMP=0x000000000004a88a
- (void)_drawSlice:(long long)arg1 inFrame:(struct CGRect)arg2 withKeyAdjustment:(id)arg3 context:(struct CGContext *)arg4;	// IMP=0x000000000004a797
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(int)arg6 isFlipped:(_Bool)arg7 effects:(id)arg8;	// IMP=0x000000000004a6c6
- (id)renditionForSpecificKeyWrapper:(id)arg1;	// IMP=0x000000000004a396
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000004a28b
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(struct CGContext *)arg6;	// IMP=0x000000000004a199
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000004a167
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000004a043
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 keyAdjustment:(id)arg3 context:(struct CGContext *)arg4;	// IMP=0x000000000004a019
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(struct CGContext *)arg6;	// IMP=0x0000000000049f0e
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x0000000000049edc
- (void)drawGradientInFrame:(struct CGRect)arg1 angle:(double)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(int)arg5 keyAdjustment:(id)arg6 context:(struct CGContext *)arg7 effects:(id)arg8;	// IMP=0x0000000000049b72
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext *)arg6;	// IMP=0x0000000000049a5d
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext *)arg6;	// IMP=0x000000000004995c
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x0000000000049861
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x00000000000496f1
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x00000000000496be
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;	// IMP=0x000000000004968b
- (_Bool)hitTestAtPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2 owner:(id)arg3 userInfo:(id)arg4;	// IMP=0x00000000000494db
- (_Bool)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(long long)arg2;	// IMP=0x000000000004946c
- (void)drawMaskInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;	// IMP=0x0000000000049452
- (void)drawHighlightInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;	// IMP=0x0000000000049438
- (void)drawInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;	// IMP=0x000000000004941e
- (void)updateSegmentBezelLeadingCapLayer:(id)arg1 bezelFillLayer:(id)arg2 trailingBezelCapLayer:(id)arg3 forSegmentType:(int)arg4 segmentBounds:(struct CGRect)arg5 leadingSeparatorWidth:(double)arg6 trailingSeparatorWidth:(double)arg7 renditionKey:(id)arg8 effects:(id)arg9;	// IMP=0x000000000004905b
- (void)drawSegmentInFrame:(struct CGRect)arg1 isFocused:(int)arg2 segmentType:(int)arg3 context:(struct CGContext *)arg4 effects:(id)arg5;	// IMP=0x0000000000048f45
- (void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4 effects:(id)arg5;	// IMP=0x0000000000048ec5
- (void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4;	// IMP=0x0000000000048eb0
- (void)drawAbsoluteAnimationFrame:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4;	// IMP=0x0000000000048e3a
- (void)drawAsOnePartWithSlice:(int)arg1 inFrame:(struct CGRect)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4 effects:(id)arg5;	// IMP=0x0000000000048d72
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 context:(struct CGContext *)arg5 effects:(id)arg6;	// IMP=0x0000000000048ccf
- (void)drawInFrame:(struct CGRect)arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3 effects:(id)arg4;	// IMP=0x0000000000048c4e
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4;	// IMP=0x0000000000048c1c
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4 effects:(id)arg5;	// IMP=0x0000000000048bea
- (void)drawInFrame:(struct CGRect)arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3;	// IMP=0x0000000000048ab8
- (void)updateLayer:(id)arg1 effects:(id)arg2;	// IMP=0x000000000004800f
- (void)updateLayer:(id)arg1;	// IMP=0x0000000000047ffb
- (id)makeLayer;	// IMP=0x0000000000047fae
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1;	// IMP=0x0000000000047ecc
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1 renditionKey:(id)arg2;	// IMP=0x0000000000047c5a
- (void)dealloc;	// IMP=0x0000000000047b39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000047b2e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000047a47
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000047961
- (id)init;	// IMP=0x00000000000478ed
- (id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;	// IMP=0x000000000004783d
- (_Bool)_isButtonGlyph;	// IMP=0x0000000000046133
- (void)_setIsButtonGlyph:(_Bool)arg1;	// IMP=0x0000000000046129
- (void)_setHasCheckedButtonGlyph:(_Bool)arg1;	// IMP=0x0000000000046117
- (struct CGSize)_thumbnailSizeForRendition:(id)arg1;	// IMP=0x0000000000046005
- (id)_rendition;	// IMP=0x0000000000045fa7
- (id)_renditionForSpecificKey:(id)arg1;	// IMP=0x0000000000045eec
- (void)_updateSpecificRenditionKey:(id)arg1 isFocused:(_Bool *)arg2 owner:(id)arg3 userInfo:(id)arg4;	// IMP=0x0000000000045d66
- (struct CGPoint)_hotSpot;	// IMP=0x0000000000045d56
- (id)_themeStore;	// IMP=0x0000000000045d2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

