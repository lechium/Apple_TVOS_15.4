//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSTimer;
@protocol ML3MediaLibraryWriterDelegate, OS_dispatch_queue;

@interface ML3MediaLibraryWriter : NSObject
{
    NSTimer *_watchdogTimer;	// 8 = 0x8
    _Bool _suspended;	// 16 = 0x10
    id <ML3MediaLibraryWriterDelegate> _delegate;	// 24 = 0x18
    double _transactionTimeout;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialQueue;	// 40 = 0x28
    NSMutableDictionary *_transactionMap;	// 48 = 0x30
    NSOperationQueue *_databaseOperationQueue;	// 56 = 0x38
    NSOperationQueue *_databaseOperationSerialQueue;	// 64 = 0x40
}

+ (id)writerErrorWithCode:(long long)arg1 description:(id)arg2;	// IMP=0x0000000000125558
+ (id)writerErrorWithCode:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000001254ab
- (void).cxx_destruct;	// IMP=0x0000000000124a81
@property(readonly, nonatomic) NSOperationQueue *databaseOperationSerialQueue; // @synthesize databaseOperationSerialQueue=_databaseOperationSerialQueue;
@property(readonly, nonatomic) NSOperationQueue *databaseOperationQueue; // @synthesize databaseOperationQueue=_databaseOperationQueue;
@property(readonly, nonatomic) NSMutableDictionary *transactionMap; // @synthesize transactionMap=_transactionMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) double transactionTimeout; // @synthesize transactionTimeout=_transactionTimeout;
@property(nonatomic) __weak id <ML3MediaLibraryWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_watchdogTimerFired:(id)arg1;	// IMP=0x000000000012477c
- (_Bool)_shouldWatchdogTransaction:(id)arg1;	// IMP=0x00000000001246b2
- (void)_tearDownWatchdogTimer;	// IMP=0x0000000000124674
- (void)_setupWatchdogTimer;	// IMP=0x0000000000124587
- (void)_destroyTransactionForIdentifier:(id)arg1 forceRelinquishConnection:(_Bool)arg2;	// IMP=0x0000000000124536
- (void)_destroyTransaction:(id)arg1 forceRelinquishConnection:(_Bool)arg2;	// IMP=0x00000000001243fd
- (id)_createNewTransactionForLibrary:(id)arg1 fromClient:(id)arg2 readOnly:(_Bool)arg3;	// IMP=0x00000000001240b4
- (id)_allDatabaseOperations;	// IMP=0x0000000000124012
- (void)_unregisterTransaction:(id)arg1;	// IMP=0x0000000000123f85
- (void)_registerTransaction:(id)arg1;	// IMP=0x0000000000123ef8
- (id)_transactionForIdentifier:(id)arg1;	// IMP=0x0000000000123dfd
- (void)reset;	// IMP=0x0000000000123d89
- (void)cancelAllActiveDatabaseOperationsForClient:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x0000000000123a81
- (void)cancelAllActiveDatabaseOperationsAndWaitUntilFinished:(_Bool)arg1;	// IMP=0x00000000001239ce
- (void)cancelAllActiveTransactions;	// IMP=0x00000000001236ae
- (void)cancelActiveTransactionForClient:(id)arg1;	// IMP=0x00000000001234d4
- (void)performDatabaseOperation:(unsigned long long)arg1 onLibrary:(id)arg2 withAttributes:(id)arg3 options:(id)arg4 fromClient:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000012309c
- (_Bool)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000122c20
- (id)executeUntrustedQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id *)arg5;	// IMP=0x000000000012264d
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000121f01
- (_Bool)executeUntrustedUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id *)arg4;	// IMP=0x000000000012199f
- (_Bool)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001215c5
- (id)beginTransactionForLibrary:(id)arg1 withClient:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000121181
- (id)description;	// IMP=0x0000000000120dcb
- (void)dealloc;	// IMP=0x0000000000120d78
- (id)init;	// IMP=0x0000000000120c61

@end

