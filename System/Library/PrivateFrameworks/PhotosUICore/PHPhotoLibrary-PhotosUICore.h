//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

@class PHFetchOptions, PXPhotoLibraryLocalDefaults;

@interface PHPhotoLibrary (PhotosUICore)
+ (id)px_systemPhotoLibrary;	// IMP=0x00000000005525c9
+ (id)px_appPhotoLibrary;	// IMP=0x0000000000552501
+ (id)px_deprecated_appPhotoLibrary;	// IMP=0x00000000005524ef
- (id)px_collectionListWithLocalIdentifier:(id)arg1;	// IMP=0x000000000055209e
- (id)px_collectionListWithTransientIdentifier:(id)arg1;	// IMP=0x0000000000552032
- (id)px_assetCollectionWithTransientIdentifier:(id)arg1;	// IMP=0x0000000000551fc6
- (id)px_memoryWithLocalIdentifier:(id)arg1;	// IMP=0x0000000000551ee1
- (id)px_assetCollectionWithLocalIdentifier:(id)arg1;	// IMP=0x0000000000551d89
- (id)px_assetCollectionForSmartAlbumWithSubtype:(long long)arg1;	// IMP=0x0000000000551bc8
- (id)px_objectWithLocalIdentifier:(id)arg1;	// IMP=0x0000000000551a2d
- (_Bool)px_fetchHasNoVisibleAssets;	// IMP=0x0000000000551981
@property(readonly) PXPhotoLibraryLocalDefaults *px_localDefaults;
@property(readonly, nonatomic, getter=px_areChangesPaused) _Bool px_changesPaused;
- (void)px_endPausingChanges:(id)arg1;	// IMP=0x000000000055182b
- (id)px_beginPausingChangesWithTimeout:(double)arg1 identifier:(id)arg2;	// IMP=0x000000000055179e
- (void)px_unregisterChangeObserver:(id)arg1;	// IMP=0x000000000055172c
- (void)px_registerChangeObserver:(id)arg1;	// IMP=0x00000000005516ba
- (id)px_changeDistributor;	// IMP=0x000000000055161a
@property(readonly, copy, nonatomic) PHFetchOptions *px_standardLibrarySpecificFetchOptions;
@end

