//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLDiagnosticsProvider-Protocol.h>
#import <PhotoLibraryServices/PLMomentData-Protocol.h>

@class CLLocation, NSArray, NSDate, NSObject, NSSet, NSString;
@protocol NSCopying, PLPhotosHighlightData;

@interface PLMoment <PLMomentData, PLDiagnosticsProvider>
{
    _Bool _loadedNameInfo;	// 8 = 0x8
    CLLocation *_cachedApproximateLocation;	// 16 = 0x10
    _Bool _didCacheApproximateLocation;	// 24 = 0x18
    struct CLLocationCoordinate2D _cachedCoordinate;	// 32 = 0x20
    _Bool _didCacheCoordinate;	// 48 = 0x30
    _Bool isRegisteredForChanges;	// 49 = 0x31
    _Bool didRegisteredWithUserInterfaceContext;	// 50 = 0x32
}

+ (id)sortByTimeSortDescriptors;	// IMP=0x00000000004de99d
+ (id)entityName;	// IMP=0x00000000004de990
+ (id)allAssetsIncludedInMomentsInLibrary:(id)arg1;	// IMP=0x00000000004de921
+ (id)baseSearchIndexPredicate;	// IMP=0x000000000000717d
+ (id)allAssetsInManagedObjectContext:(id)arg1 predicate:(id)arg2 IDsOnly:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000004e0149
+ (id)allInvalidAssetsInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004e00ba
+ (id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000004e0028
+ (id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000004dff96
+ (id)batchFetchMomentObjectIDsByAssetObjectIDsWithAssetObjectIDs:(id)arg1 andAssetPredicate:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x00000000004dfc0c
+ (id)batchFetchMomentObjectIDsByAssetObjectIDsWithAssetObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000004dfbf2
+ (void)batchFetchMomentUUIDsByAssetUUIDsWithAssetUUIDs:(id)arg1 library:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004df669
+ (id)predicateForInvalidAssets;	// IMP=0x00000000004df4dc
+ (id)predicateForInvalidAssetsIgnoringAssetsWithIdentifiers:(id)arg1;	// IMP=0x00000000004df3bc
+ (id)predicateForInvalidMoments;	// IMP=0x00000000004df2ba
+ (id)predicateForAssetsIncludedInMoments;	// IMP=0x00000000004df182
+ (id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004df07c
+ (id)momentsWithLocationTypeUnprocessedInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004def8c
+ (id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004dee9e
+ (id)allMomentsInManagedObjectContext:(id)arg1 predicate:(id)arg2 idsOnly:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000004dece9
+ (id)allInvalidMomentIDsInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004dec51
+ (id)allInvalidMomentsInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004debbc
+ (id)allMomentIDsInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004deb9f
+ (id)allMomentsInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004deb85
+ (id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004deb01
- (void).cxx_destruct;	// IMP=0x00000000004de90e
@property(nonatomic) _Bool didRegisteredWithUserInterfaceContext; // @synthesize didRegisteredWithUserInterfaceContext;
@property(nonatomic) _Bool isRegisteredForChanges; // @synthesize isRegisteredForChanges;
@property(readonly, nonatomic) short pl_originatorState;
@property(readonly, nonatomic) unsigned long long pl_numberOfAssets;
@property(readonly, nonatomic) struct CLLocationCoordinate2D pl_coordinate;
@property(readonly, nonatomic) CLLocation *pl_location;
@property(readonly, nonatomic) NSDate *pl_endDate;
@property(readonly, nonatomic) NSDate *pl_startDate;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
- (unsigned long long)fetchedAssetsCount;	// IMP=0x00000000004de539
@property(readonly, retain, nonatomic) NSArray *batchedAssets;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
- (void)removeAssetsObject:(id)arg1;	// IMP=0x00000000004de1e2
- (void)replaceObjectInAssets:(id)arg1 withObject:(id)arg2;	// IMP=0x00000000004de0ff
- (void)didTurnIntoFault;	// IMP=0x00000000004de0aa
- (id)mutableAssets;	// IMP=0x00000000004de091
- (void)willSave;	// IMP=0x00000000004ddf17
- (void)insertAssetData:(id)arg1;	// IMP=0x00000000004dde60
- (void)removeAssetData:(id)arg1;	// IMP=0x00000000004ddd3f
- (void)delete;	// IMP=0x00000000004ddcf3
- (id)diagnosticInformation;	// IMP=0x00000000004dd987
- (_Bool)supportsDiagnosticInformation;	// IMP=0x00000000004dd97f
- (void)unregisterForChanges;	// IMP=0x00000000004dd8c9
- (void)registerForChanges;	// IMP=0x00000000004dd80b
@property(retain, nonatomic) CLLocation *approximateLocation;
- (void)dealloc;	// IMP=0x00000000004dd639
- (void)willTurnIntoFault;	// IMP=0x00000000004dd5fb
- (void)awakeFromFetch;	// IMP=0x00000000004dd5ba
- (void)awakeFromInsert;	// IMP=0x00000000004dd538
- (unsigned long long)countForAssetsOfKind:(short)arg1;	// IMP=0x00000000004dd330
- (void)_appendLocationsInfo:(id)arg1 toCollection:(id)arg2;	// IMP=0x00000000000062b5
- (void)_appendWorkText:(id)arg1 toCollection:(id)arg2;	// IMP=0x0000000000006200
- (void)_appendHomeToCollection:(id)arg1;	// IMP=0x0000000000006178
- (void)_appendPublicEventCategories:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;	// IMP=0x0000000000005e59
- (void)_appendPublicEventStrings:(id)arg1 toCollection:(id)arg2 forSearchIndexCategory:(unsigned long long)arg3;	// IMP=0x0000000000005c7a
- (void)_appendBusinessCategories:(id)arg1 toCollection:(id)arg2;	// IMP=0x0000000000005aa9
- (void)_appendBusinessNames:(id)arg1 toCollection:(id)arg2;	// IMP=0x00000000000058d8
- (void)_appendROIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;	// IMP=0x00000000000055b9
- (void)_appendPOIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;	// IMP=0x000000000000529a
- (void)_appendHolidays:(id)arg1 toCollection:(id)arg2;	// IMP=0x00000000000050c9
- (void)_appendMeanings:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;	// IMP=0x0000000000004daa
- (void)_appendScenesWithIdentifiers:(id)arg1 toCollection:(id)arg2 sceneTaxonomy:(id)arg3;	// IMP=0x0000000000004d12
- (void)_appendDates:(id)arg1 withDateFormatter:(id)arg2 withSynonyms:(id)arg3 toCollection:(id)arg4;	// IMP=0x00000000000049bb
- (void)_appendSocialGroupIdentifiers:(id)arg1 toCollection:(id)arg2;	// IMP=0x00000000000047ee
- (void)_appendPersonsWithUUIDs:(id)arg1 toCollection:(id)arg2;	// IMP=0x00000000000044b7
- (void)getSearchIndexContentsForCollection:(id)arg1 fromDictionary:(id)arg2 withDateFormatter:(id)arg3 synonymsDictionaries:(id)arg4 sceneTaxonomy:(id)arg5;	// IMP=0x0000000000003ec9
- (id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;	// IMP=0x0000000000003a87
- (id)displayTitleWithDateFormatter:(id)arg1;	// IMP=0x00000000000039c6
- (id)bestAsset;	// IMP=0x00000000000037fd
- (struct CGImage *)posterImage;	// IMP=0x00000000004deaf9
- (id)groupURL;	// IMP=0x00000000004dea43
- (_Bool)isCloudSharedAlbum;	// IMP=0x00000000004dea3b

// Remaining properties
@property(nonatomic) float aggregationScore; // @dynamic aggregationScore;
@property(nonatomic) double approximateLatitude; // @dynamic approximateLatitude;
@property(nonatomic) double approximateLongitude; // @dynamic approximateLongitude;
@property(retain, nonatomic) NSSet *assets; // @dynamic assets;
@property(nonatomic) int cachedCount; // @dynamic cachedCount;
@property(nonatomic) int cachedPhotosCount; // @dynamic cachedPhotosCount;
@property(nonatomic) int cachedVideosCount; // @dynamic cachedVideosCount;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(nonatomic) double gpsHorizontalAccuracy; // @dynamic gpsHorizontalAccuracy;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <PLPhotosHighlightData> highlight; // @dynamic highlight;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames; // @dynamic localizedLocationNames;
@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(nonatomic) short originatorState; // @dynamic originatorState;
@property(nonatomic) unsigned short processedLocation; // @dynamic processedLocation;
@property(retain, nonatomic) NSDate *representativeDate; // @dynamic representativeDate;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(retain, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(readonly) Class superclass;
@property(nonatomic) int timeZoneOffset; // @dynamic timeZoneOffset;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

