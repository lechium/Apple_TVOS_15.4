//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAggregationAnalysisEventContributing-Protocol.h>

@class HMDEventCountersManager, HMDEventFlagsManager;
@protocol HMMLogEventSubmitting;

@interface HMDCloudSyncLogEventsAnalyzer <HMDAggregationAnalysisEventContributing>
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
    HMDEventFlagsManager *_eventFlagsManager;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    unsigned long long _dataSyncState;	// 32 = 0x20
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x0000000000875877
- (void).cxx_destruct;	// IMP=0x0000000000875835
@property unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain, nonatomic) HMDEventFlagsManager *eventFlagsManager; // @synthesize eventFlagsManager=_eventFlagsManager;
@property(retain, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x00000000008757b2
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x000000000087561a
- (void)resetDataSource;	// IMP=0x0000000000875445
- (id)cloudSyncAnalysisResult;	// IMP=0x0000000000874de8
- (void)handleRecordOperationLogEvent:(id)arg1;	// IMP=0x0000000000874c46
- (void)handleDataSyncStateEvent:(id)arg1;	// IMP=0x0000000000874c12
- (void)handleDecryptionCompletedEvent:(id)arg1;	// IMP=0x0000000000874b2e
- (void)handleMaximumDelayLogEvent:(id)arg1;	// IMP=0x0000000000874ae3
- (void)handleUploadReasonLogEvent:(id)arg1;	// IMP=0x000000000087466d
- (void)handleUploadLogEvent:(id)arg1;	// IMP=0x000000000087431c
- (void)handleFetchLogEvent:(id)arg1;	// IMP=0x000000000087418d
- (void)handleIncomingCloudPushLogEvent:(id)arg1;	// IMP=0x0000000000874142
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000873bae
- (id)initWithEventCountersManager:(id)arg1 eventFlagsManager:(id)arg2 logEventSubmitter:(id)arg3;	// IMP=0x0000000000873a55

@end

