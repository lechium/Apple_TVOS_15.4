//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/NCNotificationAlertDestination-Protocol.h>
#import <UserNotificationsKit/NCNotificationAlertDestinationDelegate-Protocol.h>

@class BSServiceConnectionEndpoint, NCNotificationCollapsingQueue, NCNotificationDestinationsRegistry, NCNotificationRequest, NSString;
@protocol NCNotificationAlertDestinationDelegate;

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationAlertDestination>
{
    id <NCNotificationAlertDestinationDelegate> _delegate;	// 8 = 0x8
    NCNotificationDestinationsRegistry *_destinationsRegistry;	// 16 = 0x10
    NCNotificationCollapsingQueue *_queue;	// 24 = 0x18
    NCNotificationRequest *_coalescingRequest;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000007af7
@property(retain, nonatomic) NCNotificationRequest *coalescingRequest; // @synthesize coalescingRequest=_coalescingRequest;
@property(retain, nonatomic) NCNotificationCollapsingQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NCNotificationDestinationsRegistry *destinationsRegistry; // @synthesize destinationsRegistry=_destinationsRegistry;
@property(nonatomic) __weak id <NCNotificationAlertDestinationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)arg1;	// IMP=0x00000000000078f8
- (_Bool)_readyToReceiveForNotificationRequest:(id)arg1;	// IMP=0x00000000000077d5
- (_Bool)_destinations:(id)arg1 canReceiveNotificationRequest:(id)arg2;	// IMP=0x0000000000007672
- (_Bool)_performDestinationOperationForRequest:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007398
- (_Bool)_postNotificationRequest:(id)arg1;	// IMP=0x0000000000006fe2
- (void)_postEnqueuedNotificationRequestsCoalescingWith:(id)arg1;	// IMP=0x0000000000006dcf
- (void)_postNextNotificationRequestPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006cf7
- (void)_postNextNotificationRequest;	// IMP=0x0000000000006ce3
- (void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;	// IMP=0x0000000000006c53
- (void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2;	// IMP=0x0000000000006bc3
- (void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;	// IMP=0x0000000000006b33
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(_Bool)arg3;	// IMP=0x0000000000006a93
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;	// IMP=0x0000000000006a7e
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;	// IMP=0x00000000000069d2
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006927
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;	// IMP=0x00000000000068ad
- (void)destination:(id)arg1 setSystemScheduledDeliveryEnabled:(_Bool)arg2 scheduledDeliveryTimes:(id)arg3;	// IMP=0x0000000000006821
- (void)destination:(id)arg1 setScheduledDelivery:(_Bool)arg2 forSectionIdentifier:(id)arg3;	// IMP=0x0000000000006795
- (void)destination:(id)arg1 setAllowsDirectMessages:(_Bool)arg2 forSectionIdentifier:(id)arg3;	// IMP=0x0000000000006709
- (void)destination:(id)arg1 setAllowsTimeSensitive:(_Bool)arg2 forSectionIdentifier:(id)arg3;	// IMP=0x000000000000667d
- (void)destination:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forSectionIdentifier:(id)arg3;	// IMP=0x00000000000065f1
- (void)destination:(id)arg1 setMuted:(_Bool)arg2 untilDate:(id)arg3 forSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5;	// IMP=0x0000000000006525
- (void)destination:(id)arg1 setDeliverQuietly:(_Bool)arg2 forSectionIdentifier:(id)arg3;	// IMP=0x0000000000006499
- (void)destination:(id)arg1 setAllowsNotifications:(_Bool)arg2 forSectionIdentifier:(id)arg3;	// IMP=0x000000000000640d
- (void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;	// IMP=0x0000000000006387
- (void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;	// IMP=0x00000000000062c0
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;	// IMP=0x0000000000006226
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2;	// IMP=0x00000000000061a0
- (id)notificationSystemSettingsForDestination:(id)arg1;	// IMP=0x000000000000611d
- (id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x0000000000006086
- (id)notificationSectionSettingsForDestination:(id)arg1;	// IMP=0x0000000000006003
- (void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000005f10
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000005e2d
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;	// IMP=0x0000000000005c6b
- (void)withdrawNotificationRequest:(id)arg1;	// IMP=0x0000000000005839
- (void)modifyNotificationRequest:(id)arg1;	// IMP=0x0000000000005407
- (void)postNotificationRequest:(id)arg1;	// IMP=0x0000000000005280
- (_Bool)canReceiveNotificationRequest:(id)arg1;	// IMP=0x0000000000005278
@property(readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic, getter=isAlertDestination) _Bool alertDestination;
- (void)setDestination:(id)arg1 ready:(_Bool)arg2;	// IMP=0x00000000000051de
- (id)destinationsForRequestDestinations:(id)arg1;	// IMP=0x000000000000515b
- (_Bool)isRegisteredDestination:(id)arg1;	// IMP=0x00000000000050e4
- (void)setDestination:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000005056
- (void)unregisterDestination:(id)arg1;	// IMP=0x0000000000004fd5
- (void)registerDestination:(id)arg1;	// IMP=0x0000000000004f53
- (id)init;	// IMP=0x0000000000004ede

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

