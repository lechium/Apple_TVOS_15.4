//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHLShazamLibrary, SHMediaLibraryAccountListener, SHMediaLibraryContext, SHMediaLibraryDataStore, SHMediaLibrarySnapshot;
@protocol OS_dispatch_group, OS_dispatch_queue, SHMediaLibrarySyncDelegate;

__attribute__((visibility("hidden")))
@interface SHMediaLibraryController : NSObject
{
    _Bool _dataStoreShouldPersistChanges;	// 8 = 0x8
    id <SHMediaLibrarySyncDelegate> delegate;	// 16 = 0x10
    SHMediaLibrarySnapshot *_currentSnapshot;	// 24 = 0x18
    SHLShazamLibrary *_remoteLibrary;	// 32 = 0x20
    SHMediaLibraryDataStore *_dataStore;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_syncGroup;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_syncQueue;	// 64 = 0x40
    SHMediaLibraryContext *_currentContext;	// 72 = 0x48
    SHMediaLibraryAccountListener *_accountListener;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000012bd9
@property(retain, nonatomic) SHMediaLibraryAccountListener *accountListener; // @synthesize accountListener=_accountListener;
@property(retain, nonatomic) SHMediaLibraryContext *currentContext; // @synthesize currentContext=_currentContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *syncGroup; // @synthesize syncGroup=_syncGroup;
@property(readonly, nonatomic) _Bool dataStoreShouldPersistChanges; // @synthesize dataStoreShouldPersistChanges=_dataStoreShouldPersistChanges;
@property(retain, nonatomic) SHMediaLibraryDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) SHLShazamLibrary *remoteLibrary; // @synthesize remoteLibrary=_remoteLibrary;
@property(nonatomic) __weak id <SHMediaLibrarySyncDelegate> delegate; // @synthesize delegate;
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x0010000000012ae6
@property(retain, nonatomic) SHMediaLibrarySnapshot *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
- (void)libraryDataStore:(id)arg1 didUpdateWithChange:(id)arg2;	// IMP=0x00100000000129d9
- (void)currentLibraryAccountHasChanged;	// IMP=0x0010000000012904
- (id)mapInternalLibraryErrorToMediaLibrary:(id)arg1;	// IMP=0x00100000000127fc
- (void)resetDataIfNeededForSyncError:(id)arg1;	// IMP=0x001000000001270a
- (void)handleLibraryError:(id)arg1 failedItemIdentifiers:(id)arg2;	// IMP=0x0010000000012566
- (void)persistChangesAndCompleteSyncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000121da
- (void)beginLibrarySync;	// IMP=0x00100000000120f2
- (void)library:(id)arg1 didCompleteSyncWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000120dd
- (void)library:(id)arg1 didProduceError:(id)arg2 withFailedItemIdentifiers:(id)arg3 syncAction:(long long)arg4;	// IMP=0x00100000000120c5
- (void)library:(id)arg1 didDeleteItemsWithIdentifiers:(id)arg2 syncAction:(long long)arg3;	// IMP=0x0010000000011f56
- (void)library:(id)arg1 didChangeGroups:(id)arg2 syncAction:(long long)arg3;	// IMP=0x0010000000011c29
- (void)library:(id)arg1 didChangeTracks:(id)arg2 syncAction:(long long)arg3;	// IMP=0x00100000000118fc
- (void)libraryWillBeginSync:(id)arg1;	// IMP=0x00100000000118ea
- (id)shazamLibrarySyncStartConditionForMediaLibraryStartCondition:(id)arg1;	// IMP=0x00100000000117f2
- (id)unsyncedTrackChangeset;	// IMP=0x00100000000115a5
- (id)unsyncedGroupChangeset;	// IMP=0x001000000001135e
- (void)_synchronizeRemoteSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x0010000000010bdb
- (void)synchronizeRemoteSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x001000000001081c
- (void)synchronizeLocalSnapshot:(id)arg1;	// IMP=0x001000000000fde1
- (void)_libraryInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fd6f
- (void)_fetchLibraryTracksWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fb77
- (void)synchronizeWithContext:(id)arg1;	// IMP=0x001000000000f734
- (void)commonInitWithDataStore:(id)arg1 remoteLibrary:(id)arg2 accountListener:(id)arg3;	// IMP=0x001000000000f61c
- (id)initWithDataStore:(id)arg1 remoteLibrary:(id)arg2 accountListener:(id)arg3;	// IMP=0x001000000000f573
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x001000000000f47d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
