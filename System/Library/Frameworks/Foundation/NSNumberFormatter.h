//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSObserver-Protocol.h>

@class NSDictionary, NSLocale, NSMutableDictionary, NSNumber, NSRecursiveLock, NSString;

@interface NSNumberFormatter <NSObservable, NSObserver>
{
    NSMutableDictionary *_attributes;	// 8 = 0x8
    struct __CFNumberFormatter *_formatter;	// 16 = 0x10
    unsigned long long _counter;	// 24 = 0x18
    unsigned long long _behavior;	// 32 = 0x20
    NSRecursiveLock *_lock;	// 40 = 0x28
    unsigned long long _stateBitMask;	// 48 = 0x30
    long long _cacheGeneration;	// 56 = 0x38
    void *_reserved[8];	// 64 = 0x40
}

+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2;	// IMP=0x00000000000d725e
+ (void)initialize;	// IMP=0x00000000000d50c6
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;	// IMP=0x00000000000d50ad
+ (unsigned long long)defaultFormatterBehavior;	// IMP=0x00000000000d50a0
- (void)_setUsesCharacterDirection:(_Bool)arg1;	// IMP=0x00000000000de4c8
- (_Bool)_usesCharacterDirection;	// IMP=0x00000000000de3da
@property(getter=isPartialStringValidationEnabled) _Bool partialStringValidationEnabled;
@property unsigned long long maximumSignificantDigits;
@property unsigned long long minimumSignificantDigits;
@property _Bool usesSignificantDigits;
@property(getter=isLenient) _Bool lenient;
@property(copy) NSString *currencyGroupingSeparator;
@property(copy) NSNumber *maximum;
@property(copy) NSNumber *minimum;
@property unsigned long long maximumFractionDigits;
@property unsigned long long minimumFractionDigits;
@property unsigned long long maximumIntegerDigits;
@property unsigned long long minimumIntegerDigits;
@property(copy) NSNumber *roundingIncrement;
@property unsigned long long roundingMode;
@property unsigned long long paddingPosition;
@property(copy) NSString *paddingCharacter;
@property(copy) NSNumber *multiplier;
@property unsigned long long formatWidth;
@property unsigned long long secondaryGroupingSize;
@property unsigned long long groupingSize;
@property(copy) NSString *exponentSymbol;
@property(copy) NSString *plusSign;
@property(copy) NSString *minusSign;
@property(copy) NSString *perMillSymbol;
@property(copy) NSString *percentSymbol;
- (_Bool)_hasSetInternationalCurrencySymbol;	// IMP=0x00000000000dac2b
@property(copy) NSString *internationalCurrencySymbol;
@property(copy) NSString *currencySymbol;
- (_Bool)_hasSetCurrencySymbol;	// IMP=0x00000000000da87d
- (_Bool)_hasSetCurrencyCode;	// IMP=0x00000000000da723
@property(copy) NSString *currencyCode;
@property(copy) NSString *negativeSuffix;
@property(copy) NSString *negativePrefix;
@property(copy) NSString *positiveSuffix;
@property(copy) NSString *positivePrefix;
@property(copy) NSDictionary *textAttributesForNegativeInfinity;
@property(copy) NSString *negativeInfinitySymbol;
@property(copy) NSDictionary *textAttributesForPositiveInfinity;
@property(copy) NSString *positiveInfinitySymbol;
@property(copy) NSDictionary *textAttributesForNotANumber;
@property(copy) NSString *notANumberSymbol;
@property(copy) NSDictionary *textAttributesForNil;
@property(copy) NSString *nilSymbol;
@property(copy) NSDictionary *textAttributesForZero;
@property(copy) NSString *zeroSymbol;
@property(copy) NSString *groupingSeparator;
@property _Bool usesGroupingSeparator;
@property(copy) NSString *currencyDecimalSeparator;
@property _Bool alwaysShowsDecimalSeparator;
@property(copy) NSString *decimalSeparator;
@property _Bool allowsFloats;
@property(copy) NSDictionary *textAttributesForPositiveValues;
@property(copy) NSString *positiveFormat;
@property(copy) NSDictionary *textAttributesForNegativeValues;
@property(copy) NSString *negativeFormat;
@property unsigned long long formatterBehavior;
@property _Bool generatesDecimalNumbers;
@property(copy) NSLocale *locale;
@property unsigned long long numberStyle;
@property long long formattingContext;
- (id)numberFromString:(id)arg1;	// IMP=0x00000000000d71fb
- (id)stringFromNumber:(id)arg1;	// IMP=0x00000000000d71e0
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;	// IMP=0x00000000000d71ca
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;	// IMP=0x00000000000d67e0
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;	// IMP=0x00000000000d67d8
- (_Bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;	// IMP=0x00000000000d6667
- (long long)_cacheGenerationCount;	// IMP=0x00000000000d6610
- (_Bool)_tracksCacheGenerationCount;	// IMP=0x00000000000d65f8
- (id)stringForObjectValue:(id)arg1;	// IMP=0x00000000000d63a5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d61aa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d60ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d601c
- (void)dealloc;	// IMP=0x00000000000d5f91
- (void)_reset;	// IMP=0x00000000000d5e3c
- (id)init;	// IMP=0x00000000000d5a9d
- (void *)__Keynote_NOOP;	// IMP=0x00000000000d5a95
- (void)_regenerateFormatter;	// IMP=0x00000000000d512e
- (void)_clearFormatter;	// IMP=0x00000000000d50f7
- (void)_invalidateCache;	// IMP=0x00000000000d50e6
- (_Bool)checkLocaleChange;	// IMP=0x00000000000de61d
- (void)resetCheckLocaleChange;	// IMP=0x00000000000de60c
- (void)resetCheckModify;	// IMP=0x00000000000de5fb
- (_Bool)checkModify;	// IMP=0x00000000000de5e9
- (void)clearPropertyBit;	// IMP=0x00000000000de5d8
- (void)setPropertyBit;	// IMP=0x00000000000de5c7
- (void *)getFormatter;	// IMP=0x00000000000de56e
- (void)receiveObservedValue:(id)arg1;	// IMP=0x000000000020b2d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

