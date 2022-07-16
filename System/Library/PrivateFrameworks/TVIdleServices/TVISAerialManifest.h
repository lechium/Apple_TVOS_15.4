//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TVISAerialManifest : NSObject
{
    unsigned long long _version;	// 8 = 0x8
    unsigned long long _initialAssetCount;	// 16 = 0x10
    NSArray *_assetIdentifiers;	// 24 = 0x18
    NSArray *_categoryIdentifiers;	// 32 = 0x20
    NSString *_SHA256;	// 40 = 0x28
    NSDictionary *_jsonObject;	// 48 = 0x30
}

+ (id)_fetchCategoryMappingForContext:(id)arg1;	// IMP=0x000000000001fe30
+ (_Bool)_isValidCategory:(id)arg1;	// IMP=0x000000000001fbe0
+ (_Bool)_isValidAsset:(id)arg1;	// IMP=0x000000000001f5f0
- (void).cxx_destruct;	// IMP=0x0000000000020250
@property(readonly, nonatomic) NSDictionary *jsonObject; // @synthesize jsonObject=_jsonObject;
@property(readonly, nonatomic) NSString *SHA256; // @synthesize SHA256=_SHA256;
@property(readonly, nonatomic) NSArray *categoryIdentifiers; // @synthesize categoryIdentifiers=_categoryIdentifiers;
@property(readonly, nonatomic) NSArray *assetIdentifiers; // @synthesize assetIdentifiers=_assetIdentifiers;
@property(readonly, nonatomic) unsigned long long initialAssetCount; // @synthesize initialAssetCount=_initialAssetCount;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (id)assetIdentifiersToGroupIdentifiers;	// IMP=0x000000000001f3d0
- (void)updateStoreWithContext:(id)arg1 skippingCategoryIdentifiers:(id)arg2 skippingAssetIdentifiers:(id)arg3 insertionCount:(long long *)arg4;	// IMP=0x000000000001e380
- (id)description;	// IMP=0x000000000001e170
- (id)initWithJSONObject:(id)arg1;	// IMP=0x000000000001d7b0

@end

