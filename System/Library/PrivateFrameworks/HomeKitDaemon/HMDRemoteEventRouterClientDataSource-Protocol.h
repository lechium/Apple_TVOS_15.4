//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDRemoteEventRouterClient, HMFMessageDestination, NSUUID;

@protocol HMDRemoteEventRouterClientDataSource <NSObject>
- (_Bool)isNetworkAvailable;
- (_Bool)isCurrentDevicePrimaryResident;
- (_Bool)routerClientSupportsFragmentMessageForServerIdentifier:(NSUUID *)arg1;
- (HMFMessageDestination *)routerClientMessageDestination:(HMDRemoteEventRouterClient *)arg1 serverIdentifier:(out id *)arg2;
- (id)routerClientResidentManager:(HMDRemoteEventRouterClient *)arg1;
- (NSUUID *)routerClientPrimaryResidentDeviceIdentifier:(HMDRemoteEventRouterClient *)arg1;
@end

