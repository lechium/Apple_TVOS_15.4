//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionFairPlayController : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_fairPlaySerialQueue;	// 16 = 0x10
    NSMutableDictionary *_subscriptionKeyBagStatusCache;	// 24 = 0x18
}

+ (id)sharedController;	// IMP=0x00000000001b05e4
- (void).cxx_destruct;	// IMP=0x00000000001b0550
- (void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)arg1;	// IMP=0x00000000001b0504
- (void)stopSubscriptionLeaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b0489
- (void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b040c
- (void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned int)arg2 machineIDData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b038f
- (void)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b0312
- (void)importSubscriptionKeyBagData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b0295
- (void)getKeyStatusListWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b0218
- (id)getKeyStatusForAccountUniqueIdentifier:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000001b01da
- (id)_init;	// IMP=0x00000000001b00d3

@end

