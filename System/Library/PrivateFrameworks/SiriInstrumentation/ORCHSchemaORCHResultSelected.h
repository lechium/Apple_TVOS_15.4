//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ORCHSchemaORCHResultSelected
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000027c47e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000027c3c0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000027c290
- (unsigned long long)hash;	// IMP=0x000000000027c265
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027c1c0
- (void)writeTo:(id)arg1;	// IMP=0x000000000027c194
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000027c187
- (void)deleteExists;	// IMP=0x000000000027c15d
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033468c

@end
