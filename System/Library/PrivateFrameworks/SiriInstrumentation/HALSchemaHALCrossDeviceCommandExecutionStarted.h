//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HALSchemaHALCrossDeviceCommandExecutionStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000018bbda
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000018bb1c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000018b9ec
- (unsigned long long)hash;	// IMP=0x000000000018b9c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018b91c
- (void)writeTo:(id)arg1;	// IMP=0x000000000018b8f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018b8e3
- (void)deleteExists;	// IMP=0x000000000018b8b9
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000326190

@end

