//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHEndpointerUsed
{
    int _endpointer;	// 8 = 0x8
    struct {
        unsigned int endpointer:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) int endpointer; // @synthesize endpointer=_endpointer;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001fa71a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001fa65c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001fa501
- (unsigned long long)hash;	// IMP=0x00000000001fa4d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fa431
- (void)writeTo:(id)arg1;	// IMP=0x00000000001fa406
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001fa3f9
- (void)deleteEndpointer;	// IMP=0x00000000001fa3cf
@property(nonatomic) _Bool hasEndpointer;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032d4be

@end

