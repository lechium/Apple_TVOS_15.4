//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MTSchemaMTBatchRequestStarted
{
    unsigned int _numParagraphs;	// 8 = 0x8
    struct {
        unsigned int numParagraphs:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int numParagraphs; // @synthesize numParagraphs=_numParagraphs;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000220301
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000220243
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000220114
- (unsigned long long)hash;	// IMP=0x00000000002200ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000220045
- (void)writeTo:(id)arg1;	// IMP=0x000000000022001a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000022000d
- (void)deleteNumParagraphs;	// IMP=0x000000000021ffe3
@property(nonatomic) _Bool hasNumParagraphs;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032ed99

@end

