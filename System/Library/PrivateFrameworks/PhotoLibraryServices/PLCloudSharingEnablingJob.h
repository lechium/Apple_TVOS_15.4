//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PLCloudSharingEnablingJob
{
    _Bool _enableSharing;	// 8 = 0x8
}

+ (void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(_Bool)arg2 withReason:(id)arg3;	// IMP=0x00000000004ac39e
+ (void)disableCloudSharingWithLibraryServicesManager:(id)arg1;	// IMP=0x00000000004abd9c
+ (void)enableCloudSharing:(_Bool)arg1 withPathManager:(id)arg2;	// IMP=0x00000000004abc6a
@property(nonatomic) _Bool enableSharing; // @synthesize enableSharing=_enableSharing;
- (void)runDaemonSide;	// IMP=0x00000000004ab5eb
- (_Bool)shouldArchiveXPCToDisk;	// IMP=0x00000000004ab5e3
- (void)run;	// IMP=0x00000000004ab5d1
- (long long)daemonOperation;	// IMP=0x00000000004ab5c6
- (id)description;	// IMP=0x00000000004ab53a
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;	// IMP=0x00000000004ab4b6
- (void)encodeToXPCObject:(id)arg1;	// IMP=0x00000000004ab439

@end

