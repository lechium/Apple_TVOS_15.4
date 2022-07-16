//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CalNWideQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005a5a2
- (void)executeBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005a44f
- (id)initWithSerialQueue:(id)arg1 andWidth:(unsigned long long)arg2;	// IMP=0x000000000005a3ac

@end

