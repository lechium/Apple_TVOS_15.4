//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryDisplayAssetFetchResult-Protocol.h>

@class NSString, PXStoryResourcesDataSource, PXStoryReusableDisplayAsset;
@protocol PXDisplayAsset;

@interface _PXStoryDummyDisplayAssetsFetchResult : NSObject <PXStoryDisplayAssetFetchResult>
{
    long long _capacity;	// 8 = 0x8
    long long *_resourceIndexes;	// 16 = 0x10
    PXStoryReusableDisplayAsset *_asset;	// 24 = 0x18
    PXStoryResourcesDataSource *_resourcesDataSource;	// 32 = 0x20
    long long _count;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002a21af
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // @synthesize resourcesDataSource=_resourcesDataSource;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a2121
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;	// IMP=0x00000000002a20a7
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;	// IMP=0x00000000002a202d
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000002a1faa
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000002a1e95
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000002a1e83
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a1e27
- (id)storyDisplayAssetAtIndex:(long long)arg1;	// IMP=0x00000000002a1dcd
@property(readonly, nonatomic) const long long *resourceIndexes;
- (void)setCount:(long long)arg1;	// IMP=0x00000000002a1d76
- (void)configureWithRange:(struct _NSRange)arg1;	// IMP=0x00000000002a1d2d
- (void)dealloc;	// IMP=0x00000000002a1cf3
- (id)initWithResourcesDataSource:(id)arg1;	// IMP=0x00000000002a1c88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

