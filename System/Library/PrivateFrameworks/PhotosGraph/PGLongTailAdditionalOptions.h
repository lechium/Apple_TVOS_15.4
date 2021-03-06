//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGLongTailAdditionalOptions : NSObject
{
    unsigned long long _qualityPercentile;	// 8 = 0x8
    unsigned long long _verifiedPersonScoreValue;	// 16 = 0x10
    unsigned long long _topTierAestheticScoreValue;	// 24 = 0x18
}

@property(nonatomic) unsigned long long topTierAestheticScoreValue; // @synthesize topTierAestheticScoreValue=_topTierAestheticScoreValue;
@property(nonatomic) unsigned long long verifiedPersonScoreValue; // @synthesize verifiedPersonScoreValue=_verifiedPersonScoreValue;
@property(nonatomic) unsigned long long qualityPercentile; // @synthesize qualityPercentile=_qualityPercentile;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002d6ef7
- (id)init;	// IMP=0x00000000002d6eb0

@end

