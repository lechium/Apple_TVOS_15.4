//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaDestinationControllerMessageHandler, HMFMessage, HMMediaDestination, NSNotification, NSUUID;

@protocol HMDMediaDestinationControllerMessageHandlerDelegate
- (void)mediaDestinationControllerMessageHandler:(HMDMediaDestinationControllerMessageHandler *)arg1 didReceiveMediaDestinationControllerUpdatedDestinationNotification:(NSNotification *)arg2 destinationControllerIdentifier:(NSUUID *)arg3 destinationIdentifier:(NSUUID *)arg4;
- (void)mediaDestinationControllerMessageHandler:(HMDMediaDestinationControllerMessageHandler *)arg1 didReceiveAccessoryChangedRoomNotification:(NSNotification *)arg2;
- (void)mediaDestinationControllerMessageHandler:(HMDMediaDestinationControllerMessageHandler *)arg1 didReceiveMediaSystemRemovedNotification:(NSNotification *)arg2;
- (void)mediaDestinationControllerMessageHandler:(HMDMediaDestinationControllerMessageHandler *)arg1 didReceiveMediaSystemAddedNotification:(NSNotification *)arg2;
- (void)mediaDestinationControllerMessageHandler:(HMDMediaDestinationControllerMessageHandler *)arg1 didReceiveHomeAccessoryRemovedNotification:(NSNotification *)arg2 destination:(HMMediaDestination *)arg3;
- (void)mediaDestinationControllerMessageHandler:(HMDMediaDestinationControllerMessageHandler *)arg1 didReceiveMediaDestinationUpdatedNotification:(NSNotification *)arg2;
- (void)mediaDestinationControllerMessageHandler:(HMDMediaDestinationControllerMessageHandler *)arg1 didReceiveMediaDestinationControllerUpdateDestinationRequestMessage:(HMFMessage *)arg2 destinationIdentifier:(NSUUID *)arg3 updateOptions:(unsigned long long)arg4;
@end

