//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, USOSchemaUSOGraphTier1;

@interface CNVSchemaCNVUsoGraphTier1
{
    USOSchemaUSOGraphTier1 *_usoGraphTier1;	// 8 = 0x8
    _Bool _hasUsoGraphTier1;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bf543
@property(nonatomic) _Bool hasUsoGraphTier1; // @synthesize hasUsoGraphTier1=_hasUsoGraphTier1;
@property(retain, nonatomic) USOSchemaUSOGraphTier1 *usoGraphTier1; // @synthesize usoGraphTier1=_usoGraphTier1;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000bf411
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000bf353
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000bf1ce
- (unsigned long long)hash;	// IMP=0x00000000000bf1b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bf02f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000befa8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bef9b
- (void)deleteUsoGraphTier1;	// IMP=0x00000000000bef87
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031a59b
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031a563

@end
