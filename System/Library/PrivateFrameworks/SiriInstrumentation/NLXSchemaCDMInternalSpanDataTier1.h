//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLXSchemaCDMSiriVocabularySpanDataTier1, NSData;

@interface NLXSchemaCDMInternalSpanDataTier1
{
    NLXSchemaCDMSiriVocabularySpanDataTier1 *_siriVocabularySpanData;	// 8 = 0x8
    _Bool _hasSiriVocabularySpanData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000071e7f
@property(nonatomic) _Bool hasSiriVocabularySpanData; // @synthesize hasSiriVocabularySpanData=_hasSiriVocabularySpanData;
@property(retain, nonatomic) NLXSchemaCDMSiriVocabularySpanDataTier1 *siriVocabularySpanData; // @synthesize siriVocabularySpanData=_siriVocabularySpanData;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000071d4d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000071c8f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000071b0a
- (unsigned long long)hash;	// IMP=0x0000000000071aed
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007196b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000718e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000714f1
- (void)deleteSiriVocabularySpanData;	// IMP=0x00000000000714dd
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000313965
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031392d

@end
