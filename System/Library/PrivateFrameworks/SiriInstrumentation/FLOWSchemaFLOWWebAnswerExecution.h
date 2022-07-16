//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FLOWSchemaFLOWWebAnswerExecution
{
    unsigned int _answerType;	// 8 = 0x8
    unsigned int _allowListType;	// 12 = 0xc
    unsigned int _fuzzyMatchType;	// 16 = 0x10
    unsigned int _subDomain;	// 20 = 0x14
    unsigned int _quality;	// 24 = 0x18
    unsigned int _answerClass;	// 28 = 0x1c
    struct {
        unsigned int answerType:1;
        unsigned int allowListType:1;
        unsigned int fuzzyMatchType:1;
        unsigned int subDomain:1;
        unsigned int quality:1;
        unsigned int answerClass:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) unsigned int answerClass; // @synthesize answerClass=_answerClass;
@property(nonatomic) unsigned int quality; // @synthesize quality=_quality;
@property(nonatomic) unsigned int subDomain; // @synthesize subDomain=_subDomain;
@property(nonatomic) unsigned int fuzzyMatchType; // @synthesize fuzzyMatchType=_fuzzyMatchType;
@property(nonatomic) unsigned int allowListType; // @synthesize allowListType=_allowListType;
@property(nonatomic) unsigned int answerType; // @synthesize answerType=_answerType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001677f3
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000167735
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000167424
- (unsigned long long)hash;	// IMP=0x0000000000167371
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016718d
- (void)writeTo:(id)arg1;	// IMP=0x00000000001670a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000167093
- (void)deleteAnswerClass;	// IMP=0x0000000000167069
@property(nonatomic) _Bool hasAnswerClass;
- (void)deleteQuality;	// IMP=0x0000000000166ff4
@property(nonatomic) _Bool hasQuality;
- (void)deleteSubDomain;	// IMP=0x0000000000166f7f
@property(nonatomic) _Bool hasSubDomain;
- (void)deleteFuzzyMatchType;	// IMP=0x0000000000166f0a
@property(nonatomic) _Bool hasFuzzyMatchType;
- (void)deleteAllowListType;	// IMP=0x0000000000166e95
@property(nonatomic) _Bool hasAllowListType;
- (void)deleteAnswerType;	// IMP=0x0000000000166e22
@property(nonatomic) _Bool hasAnswerType;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032444d

@end

