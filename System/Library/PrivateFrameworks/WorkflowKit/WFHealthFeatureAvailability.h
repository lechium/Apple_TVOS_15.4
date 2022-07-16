//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WFHealthFeatureObserver;

@interface WFHealthFeatureAvailability : NSObject
{
    id <WFHealthFeatureObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007b4ad
@property(nonatomic) __weak id <WFHealthFeatureObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) unsigned long long sleepOnboardingStatus;
- (id)initWithSleepFeature:(unsigned long long)arg1;	// IMP=0x000000000007b42d

@end
