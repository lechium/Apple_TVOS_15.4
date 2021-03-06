//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKRemoteFeatureAvailabilityRule-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityAlwaysFalseRule : NSObject <HKRemoteFeatureAvailabilityRule>
{
}

+ (id)ruleIdentifier;	// IMP=0x00000000000e649e
- (_Bool)evaluate;	// IMP=0x00000000000e64da
- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000000e64ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

