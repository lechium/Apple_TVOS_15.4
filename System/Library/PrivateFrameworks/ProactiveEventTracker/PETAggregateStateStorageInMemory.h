//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableData;

@interface PETAggregateStateStorageInMemory
{
    NSMutableData *_data;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000008d66
- (void)saveCorruptState;	// IMP=0x0000000000008d60
- (void)reset;	// IMP=0x0000000000008d16
- (_Bool)resetLocked;	// IMP=0x0000000000008ce2
- (void)expand:(unsigned long long)arg1 andRunWithLock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008b1b
- (void)dealloc;	// IMP=0x0000000000008adb
- (id)init;	// IMP=0x0000000000008a6c

@end
