//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSURL;

@interface DESDodMLTaskSchedulingPolicy : NSObject
{
    NSDictionary *_recipes;	// 8 = 0x8
    _Bool _originReturnRouteEnabled;	// 16 = 0x10
    _Bool _parsecReturnRouteEnabled;	// 17 = 0x11
    _Bool _dediscoReturnRouteEnabled;	// 18 = 0x12
    unsigned long long _recipeCountLimit;	// 24 = 0x18
    double _timeLimit;	// 32 = 0x20
    double _period;	// 40 = 0x28
    NSURL *_postbackBaseURL;	// 48 = 0x30
    NSURL *_telemetryURL;	// 56 = 0x38
    NSNumber *_telemetrySamplingRate;	// 64 = 0x40
}

+ (void)initialize;	// IMP=0x0000000000024648
- (void).cxx_destruct;	// IMP=0x00000000000257d5
@property(readonly, copy, nonatomic) NSNumber *telemetrySamplingRate; // @synthesize telemetrySamplingRate=_telemetrySamplingRate;
@property(readonly, copy, nonatomic) NSURL *telemetryURL; // @synthesize telemetryURL=_telemetryURL;
@property(readonly, copy, nonatomic) NSURL *postbackBaseURL; // @synthesize postbackBaseURL=_postbackBaseURL;
@property(readonly, nonatomic) _Bool dediscoReturnRouteEnabled; // @synthesize dediscoReturnRouteEnabled=_dediscoReturnRouteEnabled;
@property(readonly, nonatomic) _Bool parsecReturnRouteEnabled; // @synthesize parsecReturnRouteEnabled=_parsecReturnRouteEnabled;
@property(readonly, nonatomic) _Bool originReturnRouteEnabled; // @synthesize originReturnRouteEnabled=_originReturnRouteEnabled;
@property(readonly, nonatomic) double period; // @synthesize period=_period;
@property(readonly, nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
@property(readonly, nonatomic) unsigned long long recipeCountLimit; // @synthesize recipeCountLimit=_recipeCountLimit;
- (id)predicateForRecipeID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002559b
- (id)samplingRateForRecipeID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000025290
- (id)_policyForRecipeID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000250f9
@property(readonly, copy, nonatomic) NSArray *allRecipeIDs;
- (id)initWithPolicyDict:(id)arg1;	// IMP=0x00000000000246aa
- (id)init;	// IMP=0x0000000000024696

@end

