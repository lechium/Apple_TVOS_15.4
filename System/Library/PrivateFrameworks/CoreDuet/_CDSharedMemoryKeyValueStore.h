//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDStringKeyDataValueStoring-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log;

@interface _CDSharedMemoryKeyValueStore : NSObject <_CDStringKeyDataValueStoring>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_archivingQueue;	// 16 = 0x10
    _Bool _needToPersist;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    NSMutableDictionary *_dictionary;	// 40 = 0x28
    void *_mappedMem;	// 48 = 0x30
    unsigned long long _size;	// 56 = 0x38
}

+ (id)keyValueStoreWithName:(id)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000042470
+ (id)sharedInstance;	// IMP=0x0000000000042087
+ (id)defaultName;	// IMP=0x0000000000041fd7
+ (unsigned long long)defaultSize;	// IMP=0x0000000000041fcc
- (void).cxx_destruct;	// IMP=0x0000000000044554
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (id)description;	// IMP=0x00000000000442e3
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000004426c
- (id)valueForKey:(id)arg1;	// IMP=0x000000000004425a
- (id)allKeys;	// IMP=0x0000000000044156
- (id)dataForKey:(id)arg1;	// IMP=0x0000000000043f9d
- (_Bool)removeDataForKeys:(id)arg1;	// IMP=0x0000000000043e67
- (_Bool)removeDataForKey:(id)arg1;	// IMP=0x0000000000043db7
- (_Bool)setData:(id)arg1 forKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000438d1
- (_Bool)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000438b9
- (void *)memoryPointer;	// IMP=0x0000000000042ad7

@end
