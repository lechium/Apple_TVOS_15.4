//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSPredicate, NSSet, PHAsset, PHCollection, PHFetchResult, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PXPhotosDataSourceConfiguration : NSObject
{
    _Bool _canIncludeUnsavedSyndicatedAssets;	// 8 = 0x8
    _Bool _hideHiddenAssets;	// 9 = 0x9
    _Bool _wantsCurationByDefault;	// 10 = 0xa
    PHFetchResult *_collectionListFetchResult;	// 16 = 0x10
    PHCollection *_containerCollection;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
    NSDictionary *_existingAssetCollectionFetchResults;	// 40 = 0x28
    NSDictionary *_existingKeyAssetsFetchResults;	// 48 = 0x30
    PHAsset *_referenceAsset;	// 56 = 0x38
    NSPredicate *_basePredicate;	// 64 = 0x40
    NSPredicate *_filterPredicate;	// 72 = 0x48
    NSSet *_allowedUUIDs;	// 80 = 0x50
    NSSet *_allowedOIDs;	// 88 = 0x58
    NSArray *_filterPersons;	// 96 = 0x60
    PHPhotoLibrary *_photoLibrary;	// 104 = 0x68
    NSArray *_fetchPropertySets;	// 112 = 0x70
    long long _curationType;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_clientQueue;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000074ecd8
@property(nonatomic) _Bool wantsCurationByDefault; // @synthesize wantsCurationByDefault=_wantsCurationByDefault;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) long long curationType; // @synthesize curationType=_curationType;
@property(retain, nonatomic) NSArray *fetchPropertySets; // @synthesize fetchPropertySets=_fetchPropertySets;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) _Bool hideHiddenAssets; // @synthesize hideHiddenAssets=_hideHiddenAssets;
@property(retain, nonatomic) NSArray *filterPersons; // @synthesize filterPersons=_filterPersons;
@property(retain, nonatomic) NSSet *allowedOIDs; // @synthesize allowedOIDs=_allowedOIDs;
@property(retain, nonatomic) NSSet *allowedUUIDs; // @synthesize allowedUUIDs=_allowedUUIDs;
@property(nonatomic) _Bool canIncludeUnsavedSyndicatedAssets; // @synthesize canIncludeUnsavedSyndicatedAssets=_canIncludeUnsavedSyndicatedAssets;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) NSPredicate *basePredicate; // @synthesize basePredicate=_basePredicate;
@property(retain, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property(retain, nonatomic) NSDictionary *existingKeyAssetsFetchResults; // @synthesize existingKeyAssetsFetchResults=_existingKeyAssetsFetchResults;
@property(retain, nonatomic) NSDictionary *existingAssetCollectionFetchResults; // @synthesize existingAssetCollectionFetchResults=_existingAssetCollectionFetchResults;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) PHCollection *containerCollection; // @synthesize containerCollection=_containerCollection;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
- (id)initWithAssetCollection:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000074e943
- (id)initWithAssetFetchResult:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000074e82a
- (id)initWithCollectionListFetchResult:(id)arg1 containerCollection:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000074e713
- (id)initWithCollectionListFetchResult:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000074e6fc
- (id)init;	// IMP=0x000000000074e689

@end

