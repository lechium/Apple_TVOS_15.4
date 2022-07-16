//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSMapTable, NSString;

@interface RECoreBehaviorPredictor <REPredictorObserver>
{
    NSMapTable *_locations;	// 8 = 0x8
    unsigned long long _dayValue;	// 16 = 0x10
    unsigned long long _hourValue;	// 24 = 0x18
}

+ (id)supportedFeatures;	// IMP=0x0000000000042663
+ (double)updateInterval;	// IMP=0x0000000000042655
- (void).cxx_destruct;	// IMP=0x0000000000042ebf
- (void)predictorDidUpdate:(id)arg1;	// IMP=0x0000000000042ead
- (void)pause;	// IMP=0x0000000000042e5a
- (void)resume;	// IMP=0x0000000000042e07
- (void)update;	// IMP=0x0000000000042a31
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;	// IMP=0x00000000000427fa
- (id)_init;	// IMP=0x00000000000425d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

