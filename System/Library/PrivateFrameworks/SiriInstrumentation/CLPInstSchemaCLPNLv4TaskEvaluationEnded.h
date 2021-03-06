//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface CLPInstSchemaCLPNLv4TaskEvaluationEnded
{
    double _accuracyOnTheFirstUserParseCount;	// 8 = 0x8
    double _accuracyOnAnyUserParse;	// 16 = 0x10
    unsigned int _evaluationCount;	// 24 = 0x18
    struct {
        unsigned int accuracyOnTheFirstUserParseCount:1;
        unsigned int accuracyOnAnyUserParse:1;
        unsigned int evaluationCount:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) unsigned int evaluationCount; // @synthesize evaluationCount=_evaluationCount;
@property(nonatomic) double accuracyOnAnyUserParse; // @synthesize accuracyOnAnyUserParse=_accuracyOnAnyUserParse;
@property(nonatomic) double accuracyOnTheFirstUserParseCount; // @synthesize accuracyOnTheFirstUserParseCount=_accuracyOnTheFirstUserParseCount;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000b2087
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000b1fc9
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000b1dda
- (unsigned long long)hash;	// IMP=0x00000000000b1b97
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b1a4e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b19ba
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b19ad
- (void)deleteEvaluationCount;	// IMP=0x00000000000b1983
@property(nonatomic) _Bool hasEvaluationCount;
- (void)deleteAccuracyOnAnyUserParse;	// IMP=0x00000000000b190d
@property(nonatomic) _Bool hasAccuracyOnAnyUserParse;
- (void)deleteAccuracyOnTheFirstUserParseCount;	// IMP=0x00000000000b1897
@property(nonatomic) _Bool hasAccuracyOnTheFirstUserParseCount;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003194d4

@end

