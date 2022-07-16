//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSString, SIRINLUEXTERNALUsoGraph, SIRINLUINTERNALInternalSpanData;

@interface SIRINLUINTERNALMatchingSpan : PBCodable <NSCopying>
{
    CDStruct_95bda58d _matcherNames;	// 8 = 0x8
    unsigned int _endTokenIndex;	// 32 = 0x20
    NSString *_input;	// 40 = 0x28
    SIRINLUINTERNALInternalSpanData *_internalSpanData;	// 48 = 0x30
    NSString *_label;	// 56 = 0x38
    NSString *_semanticValue;	// 64 = 0x40
    unsigned int _startTokenIndex;	// 72 = 0x48
    SIRINLUEXTERNALUsoGraph *_usoGraph;	// 80 = 0x50
    struct {
        unsigned int endTokenIndex:1;
        unsigned int startTokenIndex:1;
    } _has;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000a16d9
@property(retain, nonatomic) NSString *semanticValue; // @synthesize semanticValue=_semanticValue;
@property(retain, nonatomic) SIRINLUINTERNALInternalSpanData *internalSpanData; // @synthesize internalSpanData=_internalSpanData;
@property(retain, nonatomic) SIRINLUEXTERNALUsoGraph *usoGraph; // @synthesize usoGraph=_usoGraph;
@property(nonatomic) unsigned int endTokenIndex; // @synthesize endTokenIndex=_endTokenIndex;
@property(nonatomic) unsigned int startTokenIndex; // @synthesize startTokenIndex=_startTokenIndex;
@property(retain, nonatomic) NSString *input; // @synthesize input=_input;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a145d
- (unsigned long long)hash;	// IMP=0x00000000000a134f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a116c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a0ff8
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a0e5f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a0d2d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a0d20
- (id)dictionaryRepresentation;	// IMP=0x00000000000a0474
- (id)description;	// IMP=0x00000000000a03c5
@property(readonly, nonatomic) _Bool hasSemanticValue;
@property(readonly, nonatomic) _Bool hasInternalSpanData;
- (int)StringAsMatcherNames:(id)arg1;	// IMP=0x00000000000a0248
- (id)matcherNamesAsString:(int)arg1;	// IMP=0x00000000000a0188
- (void)setMatcherNames:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000a0171
- (int)matcherNamesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a00a4
- (void)addMatcherNames:(int)arg1;	// IMP=0x00000000000a0091
- (void)clearMatcherNames;	// IMP=0x00000000000a0080
@property(readonly, nonatomic) int *matcherNames;
@property(readonly, nonatomic) unsigned long long matcherNamesCount;
@property(readonly, nonatomic) _Bool hasUsoGraph;
@property(nonatomic) _Bool hasEndTokenIndex;
@property(nonatomic) _Bool hasStartTokenIndex;
@property(readonly, nonatomic) _Bool hasInput;
@property(readonly, nonatomic) _Bool hasLabel;
- (void)dealloc;	// IMP=0x000000000009ff50

@end
