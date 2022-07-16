//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICRWLock : NSObject
{
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _rwLock;	// 8 = 0x8
}

- (void)unlock;	// IMP=0x000000000000973a
- (void)readLock;	// IMP=0x000000000000972c
- (int)tryReadLock;	// IMP=0x000000000000971e
- (void)writeLock;	// IMP=0x0000000000009710
- (void)dealloc;	// IMP=0x00000000000096d6
- (id)init;	// IMP=0x000000000000968c

@end
