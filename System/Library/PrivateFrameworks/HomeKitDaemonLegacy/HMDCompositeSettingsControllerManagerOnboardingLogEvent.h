//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMDCompositeSettingsControllerManagerOnboardingLogEvent-Protocol.h>
#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSError, NSString;

@interface HMDCompositeSettingsControllerManagerOnboardingLogEvent : HMMLogEvent <HMDCompositeSettingsControllerManagerOnboardingLogEvent, HMMCoreAnalyticsLogging>
{
    long long _siriEndpointCertificationReason;	// 8 = 0x8
}

@property(readonly) long long siriEndpointCertificationReason; // @synthesize siriEndpointCertificationReason=_siriEndpointCertificationReason;
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)initWithError:(id)arg1 siriEndpointCertificationReason:(long long)arg2;	// IMP=0x00000000006b5c23

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSError *error;

@end

