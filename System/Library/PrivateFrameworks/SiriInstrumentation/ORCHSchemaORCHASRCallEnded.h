//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ORCHSchemaORCHASRCallEnded
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000267fb4
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000267ef6
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000267dc6
- (unsigned long long)hash;	// IMP=0x0000000000267d9b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000267cf6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000267cca
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000267cbd
- (void)deleteExists;	// IMP=0x0000000000267c93
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000332e5f

@end
