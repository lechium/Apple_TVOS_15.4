//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/EKCancellableRemoteOperation-Protocol.h>

@class EKEventStore, NSPredicate, NSString;

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation>
{
    CDUnknownBlockType _callback;	// 8 = 0x8
    Class _entityClass;	// 16 = 0x10
    NSPredicate *_predicate;	// 24 = 0x18
    EKEventStore *_store;	// 32 = 0x20
    id _cancellationToken;	// 40 = 0x28
    _Bool _finished;	// 48 = 0x30
    _Bool _isCancelled;	// 49 = 0x31
    int _retryCount;	// 52 = 0x34
}

+ (id)signpostHandle;	// IMP=0x000000000005ab95
+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;	// IMP=0x000000000005ab1a
- (void).cxx_destruct;	// IMP=0x000000000005c206
- (void)disconnect;	// IMP=0x000000000005c177
- (void)cancel;	// IMP=0x000000000005c0e4
- (id)fetchObjectIDs;	// IMP=0x000000000005bff6
- (id)runSynchronously;	// IMP=0x000000000005bee3
- (id)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005bdf0
- (void)_startActualWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;	// IMP=0x000000000005baed
- (void)_fetchObjectIDsActualWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;	// IMP=0x000000000005ba3a
- (void)_startProcessingWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2 processor:(CDUnknownBlockType)arg3;	// IMP=0x000000000005b482
- (void)_startFetchObjectIDsActivityWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;	// IMP=0x000000000005b38f
- (void)_startActivityWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;	// IMP=0x000000000005b29c
- (void)signpostEndWithError:(int)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000005b190
- (void)signpostStart;	// IMP=0x000000000005b04d
- (id)_createOSActivity;	// IMP=0x000000000005aca3
- (void)terminate;	// IMP=0x000000000005ac99
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;	// IMP=0x000000000005abf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
