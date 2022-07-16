//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CSKeywordAnalyzerNDAPIResult : NSObject
{
    _Bool _isEarlyWarning;	// 8 = 0x8
    _Bool _isRescoring;	// 9 = 0x9
    float _bestScore;	// 12 = 0xc
    unsigned long long _phraseId;	// 16 = 0x10
    unsigned long long _samplesFed;	// 24 = 0x18
    unsigned long long _bestPhrase;	// 32 = 0x20
    unsigned long long _bestStart;	// 40 = 0x28
    unsigned long long _bestEnd;	// 48 = 0x30
    unsigned long long _samplesAtFire;	// 56 = 0x38
    unsigned long long _startSampleCount;	// 64 = 0x40
}

@property(nonatomic) unsigned long long startSampleCount; // @synthesize startSampleCount=_startSampleCount;
@property(nonatomic) unsigned long long samplesAtFire; // @synthesize samplesAtFire=_samplesAtFire;
@property(nonatomic) _Bool isRescoring; // @synthesize isRescoring=_isRescoring;
@property(nonatomic) _Bool isEarlyWarning; // @synthesize isEarlyWarning=_isEarlyWarning;
@property(nonatomic) float bestScore; // @synthesize bestScore=_bestScore;
@property(nonatomic) unsigned long long bestEnd; // @synthesize bestEnd=_bestEnd;
@property(nonatomic) unsigned long long bestStart; // @synthesize bestStart=_bestStart;
@property(nonatomic) unsigned long long bestPhrase; // @synthesize bestPhrase=_bestPhrase;
@property(nonatomic) unsigned long long samplesFed; // @synthesize samplesFed=_samplesFed;
@property(nonatomic) unsigned long long phraseId; // @synthesize phraseId=_phraseId;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (id)init;	// IMP=0x000000000008ce39

@end
