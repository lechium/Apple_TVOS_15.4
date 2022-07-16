//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface HMDCameraRecordingLoadBalancerLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSNumber *_numberOfResidents;	// 8 = 0x8
    NSNumber *_numberOfRetries;	// 16 = 0x10
    NSNumber *_totalNumberOfJobSlots;	// 24 = 0x18
    NSNumber *_remainingNumberOfJobSlots;	// 32 = 0x20
    NSString *_selectedResidentDeviceType;	// 40 = 0x28
    NSNumber *_selectedResidentSystemResourceUsageLevel;	// 48 = 0x30
    NSNumber *_selectedResidentNumberOfActiveStreams;	// 56 = 0x38
    NSNumber *_selectedResidentJobSlots;	// 64 = 0x40
    NSNumber *_selectedResidentPartialJobSlots;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000031df19
@property(readonly, copy) NSNumber *selectedResidentPartialJobSlots; // @synthesize selectedResidentPartialJobSlots=_selectedResidentPartialJobSlots;
@property(readonly, copy) NSNumber *selectedResidentJobSlots; // @synthesize selectedResidentJobSlots=_selectedResidentJobSlots;
@property(readonly, copy) NSNumber *selectedResidentNumberOfActiveStreams; // @synthesize selectedResidentNumberOfActiveStreams=_selectedResidentNumberOfActiveStreams;
@property(readonly, copy) NSNumber *selectedResidentSystemResourceUsageLevel; // @synthesize selectedResidentSystemResourceUsageLevel=_selectedResidentSystemResourceUsageLevel;
@property(readonly, copy) NSString *selectedResidentDeviceType; // @synthesize selectedResidentDeviceType=_selectedResidentDeviceType;
@property(readonly, copy) NSNumber *remainingNumberOfJobSlots; // @synthesize remainingNumberOfJobSlots=_remainingNumberOfJobSlots;
@property(readonly, copy) NSNumber *totalNumberOfJobSlots; // @synthesize totalNumberOfJobSlots=_totalNumberOfJobSlots;
@property(readonly, copy) NSNumber *numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(readonly, copy) NSNumber *numberOfResidents; // @synthesize numberOfResidents=_numberOfResidents;
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)initWithNumberOfResidents:(id)arg1 numberOfRetries:(id)arg2 totalNumberOfJobSlots:(id)arg3 remainingNumberOfJobSlots:(id)arg4 selectedResidentDeviceType:(id)arg5 selectedResidentNumberOfActiveStreams:(id)arg6 selectedResidentSystemResourceUsageLevel:(id)arg7 selectedResidentJobSlots:(id)arg8 selectedResidentPartialJobSlots:(id)arg9;	// IMP=0x000000000031d9ef

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end
