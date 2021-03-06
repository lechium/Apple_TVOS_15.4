//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, PLLibraryServicesManager;

@interface PLCacheDeleteSupport : NSObject
{
    struct fsid _fsid;	// 8 = 0x8
    PLLibraryServicesManager *_lsm;	// 16 = 0x10
    NSDate *_exitDeleteTime;	// 24 = 0x18
}

+ (id)_purgeableResourceDirectoriesForPathManager:(id)arg1;	// IMP=0x0000000000497f17
+ (id)_unclearablePurgeableResourceDirectoriesForPathManager:(id)arg1;	// IMP=0x0000000000497de8
+ (id)_clearablePurgeableResourceDirectoriesForPathManager:(id)arg1;	// IMP=0x0000000000497c2c
+ (id)purgeableStateDescriptionForFile:(id)arg1;	// IMP=0x0000000000497b17
+ (_Bool)isPurgeableFile:(id)arg1 outIsPhotoType:(_Bool *)arg2 outUrgencyLevel:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000497b0f
+ (_Bool)clearPurgeableFlagsForAllResourcesInPhotoLibraryURL:(id)arg1;	// IMP=0x0000000000497b07
+ (_Bool)clearPurgeableFlagForResource:(id)arg1;	// IMP=0x0000000000497aff
+ (_Bool)markPurgeableForFileAtURL:(id)arg1 withUrgency:(long long)arg2 outInode:(unsigned long long *)arg3;	// IMP=0x0000000000497af7
- (void).cxx_destruct;	// IMP=0x0000000000497863
@property(copy, nonatomic) NSDate *exitDeleteTime; // @synthesize exitDeleteTime=_exitDeleteTime;
- (void)_markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000497844
- (void)markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)arg1;	// IMP=0x0000000000497720
- (_Bool)isFilePurgedForFileID:(id)arg1 purgedPath:(id)arg2;	// IMP=0x0000000000497718
- (void)rescanResourcesFromFileSystem;	// IMP=0x0000000000497712
- (id)purgeableDirectories;	// IMP=0x00000000004976a7
- (_Bool)clearPurgeableFlagsForAllResources;	// IMP=0x00000000004974c9
- (_Bool)markResourceAsPurgeable:(id)arg1 withUrgency:(long long)arg2;	// IMP=0x00000000004974c1
- (id)_newShortLivedPhotoLibrary;	// IMP=0x0000000000497472
- (void)dealloc;	// IMP=0x00000000004973ad
- (void)invalidate;	// IMP=0x00000000004972c0
- (id)initWithLibraryServicesManager:(id)arg1 cplStatus:(id)arg2;	// IMP=0x00000000004970d9

@end

