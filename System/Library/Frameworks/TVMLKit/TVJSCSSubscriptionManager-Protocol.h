//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/JSExport-Protocol.h>

@class NSDate, NSString;

@protocol TVJSCSSubscriptionManager <JSExport>
- (void)unregisterAllSubscriptions;
- (void)unregisterSubscription:(NSString *)arg1;
- (void)registerSubscription:(NSString *)arg1:(NSDate *)arg2;
- (id)init;
@end

