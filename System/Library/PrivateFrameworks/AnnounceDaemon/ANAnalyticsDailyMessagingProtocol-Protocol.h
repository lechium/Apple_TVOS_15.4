//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@protocol ANAnalyticsDailyMessagingProtocol
@property(readonly, nonatomic) _Bool isDeviceAnalyticsCoordinator;
@property(readonly, nonatomic) NSDictionary *devicesCountingAnnouncements;
- (void)sendDailyRequest:(id)arg1 handler:(void (^)(NSDictionary *))arg2;
- (void)registerDailyRequest:(NSDictionary * (^)(void))arg1;
@end
