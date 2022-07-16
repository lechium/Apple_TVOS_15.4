//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PETAggregateStateStorageOnDisk
{
    NSString *_path;	// 8 = 0x8
    int _fd;	// 16 = 0x10
    void *_bytes;	// 24 = 0x18
    unsigned long long _mappedLen;	// 32 = 0x20
    _Atomic _Bool _dead;	// 40 = 0x28
    struct _opaque_pthread_mutex_t _localLock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000009c5b
- (void)saveCorruptState;	// IMP=0x0000000000009bc1
- (void)reset;	// IMP=0x0000000000009b2a
- (_Bool)resetLocked;	// IMP=0x0000000000009a6b
- (unsigned long long)_reserveCapacity:(unsigned int)arg1;	// IMP=0x0000000000009957
- (void)expand:(unsigned long long)arg1 andRunWithLock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000973f
- (void)_die;	// IMP=0x00000000000096f0
- (void)_remapWithFlock:(_Bool)arg1;	// IMP=0x000000000000932e
- (void)dealloc;	// IMP=0x00000000000092a8
- (id)initWithPath:(id)arg1;	// IMP=0x000000000000900d

@end
