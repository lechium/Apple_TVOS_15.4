//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTSchemaMTError, NSData;

@interface MTSchemaMTBatchRequestFailed
{
    unsigned int _numParagraphFailures;	// 8 = 0x8
    MTSchemaMTError *_error;	// 16 = 0x10
    struct {
        unsigned int numParagraphFailures:1;
    } _has;	// 24 = 0x18
    _Bool _hasError;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000021ff8b
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(retain, nonatomic) MTSchemaMTError *error; // @synthesize error=_error;
@property(nonatomic) unsigned int numParagraphFailures; // @synthesize numParagraphFailures=_numParagraphFailures;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000021fde0
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000021fd22
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000021fb3a
- (unsigned long long)hash;	// IMP=0x000000000021faee
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021f928
- (void)writeTo:(id)arg1;	// IMP=0x000000000021f87b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021f61f
- (void)deleteError;	// IMP=0x000000000021f60b
- (void)deleteNumParagraphFailures;	// IMP=0x000000000021f5cc
@property(nonatomic) _Bool hasNumParagraphFailures;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032ecb6
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032ec7e

@end

