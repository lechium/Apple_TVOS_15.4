//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface CNVSchemaCNVIntentEagerExecutionEnded
{
    _Bool _exists;	// 8 = 0x8
    CDStruct_b33ad018 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000b8a5e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000b89a0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000b8870
- (unsigned long long)hash;	// IMP=0x00000000000b8845
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b87a0
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b8774
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b8767
- (void)deleteExists;	// IMP=0x00000000000b873d
@property(nonatomic) _Bool hasExists;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000319dd4

@end

