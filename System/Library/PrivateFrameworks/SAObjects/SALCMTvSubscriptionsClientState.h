//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SALCMTvSubscriptionsClientState
{
}

+ (id)tvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001a2c0
+ (id)tvSubscriptionsClientState;	// IMP=0x000000000001a2ae
+ (id)uniqueObjectIdentifier;	// IMP=0x000000000001a280
+ (id)syncKey;	// IMP=0x000000000001a273
+ (id)persistencePolicy;	// IMP=0x000000000001a25f
+ (id)deliveryDeadline;	// IMP=0x000000000001a24b
@property(copy, nonatomic) NSArray *subscriptions;
- (id)encodedClassName;	// IMP=0x000000000001a2a1
- (id)groupIdentifier;	// IMP=0x000000000001a28d

@end

