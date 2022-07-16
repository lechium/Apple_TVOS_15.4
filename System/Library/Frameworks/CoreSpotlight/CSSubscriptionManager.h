//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PSSSSubscriptionManager;

@interface CSSubscriptionManager : NSObject
{
    PSSSSubscriptionManager *_internal;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x000000000000489f
- (void).cxx_destruct;	// IMP=0x0000000000004a2a
- (void)unregisterAllSubscriptions;	// IMP=0x0000000000004a14
- (void)unregisterSubscriptionWithInfo:(id)arg1;	// IMP=0x00000000000049fe
- (void)registerSubscriptionWithInfo:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00000000000049e8
- (id)init;	// IMP=0x00000000000048f4

@end

