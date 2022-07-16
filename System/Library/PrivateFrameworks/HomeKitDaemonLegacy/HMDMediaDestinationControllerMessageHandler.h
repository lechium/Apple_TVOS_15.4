//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDMediaDestinationControllerMetricsEventDispatcher, NSString;
@protocol HMDMediaDestinationControllerMessageHandlerDataSource, HMDMediaDestinationControllerMessageHandlerDelegate;

@interface HMDMediaDestinationControllerMessageHandler <HMFLogging>
{
    id <HMDMediaDestinationControllerMessageHandlerDataSource> _dataSource;	// 8 = 0x8
    id <HMDMediaDestinationControllerMessageHandlerDelegate> _delegate;	// 16 = 0x10
    HMDMediaDestinationControllerMetricsEventDispatcher *_metricsEventDispatcher;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00000000008b7d41
- (void).cxx_destruct;	// IMP=0x00000000008b7d03
@property(retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher; // @synthesize metricsEventDispatcher=_metricsEventDispatcher;
@property __weak id <HMDMediaDestinationControllerMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationControllerMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x00000000008b7c32
- (void)handleMediaDestinationControllerUpdatedDestinationNotification:(id)arg1;	// IMP=0x00000000008b776e
- (void)handleNotificationAccessoryChangedRoom:(id)arg1;	// IMP=0x00000000008b73e7
- (void)handleMediaSystemRemovedNotification:(id)arg1;	// IMP=0x00000000008b7229
- (void)handleMediaSystemAddedNotification:(id)arg1;	// IMP=0x00000000008b706b
- (void)handleHomeAccessoryRemovedNotification:(id)arg1;	// IMP=0x00000000008b6d81
- (void)handleMediaDestinationUpdatedNotification:(id)arg1;	// IMP=0x00000000008b6bc3
- (void)handleMediaDestinationControllerUpdateDestinationRequestMessage:(id)arg1;	// IMP=0x00000000008b668f
- (unsigned long long)upateOptionsInMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000008b6330
- (id)destinationIdentifierInMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000008b5f54
- (void)notifyUpdatedDestinationWithIdentifier:(id)arg1;	// IMP=0x00000000008b5d65
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 metricsEventDispatcher:(id)arg4 targetDevice:(_Bool)arg5 dataSource:(id)arg6 delegate:(id)arg7;	// IMP=0x00000000008b5ad9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
