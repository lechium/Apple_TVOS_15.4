//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, _EARSyncSpeechRecognizer;

@interface CSSyncKeywordAnalyzerQuasar : NSObject
{
    NSMutableArray *_previousUtteranceTokens;	// 8 = 0x8
    NSArray *_lastReportedRecogResults;	// 16 = 0x10
    NSArray *_triggerTokenList;	// 24 = 0x18
    _EARSyncSpeechRecognizer *_syncRecognizer;	// 32 = 0x20
    _Bool _useKeywordSpotting;	// 40 = 0x28
    _Bool _requireReset;	// 41 = 0x29
    _Bool _preventDuplicatedReset;	// 42 = 0x2a
    double _triggerConfidence;	// 48 = 0x30
    unsigned long long _activeChannel;	// 56 = 0x38
    NSDictionary *_ctcKwdToPhraseIdMap;	// 64 = 0x40
}

+ (void)dumpEARSpeechRecognitionResults:(id)arg1;	// IMP=0x0000000000065f79
- (void).cxx_destruct;	// IMP=0x0000000000066728
@property(retain, nonatomic) NSDictionary *ctcKwdToPhraseIdMap; // @synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) double triggerConfidence; // @synthesize triggerConfidence=_triggerConfidence;
- (double)_getConfidence:(id)arg1;	// IMP=0x00000000000664ce
- (void)_calculateTriggerConfidence:(id)arg1;	// IMP=0x00000000000662e2
@property(readonly, nonatomic) NSDictionary *phraseIdScores;
- (void)processAudioChunk:(id)arg1;	// IMP=0x000000000006582e
- (void)flushAudio;	// IMP=0x00000000000656f1
- (void)resetWithLanguage:(id)arg1 withFarField:(unsigned char)arg2 withAudioSource:(id)arg3;	// IMP=0x000000000006556c
- (id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(_Bool)arg3 preventDuplicatedReset:(_Bool)arg4;	// IMP=0x00000000000651fa

@end

