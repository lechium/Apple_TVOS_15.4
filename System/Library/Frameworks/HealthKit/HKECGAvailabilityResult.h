//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HKECGAvailabilityResult : NSObject
{
    _Bool _advertiseDirectOnboarding;	// 8 = 0x8
    _Bool _advertiseDirectOnboardingEscapeHatch;	// 9 = 0x9
    _Bool _advertiseUpgrade;	// 10 = 0xa
    _Bool _advertiseUpgradeEscapeHatch;	// 11 = 0xb
}

+ (id)resultWithNoAdvertisements;	// IMP=0x0000000000059257
+ (id)resultWithAdvertiseDirectOnboarding:(_Bool)arg1 advertiseDirectOnboardingSecondary:(_Bool)arg2 advertiseUpgrade:(_Bool)arg3 advertiseUpgradeSecondary:(_Bool)arg4;	// IMP=0x0000000000059211
@property(readonly, nonatomic) _Bool advertiseUpgradeEscapeHatch; // @synthesize advertiseUpgradeEscapeHatch=_advertiseUpgradeEscapeHatch;
@property(readonly, nonatomic) _Bool advertiseUpgrade; // @synthesize advertiseUpgrade=_advertiseUpgrade;
@property(readonly, nonatomic) _Bool advertiseDirectOnboardingEscapeHatch; // @synthesize advertiseDirectOnboardingEscapeHatch=_advertiseDirectOnboardingEscapeHatch;
@property(readonly, nonatomic) _Bool advertiseDirectOnboarding; // @synthesize advertiseDirectOnboarding=_advertiseDirectOnboarding;
- (id)initWithAdvertiseDirectOnboarding:(_Bool)arg1 advertiseDirectOnboardingSecondary:(_Bool)arg2 advertiseUpgrade:(_Bool)arg3 advertiseUpgradeSecondary:(_Bool)arg4;	// IMP=0x0000000000059283

@end
