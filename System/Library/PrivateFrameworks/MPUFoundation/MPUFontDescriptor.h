//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MPUFoundation/NSCopying-Protocol.h>
#import <MPUFoundation/NSMutableCopying-Protocol.h>

@class MPULayoutInterpolator, UIFont;

@interface MPUFontDescriptor : NSObject <NSCopying, NSMutableCopying>
{
    double _defaultPointSizeAdjustment;	// 8 = 0x8
    long long _leadingAdjustment;	// 16 = 0x10
    double _systemFontSize;	// 24 = 0x18
    long long _textStyle;	// 32 = 0x20
    _Bool _usesItalic;	// 40 = 0x28
    _Bool _usesCondensedMetrics;	// 41 = 0x29
    _Bool _wantsMonospaceNumbers;	// 42 = 0x2a
    long long _weight;	// 48 = 0x30
    UIFont *_preferredFont;	// 56 = 0x38
    CDStruct_1aa0583f _preferredFontMetrics;	// 64 = 0x40
    UIFont *_defaultFont;	// 144 = 0x90
    CDStruct_1aa0583f _defaultFontMetrics;	// 152 = 0x98
    MPULayoutInterpolator *_customFontPointSizeLayoutInterpolator;	// 232 = 0xe8
}

+ (double)_layoutInterpolatorReferenceMetricForContentSizeCategory:(id)arg1;	// IMP=0x000000000001760c
+ (id)_fontPointSizeLayoutInterpolatorForTextStyle:(long long)arg1;	// IMP=0x0000000000017121
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForUsingItalic:(_Bool)arg1 isCondensedMetrics:(_Bool)arg2;	// IMP=0x000000000001710e
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForLeadingAdjustment:(long long)arg1;	// IMP=0x00000000000170f0
+ (void)_getNativeFontDescriptorSymbolicTraits:(unsigned int *)arg1 nativeTextStyleAttribute:(id *)arg2 forWeight:(long long)arg3 textStyle:(long long)arg4;	// IMP=0x0000000000016cb4
+ (id)_baseNativeTextStyleForTextStyle:(long long)arg1;	// IMP=0x0000000000016b69
+ (id)_adjustedNativeFontDescriptorWithBaseNativeFontDescriptor:(id)arg1 forCustomTextStyle:(long long)arg2;	// IMP=0x000000000001697d
+ (id)invalidationHandler;	// IMP=0x0000000000016952
+ (id)_fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3 systemFontSize:(double)arg4 defaultPointSizeAdjustment:(double)arg5;	// IMP=0x0000000000015b5f
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3;	// IMP=0x0000000000015b3c
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 leadingAdjustment:(long long)arg2;	// IMP=0x0000000000015b28
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 weight:(long long)arg2;	// IMP=0x0000000000015b11
+ (id)fontDescriptorWithSystemFontSize:(double)arg1;	// IMP=0x0000000000015afb
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3 defaultPointSizeAdjustment:(double)arg4;	// IMP=0x0000000000015ae0
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3;	// IMP=0x0000000000015acb
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2;	// IMP=0x0000000000015ab6
+ (id)fontDescriptorWithTextStyle:(long long)arg1 weight:(long long)arg2;	// IMP=0x0000000000015a9f
+ (id)fontDescriptorWithTextStyle:(long long)arg1;	// IMP=0x0000000000015a88
- (void).cxx_destruct;	// IMP=0x000000000001837d
@property(readonly, nonatomic) _Bool wantsMonospaceNumbers; // @synthesize wantsMonospaceNumbers=_wantsMonospaceNumbers;
@property(readonly, nonatomic) _Bool usesCondensedMetrics; // @synthesize usesCondensedMetrics=_usesCondensedMetrics;
@property(readonly, nonatomic) _Bool usesItalic; // @synthesize usesItalic=_usesItalic;
@property(readonly, nonatomic) long long leadingAdjustment; // @synthesize leadingAdjustment=_leadingAdjustment;
@property(readonly, nonatomic) double defaultPointSizeAdjustment; // @synthesize defaultPointSizeAdjustment=_defaultPointSizeAdjustment;
@property(readonly, nonatomic) long long weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) double systemFontSize; // @synthesize systemFontSize=_systemFontSize;
@property(readonly, nonatomic) long long textStyle; // @synthesize textStyle=_textStyle;
- (void)_resetToDefaultValues;	// IMP=0x00000000000182ed
- (id)_preferredFontDescriptorForTextStyle:(long long)arg1;	// IMP=0x0000000000018159
- (id)_fontPointSizeLayoutInterpolator;	// IMP=0x00000000000180fa
- (void)_invalidateCachedFontsAndMetrics;	// IMP=0x000000000001807e
- (id)_fontWithBaseNativeFontDescriptorProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017a8c
- (id)_defaultFontDescriptorForTextStyle:(long long)arg1;	// IMP=0x000000000001788d
- (void)_handleFontDescriptorDidInvalidateCachedFontsAndMetricsNotification:(id)arg1;	// IMP=0x000000000001696b
- (double)scaledValueForValue:(double)arg1;	// IMP=0x00000000000168e7
@property(readonly, nonatomic) double defaultFontLineHeight;
- (double)defaultFontDescender;	// IMP=0x000000000001680d
- (double)defaultFontCapHeight;	// IMP=0x00000000000167a0
- (double)defaultFontBodyLeading;	// IMP=0x0000000000016733
- (double)defaultFontAscender;	// IMP=0x00000000000166c6
@property(readonly, nonatomic) UIFont *defaultFont;
@property(readonly, nonatomic) double preferredFontDescender;
@property(readonly, nonatomic) double preferredFontCapHeight;
@property(readonly, nonatomic) double preferredFontLineHeight;
@property(readonly, nonatomic) double preferredFontBodyLeading;
@property(readonly, nonatomic) double preferredFontAscender;
@property(readonly, nonatomic) UIFont *preferredFont;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016281
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016276
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000161a3
- (unsigned long long)hash;	// IMP=0x00000000000160d4
- (id)description;	// IMP=0x0000000000015e8a
- (void)dealloc;	// IMP=0x0000000000015ddd
- (id)init;	// IMP=0x0000000000015d06

@end

