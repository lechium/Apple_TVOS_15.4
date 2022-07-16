//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface CLPInstSchemaCLPNLv4SampleEvaluationEnded
{
    _Bool _evaluated;	// 8 = 0x8
    _Bool _evaluationResultOnTheFirstUserParse;	// 9 = 0x9
    _Bool _userStatedTaskOnTheFirstUserParse;	// 10 = 0xa
    int _matchedIndex;	// 12 = 0xc
    _Bool _evaluationResult;	// 16 = 0x10
    _Bool _userProfileSandboxRequested;	// 17 = 0x11
    struct {
        unsigned int evaluated:1;
        unsigned int evaluationResultOnTheFirstUserParse:1;
        unsigned int userStatedTaskOnTheFirstUserParse:1;
        unsigned int matchedIndex:1;
        unsigned int evaluationResult:1;
        unsigned int userProfileSandboxRequested:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) _Bool userProfileSandboxRequested; // @synthesize userProfileSandboxRequested=_userProfileSandboxRequested;
@property(nonatomic) _Bool evaluationResult; // @synthesize evaluationResult=_evaluationResult;
@property(nonatomic) int matchedIndex; // @synthesize matchedIndex=_matchedIndex;
@property(nonatomic) _Bool userStatedTaskOnTheFirstUserParse; // @synthesize userStatedTaskOnTheFirstUserParse=_userStatedTaskOnTheFirstUserParse;
@property(nonatomic) _Bool evaluationResultOnTheFirstUserParse; // @synthesize evaluationResultOnTheFirstUserParse=_evaluationResultOnTheFirstUserParse;
@property(nonatomic) _Bool evaluated; // @synthesize evaluated=_evaluated;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000af019
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000aef5b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000aec45
- (unsigned long long)hash;	// IMP=0x00000000000aeb8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ae9a8
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ae8b6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ae8a9
- (void)deleteUserProfileSandboxRequested;	// IMP=0x00000000000ae87f
@property(nonatomic) _Bool hasUserProfileSandboxRequested;
- (void)deleteEvaluationResult;	// IMP=0x00000000000ae80a
@property(nonatomic) _Bool hasEvaluationResult;
- (void)deleteMatchedIndex;	// IMP=0x00000000000ae795
@property(nonatomic) _Bool hasMatchedIndex;
- (void)deleteUserStatedTaskOnTheFirstUserParse;	// IMP=0x00000000000ae720
@property(nonatomic) _Bool hasUserStatedTaskOnTheFirstUserParse;
- (void)deleteEvaluationResultOnTheFirstUserParse;	// IMP=0x00000000000ae6ab
@property(nonatomic) _Bool hasEvaluationResultOnTheFirstUserParse;
- (void)deleteEvaluated;	// IMP=0x00000000000ae638
@property(nonatomic) _Bool hasEvaluated;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003191b8

@end

