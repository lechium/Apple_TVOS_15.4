//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _EAREndpointFeatures : NSObject
{
    float _silencePosteriorNF;	// 8 = 0x8
    float _serverFeaturesLatency;	// 12 = 0xc
    long long _wordCount;	// 16 = 0x10
    long long _trailingSilenceDuration;	// 24 = 0x18
    double _endOfSentenceLikelihood;	// 32 = 0x20
    NSArray *_pauseCounts;	// 40 = 0x28
    double _silencePosterior;	// 48 = 0x30
    double _clientSilenceFramesCountMs;	// 56 = 0x38
    double _clientSilenceProbability;	// 64 = 0x40
    long long _eagerResultEndTime;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000075548
@property(nonatomic) long long eagerResultEndTime; // @synthesize eagerResultEndTime=_eagerResultEndTime;
@property(nonatomic) float serverFeaturesLatency; // @synthesize serverFeaturesLatency=_serverFeaturesLatency;
@property(nonatomic) float silencePosteriorNF; // @synthesize silencePosteriorNF=_silencePosteriorNF;
@property(nonatomic) double clientSilenceProbability; // @synthesize clientSilenceProbability=_clientSilenceProbability;
@property(nonatomic) double clientSilenceFramesCountMs; // @synthesize clientSilenceFramesCountMs=_clientSilenceFramesCountMs;
@property(nonatomic) double silencePosterior; // @synthesize silencePosterior=_silencePosterior;
@property(copy, nonatomic) NSArray *pauseCounts; // @synthesize pauseCounts=_pauseCounts;
@property(nonatomic) double endOfSentenceLikelihood; // @synthesize endOfSentenceLikelihood=_endOfSentenceLikelihood;
@property(nonatomic) long long trailingSilenceDuration; // @synthesize trailingSilenceDuration=_trailingSilenceDuration;
@property(nonatomic) long long wordCount; // @synthesize wordCount=_wordCount;
- (id)description;	// IMP=0x0000000000075395
- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 clientSilenceFramesCountMs:(double)arg6 clientSilenceProbability:(double)arg7 silencePosteriorNF:(float)arg8 serverFeaturesLatency:(float)arg9 eagerResultEndTime:(long long)arg10;	// IMP=0x000000000007529a
- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 clientSilenceFramesCountMs:(double)arg6 clientSilenceProbability:(double)arg7 silencePosteriorNF:(float)arg8 serverFeaturesLatency:(float)arg9;	// IMP=0x0000000000075284

@end

