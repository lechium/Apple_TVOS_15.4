//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDLogEventDailyProvider-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent, HMFUnfairLock, NSArray, NSString, NSUUID;
@protocol HMDMediaDestinationControllerMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

@interface HMDMediaDestinationControllerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    id <HMDMediaDestinationControllerMetricsEventDispatcherDataSource> _dataSource;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 32 = 0x20
    HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *_trackedStagedDestinationIdentifierEvent;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0000000000367244
- (void).cxx_destruct;	// IMP=0x0000000000367118
@property(retain) HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *trackedStagedDestinationIdentifierEvent; // @synthesize trackedStagedDestinationIdentifierEvent=_trackedStagedDestinationIdentifierEvent;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaDestinationControllerMetricsEventDispatcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x0000000000367048
@property(readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
- (void)triggerLogEventProviderDailySubmissionBlocks;	// IMP=0x0000000000366e84
- (id)dataSourceIsTriggeredOnControllerDevice;	// IMP=0x0000000000366d56
- (id)dataSourceDestinationTypeWithIdentifier:(id)arg1;	// IMP=0x0000000000366bfd
- (id)dataSourceCurrentDestinationType;	// IMP=0x0000000000366a8e
- (id)dataSourceCurrentUser;	// IMP=0x0000000000366960
- (id)dataSourceCurrentUserPrivilege;	// IMP=0x00000000003668b0
- (void)submitDailySetDestinationEvent;	// IMP=0x0000000000366611
- (void)submitStagedDestinationIdentifierCommittedEventWithCommittedDestinationIdentifier:(id)arg1;	// IMP=0x0000000000366379
- (void)startStagedDestinationIdentifierCommittedEventWithStagedDestinationIdentifier:(id)arg1;	// IMP=0x00000000003661c2
- (void)submitFailureEventWithEventErrorCode:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0000000000366026
- (void)submitTransactionUpdatedDestinationEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2;	// IMP=0x0000000000365ee1
- (void)submitReceivedUpdateDestinationRequestMessageEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2;	// IMP=0x0000000000365d9c
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 dataSource:(id)arg3;	// IMP=0x0000000000365ca4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

