//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject>
{
    NSObject<OS_dispatch_queue> *_lock;	// 8 = 0x8
    NSString *_logDomain;	// 16 = 0x10
    NSURL *_crashMarkerURL;	// 24 = 0x18
    NSMutableArray *_uncommittedFiles;	// 32 = 0x20
    _Bool _trackAllStoresAndDeletesUntilEndOfTransaction;	// 40 = 0x28
    _Bool _shouldResetPlatformTrackAllStoresAndDeletes;	// 41 = 0x29
    _Bool _keepOriginals;	// 42 = 0x2a
    _Bool _deleteImmediately;	// 43 = 0x2b
    CPLPlatformObject *_platformObject;	// 48 = 0x30
    NSURL *_baseURL;	// 56 = 0x38
}

+ (id)platformImplementationProtocol;	// IMP=0x00000000000420ed
- (void).cxx_destruct;	// IMP=0x0000000000041da5
@property(nonatomic) _Bool deleteImmediately; // @synthesize deleteImmediately=_deleteImmediately;
@property(nonatomic) _Bool keepOriginals; // @synthesize keepOriginals=_keepOriginals;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (_Bool)addDeleteFlagToFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000041cf0
- (void)writeTransactionDidSucceed;	// IMP=0x0000000000041cb3
- (void)writeTransactionDidFail;	// IMP=0x0000000000041c76
- (_Bool)checkIsEmpty;	// IMP=0x0000000000041b56
- (id)fileEnumerator;	// IMP=0x0000000000041b3b
- (id)fileEnumeratorIncludingPropertiesForKeys:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041aa4
- (_Bool)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long *)arg2 includeOriginals:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000417fa
- (_Bool)compactStorageIncludeOriginals:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000416cd
- (_Bool)_compactStorageIncludeOriginals:(_Bool)arg1 desiredFreeSpace:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00000000000411bd
- (_Bool)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000004119d
- (_Bool)resetWithError:(id *)arg1;	// IMP=0x000000000004114a
- (_Bool)compactStorage:(id *)arg1;	// IMP=0x000000000004112c
- (_Bool)discardAllRetainedFileURLsWithError:(id *)arg1;	// IMP=0x0000000000040f8a
- (_Bool)releaseFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000040da3
- (id)retainFileURLForIdentity:(id)arg1 resourceType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000040bc3
- (void)checkFileSizeForIdentity:(id)arg1;	// IMP=0x0000000000040b51
- (_Bool)hasFileWithIdentity:(id)arg1;	// IMP=0x0000000000040ada
- (_Bool)storeUnretainedData:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000040a3a
- (_Bool)storeUnretainedFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000004099a
- (_Bool)deleteFileWithIdentity:(id)arg1 includingOriginal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000040713
- (_Bool)deleteFileWithIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000406f5
- (_Bool)discardUncommittedFileWithIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000040692
- (_Bool)commitFileWithIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004067d
- (_Bool)storeData:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 needsCommit:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x000000000004039a
- (_Bool)storeFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(_Bool)arg3 moveIfPossible:(_Bool)arg4 needsCommit:(_Bool *)arg5 error:(id *)arg6;	// IMP=0x00000000000400b6
- (_Bool)_fixupIdentity:(id)arg1 fileURL:(id)arg2 data:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003fea5
- (void)_removeIdentityFromUncommittedFiles:(id)arg1;	// IMP=0x000000000003fbf8
- (void)_addIdentityToUncommittedFiles:(id)arg1;	// IMP=0x000000000003fa5a
- (_Bool)hasCrashMarker;	// IMP=0x000000000003f9de
- (unsigned long long)countOfUncommittedFiles;	// IMP=0x000000000003f9c8
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000000003f754
- (_Bool)openWithRecoveryHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x000000000003f421
- (_Bool)_recoverFromCrashWithRecoveryHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x000000000003ee3c
- (_Bool)doWrite:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x000000000003ecf8
- (void)doRead:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ec73
- (id)initWithBaseURL:(id)arg1;	// IMP=0x000000000003e920
@property(nonatomic) _Bool trackAllStoresAndDeletesUntilEndOfTransaction;
@property(nonatomic) _Bool trackAllStoresAndDeletes;
- (id)_markerURLForTrackAllStoresAndDeletes;	// IMP=0x000000000003e646

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

