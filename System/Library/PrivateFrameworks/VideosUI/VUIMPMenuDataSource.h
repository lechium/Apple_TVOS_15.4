//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUILibraryDataSourceDelegate-Protocol.h>
#import <VideosUI/VUIMediaEntitiesFetchControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, VUILibraryFamilyMembersDataSource, VUIMediaEntitiesFetchController, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPMenuDataSource <VUIMediaEntitiesFetchControllerDelegate, VUILibraryDataSourceDelegate>
{
    _Bool _hasMediaEntitiesFetchCompleted;	// 8 = 0x8
    VUIMediaLibrary *_mediaLibrary;	// 16 = 0x10
    NSArray *_homeShares;	// 24 = 0x18
    VUIMediaEntitiesFetchController *_mediaEntitiesFetchController;	// 32 = 0x20
    NSDictionary *_categoryTypeByFetchRequestIdentifier;	// 40 = 0x28
    NSArray *_categoryTypes;	// 48 = 0x30
    NSDictionary *_mediaEntitiesByCategoryType;	// 56 = 0x38
    NSArray *_genreGroupings;	// 64 = 0x40
    VUIMediaEntitiesFetchController *_rentalsUpdateFetchController;	// 72 = 0x48
    VUILibraryFamilyMembersDataSource *_familyDataSource;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000b145d
@property(retain, nonatomic) VUILibraryFamilyMembersDataSource *familyDataSource; // @synthesize familyDataSource=_familyDataSource;
@property(retain, nonatomic) VUIMediaEntitiesFetchController *rentalsUpdateFetchController; // @synthesize rentalsUpdateFetchController=_rentalsUpdateFetchController;
@property(retain, nonatomic) NSArray *genreGroupings; // @synthesize genreGroupings=_genreGroupings;
@property(nonatomic) _Bool hasMediaEntitiesFetchCompleted; // @synthesize hasMediaEntitiesFetchCompleted=_hasMediaEntitiesFetchCompleted;
@property(retain, nonatomic) NSDictionary *mediaEntitiesByCategoryType; // @synthesize mediaEntitiesByCategoryType=_mediaEntitiesByCategoryType;
@property(retain, nonatomic) NSArray *categoryTypes; // @synthesize categoryTypes=_categoryTypes;
@property(retain, nonatomic) NSDictionary *categoryTypeByFetchRequestIdentifier; // @synthesize categoryTypeByFetchRequestIdentifier=_categoryTypeByFetchRequestIdentifier;
@property(retain, nonatomic) VUIMediaEntitiesFetchController *mediaEntitiesFetchController; // @synthesize mediaEntitiesFetchController=_mediaEntitiesFetchController;
@property(retain, nonatomic) NSArray *homeShares; // @synthesize homeShares=_homeShares;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_notifyDelegateFetchDidComplete;	// IMP=0x00000000000b1197
- (void)_accountsChanged:(id)arg1;	// IMP=0x00000000000b1037
- (_Bool)_allFetchesHaveCompleted;	// IMP=0x00000000000b1027
- (void)_populateViewModel:(id)arg1;	// IMP=0x00000000000b0b9d
- (void)_updateRentalShelf;	// IMP=0x00000000000b092b
- (CDUnknownBlockType)_categoryTypesSortComparator;	// IMP=0x00000000000b0909
- (id)_categoryTypesWithMediaEntitiesMap:(id)arg1 categoryTypeComparator:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b07cb
- (id)_constructCategoryList;	// IMP=0x00000000000b0520
- (id)_fetchRequestsWithMediaLibrary:(id)arg1 categoryTypeMap:(id *)arg2;	// IMP=0x00000000000afada
- (void)_loadMediaEntityShelves;	// IMP=0x00000000000af92d
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;	// IMP=0x00000000000af47b
- (void)_removeAccountChangedNotificationObserver;	// IMP=0x00000000000af41b
- (void)_addAccountChangedNotificationObserver;	// IMP=0x00000000000af3b4
- (void)_removeRentalsUpdateNotificationObserver;	// IMP=0x00000000000af354
- (void)_addRentalsUpdateNotificationObserver;	// IMP=0x00000000000af2ed
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;	// IMP=0x00000000000af28d
- (void)_removeMediaLibraryNotificationObservers;	// IMP=0x00000000000af246
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;	// IMP=0x00000000000af1df
- (void)_addMediaLibraryNotificationObservers;	// IMP=0x00000000000af198
- (id)_deviceMediaLibrary;	// IMP=0x00000000000af138
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x00000000000aef53
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;	// IMP=0x00000000000aeb53
- (_Bool)_addOrRemoveFamilySharingCategoryIfNeeded;	// IMP=0x00000000000ae926
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x00000000000ae8cd
- (void)refetch;	// IMP=0x00000000000ae7aa
- (void)startFetch;	// IMP=0x00000000000ae66f
- (void)dealloc;	// IMP=0x00000000000ae31d
- (id)initWithValidCategories:(id)arg1;	// IMP=0x00000000000ae2b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

