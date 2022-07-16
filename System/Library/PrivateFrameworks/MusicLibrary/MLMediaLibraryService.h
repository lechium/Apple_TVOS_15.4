//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MusicLibrary/MLMediaLibraryServiceClientProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol MLMediaLibraryServiceProtocol, OS_dispatch_queue;

@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    NSXPCConnection *_serviceConnection;	// 24 = 0x18
    id <MLMediaLibraryServiceProtocol> _serviceProxy;	// 32 = 0x20
    NSMutableDictionary *_progressBlocksByUUID;	// 40 = 0x28
}

+ (void)_setDaemonProcessInfo:(id)arg1;	// IMP=0x000000000013946b
+ (id)sharedMediaLibraryService;	// IMP=0x000000000013943b
- (void).cxx_destruct;	// IMP=0x0000000000136ccb
- (id)_serviceConnection;	// IMP=0x0000000000136c75
- (void)importOperationWithIdentifier:(id)arg1 didUpdateWithProgress:(float)arg2;	// IMP=0x0000000000136bce
- (void)serviceTerminatedTransactionWithIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0000000000136b08
- (id)clientImportServiceListenerEndpointWithError:(id *)arg1;	// IMP=0x00000000001367f2
- (id)mediaLibraryResourcesServiceListenerEndpointWithError:(id *)arg1;	// IMP=0x00000000001364dc
- (void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000136353
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001361b7
- (void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000136063
- (void)getLanguageResourcesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000135e8a
- (void)unlockDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000135d56
- (void)lockDatabaseForReason:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000135c20
- (void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000135aea
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withProgressBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001358e3
- (void)setOptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000013578f
- (void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001355e7
- (void)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000135469
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000135294
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001350df
- (void)beginTransactionForDatabaseWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000134f56
- (void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000134dcd
- (void)performDiagnosticWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000134c99
- (void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000134b40
- (void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001349b7
- (_Bool)validateDatabaseAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001347cb
- (void)dealloc;	// IMP=0x0000000000134789
- (id)init;	// IMP=0x00000000001346d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
