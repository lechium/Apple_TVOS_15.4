//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLLibraryServicesManager;
@protocol OS_dispatch_queue;

@interface PLDelayedSaveActionsProcessor : NSObject
{
    PLLibraryServicesManager *_libraryServicesManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_coreDuetCallback;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000035f0e8
- (void)_processDelayedMemoriesAssetUpdate:(id)arg1 library:(id)arg2 transaction:(id)arg3;	// IMP=0x000000000035f018
- (void)_deleteUUIDs:(id)arg1 fromCoreDuetStreams:(id)arg2 transaction:(id)arg3;	// IMP=0x000000000035f012
- (void)_processDelayedMemoriesForDuetDelete:(id)arg1 transaction:(id)arg2;	// IMP=0x000000000035f00c
- (void)_processDelayedAssetsForDuetDelete:(id)arg1 transaction:(id)arg2;	// IMP=0x000000000035f006
- (void)_processDelayedWidgetTimelineReload:(_Bool)arg1 library:(id)arg2 transaction:(id)arg3;	// IMP=0x000000000035ef37
- (void)_processDelayedFeaturedContentUpdateAndWidgetTimelineReload:(_Bool)arg1 shouldReloadWidgetTimeline:(_Bool)arg2 library:(id)arg3 transaction:(id)arg4;	// IMP=0x000000000035ed9f
- (void)_processDelayedAssetsForFileSystemPersistency:(id)arg1 library:(id)arg2 transaction:(id)arg3;	// IMP=0x000000000035eb14
- (void)_processDelayedImportSessionCountsAndDateRangeUpdates:(id)arg1 library:(id)arg2 transaction:(id)arg3;	// IMP=0x000000000035e9f8
- (void)_processDelayedAlbumCountsAndDateRangeUpdates:(id)arg1 library:(id)arg2 transaction:(id)arg3;	// IMP=0x000000000035e820
- (void)_processDelayedSearchIndexUpdates:(id)arg1 transaction:(id)arg2;	// IMP=0x000000000035e6c6
- (void)_processDelayedDupeAnalysisNormalInserts:(id)arg1 cloudInserts:(id)arg2 transaction:(id)arg3;	// IMP=0x000000000035e53b
- (void)_processDelayedMomentChangesWithTransaction:(id)arg1;	// IMP=0x000000000035e3f9
- (void)_processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7;	// IMP=0x000000000035e15a
- (void)processDelayedSaveActionsDetail:(id)arg1 withPhotoLibrary:(id)arg2 transaction:(id)arg3;	// IMP=0x000000000035dd4f
- (void)processDelayedMomentGeneratorSaveActionsFromDetail:(id)arg1;	// IMP=0x000000000035dc1c
- (void)processDelayedDeletionsFromChangeHubEvent:(id)arg1 library:(id)arg2 transaction:(id)arg3;	// IMP=0x000000000035dab4
- (id)initWithLibraryServicesManager:(id)arg1;	// IMP=0x000000000035d9d0

@end

