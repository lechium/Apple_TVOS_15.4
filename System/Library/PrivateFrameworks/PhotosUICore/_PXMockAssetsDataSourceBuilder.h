//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXMockDataSourceBuilder-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface _PXMockAssetsDataSourceBuilder : NSObject <PXMockDataSourceBuilder>
{
    NSMutableArray *_mutableAssetsBySection;	// 8 = 0x8
    NSMutableArray *_mutableAssetCollections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004055b
- (void)appendMockDisplayAssetsWithCount:(long long)arg1 assetProperties:(id)arg2;	// IMP=0x00000000000403b3
- (void)appendMockDisplayAssetSectionWithCount:(long long)arg1 assetProperties:(id)arg2 assetCollection:(id)arg3;	// IMP=0x00000000000401e9
@property(readonly, nonatomic) NSArray *assetCollections;
@property(readonly, nonatomic) NSArray *assetsBySection;
- (id)init;	// IMP=0x0000000000040138

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

