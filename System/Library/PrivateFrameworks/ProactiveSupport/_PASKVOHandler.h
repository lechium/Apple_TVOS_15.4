//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _PASKVOHandler : NSObject
{
    struct _opaque_pthread_mutex_t _lock;	// 8 = 0x8
    NSMutableArray *_tasks;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000003ad9f
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003aa97
- (void)_watchKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingTask:(id)arg4;	// IMP=0x000000000003a9aa
- (void)reactBeforeAndAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003a8d0
- (void)reactAsynchronouslyAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 onQueue:(id)arg4;	// IMP=0x000000000003a806
- (void)reactAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003a72c
- (void)dealloc;	// IMP=0x000000000003a4c8
- (id)init;	// IMP=0x000000000003a41b

@end

