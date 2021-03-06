//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAssetFetchResult-Protocol.h>

@class NSString;
@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

@interface _PXWrappingDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult>
{
    struct _NSRange _range;	// 8 = 0x8
    id <PXDisplayAssetFetchResult> _displayFetchResult;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000578f10
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000578ef3
@property(readonly, nonatomic) long long count;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;	// IMP=0x0000000000578ed3
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;	// IMP=0x0000000000578ebd
- (_Bool)containsObject:(id)arg1;	// IMP=0x0000000000578ea7
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x0000000000578dc6
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000578db4
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000578d97
@property(readonly, copy) NSString *description;
- (id)initWithFetchResult:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000578b3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

