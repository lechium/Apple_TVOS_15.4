//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REActivityRelevanceProviderManagerProperties-Protocol.h>
#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSString;

@interface REActivityRelevanceProviderManager <REPredictorObserver, REActivityRelevanceProviderManagerProperties>
{
    float _activeEnergy;	// 8 = 0x8
    float _exerciseTime;	// 12 = 0xc
    float _standHour;	// 16 = 0x10
}

+ (_Bool)_wantsSeperateRelevanceQueue;	// IMP=0x000000000009e70b
+ (Class)_relevanceProviderClass;	// IMP=0x000000000009e6fa
+ (id)_features;	// IMP=0x000000000009e668
@property(readonly, nonatomic) float standHour;
@property(readonly, nonatomic) float exerciseTime;
@property(readonly, nonatomic) float activeEnergy;
- (void)predictorDidUpdate:(id)arg1;	// IMP=0x000000000009e997
- (void)_prepareForUpdate;	// IMP=0x000000000009e8b9
- (void)pause;	// IMP=0x000000000009e866
- (void)resume;	// IMP=0x000000000009e813
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;	// IMP=0x000000000009e713
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000009e614

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

