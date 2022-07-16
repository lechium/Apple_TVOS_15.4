//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, USOSchemaUSOGraph;

@interface PLUSSchemaPLUSContactSuggesterQueryStarted
{
    USOSchemaUSOGraph *_usoPersonQuery;	// 8 = 0x8
    _Bool _hasUsoPersonQuery;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000029824b
@property(nonatomic) _Bool hasUsoPersonQuery; // @synthesize hasUsoPersonQuery=_hasUsoPersonQuery;
@property(retain, nonatomic) USOSchemaUSOGraph *usoPersonQuery; // @synthesize usoPersonQuery=_usoPersonQuery;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000298119
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000029805b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000297ed6
- (unsigned long long)hash;	// IMP=0x0000000000297eb9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000297d37
- (void)writeTo:(id)arg1;	// IMP=0x0000000000297cb0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000297ca3
- (void)deleteUsoPersonQuery;	// IMP=0x0000000000297c8f
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003362da
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003362a2

@end
