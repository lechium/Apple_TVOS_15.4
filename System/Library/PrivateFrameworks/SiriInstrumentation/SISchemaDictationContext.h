//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, SISchemaLocaleIdentifier;

@interface SISchemaDictationContext
{
    NSString *_keyboardLanguage;	// 8 = 0x8
    SISchemaLocaleIdentifier *_keyboardLocale;	// 16 = 0x10
    SISchemaLocaleIdentifier *_dictationLocale;	// 24 = 0x18
    SISchemaLocaleIdentifier *_userSelectedLocale;	// 32 = 0x20
    SISchemaLocaleIdentifier *_siriSelectedLocale;	// 40 = 0x28
    NSArray *_keyboardLocalesEnableds;	// 48 = 0x30
    NSArray *_dictationLocalesEnableds;	// 56 = 0x38
    NSString *_bundleId;	// 64 = 0x40
    _Bool _hasKeyboardLanguage;	// 72 = 0x48
    _Bool _hasKeyboardLocale;	// 73 = 0x49
    _Bool _hasDictationLocale;	// 74 = 0x4a
    _Bool _hasUserSelectedLocale;	// 75 = 0x4b
    _Bool _hasSiriSelectedLocale;	// 76 = 0x4c
    _Bool _hasBundleId;	// 77 = 0x4d
}

- (void).cxx_destruct;	// IMP=0x0000000000127f53
@property(nonatomic) _Bool hasBundleId; // @synthesize hasBundleId=_hasBundleId;
@property(nonatomic) _Bool hasSiriSelectedLocale; // @synthesize hasSiriSelectedLocale=_hasSiriSelectedLocale;
@property(nonatomic) _Bool hasUserSelectedLocale; // @synthesize hasUserSelectedLocale=_hasUserSelectedLocale;
@property(nonatomic) _Bool hasDictationLocale; // @synthesize hasDictationLocale=_hasDictationLocale;
@property(nonatomic) _Bool hasKeyboardLocale; // @synthesize hasKeyboardLocale=_hasKeyboardLocale;
@property(nonatomic) _Bool hasKeyboardLanguage; // @synthesize hasKeyboardLanguage=_hasKeyboardLanguage;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSArray *dictationLocalesEnableds; // @synthesize dictationLocalesEnableds=_dictationLocalesEnableds;
@property(copy, nonatomic) NSArray *keyboardLocalesEnableds; // @synthesize keyboardLocalesEnableds=_keyboardLocalesEnableds;
@property(retain, nonatomic) SISchemaLocaleIdentifier *siriSelectedLocale; // @synthesize siriSelectedLocale=_siriSelectedLocale;
@property(retain, nonatomic) SISchemaLocaleIdentifier *userSelectedLocale; // @synthesize userSelectedLocale=_userSelectedLocale;
@property(retain, nonatomic) SISchemaLocaleIdentifier *dictationLocale; // @synthesize dictationLocale=_dictationLocale;
@property(retain, nonatomic) SISchemaLocaleIdentifier *keyboardLocale; // @synthesize keyboardLocale=_keyboardLocale;
@property(copy, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000127668
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001275aa
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000126d0a
- (unsigned long long)hash;	// IMP=0x0000000000126c19
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012634a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000125f3f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000125f32
- (void)deleteBundleId;	// IMP=0x0000000000125f1e
- (id)dictationLocalesEnabledAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000125eec
- (unsigned long long)dictationLocalesEnabledCount;	// IMP=0x0000000000125ecf
- (void)addDictationLocalesEnabled:(id)arg1;	// IMP=0x0000000000125e55
- (void)deleteDictationLocalesEnabled;	// IMP=0x0000000000125e43
- (void)clearDictationLocalesEnabled;	// IMP=0x0000000000125e26
- (id)keyboardLocalesEnabledAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000125e09
- (unsigned long long)keyboardLocalesEnabledCount;	// IMP=0x0000000000125dec
- (void)addKeyboardLocalesEnabled:(id)arg1;	// IMP=0x0000000000125d72
- (void)deleteKeyboardLocalesEnabled;	// IMP=0x0000000000125d60
- (void)clearKeyboardLocalesEnabled;	// IMP=0x0000000000125d43
- (void)deleteSiriSelectedLocale;	// IMP=0x0000000000125d2f
- (void)deleteUserSelectedLocale;	// IMP=0x0000000000125d06
- (void)deleteDictationLocale;	// IMP=0x0000000000125cdd
- (void)deleteKeyboardLocale;	// IMP=0x0000000000125cb4
- (void)deleteKeyboardLanguage;	// IMP=0x0000000000125c8b
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003202d1
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000320299

@end
