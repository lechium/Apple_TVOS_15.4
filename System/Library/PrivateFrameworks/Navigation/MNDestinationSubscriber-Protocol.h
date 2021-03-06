//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class MNPlannedDestination, MNRouteUpdate, MNTimeballService, NSError;

@protocol MNDestinationSubscriber <NSObject>

@optional
- (void)timeballService:(MNTimeballService *)arg1 didReceiveError:(NSError *)arg2 forDestination:(MNPlannedDestination *)arg3;
- (void)timeballService:(MNTimeballService *)arg1 didReceiveUpdate:(MNRouteUpdate *)arg2 forDestination:(MNPlannedDestination *)arg3;
- (void)timeballService:(MNTimeballService *)arg1 willMakeNetworkRequestForDestination:(MNPlannedDestination *)arg2;
@end

