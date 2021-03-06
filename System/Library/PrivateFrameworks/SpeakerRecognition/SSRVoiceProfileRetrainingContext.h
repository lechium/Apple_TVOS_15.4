//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, NSArray, NSDictionary, NSString, NSURL, SSRLoggingAggregator, SSRVoiceProfile;

@interface SSRVoiceProfileRetrainingContext : NSObject
{
    _Bool _filterToVoiceTriggerUtterances;	// 8 = 0x8
    _Bool _forceRetrain;	// 9 = 0x9
    float _combinationWeight;	// 12 = 0xc
    NSString *_sessionId;	// 16 = 0x10
    NSArray *_compareVoiceProfileArray;	// 24 = 0x18
    SSRVoiceProfile *_voiceProfile;	// 32 = 0x20
    unsigned long long _spIdType;	// 40 = 0x28
    NSURL *_resourceFilePath;	// 48 = 0x30
    NSString *_configVersion;	// 56 = 0x38
    unsigned long long _maxAllowedSpeakerVectors;	// 64 = 0x40
    NSDictionary *_modelsContext;	// 72 = 0x48
    CSAsset *_asset;	// 80 = 0x50
    SSRLoggingAggregator *_logAggregator;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000022b1a
@property(retain, nonatomic) SSRLoggingAggregator *logAggregator; // @synthesize logAggregator=_logAggregator;
@property(retain, nonatomic) CSAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) float combinationWeight; // @synthesize combinationWeight=_combinationWeight;
@property(readonly, nonatomic) NSDictionary *modelsContext; // @synthesize modelsContext=_modelsContext;
@property(readonly, nonatomic) unsigned long long maxAllowedSpeakerVectors; // @synthesize maxAllowedSpeakerVectors=_maxAllowedSpeakerVectors;
@property(readonly, nonatomic) _Bool forceRetrain; // @synthesize forceRetrain=_forceRetrain;
@property(readonly, nonatomic) _Bool filterToVoiceTriggerUtterances; // @synthesize filterToVoiceTriggerUtterances=_filterToVoiceTriggerUtterances;
@property(readonly, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(readonly, nonatomic) NSURL *resourceFilePath; // @synthesize resourceFilePath=_resourceFilePath;
@property(readonly, nonatomic) unsigned long long spIdType; // @synthesize spIdType=_spIdType;
@property(retain, nonatomic) SSRVoiceProfile *voiceProfile; // @synthesize voiceProfile=_voiceProfile;
@property(retain, nonatomic) NSArray *compareVoiceProfileArray; // @synthesize compareVoiceProfileArray=_compareVoiceProfileArray;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)description;	// IMP=0x00000000000229cf
- (id)initWithVoiceRetrainingContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002144e

@end

