//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKKnowledgeDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeEventStreamDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeQuerying-Protocol.h>
#import <CoreDuet/_DKKnowledgeSaving-Protocol.h>
#import <CoreDuet/_DKKnowledgeSynchronizing-Protocol.h>

@class NSXPCConnection;

@interface _DKXPCKnowledgeStore : NSObject <_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)XPCUserKnowledgeStore;	// IMP=0x00000000001546ee
+ (id)XPCKnowledgeStore;	// IMP=0x00000000001546dc
- (void).cxx_destruct;	// IMP=0x0000000000159261
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)confirmConnectionWithError:(id *)arg1;	// IMP=0x0000000000158e1c
- (id)deviceUUID;	// IMP=0x0000000000158b3d
- (id)sourceDeviceIdentityWithError:(id *)arg1;	// IMP=0x000000000015875f
- (id)sourceDeviceIdentityFromObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000015870c
- (_Bool)deleteRemoteState:(id *)arg1;	// IMP=0x000000000015836f
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000157e17
- (_Bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000157a4f
- (_Bool)synchronizeWithError:(id *)arg1;	// IMP=0x00000000001576b2
- (id)executeQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000015763b
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000157525
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;	// IMP=0x0000000000157510
- (id)executeQuery:(id)arg1 synchronous:(_Bool)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000156a46
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001569db
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001569b4
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 synchronous:(_Bool)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001561e5
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;	// IMP=0x000000000015617a
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000156153
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 synchronous:(_Bool)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000155885
- (_Bool)deleteObjects:(id)arg1 error:(id *)arg2;	// IMP=0x000000000015582b
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000155808
- (id)deleteObjects:(id)arg1 synchronous:(_Bool)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000154fe0
- (_Bool)saveObjects:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000154f8b
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000154f68
- (id)saveObjects:(id)arg1 synchronous:(_Bool)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001548a6
- (void)dealloc;	// IMP=0x0000000000154864
- (id)initWithConnection:(id)arg1;	// IMP=0x00000000001547b6
- (id)initWithMachServiceName:(id)arg1;	// IMP=0x0000000000154736
- (id)init;	// IMP=0x000000000015471a

@end
