//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, POMMESSchemaPOMMESPegasusResponseClientDrivenContext, POMMESSchemaPOMMESPegasusResponseServerDrivenContext;

@interface POMMESSchemaPOMMESPegasusRequestEnded
{
    int _status;	// 8 = 0x8
    double _confidenceScore;	// 16 = 0x10
    double _payloadSizeInKB;	// 24 = 0x18
    POMMESSchemaPOMMESPegasusResponseServerDrivenContext *_serverDriven;	// 32 = 0x20
    POMMESSchemaPOMMESPegasusResponseClientDrivenContext *_clientDriven;	// 40 = 0x28
    NSString *_pegasusDomain;	// 48 = 0x30
    _Bool _isRewrittenUtteranceUsed;	// 56 = 0x38
    struct {
        unsigned int status:1;
        unsigned int confidenceScore:1;
        unsigned int payloadSizeInKB:1;
        unsigned int isRewrittenUtteranceUsed:1;
    } _has;	// 60 = 0x3c
    _Bool _hasServerDriven;	// 64 = 0x40
    _Bool _hasClientDriven;	// 65 = 0x41
    _Bool _hasPegasusDomain;	// 66 = 0x42
    unsigned long long _whichContextevent;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002ac6b5
@property(nonatomic) _Bool hasPegasusDomain; // @synthesize hasPegasusDomain=_hasPegasusDomain;
@property(nonatomic) _Bool hasClientDriven; // @synthesize hasClientDriven=_hasClientDriven;
@property(nonatomic) _Bool hasServerDriven; // @synthesize hasServerDriven=_hasServerDriven;
@property(nonatomic) _Bool isRewrittenUtteranceUsed; // @synthesize isRewrittenUtteranceUsed=_isRewrittenUtteranceUsed;
@property(copy, nonatomic) NSString *pegasusDomain; // @synthesize pegasusDomain=_pegasusDomain;
@property(nonatomic) double payloadSizeInKB; // @synthesize payloadSizeInKB=_payloadSizeInKB;
@property(nonatomic) double confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002ac22d
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002ac16f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002abd4b
- (unsigned long long)hash;	// IMP=0x00000000002aba75
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ab55d
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ab3a5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ab03f
- (void)deleteIsRewrittenUtteranceUsed;	// IMP=0x00000000002ab015
@property(nonatomic) _Bool hasIsRewrittenUtteranceUsed;
- (void)deletePegasusDomain;	// IMP=0x00000000002aafb6
- (void)deleteClientDriven;	// IMP=0x00000000002aaf6e
@property(retain, nonatomic) POMMESSchemaPOMMESPegasusResponseClientDrivenContext *clientDriven; // @synthesize clientDriven=_clientDriven;
- (void)deleteServerDriven;	// IMP=0x00000000002aaea0
@property(retain, nonatomic) POMMESSchemaPOMMESPegasusResponseServerDrivenContext *serverDriven; // @synthesize serverDriven=_serverDriven;
- (void)deletePayloadSizeInKB;	// IMP=0x00000000002aaddb
@property(nonatomic) _Bool hasPayloadSizeInKB;
- (void)deleteConfidenceScore;	// IMP=0x00000000002aad63
@property(nonatomic) _Bool hasConfidenceScore;
- (void)deleteStatus;	// IMP=0x00000000002aacee
@property(nonatomic) _Bool hasStatus;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000337cfb
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000337cc3

@end

