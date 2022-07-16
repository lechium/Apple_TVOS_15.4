//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDLogEventDailyProvider-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDLogEventDailyScheduler, NSArray, NSString, NSUUID;
@protocol HMDCloudShareTrustManagerMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

@interface HMDCloudShareTrustManagerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>
{
    _Bool _registered;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    HMDLogEventDailyScheduler *_logEventDailyScheduler;	// 32 = 0x20
    id <HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> _dataSource;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x000000000007dc10
- (void).cxx_destruct;	// IMP=0x000000000007dba9
@property _Bool registered; // @synthesize registered=_registered;
@property(readonly) __weak id <HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDLogEventDailyScheduler *logEventDailyScheduler; // @synthesize logEventDailyScheduler=_logEventDailyScheduler;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;	// IMP=0x000000000007dadc
@property(readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
- (void)triggerLogEventProviderDailySubmissionBlocks;	// IMP=0x000000000007d918
- (void)submitCloudShareTrustStatusDailyEvent;	// IMP=0x000000000007d66a
- (void)submitFailureEventWithEventErrorCode:(long long)arg1 error:(id)arg2;	// IMP=0x000000000007d59b
- (void)submitFailureEventWithEventErrorCode:(long long)arg1;	// IMP=0x000000000007d587
- (void)submitTrustActivityEvent:(long long)arg1;	// IMP=0x000000000007d38d
- (void)submitTrustZoneRemovedEvent;	// IMP=0x000000000007d376
- (void)submitTrustZoneCreatedEvent;	// IMP=0x000000000007d362
- (void)registerForDailyTrustManagerEvents;	// IMP=0x000000000007d316
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 logEventDailyScheduler:(id)arg3 dataSource:(id)arg4;	// IMP=0x000000000007d224

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

