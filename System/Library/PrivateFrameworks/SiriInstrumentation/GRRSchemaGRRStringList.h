//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface GRRSchemaGRRStringList
{
    NSArray *_stringNames;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000180c9e
@property(copy, nonatomic) NSArray *stringNames; // @synthesize stringNames=_stringNames;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000180a23
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000180965
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000180829
- (unsigned long long)hash;	// IMP=0x000000000018080c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018068a
- (void)writeTo:(id)arg1;	// IMP=0x000000000018055a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018054d
- (id)stringNameAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000180530
- (unsigned long long)stringNameCount;	// IMP=0x0000000000180513
- (void)addStringName:(id)arg1;	// IMP=0x0000000000180499
- (void)deleteStringName;	// IMP=0x0000000000180487
- (void)clearStringName;	// IMP=0x000000000018046a
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032560d

@end

