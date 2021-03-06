//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FLOWSchemaFLOWLanguageConfidence
{
    int _languageCode;	// 8 = 0x8
    unsigned long long _confidenceScore;	// 16 = 0x10
    struct {
        unsigned int languageCode:1;
        unsigned int confidenceScore:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) unsigned long long confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(nonatomic) int languageCode; // @synthesize languageCode=_languageCode;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000014e3aa
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000014e2ec
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000014d619
- (unsigned long long)hash;	// IMP=0x000000000014d5d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014d4e5
- (void)writeTo:(id)arg1;	// IMP=0x000000000014d473
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014d20e
- (void)deleteConfidenceScore;	// IMP=0x000000000014d1e4
@property(nonatomic) _Bool hasConfidenceScore;
- (void)deleteLanguageCode;	// IMP=0x000000000014d170
@property(nonatomic) _Bool hasLanguageCode;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000322a14

@end

