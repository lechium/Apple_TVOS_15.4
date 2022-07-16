//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface DUSchemaDUContent
{
    NSData *_dataPayload;	// 8 = 0x8
    _Bool _hasDataPayload;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001129d1
@property(nonatomic) _Bool hasDataPayload; // @synthesize hasDataPayload=_hasDataPayload;
@property(copy, nonatomic) NSData *dataPayload; // @synthesize dataPayload=_dataPayload;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001128a4
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001127e6
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000011265f
- (unsigned long long)hash;	// IMP=0x0000000000112642
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001124c0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000112453
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001122bd
- (void)deleteDataPayload;	// IMP=0x00000000001122a9
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031ee29
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031edf1

@end

