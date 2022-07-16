//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface NLXSchemaCDMRequestEnded
{
    NSArray *_parses;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007de12
@property(copy, nonatomic) NSArray *parses; // @synthesize parses=_parses;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000007db84
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000007dac6
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000007d7af
- (unsigned long long)hash;	// IMP=0x000000000007d792
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007d610
- (void)writeTo:(id)arg1;	// IMP=0x000000000007d4e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007d123
- (id)parsesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007d106
- (unsigned long long)parsesCount;	// IMP=0x000000000007d0e9
- (void)addParses:(id)arg1;	// IMP=0x000000000007d06f
- (void)deleteParses;	// IMP=0x000000000007d05d
- (void)clearParses;	// IMP=0x000000000007d040
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000031473c
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000314704

@end
