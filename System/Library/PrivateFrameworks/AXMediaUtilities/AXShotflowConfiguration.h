//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface AXShotflowConfiguration : NSObject
{
    NSArray *_filterThresholds;	// 8 = 0x8
    NSNumber *_networkThreshold;	// 16 = 0x10
    NSNumber *_nmsThreshold;	// 24 = 0x18
    NSArray *_defaultBoxesSidesNormalized;	// 32 = 0x20
    NSArray *_ratios;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000781bb
@property(readonly, nonatomic) NSArray *ratios; // @synthesize ratios=_ratios;
@property(readonly, nonatomic) NSArray *defaultBoxesSidesNormalized; // @synthesize defaultBoxesSidesNormalized=_defaultBoxesSidesNormalized;
@property(readonly, nonatomic) NSNumber *nmsThreshold; // @synthesize nmsThreshold=_nmsThreshold;
@property(readonly, nonatomic) NSNumber *networkThreshold; // @synthesize networkThreshold=_networkThreshold;
@property(readonly, nonatomic) NSArray *filterThresholds; // @synthesize filterThresholds=_filterThresholds;
- (id)description;	// IMP=0x0000000000078147
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000077ce7

@end

