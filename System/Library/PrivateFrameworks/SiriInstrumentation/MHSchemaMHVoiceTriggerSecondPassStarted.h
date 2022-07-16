//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface MHSchemaMHVoiceTriggerSecondPassStarted
{
    unsigned int _firstPassDetectedChannel;	// 8 = 0x8
    float _firstPassScore;	// 12 = 0xc
    unsigned int _firstPassOnsetChannel;	// 16 = 0x10
    float _firstPassOnsetScore;	// 20 = 0x14
    NSArray *_channelSelectionScores;	// 24 = 0x18
    unsigned long long _firstPassChannelSelectionDelayNs;	// 32 = 0x20
    float _firstPassMasterChannelScoreBoost;	// 40 = 0x28
    unsigned long long _firstPassStartSampleCount;	// 48 = 0x30
    unsigned long long _firstPassEndSampleCount;	// 56 = 0x38
    unsigned long long _firstPassFireSampleCount;	// 64 = 0x40
    int _firstPassTriggerSource;	// 72 = 0x48
    unsigned long long _earlyDetectFiredTimeOffsetInNs;	// 80 = 0x50
    float _earlyDetectFiredTime;	// 88 = 0x58
    float _firstPassPrimaryChannelScoreBoost;	// 92 = 0x5c
    unsigned long long _firstPassInfoDispatchTimeInNs;	// 96 = 0x60
    unsigned long long _firstPassInfoReceptionTimeInNs;	// 104 = 0x68
    struct {
        unsigned int firstPassDetectedChannel:1;
        unsigned int firstPassScore:1;
        unsigned int firstPassOnsetChannel:1;
        unsigned int firstPassOnsetScore:1;
        unsigned int firstPassChannelSelectionDelayNs:1;
        unsigned int firstPassMasterChannelScoreBoost:1;
        unsigned int firstPassStartSampleCount:1;
        unsigned int firstPassEndSampleCount:1;
        unsigned int firstPassFireSampleCount:1;
        unsigned int firstPassTriggerSource:1;
        unsigned int earlyDetectFiredTimeOffsetInNs:1;
        unsigned int earlyDetectFiredTime:1;
        unsigned int firstPassPrimaryChannelScoreBoost:1;
        unsigned int firstPassInfoDispatchTimeInNs:1;
        unsigned int firstPassInfoReceptionTimeInNs:1;
    } _has;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000021bb3c
@property(nonatomic) unsigned long long firstPassInfoReceptionTimeInNs; // @synthesize firstPassInfoReceptionTimeInNs=_firstPassInfoReceptionTimeInNs;
@property(nonatomic) unsigned long long firstPassInfoDispatchTimeInNs; // @synthesize firstPassInfoDispatchTimeInNs=_firstPassInfoDispatchTimeInNs;
@property(nonatomic) float firstPassPrimaryChannelScoreBoost; // @synthesize firstPassPrimaryChannelScoreBoost=_firstPassPrimaryChannelScoreBoost;
@property(nonatomic) float earlyDetectFiredTime; // @synthesize earlyDetectFiredTime=_earlyDetectFiredTime;
@property(nonatomic) unsigned long long earlyDetectFiredTimeOffsetInNs; // @synthesize earlyDetectFiredTimeOffsetInNs=_earlyDetectFiredTimeOffsetInNs;
@property(nonatomic) int firstPassTriggerSource; // @synthesize firstPassTriggerSource=_firstPassTriggerSource;
@property(nonatomic) unsigned long long firstPassFireSampleCount; // @synthesize firstPassFireSampleCount=_firstPassFireSampleCount;
@property(nonatomic) unsigned long long firstPassEndSampleCount; // @synthesize firstPassEndSampleCount=_firstPassEndSampleCount;
@property(nonatomic) unsigned long long firstPassStartSampleCount; // @synthesize firstPassStartSampleCount=_firstPassStartSampleCount;
@property(nonatomic) float firstPassMasterChannelScoreBoost; // @synthesize firstPassMasterChannelScoreBoost=_firstPassMasterChannelScoreBoost;
@property(nonatomic) unsigned long long firstPassChannelSelectionDelayNs; // @synthesize firstPassChannelSelectionDelayNs=_firstPassChannelSelectionDelayNs;
@property(copy, nonatomic) NSArray *channelSelectionScores; // @synthesize channelSelectionScores=_channelSelectionScores;
@property(nonatomic) float firstPassOnsetScore; // @synthesize firstPassOnsetScore=_firstPassOnsetScore;
@property(nonatomic) unsigned int firstPassOnsetChannel; // @synthesize firstPassOnsetChannel=_firstPassOnsetChannel;
@property(nonatomic) float firstPassScore; // @synthesize firstPassScore=_firstPassScore;
@property(nonatomic) unsigned int firstPassDetectedChannel; // @synthesize firstPassDetectedChannel=_firstPassDetectedChannel;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000021b152
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000021b094
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000021a77f
- (unsigned long long)hash;	// IMP=0x000000000021a0d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000219aaf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000219760
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000219753
- (void)deleteFirstPassInfoReceptionTimeInNs;	// IMP=0x0000000000219728
@property(nonatomic) _Bool hasFirstPassInfoReceptionTimeInNs;
- (void)deleteFirstPassInfoDispatchTimeInNs;	// IMP=0x00000000002196ac
@property(nonatomic) _Bool hasFirstPassInfoDispatchTimeInNs;
- (void)deleteFirstPassPrimaryChannelScoreBoost;	// IMP=0x000000000021962f
@property(nonatomic) _Bool hasFirstPassPrimaryChannelScoreBoost;
- (void)deleteEarlyDetectFiredTime;	// IMP=0x00000000002195b1
@property(nonatomic) _Bool hasEarlyDetectFiredTime;
- (void)deleteEarlyDetectFiredTimeOffsetInNs;	// IMP=0x0000000000219534
@property(nonatomic) _Bool hasEarlyDetectFiredTimeOffsetInNs;
- (void)deleteFirstPassTriggerSource;	// IMP=0x00000000002194b8
@property(nonatomic) _Bool hasFirstPassTriggerSource;
- (void)deleteFirstPassFireSampleCount;	// IMP=0x000000000021943e
@property(nonatomic) _Bool hasFirstPassFireSampleCount;
- (void)deleteFirstPassEndSampleCount;	// IMP=0x00000000002193c6
@property(nonatomic) _Bool hasFirstPassEndSampleCount;
- (void)deleteFirstPassStartSampleCount;	// IMP=0x000000000021934f
@property(nonatomic) _Bool hasFirstPassStartSampleCount;
- (void)deleteFirstPassMasterChannelScoreBoost;	// IMP=0x00000000002192d7
@property(nonatomic) _Bool hasFirstPassMasterChannelScoreBoost;
- (void)deleteFirstPassChannelSelectionDelayNs;	// IMP=0x000000000021925f
@property(nonatomic) _Bool hasFirstPassChannelSelectionDelayNs;
- (id)channelSelectionScoresAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002191f5
- (unsigned long long)channelSelectionScoresCount;	// IMP=0x00000000002191d8
- (void)addChannelSelectionScores:(id)arg1;	// IMP=0x000000000021915e
- (void)deleteChannelSelectionScores;	// IMP=0x000000000021914c
- (void)clearChannelSelectionScores;	// IMP=0x000000000021912f
- (void)deleteFirstPassOnsetScore;	// IMP=0x0000000000219104
@property(nonatomic) _Bool hasFirstPassOnsetScore;
- (void)deleteFirstPassOnsetChannel;	// IMP=0x000000000021908e
@property(nonatomic) _Bool hasFirstPassOnsetChannel;
- (void)deleteFirstPassScore;	// IMP=0x0000000000219019
@property(nonatomic) _Bool hasFirstPassScore;
- (void)deleteFirstPassDetectedChannel;	// IMP=0x0000000000218fa4
@property(nonatomic) _Bool hasFirstPassDetectedChannel;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032e6c7
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032e68f

@end

