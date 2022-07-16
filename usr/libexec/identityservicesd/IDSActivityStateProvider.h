//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMUserDefaults, NSSet, NSString;

@interface IDSActivityStateProvider : NSObject
{
    IMUserDefaults *_userDefaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000270880
@property(retain, nonatomic) IMUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (id)storedSubscriptionsForActivity:(id)arg1;	// IMP=0x0010000000270430
- (void)removeSubscriptionForActivity:(id)arg1 subActivity:(id)arg2;	// IMP=0x001000000026fe90
- (void)storeSubscription:(id)arg1 forActivity:(id)arg2;	// IMP=0x001000000026f8a0
- (void)storeUpdates:(id)arg1 forActivity:(id)arg2;	// IMP=0x001000000026f600
- (id)storedUpdatesForActivity:(id)arg1;	// IMP=0x001000000026f1d0
- (void)storeActivityDescription:(id)arg1 forActivity:(id)arg2;	// IMP=0x001000000026eee0
- (id)storedDescriptionForActivity:(id)arg1;	// IMP=0x001000000026ebe0
@property(readonly, nonatomic) _Bool hasActiveSubscription;
@property(retain, nonatomic) NSSet *storedActivityTopics;
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x001000000026de70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
