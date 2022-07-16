//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXBrowserSelectionSnapshot-Protocol.h>

@class NSArray, NSString, PXSectionedDataSource;

@interface PXCollectionsBrowserSelectionSnapshot : NSObject <PXBrowserSelectionSnapshot>
{
    NSArray *_indexPaths;	// 8 = 0x8
    PXSectionedDataSource *_dataSource;	// 16 = 0x10
    NSArray *_modelObjects;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008ebd62
- (long long)indexOfAssetReference:(id)arg1;	// IMP=0x00000000008ebd52
- (id)displayAssetAtIndex:(long long)arg1;	// IMP=0x00000000008ebcee
- (id)assetReferenceAtIndex:(long long)arg1;	// IMP=0x00000000008ebc7b
@property(readonly, nonatomic) NSArray *modelObjects;
@property(readonly, nonatomic) long long estimatedModelObjectsCount;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) long long assetCount;
@property(readonly, nonatomic) long long estimatedAssetCount;
- (id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000008eb93f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

