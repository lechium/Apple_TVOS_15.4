//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMutableIntegerMap, NSMutableDictionary;

@interface BKHIDClientConnectionManager : NSObject
{
    struct __IOHIDEventSystem *_hidEventSystem;	// 8 = 0x8
    BSMutableIntegerMap *_taskPortToClientConnectionMapping;	// 16 = 0x10
    BSMutableIntegerMap *_pidToClientConnectionMapping;	// 24 = 0x18
    NSMutableDictionary *_versionedPIDToClientConnectionMapping;	// 32 = 0x20
    struct __CFDictionary *_hidConnectionToBKConnection;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000baf4
- (id)addRemovalObserverForConnectionWithVersionedPID:(long long)arg1 observerBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ba22
- (long long)versionedPIDForPID:(int)arg1;	// IMP=0x000000000000b9ac
- (id)clientForDestination:(id)arg1;	// IMP=0x000000000000b8bb
- (id)clientForTaskPort:(unsigned int)arg1;	// IMP=0x000000000000b85e
- (struct __IOHIDEventSystemConnection *)copyClientForDestination:(id)arg1;	// IMP=0x000000000000b80f
- (struct __IOHIDEventSystemConnection *)copyClientForTaskPort:(unsigned int)arg1;	// IMP=0x000000000000b7c0
- (id)bundleIDForPID:(int)arg1;	// IMP=0x000000000000b73a
- (int)pidForBundleID:(id)arg1;	// IMP=0x000000000000b61c
- (id)description;	// IMP=0x000000000000b53c
- (void)dealloc;	// IMP=0x000000000000b4b1
- (id)initWithHIDEventSystem:(struct __IOHIDEventSystem *)arg1;	// IMP=0x000000000000b356

@end
