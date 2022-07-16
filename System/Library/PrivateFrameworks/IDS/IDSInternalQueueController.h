//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IDSInternalQueueController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    void *_contextKey;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000100393
- (void).cxx_destruct;	// IMP=0x00000000001005f1
- (id)queue;	// IMP=0x00000000001005e3
- (_Bool)isQueueCurrent;	// IMP=0x00000000001005ce
- (_Bool)assertQueueIsNotCurrent;	// IMP=0x00000000001005b9
- (_Bool)assertQueueIsCurrent;	// IMP=0x00000000001005a4
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;	// IMP=0x0000000000100541
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010052d
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000001004a7
- (id)initWithName:(char *)arg1 contextKey:(void *)arg2;	// IMP=0x0000000000100408
- (id)init;	// IMP=0x00000000001003e8

@end

