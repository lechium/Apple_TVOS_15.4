//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CSNovDetectorResult : NSObject
{
    _Bool _earlyWarning;	// 8 = 0x8
    _Bool _isRescoring;	// 9 = 0x9
    float _bestScore;	// 12 = 0xc
    unsigned long long _sampleFed;	// 16 = 0x10
    unsigned long long _bestPhrase;	// 24 = 0x18
    unsigned long long _bestStart;	// 32 = 0x20
    unsigned long long _bestEnd;	// 40 = 0x28
}

@property(nonatomic) _Bool isRescoring; // @synthesize isRescoring=_isRescoring;
@property(nonatomic) _Bool earlyWarning; // @synthesize earlyWarning=_earlyWarning;
@property(nonatomic) float bestScore; // @synthesize bestScore=_bestScore;
@property(nonatomic) unsigned long long bestEnd; // @synthesize bestEnd=_bestEnd;
@property(nonatomic) unsigned long long bestStart; // @synthesize bestStart=_bestStart;
@property(nonatomic) unsigned long long bestPhrase; // @synthesize bestPhrase=_bestPhrase;
@property(nonatomic) unsigned long long sampleFed; // @synthesize sampleFed=_sampleFed;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (id)initWithResult:(id)arg1;	// IMP=0x001000000006bb17

@end
