//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDCameraRecordingSessionCoordinationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    _Bool _usingRemoteDeviceAnalysisNode;	// 8 = 0x8
    unsigned long long _retryCount;	// 16 = 0x10
}

@property unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(getter=isUsingRemoteDeviceAnalysisNode) _Bool usingRemoteDeviceAnalysisNode; // @synthesize usingRemoteDeviceAnalysisNode=_usingRemoteDeviceAnalysisNode;
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

