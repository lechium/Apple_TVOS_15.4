//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLDevice, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface MTLSimBufferStoragePool : NSObject
{
    id <MTLDevice> device;	// 8 = 0x8
    struct BufferStorageEntry *head;	// 16 = 0x10
    struct BufferStorageEntry *tail;	// 24 = 0x18
    unsigned long long storageSize;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *semaphore;	// 40 = 0x28
}

- (void)returnStorage:(struct BufferStorageEntry *)arg1;	// IMP=0x0000000000009d35
- (struct BufferStorageEntry *)getStorage;	// IMP=0x0000000000009ccc
- (struct BufferStorageEntry *)allocStorage;	// IMP=0x0000000000009c69
- (void)dealloc;	// IMP=0x0000000000009bf9
- (id)initWithEntrySize:(unsigned long long)arg1 device:(id)arg2;	// IMP=0x0000000000009b9e

@end

