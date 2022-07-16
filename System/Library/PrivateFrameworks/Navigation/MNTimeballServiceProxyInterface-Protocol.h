//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class MNPlannedDestination, MNRouteUpdateFreshness, NSArray, NSUUID;
@protocol MNTimeballServiceProxyDelegate;

@protocol MNTimeballServiceProxyInterface <NSObject>
@property(nonatomic) id <MNTimeballServiceProxyDelegate> delegate;
- (void)unsubscribeFromAllDestinations;
- (void)subscribeToAllDestinations;
- (void)unsubscribeFromDestination:(MNPlannedDestination *)arg1;
- (void)subscribeToDestination:(MNPlannedDestination *)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(NSArray *)arg2 freshness:(MNRouteUpdateFreshness *)arg3 handlerID:(NSUUID *)arg4;
@end
