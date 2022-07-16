//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface HMDProcessRelaunchThresholdLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSNumber *_timeIntervalSincePreviousProcessLaunch;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000547d2f
@property(readonly, nonatomic) NSNumber *timeIntervalSincePreviousProcessLaunch; // @synthesize timeIntervalSincePreviousProcessLaunch=_timeIntervalSincePreviousProcessLaunch;
- (id)initWithTimeSincePreviousLaunch:(id)arg1;	// IMP=0x0000000000547cb0
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end
