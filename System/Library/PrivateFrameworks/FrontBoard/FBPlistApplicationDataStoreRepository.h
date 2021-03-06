//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBApplicationDataStoreRepository-Protocol.h>

@class NSMutableDictionary, NSString, NSURL;
@protocol FBApplicationDataStoreRepositoryDelegate, OS_dispatch_queue;

@interface FBPlistApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository>
{
    NSURL *_storeURL;	// 8 = 0x8
    NSMutableDictionary *_state;	// 16 = 0x10
    _Bool _dirty;	// 24 = 0x18
    unsigned long long _batchCount;	// 32 = 0x20
    int _autoFlushDuration;	// 40 = 0x28
    id <FBApplicationDataStoreRepositoryDelegate> _delegate;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_stateQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_writeQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000211cf
@property(nonatomic) __weak id <FBApplicationDataStoreRepositoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1;	// IMP=0x0000000000021099
- (void)_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2;	// IMP=0x0000000000020f6c
- (void)_writeQueue_flushSynchronously;	// IMP=0x0000000000020b30
- (void)_stateQueue_markDirty;	// IMP=0x0000000000020a8d
- (void)_stateQueue_removeStoreForIdentifier:(id)arg1;	// IMP=0x00000000000209f9
- (id)_stateQueue_addStoreForIdentifierIfNecessary:(id)arg1;	// IMP=0x0000000000020963
- (id)_stateQueue_storeForIdentifier:(id)arg1;	// IMP=0x00000000000208f2
- (id)_stateQueue_objectsForKeys:(id)arg1;	// IMP=0x00000000000205e9
- (id)_stateQueue_objectForKey:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000002053c
- (void)_load;	// IMP=0x0000000000020408
- (_Bool)_isEligibleForSaving:(id)arg1;	// IMP=0x00000000000201db
- (void)close;	// IMP=0x00000000000201c9
- (void)endBatchedUpdate;	// IMP=0x00000000000200fb
- (void)beginBatchedUpdate;	// IMP=0x00000000000200a2
- (void)flushSynchronously;	// IMP=0x0000000000020041
- (void)removeAllObjectsForApplication:(id)arg1;	// IMP=0x000000000001ff94
- (void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000000001fd4b
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000000001fcbd
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;	// IMP=0x000000000001f919
- (id)allObjectsForKeys:(id)arg1;	// IMP=0x000000000001f7be
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000000001f5a5
- (_Bool)containsKey:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000000001f572
- (id)keysForApplication:(id)arg1;	// IMP=0x000000000001f388
- (id)applicationIdentifiersWithState;	// IMP=0x000000000001f259
- (_Bool)isDirty;	// IMP=0x000000000001f1b3
- (id)location;	// IMP=0x000000000001f1a5
- (void)dealloc;	// IMP=0x000000000001f07e
- (id)initWithStorePath:(id)arg1;	// IMP=0x000000000001ef54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

