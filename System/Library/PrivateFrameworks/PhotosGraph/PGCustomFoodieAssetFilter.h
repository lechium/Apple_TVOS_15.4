//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGAssetFilter-Protocol.h>

@class NSDictionary, NSString;

@interface PGCustomFoodieAssetFilter : NSObject <PGAssetFilter>
{
    NSDictionary *_confidenceThresholdByFoodSceneIdentifier;	// 8 = 0x8
    NSDictionary *_confidenceThresholdByDrinkSceneIdentifier;	// 16 = 0x10
    NSDictionary *_confidenceThresholdByForbiddenSceneIdentifiers;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004a94e6
+ (id)name;	// IMP=0x00000000004a94d9
- (void).cxx_destruct;	// IMP=0x00000000004a94a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004a945b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004a9455
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004a9443
- (_Bool)_passesWithAsset:(id)arg1 curationContext:(id)arg2;	// IMP=0x00000000004a8eaf
- (id)filteredAssetsFromAssets:(id)arg1 curationContext:(id)arg2;	// IMP=0x00000000004a8cde
- (id)init;	// IMP=0x00000000004a8bff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
