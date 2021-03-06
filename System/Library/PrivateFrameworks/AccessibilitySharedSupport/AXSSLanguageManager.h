//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXSSDialectMap, NSArray, NSCharacterSet, NSLocale, NSString;

@interface AXSSLanguageManager : NSObject
{
    AXSSDialectMap *_dialectForSystemLanguage;	// 8 = 0x8
    AXSSDialectMap *_dialectForCurrentLocale;	// 16 = 0x10
    AXSSDialectMap *_dialectForCurrentRegion;	// 24 = 0x18
    NSArray *_languageMaps;	// 32 = 0x20
    NSLocale *_userLocale;	// 40 = 0x28
    NSCharacterSet *_commonCharacters;	// 48 = 0x30
}

+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1;	// IMP=0x000000000000eedc
+ (id)commonPunctuationCharacters;	// IMP=0x000000000000ee70
+ (id)shared;	// IMP=0x000000000000ee1b
- (void).cxx_destruct;	// IMP=0x0000000000012440
@property(retain, nonatomic) NSCharacterSet *commonCharacters; // @synthesize commonCharacters=_commonCharacters;
@property(copy, nonatomic) NSLocale *userLocale; // @synthesize userLocale=_userLocale;
@property(retain, nonatomic) NSArray *languageMaps; // @synthesize languageMaps=_languageMaps;
- (void)_handleUserLocaleDidChange:(id)arg1;	// IMP=0x0000000000012399
- (void)updateCachedDialects;	// IMP=0x00000000000118f3
- (_Bool)isStringComposedByCommonCharacters:(id)arg1;	// IMP=0x00000000000117c5
- (_Bool)isCharacterCommon:(unsigned short)arg1;	// IMP=0x0000000000011772
- (id)dialectThatCanSpeakCharacter:(unsigned short)arg1;	// IMP=0x00000000000111b5
- (id)dialectsThatCanSpeakCharacter:(unsigned short)arg1;	// IMP=0x0000000000010c01
- (id)dialectsThatCanSpeakString:(id)arg1;	// IMP=0x0000000000010738
- (id)dialectForSpeechSynthesisVoiceID:(id)arg1;	// IMP=0x00000000000103f9
- (id)dialectForLanguageID:(id)arg1;	// IMP=0x000000000000fd72
@property(retain, nonatomic) AXSSDialectMap *dialectForCurrentRegion; // @synthesize dialectForCurrentRegion=_dialectForCurrentRegion;
@property(retain, nonatomic) AXSSDialectMap *dialectForCurrentLocale; // @synthesize dialectForCurrentLocale=_dialectForCurrentLocale;
@property(readonly, nonatomic) AXSSDialectMap *dialectForUserLocale;
@property(retain, nonatomic) AXSSDialectMap *dialectForSystemLanguage; // @synthesize dialectForSystemLanguage=_dialectForSystemLanguage;
@property(readonly, nonatomic) NSString *systemLanguageID;
- (id)_preferredLanguage;	// IMP=0x000000000000f365
- (id)description;	// IMP=0x000000000000f2ea
- (id)init;	// IMP=0x000000000000f106

@end

