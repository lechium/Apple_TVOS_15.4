//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDMediaDestinationBackingStoreHandlerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDMediaDestinationManager-Protocol.h>
#import <HomeKitDaemon/HMDMediaDestinationMessageHandlerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDMediaDestinationMessageHandlerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFStagedValueDelegate-Protocol.h>

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

+ (id)logCategory;	// IMP=0x00000000005695d0
- (void).cxx_destruct;	// IMP=0x00000000005691cc
@property(readonly) HMFStagedValue *stagedAudioGroupIdentifier; // @synthesize stagedAudioGroupIdentifier=_stagedAudioGroupIdentifier;
@property(readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher; // @synthesize metricsDispatcher=_metricsDispatcher;
@property __weak id <HMDMediaDestinationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDMediaDestinationBackingStoreHandler *backingStoreHandler; // @synthesize backingStoreHandler=_backingStoreHandler;
@property(readonly) HMDMediaDestinationMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)stagedValue:(id)arg1 didExpireValue:(id)arg2;	// IMP=0x0000000000568e3e
- (void)triggerStageValueDidExpireValueForAudioDestinationIdentifier;	// IMP=0x0000000000568d19
- (id)logIdentifier;	// IMP=0x0000000000568cc9
- (id)attributeDescriptions;	// IMP=0x0000000000568bfd
- (id)privateDescription;	// IMP=0x0000000000568beb
- (void)notifyDelegateDidUpdateStagedValues;	// IMP=0x0000000000568ade
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3;	// IMP=0x00000000005688f9
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3;	// IMP=0x000000000056871c
- (_Bool)messageHandler:(id)arg1 reachableForOutgoingMessage:(id)arg2;	// IMP=0x0000000000568615
- (id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2;	// IMP=0x0000000000568502
- (id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2;	// IMP=0x00000000005683d3
- (void)mediaDestinationBackingStoreHandler:(id)arg1 didUpdateDestination:(id)arg2;	// IMP=0x0000000000568259
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000568192
- (id)updateAudioGroupIdentifier:(id)arg1;	// IMP=0x0000000000567f2e
- (id)updateSupportedOptions:(unsigned long long)arg1;	// IMP=0x0000000000567d88
- (id)dataSourceRootDestinationManager;	// IMP=0x0000000000567c66
- (id)dataSourceDestinationControllerWithIdentifier:(id)arg1;	// IMP=0x0000000000567b26
- (id)dataSourceTargetAccessory;	// IMP=0x00000000005679f3
@property(readonly) HMMediaDestination *committedDestination;
@property(readonly) HMMediaDestination *destination;
- (void)stageAudioGroupIdentifier:(id)arg1;	// IMP=0x0000000000567714
- (void)configureWithHome:(id)arg1 currentAccessory:(_Bool)arg2;	// IMP=0x00000000005675b3
- (id)initWithDestination:(id)arg1 messageHandler:(id)arg2 backingStoreHandler:(id)arg3 metricsDispatcher:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6;	// IMP=0x0000000000567384
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 backingStore:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6;	// IMP=0x00000000005671a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

