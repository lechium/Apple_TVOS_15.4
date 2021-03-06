//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, TTSSchemaTTSVoiceContext;

@interface TTSSchemaTTSSpeechStarted
{
    int _audioOutputRoute;	// 8 = 0x8
    float _customerPerceivedLatencyInSecond;	// 12 = 0xc
    int _synthesisSource;	// 16 = 0x10
    TTSSchemaTTSVoiceContext *_voiceContext;	// 24 = 0x18
    int _synthesisEffect;	// 32 = 0x20
    struct {
        unsigned int audioOutputRoute:1;
        unsigned int customerPerceivedLatencyInSecond:1;
        unsigned int synthesisSource:1;
        unsigned int synthesisEffect:1;
    } _has;	// 36 = 0x24
    _Bool _hasVoiceContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002d580e
@property(nonatomic) _Bool hasVoiceContext; // @synthesize hasVoiceContext=_hasVoiceContext;
@property(nonatomic) int synthesisEffect; // @synthesize synthesisEffect=_synthesisEffect;
@property(retain, nonatomic) TTSSchemaTTSVoiceContext *voiceContext; // @synthesize voiceContext=_voiceContext;
@property(nonatomic) int synthesisSource; // @synthesize synthesisSource=_synthesisSource;
@property(nonatomic) float customerPerceivedLatencyInSecond; // @synthesize customerPerceivedLatencyInSecond=_customerPerceivedLatencyInSecond;
@property(nonatomic) int audioOutputRoute; // @synthesize audioOutputRoute=_audioOutputRoute;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002d54f2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002d5434
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002d509d
- (unsigned long long)hash;	// IMP=0x00000000002d4eec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d4c42
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d4b2a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d4b1d
- (void)deleteSynthesisEffect;	// IMP=0x00000000002d4af3
@property(nonatomic) _Bool hasSynthesisEffect;
- (void)deleteVoiceContext;	// IMP=0x00000000002d4a94
- (void)deleteSynthesisSource;	// IMP=0x00000000002d4a55
@property(nonatomic) _Bool hasSynthesisSource;
- (void)deleteCustomerPerceivedLatencyInSecond;	// IMP=0x00000000002d49df
@property(nonatomic) _Bool hasCustomerPerceivedLatencyInSecond;
- (void)deleteAudioOutputRoute;	// IMP=0x00000000002d496a
@property(nonatomic) _Bool hasAudioOutputRoute;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033ab21
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033aae9

@end

