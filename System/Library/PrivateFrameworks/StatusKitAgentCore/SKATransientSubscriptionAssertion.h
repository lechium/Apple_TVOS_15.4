//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_activity;

__attribute__((visibility("hidden")))
@interface SKATransientSubscriptionAssertion : NSObject
{
    NSString *_subscriptionIdentifier;	// 8 = 0x8
    NSObject<OS_os_activity> *_osActivity;	// 16 = 0x10
}

+ (id)logger;	// IMP=0x0000000000028061
- (void).cxx_destruct;	// IMP=0x00000000000280d1
@property(readonly, nonatomic) NSObject<OS_os_activity> *osActivity; // @synthesize osActivity=_osActivity;
@property(readonly, copy, nonatomic) NSString *subscriptionIdentifier; // @synthesize subscriptionIdentifier=_subscriptionIdentifier;
- (void)dealloc;	// IMP=0x0000000000027fe6
- (unsigned long long)hash;	// IMP=0x0000000000027fa2
- (_Bool)isEqualToTransientSubscription:(id)arg1;	// IMP=0x0000000000027ef0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000027e93
- (id)description;	// IMP=0x0000000000027e0b
- (id)initWithSubscriptionIdentifier:(id)arg1;	// IMP=0x0000000000027d22

@end

