//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface AFLanguageDetectionUserContext : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_lidUserContext;	// 8 = 0x8
    unsigned int _userContextChangeBit;	// 16 = 0x10
    _Bool _simulateLanguageDetectorAssetsAvailability;	// 20 = 0x14
    NSArray *_simulatingLanguageCodes;	// 24 = 0x18
    NSArray *_finalDictationLanguages;	// 32 = 0x20
    NSMutableDictionary *_dictationLanguageMappingCache;	// 40 = 0x28
    _Bool _languageToggled;	// 48 = 0x30
    NSString *_currentKeyboard;	// 56 = 0x38
    NSString *_primaryLanguageCode;	// 64 = 0x40
    NSDictionary *_languageCodeOverrides;	// 72 = 0x48
    NSString *_prevMessageLanguage;	// 80 = 0x50
    NSString *_globalLastUsedKeyboard;	// 88 = 0x58
    NSArray *_multiLingualKeyboardLanguages;	// 96 = 0x60
    NSArray *_keyboardConvoRecentMessages;	// 104 = 0x68
    NSArray *_dictationLanguages;	// 112 = 0x70
    NSDictionary *_keyboardConversationLanguagePriors;	// 120 = 0x78
    NSDictionary *_keyboardGlobalLanguagePriors;	// 128 = 0x80
    NSNumber *_dictationInputOrigin;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003b5c8
+ (id)defaultContextWithPrimaryLanguage:(id)arg1;	// IMP=0x000000000003b341
- (void).cxx_destruct;	// IMP=0x000000000003d466
@property(copy, nonatomic) NSNumber *dictationInputOrigin; // @synthesize dictationInputOrigin=_dictationInputOrigin;
@property(copy, nonatomic) NSDictionary *keyboardGlobalLanguagePriors; // @synthesize keyboardGlobalLanguagePriors=_keyboardGlobalLanguagePriors;
@property(copy, nonatomic) NSDictionary *keyboardConversationLanguagePriors; // @synthesize keyboardConversationLanguagePriors=_keyboardConversationLanguagePriors;
@property(copy, nonatomic) NSArray *dictationLanguages; // @synthesize dictationLanguages=_dictationLanguages;
@property(copy, nonatomic) NSArray *keyboardConvoRecentMessages; // @synthesize keyboardConvoRecentMessages=_keyboardConvoRecentMessages;
@property(copy, nonatomic) NSArray *multiLingualKeyboardLanguages; // @synthesize multiLingualKeyboardLanguages=_multiLingualKeyboardLanguages;
@property(copy, nonatomic) NSString *globalLastUsedKeyboard; // @synthesize globalLastUsedKeyboard=_globalLastUsedKeyboard;
@property(copy, nonatomic) NSString *prevMessageLanguage; // @synthesize prevMessageLanguage=_prevMessageLanguage;
@property(nonatomic, getter=wasLanguageToggled, setter=setWasLanguageToggled:) _Bool languageToggled; // @synthesize languageToggled=_languageToggled;
@property(copy, nonatomic) NSDictionary *languageCodeOverrides; // @synthesize languageCodeOverrides=_languageCodeOverrides;
@property(copy, nonatomic) NSString *primaryLanguageCode; // @synthesize primaryLanguageCode=_primaryLanguageCode;
@property(copy, nonatomic) NSString *currentKeyboard; // @synthesize currentKeyboard=_currentKeyboard;
- (id)simulatingLanguageCodes;	// IMP=0x000000000003d39d
- (void)setSimulatingLanguageCodes:(id)arg1;	// IMP=0x000000000003d339
- (_Bool)shouldSimulateLanguageDetectorAssetsAvailability;	// IMP=0x000000000003d315
- (void)setShouldSimulateLanguageDetectorAssetsAvailability:(_Bool)arg1;	// IMP=0x000000000003d2f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d19e
- (id)finalFilteredDictationLanguages;	// IMP=0x000000000003d190
- (id)userContextLanguageCodeForKeyboardLangauge:(id)arg1 overrideLanguageCode:(id)arg2;	// IMP=0x000000000003d005
- (id)getDictationLanguagesForSupportedLocales:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003cb31
- (id)getContextForAnalytics;	// IMP=0x000000000003ca8c
- (id)languageDetectorUserContext;	// IMP=0x000000000003c59e
- (id)context;	// IMP=0x000000000003c44a
- (void)_setDictationLanguageCodeMappingCache:(id)arg1;	// IMP=0x000000000003c41d
- (void)_setFinalFilteredDictationLanguages:(id)arg1;	// IMP=0x000000000003c3f0
- (void)_setLanguageDetectorContext:(id)arg1;	// IMP=0x000000000003c3c3
- (void)_setUserContextChangeBit:(unsigned int)arg1;	// IMP=0x000000000003c3ba
- (unsigned int)languageDetectorContextChangeBits;	// IMP=0x000000000003c3b1
- (_Bool)isUpdateAvailableForLanguageDetectorContext;	// IMP=0x000000000003c3a4
- (id)priorsByReplacingKeyboardLanguage:(id)arg1;	// IMP=0x000000000003c168
- (id)getSiriDictationLanguagesFromLanguages:(id)arg1;	// IMP=0x000000000003bff9
- (id)siriDictationLanguageForLanguage:(id)arg1;	// IMP=0x000000000003bfe5
- (void)_setContextValue:(id)arg1 forKey:(id)arg2 context:(id)arg3;	// IMP=0x000000000003bde5
- (void)_updateContextValue:(id)arg1 forKey:(id)arg2 context:(id)arg3;	// IMP=0x000000000003bd50
- (void)_removeContextValueForKey:(id)arg1 context:(id)arg2;	// IMP=0x000000000003bd34
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003b779
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003b5d0
- (id)description;	// IMP=0x000000000003b4aa
- (id)init;	// IMP=0x000000000003b42e

@end

