//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString;

@interface SIRINLUINTERNALNLv4EmbeddingTensor : PBCodable <NSCopying>
{
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _values;	// 8 = 0x8
    unsigned long long _embeddingDim;	// 32 = 0x20
    unsigned long long _numLayer;	// 40 = 0x28
    unsigned long long _numToken;	// 48 = 0x30
    NSString *_embedderId;	// 56 = 0x38
    CDStruct_31a0d69e _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000004d84a
@property(retain, nonatomic) NSString *embedderId; // @synthesize embedderId=_embedderId;
@property(nonatomic) unsigned long long embeddingDim; // @synthesize embeddingDim=_embeddingDim;
@property(nonatomic) unsigned long long numLayer; // @synthesize numLayer=_numLayer;
@property(nonatomic) unsigned long long numToken; // @synthesize numToken=_numToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004d6ed
- (unsigned long long)hash;	// IMP=0x000000000004d64b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004d522
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004d444
- (void)copyTo:(id)arg1;	// IMP=0x000000000004d319
- (void)writeTo:(id)arg1;	// IMP=0x000000000004d239
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004d22c
- (id)dictionaryRepresentation;	// IMP=0x000000000004cc3b
- (id)description;	// IMP=0x000000000004cb8c
@property(readonly, nonatomic) _Bool hasEmbedderId;
@property(nonatomic) _Bool hasEmbeddingDim;
@property(nonatomic) _Bool hasNumLayer;
@property(nonatomic) _Bool hasNumToken;
- (void)setValues:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000004ca84
- (float)valuesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004c9b5
- (void)addValues:(float)arg1;	// IMP=0x000000000004c9a4
- (void)clearValues;	// IMP=0x000000000004c993
@property(readonly, nonatomic) float *values;
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)dealloc;	// IMP=0x000000000004c930

@end

