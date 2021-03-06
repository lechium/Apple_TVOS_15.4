//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ASRSchemaASRAssetLoadStarted
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001492c
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000001486e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000001473e
- (unsigned long long)hash;	// IMP=0x0000000000014713
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001466e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000014642
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000014635
- (void)deleteExists;	// IMP=0x000000000001460b
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030d8c0

@end

