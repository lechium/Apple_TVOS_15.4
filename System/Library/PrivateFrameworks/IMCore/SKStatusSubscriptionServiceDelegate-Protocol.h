//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@class SKStatusSubscription, SKStatusSubscriptionService;

@protocol SKStatusSubscriptionServiceDelegate <NSObject>

@optional
- (void)subscriptionServiceDaemonDisconnected:(SKStatusSubscriptionService *)arg1;
- (void)subscriptionStateChanged:(SKStatusSubscription *)arg1;
- (void)subscriptionReceivedStatusUpdate:(SKStatusSubscription *)arg1;
- (void)subscriptionInvitationReceived:(SKStatusSubscription *)arg1;
@end

