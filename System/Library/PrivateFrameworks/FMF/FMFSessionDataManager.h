//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface FMFSessionDataManager : NSObject
{
    NSSet *_followers;	// 8 = 0x8
    NSSet *_following;	// 16 = 0x10
    NSSet *_locations;	// 24 = 0x18
    NSSet *_fences;	// 32 = 0x20
    NSMutableDictionary *_locationsCache;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000000000cfb2
- (void).cxx_destruct;	// IMP=0x000000000000dd52
@property(retain, nonatomic) NSMutableDictionary *locationsCache; // @synthesize locationsCache=_locationsCache;
@property(retain, nonatomic) NSSet *fences; // @synthesize fences=_fences;
@property(retain, nonatomic) NSSet *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSSet *following; // @synthesize following=_following;
@property(retain, nonatomic) NSSet *followers; // @synthesize followers=_followers;
- (id)favoritesOrdered;	// IMP=0x000000000000dbea
- (void)abPreferencesDidChange;	// IMP=0x000000000000db2b
- (void)abDidChange;	// IMP=0x000000000000da6c
- (id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2;	// IMP=0x000000000000d910
- (id)locationForHandle:(id)arg1;	// IMP=0x000000000000d6d0
- (id)followingForHandle:(id)arg1;	// IMP=0x000000000000d64d
- (id)followerForHandle:(id)arg1;	// IMP=0x000000000000d5ca

@end

