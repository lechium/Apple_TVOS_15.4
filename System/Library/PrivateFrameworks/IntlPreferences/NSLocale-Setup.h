//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLocale.h>

@class NSArray, NSString;

@interface NSLocale (Setup)
+ (id)_subdivisionCodeFromSubdivisionTag:(id)arg1 restrictedToRegionCode:(id)arg2;	// IMP=0x0000000000001d8b
+ (id)displayNameForSelectableScriptCode:(id)arg1;	// IMP=0x0000000000017442
+ (void)setArchivedPreferences:(id)arg1;	// IMP=0x0000000000016ba5
+ (id)archivedPreferencesWithHashesForBundleIDs:(id)arg1;	// IMP=0x0000000000016b3f
+ (void)archivedPreferencesWithHashesForBundleIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016a5b
+ (id)_hashesFromAppPreferences:(id)arg1;	// IMP=0x000000000001675e
+ (id)_archivedPreferencesWithOverridingLanguages:(id)arg1 hash:(out id *)arg2;	// IMP=0x000000000001607e
+ (id)archivedPreferencesWithHash:(out id *)arg1;	// IMP=0x0000000000016067
+ (id)archivedPreferences;	// IMP=0x0000000000016053
+ (void)unregisterPreferredLanguageForKeyboardLanguage:(id)arg1;	// IMP=0x0000000000015bcd
+ (void)registerPreferredLanguageForAddedKeyboardLanguage:(id)arg1;	// IMP=0x0000000000015906
+ (id)_sanitizedLanguageIdentifierFromKeyboardLanguage:(id)arg1 currentLocale:(id)arg2;	// IMP=0x000000000001550b
+ (id)_sanitizedLanguageIdentifierFromKeyboardLanguage:(id)arg1;	// IMP=0x000000000001547e
+ (void)enableDefaultKeyboardForPreferredLanguages;	// IMP=0x0000000000014c48
+ (void)_setUsesTwelveHourClock:(_Bool)arg1;	// IMP=0x0000000000014b44
+ (_Bool)_defaultUsesTwelveHourClock;	// IMP=0x00000000000149b4
+ (_Bool)_usesTwelveHourClock;	// IMP=0x00000000000148b7
+ (void)setLanguageAndRegion:(id)arg1;	// IMP=0x000000000001476d
+ (id)_preferencesForSetLanguageAndRegion:(id)arg1;	// IMP=0x00000000000142c2
+ (void)setLanguageToPreferredLanguages:(id)arg1 fallback:(id)arg2;	// IMP=0x00000000000141d3
+ (void)setPreferredLanguageAndUpdateLocale:(id)arg1;	// IMP=0x000000000001408b
+ (id)languageArrayAfterSettingLanguage:(id)arg1 fallback:(id)arg2 toLanguageArray:(id)arg3;	// IMP=0x0000000000013d79
+ (_Bool)shouldShowPreferredLanguages;	// IMP=0x0000000000013d21
+ (void)updateShouldShowPreferredLanguages:(_Bool)arg1;	// IMP=0x0000000000013cba
+ (id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1;	// IMP=0x0000000000013b0e
+ (void)setLocaleAfterRegionChange:(id)arg1;	// IMP=0x0000000000013a7e
+ (void)_insertFallbackLanguageIfNecessaryForRegion:(id)arg1;	// IMP=0x0000000000013987
+ (id)localeIdentifierForRegionChange:(id)arg1;	// IMP=0x00000000000137ff
+ (void)setLocaleAfterLanguageChange:(id)arg1;	// IMP=0x00000000000136af
+ (id)validateLocale:(id)arg1;	// IMP=0x000000000001334d
+ (void)resetTimeFormat;	// IMP=0x00000000000132ef
+ (void)setLocaleAndResetTimeFormat:(id)arg1;	// IMP=0x00000000000132b9
+ (void)setLocaleOnly:(id)arg1;	// IMP=0x00000000000130f9
+ (id)renderableLanguagesFromList:(id)arg1;	// IMP=0x0000000000013000
+ (id)renderableLocaleLanguages;	// IMP=0x0000000000012da7
+ (id)renderableUILanguages;	// IMP=0x0000000000012cc4
+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;	// IMP=0x0000000000012c10
+ (id)canonicalLocaleIdentifierFromComponents:(id)arg1;	// IMP=0x0000000000012bb2
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;	// IMP=0x00000000000129e8
+ (id)canonicalLocaleIdentifier:(id)arg1 withNewLanguageIdentifier:(id)arg2;	// IMP=0x0000000000012746
+ (id)supportedCJLanguageIdentifiers;	// IMP=0x00000000000125ef
+ (id)deviceLanguageIdentifier;	// IMP=0x00000000000125d6
+ (id)deviceLanguageLocale;	// IMP=0x0000000000012570
- (id)defaultLanguagesForMultilingualSetup;	// IMP=0x0000000000001a76
- (id)languagesForMultilingualSetup;	// IMP=0x0000000000001a62
- (id)_languagesForMultilingualSetupWithKeyboardsIDs:(id)arg1;	// IMP=0x000000000000174d
- (_Bool)requiresMultilingualSetup;	// IMP=0x0000000000001739
- (_Bool)_requiresMultilingualSetupWithKeyboardIDs:(id)arg1;	// IMP=0x0000000000001548
@property(readonly, copy) NSString *explanationTextForSelectableScripts;
@property(readonly, copy) NSString *optionNameWithColonForSelectableScripts;
@property(readonly, copy) NSString *optionNameForSelectableScripts;
@property(readonly, copy) NSArray *selectableScriptCodes;
@property(readonly, nonatomic) NSString *languageIdentifier;
- (id)localeByChangingLanguageTo:(id)arg1;	// IMP=0x0000000000015d7d
@end

