//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RERecentAction;

@interface RERecentActionRelevanceProvider
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    unsigned long long _actionIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b8567
@property(readonly, nonatomic) unsigned long long actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x00000000000b84ad
- (unsigned long long)_hash;	// IMP=0x00000000000b844f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b8375
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b8318
- (id)initWithBundleIdentifier:(id)arg1 actionIdentifier:(unsigned long long)arg2;	// IMP=0x00000000000b828c
- (id)init;	// IMP=0x00000000000b8271
@property(readonly, nonatomic) RERecentAction *recentAction;

@end

