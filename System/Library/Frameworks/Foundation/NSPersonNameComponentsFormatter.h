//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSObserver-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSLocale, NSString;

@interface NSPersonNameComponentsFormatter <NSObservable, NSObserver, NSSecureCoding, NSCopying>
{
    id _private;	// 8 = 0x8
    NSString *__preferredLocalizationForExplicitlySetLocale;	// 16 = 0x10
}

+ (id)__stringValueForShortStyle:(long long)arg1;	// IMP=0x0000000000222358
+ (id)__stringValueForStyle:(long long)arg1;	// IMP=0x00000000002222fc
+ (SEL)__initialsCreatorForScript:(unsigned long long)arg1;	// IMP=0x00000000002222a0
+ (_Bool)__shortStyle:(long long)arg1 isRestrictedForLocalization:(id)arg2;	// IMP=0x0000000000222221
+ (_Bool)__shortStyle:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2;	// IMP=0x0000000000222192
+ (_Bool)__style:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2;	// IMP=0x0000000000222103
+ (_Bool)__style:(long long)arg1 isRestrictedForLocalization:(id)arg2;	// IMP=0x0000000000222084
+ (long long)__shortNameFormatForLocalization:(id)arg1;	// IMP=0x0000000000222046
+ (long long)__abbreviatedNameFormatForPersonNameComponents:(id)arg1;	// IMP=0x0000000000221f7a
+ (long long)__abbreviatedNameFormatForString:(id)arg1;	// IMP=0x0000000000221edc
+ (long long)__nameOrderForLocalization:(id)arg1 usingNativeOrdering:(_Bool)arg2;	// IMP=0x0000000000221e70
+ (id)__supportedScriptDefaultsFromScriptName:(id)arg1;	// IMP=0x0000000000221e21
+ (id)__supportedNameDefaultsFromLocalization:(id)arg1;	// IMP=0x0000000000221dda
+ (id)_preferredLocalizationFromLocale:(id)arg1;	// IMP=0x0000000000221d1c
+ (void)__registerDefaults;	// IMP=0x0000000000221b3f
+ (CDUnknownBlockType)arabicInitialsCreator;	// IMP=0x000000000022197a
+ (CDUnknownBlockType)tibetanInitialsCreator;	// IMP=0x00000000002217ac
+ (CDUnknownBlockType)thaiInitialsCreator;	// IMP=0x000000000022173c
+ (CDUnknownBlockType)westernInitialsCreator;	// IMP=0x00000000002216f6
+ (id)__initialsForString:(id)arg1;	// IMP=0x0000000000221694
+ (_Bool)_shortNameIsEnabled;	// IMP=0x0000000000221613
+ (_Bool)_shouldPreferNicknames;	// IMP=0x0000000000221592
+ (long long)_defaultShortNameFormat;	// IMP=0x0000000000221511
+ (long long)_defaultDisplayNameOrder;	// IMP=0x0000000000221490
+ (id)_localizedShortNameForComponents:(id)arg1 withStyle:(long long)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000221363
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000221175
+ (id)_fallbackDescriptorForStyle:(long long)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000220f34
+ (id)_relevantKeyPathsForStyle:(long long)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000220eef
+ (id)_localizedDelimiterForComponents:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000220eb3
+ (long long)_nameOrderWithOverridesForComponents:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000220e80
+ (_Bool)__shortStyleRestrictionExistsForComponents:(id)arg1 shortStyle:(long long)arg2;	// IMP=0x0000000000220db1
+ (_Bool)_currentLocaleIsCJK;	// IMP=0x0000000000220adb
+ (id)_cjkLocaleIdentifiers;	// IMP=0x0000000000220a6c
+ (id)_cjkLanguagesSet;	// IMP=0x00000000002209e9
+ (_Bool)_isMixedScript:(id)arg1;	// IMP=0x00000000002209cf
+ (_Bool)_isCJKScript:(id)arg1;	// IMP=0x0000000000220933
+ (id)__naiveDelimiterForCombinedNameString:(id)arg1;	// IMP=0x00000000002208d8
+ (id)__scriptIdentifierFromIndex:(unsigned long long)arg1;	// IMP=0x00000000002208bf
+ (unsigned long long)__inferredScriptIndexForComponents:(id)arg1;	// IMP=0x00000000002208ab
+ (unsigned long long)__inferredScriptIndexForComponents:(id)arg1 ignoreUndeterminedComponents:(_Bool)arg2;	// IMP=0x00000000002206ac
+ (unsigned long long)__inferredScriptIndexFromString:(id)arg1;	// IMP=0x000000000022058e
+ (id)__stringByStrippingNonInitialPunctuationFromString:(id)arg1;	// IMP=0x00000000002204af
+ (id)__longestComponentFromComponents:(id)arg1;	// IMP=0x0000000000220351
+ (_Bool)__contents:(id)arg1 exclusivelyInCharacterSet:(struct USet *)arg2;	// IMP=0x00000000002201e0
+ (struct USet *)__getCharacterSetWithPattern:(id)arg1;	// IMP=0x0000000000220088
+ (id)__characterSetWithPattern:(id)arg1;	// IMP=0x000000000021fe85
+ (id)__thaiConsonantSet;	// IMP=0x000000000021fdd5
+ (_Bool)isKatakana:(id)arg1;	// IMP=0x000000000021fd10
+ (void)forEachExistingComponentWithComponents:(id)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000021fb38
+ (id)_styleFormatterForStyle:(long long)arg1 masterFormatter:(id)arg2;	// IMP=0x000000000021faa4
+ (id)__givenNameFirstOrdering;	// IMP=0x000000000021f6b3
+ (id)__familyNameFirstOrdering;	// IMP=0x000000000021f5f3
+ (id)localizedStringFromPersonNameComponents:(id)arg1 style:(long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000021f4d9
+ (id)_formatterWithStyle:(long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000021f455
+ (_Bool)__shouldFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;	// IMP=0x000000000021f213
+ (_Bool)__shouldCacheFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;	// IMP=0x000000000021f20b
+ (id)__preferredLanguages;	// IMP=0x000000000021f1f2
+ (id)_preferredLocalizationForCurrentLocale;	// IMP=0x000000000021f17b
+ (id)__currentLocale;	// IMP=0x000000000021f125
@property(readonly, copy) NSString *_preferredLocalizationForExplicitlySetLocale; // @synthesize _preferredLocalizationForExplicitlySetLocale=__preferredLocalizationForExplicitlySetLocale;
- (_Bool)isEqualToFormatter:(id)arg1;	// IMP=0x000000000022131f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000221304
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000022128d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022117d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002210bd
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;	// IMP=0x0000000000220fee
- (id)personNameComponentsFromString:(id)arg1;	// IMP=0x0000000000220f8b
- (long long)_nameOrderWithOverridesForComponents:(id)arg1;	// IMP=0x0000000000220f79
- (long long)__localizedShortNameFormat;	// IMP=0x0000000000220e3e
- (long long)__localizedNameOrderUsingNativeOrdering:(_Bool)arg1;	// IMP=0x0000000000220df0
- (_Bool)__localizedRestrictionExistsForComponents:(id)arg1 ignoreUndeterminedComponents:(_Bool)arg2;	// IMP=0x0000000000220d57
- (_Bool)__localizedRestrictionExistsForShortStyle:(long long)arg1;	// IMP=0x0000000000220d08
- (_Bool)__localizedRestrictionExistsForStyle:(long long)arg1;	// IMP=0x0000000000220cb9
- (long long)__computedShortNameFormat;	// IMP=0x0000000000220c7a
- (long long)__computedNameOrderForComponents:(id)arg1;	// IMP=0x0000000000220b43
- (id)annotatedStringFromPersonNameComponents:(id)arg1;	// IMP=0x000000000021f918
- (id)stringFromPersonNameComponents:(id)arg1;	// IMP=0x000000000021f7b6
- (id)stringForObjectValue:(id)arg1;	// IMP=0x000000000021f773
@property long long style;
@property(getter=isPhonetic) _Bool phonetic;
@property(copy) NSLocale *locale;
@property NSLocale *_locale;
@property _Bool _ignoresFallbacks;
@property _Bool _forceGivenNameFirst;
@property _Bool _forceFamilyNameFirst;
- (void)dealloc;	// IMP=0x000000000021ee76
- (id)init;	// IMP=0x000000000021ee00
- (void)receiveObservedValue:(id)arg1;	// IMP=0x000000000020b759

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

