//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDLogEventDailyProvider-Protocol.h>

@class HMDEventCountersManager, NSArray, NSString;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventErrorEventsAnalyzer <HMDLogEventDailyProvider>
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x0000000000b3a504
+ (id)errorEventsRequestGroupKeys;	// IMP=0x0000000000b3a4d4
- (void).cxx_destruct;	// IMP=0x0000000000b3a48d
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
@property(readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
- (void)resetEventCountersForAllErrorEventRequestGroups;	// IMP=0x0000000000b3a191
- (void)submitErrorAggregationLogEventsForErrorEventGroup:(id)arg1;	// IMP=0x0000000000b39ee5
- (void)submitAllFormattedErrorAggregationLogEvents;	// IMP=0x0000000000b39b3f
- (id)currentErrorEventsAnalyzedSummary;	// IMP=0x0000000000b397d5
- (void)_handleCloudShareTrustManagerFailureLogEvent:(id)arg1;	// IMP=0x0000000000b39681
- (void)_handleAccessoryPairingLogEvent:(id)arg1;	// IMP=0x0000000000b393e8
- (void)_handleReadWriteLogEvent:(id)arg1;	// IMP=0x0000000000b39277
- (id)eventCounterRequestGroupNameForLogEvent:(id)arg1 underlyingError:(_Bool)arg2;	// IMP=0x0000000000b38d74
- (id)eventCounterRequestGroupNameForLogEvent:(id)arg1;	// IMP=0x0000000000b38d60
- (id)eventCounterNameForError:(id)arg1;	// IMP=0x0000000000b38c7d
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000b388e3
- (id)initWithEventCountersManager:(id)arg1 logEventSubmitter:(id)arg2;	// IMP=0x0000000000b38805

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
