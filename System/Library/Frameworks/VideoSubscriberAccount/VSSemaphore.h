//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface VSSemaphore : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000056d64
- (void)wait;	// IMP=0x0000000000056d4f
- (void)signal;	// IMP=0x0000000000056d41
- (id)init;	// IMP=0x0000000000056cf0

@end
