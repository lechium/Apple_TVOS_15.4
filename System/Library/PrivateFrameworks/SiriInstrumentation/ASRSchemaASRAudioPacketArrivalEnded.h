//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ASRSchemaASRAudioPacketArrivalEnded
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000015ddf
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000015d21
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000015bf1
- (unsigned long long)hash;	// IMP=0x0000000000015bc6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015b21
- (void)writeTo:(id)arg1;	// IMP=0x0000000000015af5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000015ae8
- (void)deleteExists;	// IMP=0x0000000000015abe
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030da89

@end

