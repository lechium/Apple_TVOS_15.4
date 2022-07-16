//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CSServerEndpointFeatures : NSObject
{
    long long _wordCount;	// 8 = 0x8
    long long _trailingSilenceDuration;	// 16 = 0x10
    double _eosLikelihood;	// 24 = 0x18
    NSArray *_pauseCounts;	// 32 = 0x20
    double _silencePosterior;	// 40 = 0x28
    long long _processedAudioDurationInMilliseconds;	// 48 = 0x30
    NSString *_taskName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000009b03
@property(copy, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
@property(nonatomic) long long processedAudioDurationInMilliseconds; // @synthesize processedAudioDurationInMilliseconds=_processedAudioDurationInMilliseconds;
@property(nonatomic) double silencePosterior; // @synthesize silencePosterior=_silencePosterior;
@property(copy, nonatomic) NSArray *pauseCounts; // @synthesize pauseCounts=_pauseCounts;
@property(nonatomic) double eosLikelihood; // @synthesize eosLikelihood=_eosLikelihood;
@property(nonatomic) long long trailingSilenceDuration; // @synthesize trailingSilenceDuration=_trailingSilenceDuration;
@property(nonatomic) long long wordCount; // @synthesize wordCount=_wordCount;
- (id)dictionary;	// IMP=0x001000000000988f
- (id)description;	// IMP=0x00100000000097de
- (id)initWithWordCount:(long long)arg1 trailingSilenceFrames:(long long)arg2 endOfSilenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6;	// IMP=0x00100000000097bb
- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7;	// IMP=0x00100000000096e7

@end

