//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SALocalSearchMapItem;

@interface SALocalSearchAddItemToMapCache
{
}

+ (id)addItemToMapCacheWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002cb42
+ (id)addItemToMapCache;	// IMP=0x000000000002cb30
- (_Bool)requiresResponse;	// IMP=0x000000000002cb6e
@property(retain, nonatomic) SALocalSearchMapItem *mapItem;
- (id)encodedClassName;	// IMP=0x000000000002cb23
- (id)groupIdentifier;	// IMP=0x000000000002cb0f

@end
