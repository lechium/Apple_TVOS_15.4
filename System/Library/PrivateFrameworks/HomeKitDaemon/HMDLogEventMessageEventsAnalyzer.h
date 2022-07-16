//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAggregationAnalysisEventContributing-Protocol.h>

@class HMDEventCountersManager, HMDEventFlagsManager;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventMessageEventsAnalyzer <HMDAggregationAnalysisEventContributing>
{
    HMDEventFlagsManager *_eventFlagsManager;	// 8 = 0x8
    HMDEventCountersManager *_eventCountersManager;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    unsigned long long _periodicLoggingInterval;	// 32 = 0x20
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x000000000020fa0a
- (void).cxx_destruct;	// IMP=0x000000000020f9c8
@property(readonly) unsigned long long periodicLoggingInterval; // @synthesize periodicLoggingInterval=_periodicLoggingInterval;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
@property(readonly, nonatomic) HMDEventFlagsManager *eventFlagsManager; // @synthesize eventFlagsManager=_eventFlagsManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x000000000020f842
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x000000000020f376
- (void)_handleXPCMessageCounterLogEvent:(id)arg1;	// IMP=0x000000000020f0b0
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)arg1 peerInformation:(id)arg2 transportType:(int)arg3 messageDirectionSending:(_Bool)arg4 identifier:(id)arg5;	// IMP=0x000000000020ee0c
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)arg1 messageDirectionSending:(_Bool)arg2;	// IMP=0x000000000020ed1f
- (void)_handleRemoteMessageLogEvent:(id)arg1;	// IMP=0x000000000020ebf4
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)arg1 peerInformation:(id)arg2;	// IMP=0x000000000020eb5d
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x000000000020ea7f
- (void)submitPeriodicRemoteMessageCountersLogEventIfNeeded;	// IMP=0x000000000020e7fc
- (void)submitPeriodicXPCMessageCountersLogEventIfNeeded;	// IMP=0x000000000020e5bd
- (void)submitPeriodicAggregateCountersForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x000000000020e1a3
- (id)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x000000000020e09c
- (id)transportTypeStringForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x000000000020df46
- (void)submitPeriodicAggregateCountersForXPCMessageCounterRequestGroup:(id)arg1;	// IMP=0x000000000020dad4
- (id)initWithEventCountersManager:(id)arg1 eventFlagsManager:(id)arg2 logEventSubmitter:(id)arg3;	// IMP=0x000000000020d97f

@end

