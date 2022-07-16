//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaLanguageProfile
{
    _Bool _hasL;	// 8 = 0x8
    NSData *_l;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001a6705
@property(nonatomic) _Bool hasL; // @synthesize hasL=_hasL;
@property(copy, nonatomic) NSData *l; // @synthesize l=_l;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001a65c8
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001a650a
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001a6383
- (unsigned long long)hash;	// IMP=0x00000000001a6366
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a61e4
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a6177
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a5fe1
- (void)deleteL;	// IMP=0x00000000001a5fcd
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000327da9

@end

