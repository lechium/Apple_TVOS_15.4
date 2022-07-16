//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUINTERNALMentionDetectorSpanData, SIRINLUINTERNALMentionResolverSpanData, SIRINLUINTERNALOvertonKGSpanData, SIRINLUINTERNALPLUMSpanData, SIRINLUINTERNALSiriVocabularySpanData;

@interface SIRINLUINTERNALInternalSpanData : PBCodable <NSCopying>
{
    SIRINLUINTERNALMentionDetectorSpanData *_mentionDetectorSpanData;	// 8 = 0x8
    SIRINLUINTERNALMentionResolverSpanData *_mentionResolverSpanData;	// 16 = 0x10
    SIRINLUINTERNALOvertonKGSpanData *_overtonKgSpanData;	// 24 = 0x18
    SIRINLUINTERNALPLUMSpanData *_plumSpanData;	// 32 = 0x20
    SIRINLUINTERNALSiriVocabularySpanData *_siriVocabularySpanData;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000008e236
@property(retain, nonatomic) SIRINLUINTERNALMentionResolverSpanData *mentionResolverSpanData; // @synthesize mentionResolverSpanData=_mentionResolverSpanData;
@property(retain, nonatomic) SIRINLUINTERNALMentionDetectorSpanData *mentionDetectorSpanData; // @synthesize mentionDetectorSpanData=_mentionDetectorSpanData;
@property(retain, nonatomic) SIRINLUINTERNALOvertonKGSpanData *overtonKgSpanData; // @synthesize overtonKgSpanData=_overtonKgSpanData;
@property(retain, nonatomic) SIRINLUINTERNALPLUMSpanData *plumSpanData; // @synthesize plumSpanData=_plumSpanData;
@property(retain, nonatomic) SIRINLUINTERNALSiriVocabularySpanData *siriVocabularySpanData; // @synthesize siriVocabularySpanData=_siriVocabularySpanData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008e047
- (unsigned long long)hash;	// IMP=0x000000000008dfa4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008de44
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008dd2c
- (void)copyTo:(id)arg1;	// IMP=0x000000000008dc69
- (void)writeTo:(id)arg1;	// IMP=0x000000000008dbb5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008dba8
- (id)dictionaryRepresentation;	// IMP=0x000000000008d6f4
- (id)description;	// IMP=0x000000000008d645
@property(readonly, nonatomic) _Bool hasMentionResolverSpanData;
@property(readonly, nonatomic) _Bool hasMentionDetectorSpanData;
@property(readonly, nonatomic) _Bool hasOvertonKgSpanData;
@property(readonly, nonatomic) _Bool hasPlumSpanData;
@property(readonly, nonatomic) _Bool hasSiriVocabularySpanData;

@end

