//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDMediaDestinationControllerMetricsEventDispatcherDataSource-Protocol.h>

@class HMDAppleMediaAccessory, HMDMediaDestinationController, HMMediaDestination, NSArray, NSUUID;
@protocol HMDMediaDestinationManager;

@protocol HMDMediaDestinationControllerDataSource <HMDMediaDestinationControllerMetricsEventDispatcherDataSource>
- (NSArray *)availableDestinationIdentifiersForMediaDestinationController:(HMDMediaDestinationController *)arg1;
- (HMMediaDestination *)mediaDestinationController:(HMDMediaDestinationController *)arg1 rootDestinationWithDecendantIdentifier:(NSUUID *)arg2;
- (HMMediaDestination *)mediaDestinationController:(HMDMediaDestinationController *)arg1 destinationWithParentIdentifier:(NSUUID *)arg2;
- (id <HMDMediaDestinationManager>)mediaDestinationController:(HMDMediaDestinationController *)arg1 destinationManagerWithIdentifier:(NSUUID *)arg2;
- (HMDAppleMediaAccessory *)targetAccessoryForMediaDestinationController:(HMDMediaDestinationController *)arg1;
@end

