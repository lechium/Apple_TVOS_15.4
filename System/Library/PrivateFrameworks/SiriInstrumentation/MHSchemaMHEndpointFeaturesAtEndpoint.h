//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHEndpointFeaturesAtEndpoint
{
    unsigned long long _trailingSilenceDurationInNs;	// 8 = 0x8
    unsigned long long _clientSilenceFramesCountInNs;	// 16 = 0x10
    float _endOfSentenceLikelihood;	// 24 = 0x18
    unsigned int _wordCount;	// 28 = 0x1c
    unsigned long long _serverFeaturesLatencyInNs;	// 32 = 0x20
    float _clientSilenceProbability;	// 40 = 0x28
    struct {
        unsigned int trailingSilenceDurationInNs:1;
        unsigned int clientSilenceFramesCountInNs:1;
        unsigned int endOfSentenceLikelihood:1;
        unsigned int wordCount:1;
        unsigned int serverFeaturesLatencyInNs:1;
        unsigned int clientSilenceProbability:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) float clientSilenceProbability; // @synthesize clientSilenceProbability=_clientSilenceProbability;
@property(nonatomic) unsigned long long serverFeaturesLatencyInNs; // @synthesize serverFeaturesLatencyInNs=_serverFeaturesLatencyInNs;
@property(nonatomic) unsigned int wordCount; // @synthesize wordCount=_wordCount;
@property(nonatomic) float endOfSentenceLikelihood; // @synthesize endOfSentenceLikelihood=_endOfSentenceLikelihood;
@property(nonatomic) unsigned long long clientSilenceFramesCountInNs; // @synthesize clientSilenceFramesCountInNs=_clientSilenceFramesCountInNs;
@property(nonatomic) unsigned long long trailingSilenceDurationInNs; // @synthesize trailingSilenceDurationInNs=_trailingSilenceDurationInNs;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001f7ea4
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001f7de6
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001f7ad6
- (unsigned long long)hash;	// IMP=0x00000000001f782f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f7615
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f7521
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f7514
- (void)deleteClientSilenceProbability;	// IMP=0x00000000001f74e9
@property(nonatomic) _Bool hasClientSilenceProbability;
- (void)deleteServerFeaturesLatencyInNs;	// IMP=0x00000000001f7472
@property(nonatomic) _Bool hasServerFeaturesLatencyInNs;
- (void)deleteWordCount;	// IMP=0x00000000001f73fc
@property(nonatomic) _Bool hasWordCount;
- (void)deleteEndOfSentenceLikelihood;	// IMP=0x00000000001f7386
@property(nonatomic) _Bool hasEndOfSentenceLikelihood;
- (void)deleteClientSilenceFramesCountInNs;	// IMP=0x00000000001f730f
@property(nonatomic) _Bool hasClientSilenceFramesCountInNs;
- (void)deleteTrailingSilenceDurationInNs;	// IMP=0x00000000001f729b
@property(nonatomic) _Bool hasTrailingSilenceDurationInNs;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032d19f

@end

