//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAssetFetchResult-Protocol.h>

@class NSIndexSet, NSString;
@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

@interface _PXDisplayAssetIndexSubfetchResult : NSObject <PXDisplayAssetFetchResult>
{
    id <PXDisplayAssetFetchResult> _originalFetchResult;	// 8 = 0x8
    NSIndexSet *_indexSet;	// 16 = 0x10
    long long *_indexMap;	// 24 = 0x18
    long long _count;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000057a51b
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x000000000057a4f0
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;	// IMP=0x000000000057a47d
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;	// IMP=0x000000000057a40a
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000057a3be
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000057a23d
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000057a22b
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000057a20a
@property(readonly, copy) NSString *description;
- (void)dealoc;	// IMP=0x000000000057a13d
- (id)initWithFetchResult:(id)arg1 indexSet:(id)arg2;	// IMP=0x0000000000579eb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

