//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface FLOWSchemaFLOWWebAnswerExecutionTier1
{
    NSString *_answerId;	// 8 = 0x8
    _Bool _hasAnswerId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001680b6
@property(nonatomic) _Bool hasAnswerId; // @synthesize hasAnswerId=_hasAnswerId;
@property(copy, nonatomic) NSString *answerId; // @synthesize answerId=_answerId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000167f9a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000167edc
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000167da0
- (unsigned long long)hash;	// IMP=0x0000000000167d83
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000167c01
- (void)writeTo:(id)arg1;	// IMP=0x0000000000167b94
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000167b87
- (void)deleteAnswerId;	// IMP=0x0000000000167b73
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003244bd
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000324485

@end

