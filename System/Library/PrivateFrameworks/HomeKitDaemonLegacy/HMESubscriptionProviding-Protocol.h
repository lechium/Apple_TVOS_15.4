//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class NSArray;
@protocol HMEEventConsumer, HMESynchronousSubscriptionProviding;

@protocol HMESubscriptionProviding <NSObject>
- (void)unregisterConsumer:(id <HMEEventConsumer>)arg1 completion:(void (^)(NSError *))arg2;
- (void)unregisterConsumer:(id <HMEEventConsumer>)arg1 topicFilters:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)registerConsumer:(id <HMEEventConsumer>)arg1 topicFilters:(NSArray *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)changeRegistrationsForConsumer:(id <HMEEventConsumer>)arg1 topicFilterAdditions:(NSArray *)arg2 topicFilterRemovals:(NSArray *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;

@optional
- (id <HMESynchronousSubscriptionProviding>)synchronousSubscriptionProvider;
@end

