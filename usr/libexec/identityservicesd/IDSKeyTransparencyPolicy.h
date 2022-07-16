//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSKeyTransparencyPolicy : NSObject
{
}

- (_Bool)isKeyTransparencyUIEnabled;	// IMP=0x00400000006cdd60
- (_Bool)shouldSyncTrustCircleAfterSelfQueryForServiceIdentifier:(id)arg1;	// IMP=0x00100000006cd960
- (_Bool)isKeyTransparencySFAnalyticsEnabled;	// IMP=0x00100000006cd840
- (_Bool)isKeyTransparencyRTCAnalyticsEnabled;	// IMP=0x00100000006cd710
- (_Bool)isKeyTransparencyAnalyticsEnabled;	// IMP=0x00100000006cd5f0
- (unsigned long long)keyTransparencyMaximumVerificationsPerXPCActivity;	// IMP=0x00100000006cd4d0
- (unsigned long long)keyTransparencyXPCActivityIntervalInSeconds;	// IMP=0x00100000006cd390
- (_Bool)isKeyTransparencyXPCActivityEnabled;	// IMP=0x00100000006cd270
- (_Bool)isKeyTransparencyAccountKeyCircleEnabled;	// IMP=0x00100000006cd110
- (_Bool)isKeyTransparencyCloudKitCircleEnabled;	// IMP=0x00100000006ccfb0
- (_Bool)isKeyTransparencyTrustCircleEnabled;	// IMP=0x00100000006ccf50
- (_Bool)isKeyTransparencyEnabledForServiceType:(id)arg1;	// IMP=0x00100000006cce20
- (_Bool)isKeyTransparencyEnabledForServiceIdentifier:(id)arg1;	// IMP=0x00100000006ccc50
- (_Bool)_isKeyTransparencyDisabledViaServerBag;	// IMP=0x00100000006ccb50
- (_Bool)_isKeyTransparencyEnabledViaServerBag;	// IMP=0x00100000006ccb20
- (_Bool)_isKeyTransparencyEnabledViaDefaults;	// IMP=0x00100000006ccac0
- (_Bool)isKeyTransparencyTrustCircleAllowedWithoutEnrollment;	// IMP=0x00100000006ccaa0
- (_Bool)isKeyTransparencyPeerVerificationAllowedWithoutEnrollment;	// IMP=0x00100000006cca70
- (_Bool)isKeyTransparencyEnabled;	// IMP=0x00100000006cca10

@end

