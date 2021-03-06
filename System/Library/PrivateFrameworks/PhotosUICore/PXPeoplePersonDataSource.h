//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, PXPeopleFaceTileImageManager;

@interface PXPeoplePersonDataSource <PHPhotoLibraryChangeObserver>
{
    PXPeopleFaceTileImageManager *_imageManager;	// 8 = 0x8
    NSMutableDictionary *_keyFaceByPersonLocalIdentifier;	// 16 = 0x10
    NSDictionary *_assetsByFaces;	// 24 = 0x18
    unsigned long long _personFetchType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000087b8f5
@property(nonatomic) unsigned long long personFetchType; // @synthesize personFetchType=_personFetchType;
- (id)_assetForFace:(id)arg1;	// IMP=0x000000000087b869
- (id)_faceForPerson:(id)arg1;	// IMP=0x000000000087b7ff
- (id)faceTileAtIndex:(long long)arg1;	// IMP=0x000000000087b748
- (void)updateKeyFace:(id)arg1 forPerson:(id)arg2;	// IMP=0x000000000087b6b8
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x000000000087b44f
@property(readonly, nonatomic) PXPeopleFaceTileImageManager *imageManager;
- (id)generateFetchResult;	// IMP=0x000000000087b26a
- (void)cancelImageLoadingForItem:(id)arg1;	// IMP=0x000000000087b171
- (void)_asyncLoadImageForItem:(id)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 fastDisplayBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000087ae84
- (void)_asyncLoadImageForItem:(id)arg1 targetSize:(struct CGSize)arg2 displayScale:(double)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000087ab89
- (id)_membersForModelObjects:(id)arg1;	// IMP=0x000000000087a916
- (id)_applyChanges:(id)arg1;	// IMP=0x000000000087a5ce
- (long long)_personTypeForFetchType:(unsigned long long)arg1;	// IMP=0x000000000087a5c0
- (id)_fetchResultForFetchType:(unsigned long long)arg1 fetchOptions:(id)arg2;	// IMP=0x000000000087a511
- (id)_itemsArrayFromObjects:(id)arg1;	// IMP=0x000000000087a312
- (id)titleAtIndex:(unsigned long long)arg1;	// IMP=0x000000000087a2c2
- (void)_cacheFacesAndAssets;	// IMP=0x000000000087a07e
- (void)loadObjectsAndUpdateMembersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000879e61
- (void)stopListeningForChanges;	// IMP=0x0000000000879e0e
- (void)startListeningForChanges;	// IMP=0x0000000000879dbb
- (id)initWithName:(id)arg1 personFetchType:(unsigned long long)arg2 fetchLimit:(unsigned long long)arg3;	// IMP=0x0000000000879d1a
- (id)initWithName:(id)arg1 personFetchType:(unsigned long long)arg2;	// IMP=0x0000000000879b50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

