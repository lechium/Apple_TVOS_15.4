//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface FLOWSchemaFLOWLanguageConfidenceMatrix
{
    NSArray *_languageConfidenceArrays;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014fcfd
@property(copy, nonatomic) NSArray *languageConfidenceArrays; // @synthesize languageConfidenceArrays=_languageConfidenceArrays;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000014fa6f
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000014f9b1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000014f69a
- (unsigned long long)hash;	// IMP=0x000000000014f67d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014f4fb
- (void)writeTo:(id)arg1;	// IMP=0x000000000014f3cb
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014f1f5
- (id)languageConfidenceArraysAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014f1d8
- (unsigned long long)languageConfidenceArraysCount;	// IMP=0x000000000014f1bb
- (void)addLanguageConfidenceArrays:(id)arg1;	// IMP=0x000000000014f141
- (void)deleteLanguageConfidenceArrays;	// IMP=0x000000000014f12f
- (void)clearLanguageConfidenceArrays;	// IMP=0x000000000014f112
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000322b8f
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000322b57

@end

