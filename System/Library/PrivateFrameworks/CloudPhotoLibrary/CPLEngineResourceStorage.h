//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLEngineFileStorage, CPLPlatformObject, NSMutableDictionary, NSObject, NSString, NSURL, _CPLPruneRequestCounter;
@protocol OS_dispatch_queue;

@interface CPLEngineResourceStorage <CPLAbstractObject>
{
    NSMutableDictionary *_identitiesToCommit;	// 8 = 0x8
    NSMutableDictionary *_identitiesToDelete;	// 16 = 0x10
    NSURL *_tempFolderURL;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_pruneStatsQueue;	// 32 = 0x20
    _CPLPruneRequestCounter *_pruneRequests;	// 40 = 0x28
    _CPLPruneRequestCounter *_purgeabilityCheckRequests;	// 48 = 0x30
    _Bool _shouldCreateTempFolder;	// 56 = 0x38
    _Bool _shouldCheckFilesForUpload;	// 57 = 0x39
    CPLEngineFileStorage *_fileStorage;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000024ac7
@property(nonatomic) _Bool shouldCheckFilesForUpload; // @synthesize shouldCheckFilesForUpload=_shouldCheckFilesForUpload;
@property(readonly, nonatomic) CPLEngineFileStorage *fileStorage; // @synthesize fileStorage=_fileStorage;
- (void)notePruningRequestForResource:(id)arg1 realPrune:(_Bool)arg2 successful:(_Bool)arg3;	// IMP=0x00000000000249d7
- (void)notePruningRequestForResource:(id)arg1 realPrune:(_Bool)arg2 successful:(_Bool)arg3 prunedSize:(unsigned long long)arg4;	// IMP=0x00000000000248ae
- (id)statusDictionary;	// IMP=0x000000000002474f
- (id)status;	// IMP=0x0000000000024565
- (void)writeTransactionDidSucceed;	// IMP=0x000000000002435a
- (void)writeTransactionDidFail;	// IMP=0x000000000002425a
- (_Bool)checkIsEmpty;	// IMP=0x00000000000241a9
- (_Bool)resetWithError:(id *)arg1;	// IMP=0x000000000002411f
- (_Bool)compactWithError:(id *)arg1;	// IMP=0x00000000000240c2
- (_Bool)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000023e57
- (id)createTempDestinationURLForResource:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000023a5c
- (_Bool)hasResource:(id)arg1;	// IMP=0x00000000000239fe
- (_Bool)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002375f
- (id)retainFileURLForResource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000234c0
- (unsigned long long)sizeOfOriginalResourcesToUpload;	// IMP=0x000000000002347c
- (unsigned long long)sizeOfResourcesToUpload;	// IMP=0x0000000000023438
- (_Bool)dropResourceForUpload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000023190
- (_Bool)storeResourceCopyForUpload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000023010
- (_Bool)storeResourceForUpload:(id)arg1 shouldCheckResource:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000224eb
- (unsigned long long)scopeType;	// IMP=0x00000000000224e3
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0000000000022440
- (_Bool)_clearAndCreateTempFolderIfNecessaryWithError:(id *)arg1;	// IMP=0x00000000000221d1
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;	// IMP=0x0000000000021f61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

