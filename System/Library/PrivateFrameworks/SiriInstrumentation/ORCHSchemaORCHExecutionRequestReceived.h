//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface ORCHSchemaORCHExecutionRequestReceived
{
    int _preExecutionDecision;	// 8 = 0x8
    _Bool _executionForRSKE;	// 12 = 0xc
    int _commandSource;	// 16 = 0x10
    struct {
        unsigned int preExecutionDecision:1;
        unsigned int executionForRSKE:1;
        unsigned int commandSource:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) int commandSource; // @synthesize commandSource=_commandSource;
@property(nonatomic) _Bool executionForRSKE; // @synthesize executionForRSKE=_executionForRSKE;
@property(nonatomic) int preExecutionDecision; // @synthesize preExecutionDecision=_preExecutionDecision;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002753f6
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000275338
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002750c9
- (unsigned long long)hash;	// IMP=0x0000000000275066
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000274f4a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000274eb9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000274eac
- (void)deleteCommandSource;	// IMP=0x0000000000274e82
@property(nonatomic) _Bool hasCommandSource;
- (void)deleteExecutionForRSKE;	// IMP=0x0000000000274e0d
@property(nonatomic) _Bool hasExecutionForRSKE;
- (void)deletePreExecutionDecision;	// IMP=0x0000000000274d9a
@property(nonatomic) _Bool hasPreExecutionDecision;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000333daa

@end

