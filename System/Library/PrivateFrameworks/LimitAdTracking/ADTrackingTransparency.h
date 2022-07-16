//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADTrackingTransparency : NSObject
{
}

- (id)appTrackingServiceProxy:(id)arg1;	// IMP=0x0000000000002b9d
- (id)appTrackingXPCConnection:(CDUnknownBlockType)arg1 withInvalidation:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002a93
@property(nonatomic) _Bool personalizedAds;
@property(readonly, nonatomic) long long latestVersionForPersonalizedAdsConsent;
@property(nonatomic) long long acknowledgedVersionForPersonalizedAds;
@property(readonly, nonatomic) _Bool personalizedAdsAvailableForAppStore;
- (void)personalizedAdsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001ffe
@property(readonly, nonatomic) _Bool personalizedAdsAvailable;
@property(readonly, nonatomic) long long personalizedAdsSwitchDisabledReason;
@property(readonly, nonatomic) _Bool personalizedAdsSwitchEnabled;
- (_Bool)isPersonalizedAdsScreenTimeRestricted;	// IMP=0x0000000000001b34
@property(nonatomic) _Bool crossAppTrackingAllowed;
@property(readonly, nonatomic) long long crossAppTrackingAllowedSwitchDisabledReason;
- (long long)accountRestrictionReason;	// IMP=0x00000000000017f9
- (_Bool)shouldDisplayPAUI;	// IMP=0x00000000000014fc
- (long long)accountLevelSwitchDisabledReason;	// IMP=0x0000000000001126
- (_Bool)_isUserManagedRestricted;	// IMP=0x0000000000001055
- (_Bool)_isUserEDURestricted;	// IMP=0x000000000000104d
@property(readonly, nonatomic) _Bool crossAppTrackingAllowedSwitchEnabled;
- (_Bool)_userAllowedToChangeSettings;	// IMP=0x0000000000000e63

@end
