//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, USOSchemaUSOGraphTier1;

@interface RRSchemaRRUsoGraphTier1
{
    USOSchemaUSOGraphTier1 *_usoGraphTier1;	// 8 = 0x8
    _Bool _hasUsoGraphTier1;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002b98fe
@property(nonatomic) _Bool hasUsoGraphTier1; // @synthesize hasUsoGraphTier1=_hasUsoGraphTier1;
@property(retain, nonatomic) USOSchemaUSOGraphTier1 *usoGraphTier1; // @synthesize usoGraphTier1=_usoGraphTier1;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002b97cc
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002b970e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002b9589
- (unsigned long long)hash;	// IMP=0x00000000002b956c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b93ea
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b9363
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b9356
- (void)deleteUsoGraphTier1;	// IMP=0x00000000002b9342
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000338e61
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000338e29

@end

