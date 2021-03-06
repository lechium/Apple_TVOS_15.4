//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDMediaDestinationBackingStoreHandlerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDMediaDestinationManager-Protocol.h>
#import <HomeKitDaemonLegacy/HMDMediaDestinationMessageHandlerDataSource-Protocol.h>
#import <HomeKitDaemonLegacy/HMDMediaDestinationMessageHandlerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFStagedValueDelegate-Protocol.h>

@class HMDMediaDestinationBackingStoreHandler, HMDMediaDestinationManagerMetricsDispatcher, HMDMediaDestinationMessageHandler, HMFStagedValue, HMMediaDestination, NSString, NSUUID;
@protocol HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate;

@interface HMDMediaDestinationManager : HMFObject <HMDMediaDestinationBackingStoreHandlerDelegate, HMFLogging, HMFStagedValueDelegate, HMDMediaDestinationManager, HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate>
{
    NSUUID *_identifier;	// 8 = 0x8
    HMDMediaDestinationMessageHandler *_messageHandler;	// 16 = 0x10
    HMDMediaDestinationBackingStoreHandler *_backingStoreHandler;	// 24 = 0x18
    id <HMDMediaDestinationManagerDataSource> _dataSource;	// 32 = 0x20
    id <HMDMediaDestinationManagerDelegate> _delegate;	// 40 = 0x28
    HMDMediaDestinationManagerMetricsDispatcher *_metricsDispatcher;	// 48 = 0x30
    HMFStagedValue *_stagedAudioGroupIdentifier;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x000000000050d01a
- (void).cxx_destruct;	// IMP=0x000000000050cc16
@property(readonly) HMFStagedValue *stagedAudioGroupIdentifier; // @synthesize stagedAudioGroupIdentifier=_stagedAudioGroupIdentifier;
@property(readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher; // @synthesize metricsDispatcher=_metricsDispatcher;
@property __weak id <HMDMediaDestinationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDMediaDestinationBackingStoreHandler *backingStoreHandler; // @synthesize backingStoreHandler=_backingStoreHandler;
@property(readonly) HMDMediaDestinationMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)stagedValue:(id)arg1 didExpireValue:(id)arg2;	// IMP=0x000000000050c888
- (void)triggerStageValueDidExpireValueForAudioDestinationIdentifier;	// IMP=0x000000000050c763
- (id)logIdentifier;	// IMP=0x000000000050c713
- (id)attributeDescriptions;	// IMP=0x000000000050c647
- (id)privateDescription;	// IMP=0x000000000050c635
- (void)notifyDelegateDidUpdateStagedValues;	// IMP=0x000000000050c528
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3;	// IMP=0x000000000050c343
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3;	// IMP=0x000000000050c166
- (_Bool)messageHandler:(id)arg1 reachableForOutgoingMessage:(id)arg2;	// IMP=0x000000000050c05f
- (id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2;	// IMP=0x000000000050bf4c
- (id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2;	// IMP=0x000000000050be1d
- (void)mediaDestinationBackingStoreHandler:(id)arg1 didUpdateDestination:(id)arg2;	// IMP=0x000000000050bca3
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000050bbdc
- (id)updateAudioGroupIdentifier:(id)arg1;	// IMP=0x000000000050b978
- (id)updateSupportedOptions:(unsigned long long)arg1;	// IMP=0x000000000050b7d2
- (id)dataSourceRootDestinationManager;	// IMP=0x000000000050b6b0
- (id)dataSourceDestinationControllerWithIdentifier:(id)arg1;	// IMP=0x000000000050b570
- (id)dataSourceTargetAccessory;	// IMP=0x000000000050b43d
@property(readonly) HMMediaDestination *committedDestination;
@property(readonly) HMMediaDestination *destination;
- (void)stageAudioGroupIdentifier:(id)arg1;	// IMP=0x000000000050b15e
- (void)configureWithHome:(id)arg1 currentAccessory:(_Bool)arg2;	// IMP=0x000000000050affd
- (id)initWithDestination:(id)arg1 messageHandler:(id)arg2 backingStoreHandler:(id)arg3 metricsDispatcher:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6;	// IMP=0x000000000050adce
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 backingStore:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6;	// IMP=0x000000000050abec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

