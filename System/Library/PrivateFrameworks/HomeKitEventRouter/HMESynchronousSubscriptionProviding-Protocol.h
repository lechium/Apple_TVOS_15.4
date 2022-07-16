//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitEventRouter/NSObject-Protocol.h>

@class NSArray;
@protocol HMEEventConsumer;

@protocol HMESynchronousSubscriptionProviding <NSObject>
- (void)unregisterConsumerSync:(id <HMEEventConsumer>)arg1 completion:(void (^)(NSError *))arg2;
- (void)changeRegistrationsSyncForConsumer:(id <HMEEventConsumer>)arg1 topicFilterAdditions:(NSArray *)arg2 topicFilterRemovals:(NSArray *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
@end
