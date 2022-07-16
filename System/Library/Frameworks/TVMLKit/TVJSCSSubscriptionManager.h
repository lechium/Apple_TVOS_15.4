//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/TVJSCSSubscriptionManager-Protocol.h>

@class CSSubscriptionManager;

__attribute__((visibility("hidden")))
@interface TVJSCSSubscriptionManager : NSObject <TVJSCSSubscriptionManager>
{
    CSSubscriptionManager *_subscriptionManager;	// 8 = 0x8
}

+ (void)configureJSContext:(id)arg1;	// IMP=0x00000000000d25b4
- (void).cxx_destruct;	// IMP=0x00000000000d27e6
@property(retain, nonatomic) CSSubscriptionManager *subscriptionManager; // @synthesize subscriptionManager=_subscriptionManager;
- (void)unregisterAllSubscriptions;	// IMP=0x00000000000d278e
- (void)unregisterSubscription:(id)arg1;	// IMP=0x00000000000d271c
- (void)registerSubscription:(id)arg1:(id)arg2;	// IMP=0x00000000000d2696
- (id)init;	// IMP=0x00000000000d2630

@end

