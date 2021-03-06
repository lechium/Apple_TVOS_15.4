//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject
{
    PLPhotoLibraryPathManager *_pathManager;	// 8 = 0x8
    int _activityIndicatorFid;	// 16 = 0x10
    struct os_unfair_lock_s _activityIndicatorLock;	// 20 = 0x14
}

+ (_Bool)systemLibraryAvailableIndicatorState;	// IMP=0x00000000002a608d
+ (void)setSystemLibraryAvailableIndicatorState:(_Bool)arg1;	// IMP=0x00000000002a6019
- (void).cxx_destruct;	// IMP=0x00000000002a5b35
- (void)logCloudServiceEnableEvent:(_Bool)arg1 serviceName:(id)arg2 reason:(id)arg3;	// IMP=0x00000000002a54ba
- (_Bool)isRebuildingPersons;	// IMP=0x00000000002a547f
- (void)setIsRebuildingPersons:(_Bool)arg1;	// IMP=0x00000000002a5445
- (id)_rebuildingPersonsIndicatorFilePath;	// IMP=0x00000000002a53e5
- (_Bool)isStreamsLibraryUpdatingExpired;	// IMP=0x00000000002a53a1
- (void)setStreamsLibraryUpdatingExpired:(_Bool)arg1;	// IMP=0x00000000002a535e
- (_Bool)isDupeAnalysisNeeded;	// IMP=0x00000000002a5323
- (void)setDupeAnalysisNeeded:(_Bool)arg1;	// IMP=0x00000000002a52e9
- (id)dupeAnalysisNeededFilePath;	// IMP=0x00000000002a5289
- (void)setDownloadCountsForImages:(unsigned long long)arg1 videos:(unsigned long long)arg2;	// IMP=0x00000000002a5108
- (void)getDownloadPhotoCount:(unsigned long long *)arg1 downloadVideoCount:(unsigned long long *)arg2;	// IMP=0x00000000002a4f4e
- (_Bool)hasItemToDownload;	// IMP=0x00000000002a4e18
- (void)_writeDict:(id)arg1 withFilename:(id)arg2;	// IMP=0x00000000002a4d30
- (id)_readPListWithFilename:(id)arg1;	// IMP=0x00000000002a4c19
- (void)clearWipeCPLOnOpen;	// IMP=0x00000000002a4bde
- (void)setWipeCPLOnOpen;	// IMP=0x00000000002a4ba0
- (_Bool)isWipeCPLOnOpen;	// IMP=0x00000000002a4b61
- (void)forceSoftResetSync;	// IMP=0x00000000002a4b23
- (_Bool)isForceSoftResetSync;	// IMP=0x00000000002a4ae4
- (_Bool)isUserPause;	// IMP=0x00000000002a4aca
- (short)currentPauseReason;	// IMP=0x00000000002a4a0c
- (id)unpauseTime;	// IMP=0x00000000002a496c
- (id)_pauseDataOnPath:(id)arg1;	// IMP=0x00000000002a4953
- (void)createPauseMarkerWithUnpauseTime:(id)arg1 reason:(short)arg2;	// IMP=0x00000000002a48d5
- (void)_createPauseMarkerForReason:(short)arg1 withUnpauseTime:(id)arg2 withPath:(id)arg3;	// IMP=0x00000000002a4723
- (_Bool)_canSetPauseMarkerWithUnpauseTime:(id)arg1 onPauseData:(id)arg2;	// IMP=0x00000000002a4699
- (_Bool)clearPauseMarkerForReason:(short)arg1;	// IMP=0x00000000002a4523
- (void)updateICloudPhotosMarkerForEnable:(_Bool)arg1;	// IMP=0x00000000002a408b
- (void)writeEnableICloudPhotosMarker;	// IMP=0x00000000002a3fc7
- (void)writeDisableICloudPhotosMarker;	// IMP=0x00000000002a3ee2
- (void)deleteCPLDownloadFinishedMarkerFilePath;	// IMP=0x00000000002a3e5c
- (_Bool)isICloudPhotosPaused;	// IMP=0x00000000002a3e1d
- (_Bool)isDisableICloudPhotos;	// IMP=0x00000000002a3dde
- (_Bool)isEnableICloudPhotos;	// IMP=0x00000000002a3d9f
- (_Bool)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(_Bool)arg1;	// IMP=0x00000000002a3ac6
- (void)setImageWriter:(id)arg1 isBusy:(_Bool)arg2 crashRecoverySupport:(id)arg3;	// IMP=0x00000000002a38e2
- (void)setTakingPhotoIsBusy:(_Bool)arg1;	// IMP=0x00000000002a37aa
- (void)_setActivityIndicatorWithPath:(id)arg1 flag:(_Bool)arg2 crashRecovery:(CDUnknownBlockType)arg3;	// IMP=0x00000000002a36ec
- (id)initWithPathManager:(id)arg1;	// IMP=0x00000000002a3678

@end

