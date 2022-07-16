//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ATTrackingManager : NSObject
{
}

+ (void)requestTrackingAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002ce2
+ (_Bool)isApplicationExtension;	// IMP=0x0000000000002c66
+ (_Bool)applicationStateActive;	// IMP=0x0000000000002b7e
+ (unsigned long long)trackingAuthorizationStatus;	// IMP=0x00000000000029a5
+ (unsigned long long)_trackingAuthorizationStatus;	// IMP=0x00000000000028c1
+ (void)_sendTrackingStatusAnalytic:(unsigned long long)arg1 prompted:(_Bool)arg2 deniedReason:(unsigned long long)arg3;	// IMP=0x00000000000027a8
+ (void)_sendRequestTrackingAnalytic:(unsigned long long)arg1 prompted:(_Bool)arg2 deniedReason:(unsigned long long)arg3;	// IMP=0x000000000000268f
+ (_Bool)_isCrossAppTrackingAllowed;	// IMP=0x0000000000002636
+ (_Bool)_userAllowedToChangeSettings;	// IMP=0x00000000000025dd
+ (_Bool)_restrictionProfileInstalled;	// IMP=0x0000000000002588
+ (_Bool)_applicationHasDisqualifyingEntitlement;	// IMP=0x00000000000024fe

@end

