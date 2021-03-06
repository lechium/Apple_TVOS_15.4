//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLCircularRegion, NSString;

@interface REGeofenceRelevanceProvider
{
    CLCircularRegion *_region;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (id)relevanceSimulatorID;	// IMP=0x00000000000a5f69
- (void).cxx_destruct;	// IMP=0x00000000000a6554
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
- (id)description;	// IMP=0x00000000000a64a8
- (unsigned long long)_hash;	// IMP=0x00000000000a645b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a6376
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a6315
- (id)dictionaryEncoding;	// IMP=0x00000000000a6170
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000a5f76
- (id)initWithRegion:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000000000a5eb4
- (id)initWithRegion:(id)arg1;	// IMP=0x00000000000a5ea0
- (id)init;	// IMP=0x00000000000a5e60

@end

