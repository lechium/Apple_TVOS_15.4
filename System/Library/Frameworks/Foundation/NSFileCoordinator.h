//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;

@interface NSFileCoordinator : NSObject
{
    id _accessArbiter;	// 8 = 0x8
    id _fileReactor;	// 16 = 0x10
    id _purposeID;	// 24 = 0x18
    NSURL *_recentFilePresenterURL;	// 32 = 0x20
    id _accessClaimIDOrIDs;	// 40 = 0x28
    _Bool _isCancelled;	// 48 = 0x30
    NSMutableDictionary *_movedItems;	// 56 = 0x38
}

+ (id)_canonicalURLForURL:(id)arg1;	// IMP=0x00000000001c75e6
+ (id)filePresenters;	// IMP=0x00000000001c730e
+ (void)removeFilePresenter:(id)arg1;	// IMP=0x00000000001c72e7
+ (void)addFilePresenter:(id)arg1;	// IMP=0x00000000001c720c
+ (void)_getDebugInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ce7cd
+ (void)_printDebugInfo;	// IMP=0x00000000001ce7b9
+ (id)_currentClaimPurposeIdentifier;	// IMP=0x00000000001ce7aa
+ (id)_currentFileCoordinator;	// IMP=0x00000000001ce79c
+ (_Bool)_itemHasPresentersAtURL:(id)arg1;	// IMP=0x00000000001ce65c
+ (void)_setAutomaticFileProviderReregistrationDisabled:(_Bool)arg1;	// IMP=0x00000000001ce5d9
+ (id)_fileProviders;	// IMP=0x00000000001ce5bf
+ (void)_removeFileProvider:(id)arg1;	// IMP=0x00000000001ce598
+ (void)_addFileProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ce56c
+ (void)_addFileProvider:(id)arg1;	// IMP=0x00000000001ce54d
+ (void)__itemAtURL:(id)arg1 didResolveConflictVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;	// IMP=0x00000000001ce478
+ (void)__itemAtURL:(id)arg1 didLoseVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;	// IMP=0x00000000001ce3a3
+ (void)__itemAtURL:(id)arg1 didGainVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;	// IMP=0x00000000001ce2ce
+ (void)__itemAtURL:(id)arg1 didChangeWithPurposeID:(id)arg2;	// IMP=0x00000000001ce214
+ (void)__itemAtURL:(id)arg1 didDisappearWithPurposeID:(id)arg2;	// IMP=0x00000000001ce15a
+ (void)__itemAtURL:(id)arg1 didChangeUbiquityWithPurposeID:(id)arg2;	// IMP=0x00000000001ce0a0
+ (void)__itemAtURL:(id)arg1 didReconnectWithPurposeID:(id)arg2;	// IMP=0x00000000001cdfe6
+ (void)__itemAtURL:(id)arg1 didDisconnectWithPurposeID:(id)arg2;	// IMP=0x00000000001cdf2c
+ (void)__itemAtURL:(id)arg1 didMoveToURL:(id)arg2 purposeID:(id)arg3;	// IMP=0x00000000001cde34
+ (void)_setNextClaimIdentifier:(id)arg1;	// IMP=0x00000000001c8623
+ (id)_nextClaimIdentifier;	// IMP=0x00000000001c85fc
+ (_Bool)_skipCoordinationWork;	// IMP=0x00000000001c8556
+ (void)_performBarrierAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cf381
+ (void)_performBarrier;	// IMP=0x00000000001cf367
+ (id)_endpointForInProcessFileCoordinationServer;	// IMP=0x00000000001cf2f3
+ (void)_adoptFCDEndpointForTest:(id)arg1;	// IMP=0x00000000001cf214
+ (id)_createConnectionToProgressRegistrar;	// IMP=0x00000000001cf1a8
+ (id)_createConnectionToFileAccessArbiterForQueue:(id)arg1;	// IMP=0x00000000001cf0e1
+ (void)_stopInProcessFileCoordinationAndProgressServers;	// IMP=0x00000000001cefae
+ (id)_inProcessFileAccessArbiter;	// IMP=0x00000000001cefa1
+ (void)_startInProcessFileCoordinationAndProgressServers;	// IMP=0x00000000001cedb6
+ (id)_fileAccessArbiterInterface;	// IMP=0x00000000001ce9cb
+ (id)_fileProviderInterface;	// IMP=0x00000000001ce901
+ (id)_filePresenterInterface;	// IMP=0x00000000001ce871
+ (id)_createIdentifierForNewClaim;	// IMP=0x00000000001ce84c
+ (unsigned long long)_providedItemGenerationCount;	// IMP=0x00000000001cf679
+ (void)_setCurrentClaimPurposeIdentifier:(id)arg1;	// IMP=0x00000000001cf63f
+ (void)_setKernelMaterializationInfo:(id)arg1;	// IMP=0x00000000001cf600
+ (void)_setReadingOptions:(unsigned long long)arg1;	// IMP=0x00000000001cf5e1
+ (void)_removeInfoForID:(id)arg1;	// IMP=0x00000000001cf553
+ (void)_addProcessIdentifier:(int)arg1 observedUbiquityAttributes:(id)arg2 forID:(id)arg3;	// IMP=0x00000000001cf412
+ (void)_accessPresenterInfoUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cf3a8
+ (id)_kernelMaterializationInfo;	// IMP=0x00000000001cf94a
+ (void)_setProvidedItemRecursiveGenerationCount:(unsigned long long)arg1;	// IMP=0x00000000001cf931
+ (unsigned int)_kernelMaterializationOperation;	// IMP=0x00000000001cf906
+ (unsigned long long)_readingOptions;	// IMP=0x00000000001cf8f7
+ (_Bool)_provideRecursively;	// IMP=0x00000000001cf8e5
+ (id)_observedUbiquityAttributesForPresenterWithID:(id)arg1;	// IMP=0x00000000001cf7b7
+ (int)_processIdentifierForID:(id)arg1;	// IMP=0x00000000001cf688
+ (unsigned long long)_responsesForPresenter:(id)arg1;	// IMP=0x00000000001cf959
- (void)cancel;	// IMP=0x00000000001c8405
- (void)itemAtURL:(id)arg1 didChangeUbiquityAttributes:(id)arg2;	// IMP=0x00000000001c81b8
- (_Bool)_isValidUbiquityAttribute:(id)arg1;	// IMP=0x00000000001c8091
- (void)itemAtURL:(id)arg1 didMoveToURL:(id)arg2;	// IMP=0x00000000001c8024
- (void)itemAtURL:(id)arg1 willMoveToURL:(id)arg2;	// IMP=0x00000000001c7fb7
- (void)prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5 byAccessor:(CDUnknownBlockType)arg6;	// IMP=0x00000000001c7c07
- (void)coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c7afa
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5 byAccessor:(CDUnknownBlockType)arg6;	// IMP=0x00000000001c79d9
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5 byAccessor:(CDUnknownBlockType)arg6;	// IMP=0x00000000001c78b8
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 byAccessor:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c77ab
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 byAccessor:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c769e
- (void)_invokeAccessor:(CDUnknownBlockType)arg1 thenCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c75ef
@property(copy) NSString *purposeIdentifier;
- (void)dealloc;	// IMP=0x00000000001c7453
- (id)initWithFilePresenter:(id)arg1;	// IMP=0x00000000001c733c
- (id)init;	// IMP=0x00000000001c7328
- (void)releaseAccess:(id)arg1;	// IMP=0x00000000001ce787
- (id)retainAccess;	// IMP=0x00000000001ce70f
- (void)_setPurposeIdentifier:(id)arg1;	// IMP=0x00000000001ce6b4
- (_Bool)_purposeIdentifierLockedDown;	// IMP=0x00000000001ce69b
- (void)_lockdownPurposeIdentifier;	// IMP=0x00000000001ce683
- (void)_setFileProvider:(id)arg1;	// IMP=0x00000000001ce5fe
- (void)__prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 byAccessor:(CDUnknownBlockType)arg5;	// IMP=0x00000000001cd52b
- (void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(CDUnknownBlockType)arg6;	// IMP=0x00000000001cce4c
- (void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(CDUnknownBlockType)arg6;	// IMP=0x00000000001cc790
- (void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(CDUnknownBlockType)arg4;	// IMP=0x00000000001cc2d3
- (void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(CDUnknownBlockType)arg4;	// IMP=0x00000000001cbe16
- (void)_itemDidChangeAtURL:(id)arg1;	// IMP=0x00000000001cbd60
- (void)_itemDidDisappearAtURL:(id)arg1;	// IMP=0x00000000001cbcaa
- (void)sharingDidChangeForItemAtURL:(id)arg1;	// IMP=0x00000000001cbc02
- (void)_ubiquityDidChangeForItemAtURL:(id)arg1;	// IMP=0x00000000001cbb4c
- (void)_itemAtURL:(id)arg1 didMoveToURL:(id)arg2;	// IMP=0x00000000001cba66
- (void)_itemAtURL:(id)arg1 willMoveToURL:(id)arg2;	// IMP=0x00000000001cba60
- (void)_coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(CDUnknownBlockType)arg3;	// IMP=0x00000000001cb12d
- (void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5 byAccessor:(CDUnknownBlockType)arg6;	// IMP=0x00000000001ca9f8
- (void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5 byAccessor:(CDUnknownBlockType)arg6;	// IMP=0x00000000001ca15f
- (void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 byAccessor:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c9acf
- (void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 byAccessor:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c9454
- (void)_withAccessArbiter:(id)arg1 invokeAccessor:(CDUnknownBlockType)arg2 orDont:(_Bool)arg3 andRelinquishAccessClaim:(id)arg4;	// IMP=0x00000000001c8f21
- (void)_didEndWrite:(id)arg1;	// IMP=0x00000000001c8d6e
- (id)_willStartWriteWithIntents:(id)arg1 async:(_Bool)arg2;	// IMP=0x00000000001c8abf
- (void)_blockOnAccessClaim:(id)arg1 withAccessArbiter:(id)arg2;	// IMP=0x00000000001c8867
- (void)_forgetAccessClaimForID:(id)arg1;	// IMP=0x00000000001c87f0
- (void)_requestAccessClaim:(id)arg1 withProcedure:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c869b
- (void)_cancelClaimWithIdentifier:(id)arg1;	// IMP=0x00000000001c8685

@end

