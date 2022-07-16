//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GRRSchemaGRRSource, NSData;

@interface GRRSchemaGRRFeatureExtractionStarted
{
    GRRSchemaGRRSource *_source;	// 8 = 0x8
    _Bool _hasSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017bc07
@property(nonatomic) _Bool hasSource; // @synthesize hasSource=_hasSource;
@property(retain, nonatomic) GRRSchemaGRRSource *source; // @synthesize source=_source;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000017bad5
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000017ba17
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000017b892
- (unsigned long long)hash;	// IMP=0x000000000017b875
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017b6f3
- (void)writeTo:(id)arg1;	// IMP=0x000000000017b66c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017b65f
- (void)deleteSource;	// IMP=0x000000000017b64b
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000324ea1
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000324e69

@end

