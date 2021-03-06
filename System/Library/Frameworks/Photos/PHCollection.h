//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSManagedObjectID, NSSortDescriptor, NSString;
@protocol PHCollectionPresentationHints;

@interface PHCollection
{
    _Bool _trashed;	// 16 = 0x10
    _Bool _customSortAscending;	// 17 = 0x11
    unsigned int _customSortKey;	// 20 = 0x14
    unsigned long long _estimatedPhotosCount;	// 24 = 0x18
    unsigned long long _estimatedVideosCount;	// 32 = 0x20
    NSDate *_creationDate;	// 40 = 0x28
    NSString *_localizedSubtitle;	// 48 = 0x30
}

+ (id)fetchFilteredAssetCollections:(id)arg1 containingAssetsMatchingPredicate:(id)arg2;	// IMP=0x0000000000196c85
+ (id)fetchMomentsForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x0000000000196b67
+ (id)fetchMomentsForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x0000000000196a49
+ (id)fetchMomentsForAssetsWithOIDs:(id)arg1 options:(id)arg2;	// IMP=0x000000000019692b
+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x000000000019680d
+ (id)predicateForUserCollections;	// IMP=0x00000000001967cb
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;	// IMP=0x000000000019665f
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;	// IMP=0x00000000001963ef
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000196326
+ (id)entityKeyMap;	// IMP=0x00000000001962d0
+ (_Bool)managedObjectSupportsTrashedState;	// IMP=0x00000000001962c8
+ (id)fetchType;	// IMP=0x00000000001962a9
+ (id)managedEntityName;	// IMP=0x000000000019629c
- (void).cxx_destruct;	// IMP=0x000000000019626b
@property(readonly, nonatomic) unsigned int customSortKey; // @synthesize customSortKey=_customSortKey;
@property(readonly, nonatomic) _Bool customSortAscending; // @synthesize customSortAscending=_customSortAscending;
@property(readonly, nonatomic, getter=isTrashed) _Bool trashed; // @synthesize trashed=_trashed;
@property(readonly, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned long long estimatedVideosCount; // @synthesize estimatedVideosCount=_estimatedVideosCount;
@property(readonly, nonatomic) unsigned long long estimatedPhotosCount; // @synthesize estimatedPhotosCount=_estimatedPhotosCount;
- (id)description;	// IMP=0x000000000019612d
@property(readonly, nonatomic) _Bool startsAtEnd;
@property(readonly, copy, nonatomic) id <PHCollectionPresentationHints> presentationHints;
@property(readonly, nonatomic) _Bool isUserSmartAlbum;
@property(readonly, nonatomic) _Bool isAlbumContentTitleSort;
@property(readonly, nonatomic) _Bool isAlbumContentSort;
@property(readonly, copy, nonatomic) NSSortDescriptor *defaultSortDescriptor;
@property(readonly, copy, nonatomic) NSString *effectiveCustomSortKey;
- (id)_effectiveSortDescriptorsFromCustomSortKey:(id)arg1;	// IMP=0x0000000000195f27
@property(readonly, copy, nonatomic) NSArray *effectiveCustomSortDescriptors;
- (unsigned long long)ancestryIndexOfCollectionList:(id)arg1 context:(id)arg2;	// IMP=0x0000000000195c18
@property(readonly, nonatomic) NSManagedObjectID *parentFolderID;
- (unsigned long long)collectionFixedOrderPriority;	// IMP=0x0000000000195c00
- (_Bool)collectionHasFixedOrder;	// IMP=0x0000000000195bf8
- (_Bool)isDeleted;	// IMP=0x0000000000195bb1
@property(readonly, nonatomic) _Bool hasLocationInfo;
@property(readonly, nonatomic) _Bool hasLocalizedTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
- (_Bool)canPerformEditOperation:(long long)arg1;	// IMP=0x0000000000195b51
@property(readonly, nonatomic) _Bool canContainCollections;
@property(readonly, nonatomic) _Bool canContainAssets;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;	// IMP=0x0000000000195a05
- (id)objectReference;	// IMP=0x0000000000153725

@end

