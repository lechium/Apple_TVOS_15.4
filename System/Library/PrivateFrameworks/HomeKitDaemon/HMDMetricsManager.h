//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDLogEventDailyProvider-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDCloudSyncLogEventsAnalyzer, HMDConfigurationLogEvent, HMDCoreAnalyticsLogObserver, HMDEventCountersManager, HMDEventFlagsManager, HMDHomeManager, HMDLogEventDailyScheduler, HMDLogEventDispatcher, HMDLogEventElectionEventsAnalyzer, HMDLogEventErrorEventsAnalyzer, HMDLogEventHAPMetricsEventAnalyzer, HMDLogEventMessageEventsAnalyzer, HMDLogEventProcessLaunchAnalyzer, HMDLogEventProcessMemoryEventsAnalyzer, HMDLogEventReachabilityEventsAnalyzer, HMDLogEventUserActivityAnalyzer, HMDMessageDispatcher, HMFUnfairLock, NSArray, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDMetricsManager : NSObject <HMFMessageReceiver, HMDLogEventDailyProvider>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _HH2Enabled;	// 16 = 0x10
    _Bool _metricsCollectionStarted;	// 17 = 0x11
    HMDConfigurationLogEvent *_cachedConfiguration;	// 24 = 0x18
    HMDHomeManager *_homeManager;	// 32 = 0x20
    NSString *_PRKitUUIDString;	// 40 = 0x28
    NSString *_PRKitDateString;	// 48 = 0x30
    HMDMessageDispatcher *_messageDispatcher;	// 56 = 0x38
    HMDLogEventDailyScheduler *_dailyScheduler;	// 64 = 0x40
    HMDLogEventDispatcher *_logEventDispatcher;	// 72 = 0x48
    HMDEventCountersManager *_eventCounters;	// 80 = 0x50
    HMDEventFlagsManager *_eventFlags;	// 88 = 0x58
    HMDCoreAnalyticsLogObserver *_coreAnalyticsLogObserver;	// 96 = 0x60
    HMDCloudSyncLogEventsAnalyzer *_cloudSyncLogEventsAnalyzer;	// 104 = 0x68
    HMDLogEventElectionEventsAnalyzer *_electionEventsAnalyzer;	// 112 = 0x70
    HMDLogEventErrorEventsAnalyzer *_errorEventsAnalyzer;	// 120 = 0x78
    HMDLogEventHAPMetricsEventAnalyzer *_hapEventsAnalyzer;	// 128 = 0x80
    HMDLogEventMessageEventsAnalyzer *_messagingEventsAnalyzer;	// 136 = 0x88
    HMDLogEventProcessLaunchAnalyzer *_processLaunchEventsAnalyzer;	// 144 = 0x90
    HMDLogEventProcessMemoryEventsAnalyzer *_processMemoryEventsAnalyzer;	// 152 = 0x98
    HMDLogEventReachabilityEventsAnalyzer *_reachabilityEventsAnalyzer;	// 160 = 0xa0
    HMDLogEventUserActivityAnalyzer *_userActivityEventsAnalyzer;	// 168 = 0xa8
    NSMutableArray *_aggregationAnalysisEventContributingAnalyzers;	// 176 = 0xb0
}

+ (id)coreAnalyticsLogEventClasses;	// IMP=0x000000000058797f
+ (id)namespaceUUID;	// IMP=0x000000000058794f
- (void).cxx_destruct;	// IMP=0x000000000058718c
@property(readonly, nonatomic) NSMutableArray *aggregationAnalysisEventContributingAnalyzers; // @synthesize aggregationAnalysisEventContributingAnalyzers=_aggregationAnalysisEventContributingAnalyzers;
@property(readonly, nonatomic) HMDLogEventUserActivityAnalyzer *userActivityEventsAnalyzer; // @synthesize userActivityEventsAnalyzer=_userActivityEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventReachabilityEventsAnalyzer *reachabilityEventsAnalyzer; // @synthesize reachabilityEventsAnalyzer=_reachabilityEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventProcessMemoryEventsAnalyzer *processMemoryEventsAnalyzer; // @synthesize processMemoryEventsAnalyzer=_processMemoryEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventProcessLaunchAnalyzer *processLaunchEventsAnalyzer; // @synthesize processLaunchEventsAnalyzer=_processLaunchEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventMessageEventsAnalyzer *messagingEventsAnalyzer; // @synthesize messagingEventsAnalyzer=_messagingEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventHAPMetricsEventAnalyzer *hapEventsAnalyzer; // @synthesize hapEventsAnalyzer=_hapEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventErrorEventsAnalyzer *errorEventsAnalyzer; // @synthesize errorEventsAnalyzer=_errorEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventElectionEventsAnalyzer *electionEventsAnalyzer; // @synthesize electionEventsAnalyzer=_electionEventsAnalyzer;
@property(readonly, nonatomic) HMDCloudSyncLogEventsAnalyzer *cloudSyncLogEventsAnalyzer; // @synthesize cloudSyncLogEventsAnalyzer=_cloudSyncLogEventsAnalyzer;
@property(readonly, nonatomic) HMDCoreAnalyticsLogObserver *coreAnalyticsLogObserver; // @synthesize coreAnalyticsLogObserver=_coreAnalyticsLogObserver;
@property(readonly, nonatomic) HMDEventFlagsManager *eventFlags; // @synthesize eventFlags=_eventFlags;
@property(readonly, nonatomic) HMDEventCountersManager *eventCounters; // @synthesize eventCounters=_eventCounters;
@property(readonly, nonatomic) HMDLogEventDispatcher *logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
@property(readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler; // @synthesize dailyScheduler=_dailyScheduler;
@property(readonly, nonatomic) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property _Bool metricsCollectionStarted; // @synthesize metricsCollectionStarted=_metricsCollectionStarted;
@property(readonly, nonatomic) NSString *PRKitDateString; // @synthesize PRKitDateString=_PRKitDateString;
@property(readonly, nonatomic) NSString *PRKitUUIDString; // @synthesize PRKitUUIDString=_PRKitUUIDString;
@property(readonly, getter=isHH2Enabled) _Bool HH2Enabled; // @synthesize HH2Enabled=_HH2Enabled;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x0000000000586fc4
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleLogEventDailySchedulerSubmitRequest:(id)arg1;	// IMP=0x0000000000586f2e
- (void)_handleLogEventDailySchedulerStatusRequest:(id)arg1;	// IMP=0x0000000000586e9e
- (void)_handleResetEventCounters:(id)arg1;	// IMP=0x0000000000586e22
- (void)_handleFetchEventCounters:(id)arg1;	// IMP=0x0000000000586d85
- (void)presentRadarDialog:(id)arg1 withPostIntervalLimit:(double)arg2;	// IMP=0x0000000000586d7f
- (void)registerTriggers;	// IMP=0x00000000005863ab
- (void)startAnalyzers;	// IMP=0x0000000000585bc3
- (void)startCoreAnalyticsObserver:(id)arg1;	// IMP=0x0000000000585b31
- (void)logHomeConfiguration;	// IMP=0x0000000000585ab7
@property(readonly) _Bool demoModeConfigured;
@property(readonly, nonatomic) HMDConfigurationLogEvent *cachedConfiguration; // @synthesize cachedConfiguration=_cachedConfiguration;
- (void)homeKitConfigurationChanged;	// IMP=0x00000000005858e5
- (id)logHomeKitErrorAggregationSummary;	// IMP=0x0000000000585895
- (id)logHomeKitAggregationAnalysisSummary;	// IMP=0x0000000000585845
- (void)resetHomeKitAggregationAnalysisContext;	// IMP=0x0000000000585718
- (void)populateHomeKitAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x00000000005855c7
- (id)homeKitAggregationAnalysisLogEvent;	// IMP=0x00000000005854f3
- (id)currentDataSyncStateDescription;	// IMP=0x000000000058545c
- (void)submitDailyAggregationAnalysisEvents;	// IMP=0x00000000005853c3
@property(readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
- (void)startMetricsCollectionWithDailyScheduler:(id)arg1;	// IMP=0x000000000058503d
- (void)startMetricsCollection;	// IMP=0x0000000000584fd5
- (void)configureHAPMetricsDispatcher:(id)arg1;	// IMP=0x0000000000584f63
- (void)_registerForMessages;	// IMP=0x0000000000584c69
- (void)addAnalyzer:(id)arg1 toListOfAggregationAnalysisEventContributing:(id)arg2;	// IMP=0x0000000000584bf6
- (id)initWithMessageDispatcher:(id)arg1 logEventDispatcher:(id)arg2 dailyScheduler:(id)arg3 eventCounters:(id)arg4 eventFlags:(id)arg5;	// IMP=0x000000000058476e
- (id)init;	// IMP=0x0000000000584662

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
