//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ORCHSchemaORCHCDMRequestFailed
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000026b64a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000026b58c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000026b45c
- (unsigned long long)hash;	// IMP=0x000000000026b431
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026b38c
- (void)writeTo:(id)arg1;	// IMP=0x000000000026b360
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000026b353
- (void)deleteExists;	// IMP=0x000000000026b329
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033324f

@end

