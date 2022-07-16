//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MSVABTestGenerator : NSObject
{
    float _probabilityForOutcomeA;	// 8 = 0x8
    long long _totalExperiments;	// 16 = 0x10
    long long _totalForOutcomeA;	// 24 = 0x18
    long long _totalForOutcomeB;	// 32 = 0x20
}

@property(readonly, nonatomic) long long totalForOutcomeB; // @synthesize totalForOutcomeB=_totalForOutcomeB;
@property(readonly, nonatomic) long long totalForOutcomeA; // @synthesize totalForOutcomeA=_totalForOutcomeA;
@property(readonly, nonatomic) long long totalExperiments; // @synthesize totalExperiments=_totalExperiments;
@property(readonly, nonatomic) float probabilityForOutcomeA; // @synthesize probabilityForOutcomeA=_probabilityForOutcomeA;
- (id)description;	// IMP=0x000000000000de79
- (long long)nextOutcome;	// IMP=0x000000000000de31
- (void)updateProbabilityForOutcomeA:(float)arg1;	// IMP=0x000000000000de17
- (id)initWithProbabilityForOutcomeA:(float)arg1;	// IMP=0x000000000000ddcd

@end

