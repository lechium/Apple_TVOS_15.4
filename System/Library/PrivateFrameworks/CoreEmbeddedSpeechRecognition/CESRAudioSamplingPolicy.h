//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CESRSamplingDimension, NSNumber;

@interface CESRAudioSamplingPolicy : NSObject
{
    CESRSamplingDimension *_ruleDimension;	// 8 = 0x8
    NSNumber *_samplingRate;	// 16 = 0x10
    long long _numDimension;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000284d0
@property(readonly, nonatomic) long long numDimension; // @synthesize numDimension=_numDimension;
@property(readonly, copy, nonatomic) NSNumber *samplingRate; // @synthesize samplingRate=_samplingRate;
@property(readonly, copy, nonatomic) CESRSamplingDimension *ruleDimension; // @synthesize ruleDimension=_ruleDimension;
- (id)description;	// IMP=0x0000000000028380
- (_Bool)isMatchedSamplingDimension:(id)arg1;	// IMP=0x0000000000028310
- (id)initWithRuleDimension:(id)arg1 samplingRate:(id)arg2 numDimension:(long long)arg3;	// IMP=0x0000000000028200

@end
