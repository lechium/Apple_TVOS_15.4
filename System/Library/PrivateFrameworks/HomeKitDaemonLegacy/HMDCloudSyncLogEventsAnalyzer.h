//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDAggregationAnalysisEventContributing-Protocol.h>

@class HMDEventCountersManager, HMDEventFlagsManager;
@protocol HMMLogEventSubmitting;

@interface HMDCloudSyncLogEventsAnalyzer <HMDAggregationAnalysisEventContributing>
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
    HMDEventFlagsManager *_eventFlagsManager;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    unsigned long long _dataSyncState;	// 32 = 0x20
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x00000000007cc7d7
- (void).cxx_destruct;	// IMP=0x00000000007cc795
@property unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain, nonatomic) HMDEventFlagsManager *eventFlagsManager; // @synthesize eventFlagsManager=_eventFlagsManager;
@property(retain, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x00000000007cc712
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x00000000007cc57a
- (void)resetDataSource;	// IMP=0x00000000007cc3a5
- (id)cloudSyncAnalysisResult;	// IMP=0x00000000007cbd48
- (void)handleRecordOperationLogEvent:(id)arg1;	// IMP=0x00000000007cbba6
- (void)handleDataSyncStateEvent:(id)arg1;	// IMP=0x00000000007cbb72
- (void)handleDecryptionCompletedEvent:(id)arg1;	// IMP=0x00000000007cba8e
- (void)handleMaximumDelayLogEvent:(id)arg1;	// IMP=0x00000000007cba43
- (void)handleUploadReasonLogEvent:(id)arg1;	// IMP=0x00000000007cb5cd
- (void)handleUploadLogEvent:(id)arg1;	// IMP=0x00000000007cb27c
- (void)handleFetchLogEvent:(id)arg1;	// IMP=0x00000000007cb0ed
- (void)handleIncomingCloudPushLogEvent:(id)arg1;	// IMP=0x00000000007cb0a2
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000007cab0e
- (id)initWithEventCountersManager:(id)arg1 eventFlagsManager:(id)arg2 logEventSubmitter:(id)arg3;	// IMP=0x00000000007ca9b5

@end

