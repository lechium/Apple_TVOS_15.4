//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaAcousticProfile
{
    _Bool _hasA;	// 8 = 0x8
    NSData *_a;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000040938
@property(nonatomic) _Bool hasA; // @synthesize hasA=_hasA;
@property(copy, nonatomic) NSData *a; // @synthesize a=_a;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000407fb
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000004073d
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000405b6
- (unsigned long long)hash;	// IMP=0x0000000000040599
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040417
- (void)writeTo:(id)arg1;	// IMP=0x00000000000403aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000040214
- (void)deleteA;	// IMP=0x0000000000040200
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031082a

@end
