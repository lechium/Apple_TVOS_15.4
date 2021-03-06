//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKitAgentCore/NSObject-Protocol.h>

@class NSArray, NSData, NSDate, NSString;

@protocol SKAChannelManaging <NSObject>
- (NSDate *)serverTime;
- (void)unsubscribeFromChannels:(NSArray *)arg1;
- (void)subscribeToChannels:(NSArray *)arg1;
- (void)activeChannelSubscriptionsWithCompletion:(void (^)(NSArray *))arg1;
- (void)publishData:(NSData *)arg1 onChannel:(NSString *)arg2 withChannelToken:(NSData *)arg3 publishInitiateTime:(NSDate *)arg4 isPendingPublish:(_Bool)arg5 isScheduledPublish:(_Bool)arg6 retryCount:(unsigned long long)arg7 completion:(void (^)(NSError *))arg8;
- (void)createChannelWithCompletion:(void (^)(NSString *, NSData *, NSError *))arg1;
@end

