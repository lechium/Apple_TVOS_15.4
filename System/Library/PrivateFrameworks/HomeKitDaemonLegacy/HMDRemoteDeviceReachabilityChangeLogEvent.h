//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    _Bool _reachable;	// 8 = 0x8
    _Bool _targetSupportsIDSPresence;	// 9 = 0x9
    unsigned long long _reason;	// 16 = 0x10
}

@property(readonly) _Bool targetSupportsIDSPresence; // @synthesize targetSupportsIDSPresence=_targetSupportsIDSPresence;
@property(readonly) _Bool reachable; // @synthesize reachable=_reachable;
@property(readonly) unsigned long long reason; // @synthesize reason=_reason;
- (id)initWithReason:(unsigned long long)arg1 reachable:(_Bool)arg2 targetSupportsIDSPresence:(_Bool)arg3;	// IMP=0x0000000000449376
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

