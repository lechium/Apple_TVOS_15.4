//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ASRSchemaASRPartialResultGenerated
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002c2f7
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000002c239
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000002c109
- (unsigned long long)hash;	// IMP=0x000000000002c0de
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c039
- (void)writeTo:(id)arg1;	// IMP=0x000000000002c00d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002c000
- (void)deleteExists;	// IMP=0x000000000002bfd6
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000030f538

@end

