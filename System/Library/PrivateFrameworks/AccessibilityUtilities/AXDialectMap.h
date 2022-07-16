//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXLangMap, AXLanguageManager, NSCharacterSet, NSLocale, NSString;

@interface AXDialectMap : NSObject
{
    AXLangMap *_langMap;	// 8 = 0x8
    NSString *_voiceName;	// 16 = 0x10
    NSLocale *_locale;	// 24 = 0x18
    NSString *_specificLanguageID;	// 32 = 0x20
    NSCharacterSet *_speakableCharacters;	// 40 = 0x28
    NSCharacterSet *_secondaryLanguageRange;	// 48 = 0x30
}

+ (id)_hanjaCharacterSet;	// IMP=0x000000000005a9e4
+ (id)_hanjaToHangulMap;	// IMP=0x000000000005a8d4
- (void).cxx_destruct;	// IMP=0x000000000005b165
@property(retain, nonatomic) NSCharacterSet *secondaryLanguageRange; // @synthesize secondaryLanguageRange=_secondaryLanguageRange;
@property(retain, nonatomic) NSCharacterSet *speakableCharacters; // @synthesize speakableCharacters=_speakableCharacters;
@property(copy, nonatomic) NSString *specificLanguageID; // @synthesize specificLanguageID=_specificLanguageID;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(nonatomic) __weak AXLangMap *langMap; // @synthesize langMap=_langMap;
- (id)_stringByTransliterationHanjaToHangul:(id)arg1;	// IMP=0x000000000005abd5
- (id)_transliteratedSpeechCharacters;	// IMP=0x000000000005a896
- (id)transliteratedStringForString:(id)arg1;	// IMP=0x000000000005a82e
- (_Bool)speakingRequiresTransliteration;	// IMP=0x000000000005a81c
- (_Bool)_languageIsKorean;	// IMP=0x000000000005a7a7
- (_Bool)canSpeakString:(id)arg1 allowsTransliteration:(_Bool)arg2;	// IMP=0x000000000005a693
- (_Bool)canSpeakString:(id)arg1;	// IMP=0x000000000005a67c
- (_Bool)canSpeakLongCharacter:(unsigned int)arg1;	// IMP=0x000000000005a629
- (_Bool)canSpeakCharacter:(unsigned short)arg1 allowTransliteration:(_Bool)arg2;	// IMP=0x000000000005a572
- (_Bool)canSpeakCharacter:(unsigned short)arg1;	// IMP=0x000000000005a55b
- (_Bool)isDialectSecondaryForCharacter:(unsigned short)arg1;	// IMP=0x000000000005a508
@property(readonly, nonatomic) NSString *languageNameAndLocaleInNativeLocale;
@property(readonly, nonatomic) NSString *localeNameInCurrentLocale;
@property(readonly, nonatomic) NSString *languageNameAndLocaleInCurrentLocale;
@property(readonly, nonatomic) NSString *languageNameInNativeLocale;
@property(readonly, nonatomic) NSString *languageNameInCurrentLocale;
@property(readonly, nonatomic) NSString *regionID;
@property(readonly, nonatomic) AXLanguageManager *langManager;
- (id)debugDescription;	// IMP=0x0000000000059ac4
- (id)basicDescription;	// IMP=0x0000000000059974
- (id)description;	// IMP=0x0000000000059962
- (id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5;	// IMP=0x000000000005966a

@end

