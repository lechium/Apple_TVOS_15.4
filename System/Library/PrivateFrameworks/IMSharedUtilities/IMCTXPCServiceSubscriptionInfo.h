//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionInfo, NSArray;

@interface IMCTXPCServiceSubscriptionInfo : NSObject
{
    CTXPCServiceSubscriptionInfo *_subscriptionInfo;	// 8 = 0x8
    NSArray *_phoneNumbersOfActiveSubscriptions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007625e
@property(retain, nonatomic) NSArray *phoneNumbersOfActiveSubscriptions; // @synthesize phoneNumbersOfActiveSubscriptions=_phoneNumbersOfActiveSubscriptions;
@property(retain, nonatomic) CTXPCServiceSubscriptionInfo *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
- (id)__im_contactPreferredSubscriptionContextForChatHandleIDs:(id)arg1;	// IMP=0x000000000007616f
- (id)_senderIdentityManager;	// IMP=0x0000000000076156
- (id)__im_subscriptionContextForSenderIdentity:(id)arg1;	// IMP=0x0000000000075fce
- (id)__im_subscriptionContextOrDefaultForForSimID:(id)arg1 phoneNumber:(id)arg2;	// IMP=0x0000000000075f85
- (id)__im_subscriptionContextForForSimID:(id)arg1 phoneNumber:(id)arg2;	// IMP=0x0000000000075c05
- (id)__im_subscriptionContextForPhoneNumberOrDefault:(id)arg1;	// IMP=0x0000000000075963
- (id)__im_subscriptionContextForForSimID:(id)arg1;	// IMP=0x000000000007572b
- (id)__im_subscriptionContextForPhoneNumber:(id)arg1;	// IMP=0x0000000000075502
- (id)__im_subscriptionContextOrDefaultForForSlotID:(long long)arg1;	// IMP=0x00000000000754b9
- (id)__im_subscriptionContextForForSlotID:(long long)arg1;	// IMP=0x000000000007534d
- (id)__imSIMIDForSubscriptionSlot:(long long)arg1;	// IMP=0x000000000007518a
- (long long)__imSlotIDSForPhoneNumber:(id)arg1;	// IMP=0x0000000000074f9a
- (id)__im_labelForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x0000000000074efc
- (id)__im_phoneNumberForSlotIDOrDefault:(long long)arg1;	// IMP=0x0000000000074e6a
- (id)__im_phoneNumberForSlotID:(long long)arg1;	// IMP=0x0000000000074cfc
- (id)preferredOrDefaultSubscriptionContext;	// IMP=0x0000000000074abb
- (id)__im_switchSubscriptionContextFromPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x0000000000074a53
- (id)__im_switchSubscriptionContextFromSubscriptionContext:(id)arg1;	// IMP=0x0000000000074841
- (id)__im_preferredSubscriptionContext;	// IMP=0x0000000000074590
- (_Bool)__im_hasMultipleSubscriptions;	// IMP=0x00000000000742d0
- (_Bool)__im_onlyHasActiveSlots;	// IMP=0x0000000000074287
- (_Bool)__im_containsPhoneNumber:(id)arg1;	// IMP=0x0000000000074077
- (id)subscriptions;	// IMP=0x0000000000074004
- (id)allSubscriptions;	// IMP=0x0000000000073f91
- (id)__im_subscriptionsWithMMSSupport;	// IMP=0x0000000000073d66
- (id)initWithSubscriptionInfo:(id)arg1;	// IMP=0x0000000000073cfb
- (id)description;	// IMP=0x0000000000073c68

@end
