//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PASDispatch : NSObject
{
}

+ (void)notifyGroup:(id)arg1 onQueue:(id)arg2 withTimeout:(double)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000004a729
+ (id)autoreleasingSerialQueueWithLabel:(const char *)arg1 qosClass:(unsigned int)arg2;	// IMP=0x000000000004a61e
+ (id)autoreleasingSerialQueueWithLabel:(const char *)arg1;	// IMP=0x000000000004a5d6
+ (void)runSyncOnMainThreadWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a56d
+ (void)runAsyncOnQueue:(id)arg1 afterDelaySeconds:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a2fc
+ (void)waitForBlock:(CDUnknownBlockType)arg1 timeoutSeconds:(double)arg2 onBlockComplete:(CDUnknownBlockType)arg3 onTimeout:(CDUnknownBlockType)arg4;	// IMP=0x000000000004a0c9
+ (unsigned char)waitForBlock:(CDUnknownBlockType)arg1 timeoutSeconds:(double)arg2;	// IMP=0x000000000004a037
+ (void)waitForBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049f83
+ (void)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2 onGroupComplete:(CDUnknownBlockType)arg3 onTimeout:(CDUnknownBlockType)arg4;	// IMP=0x0000000000049d4c
+ (unsigned char)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2;	// IMP=0x0000000000049cba
+ (void)waitForGroup:(id)arg1;	// IMP=0x0000000000049c06
+ (void)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2 onAcquire:(CDUnknownBlockType)arg3 onTimeout:(CDUnknownBlockType)arg4;	// IMP=0x00000000000499cf
+ (unsigned char)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2;	// IMP=0x000000000004993d
+ (void)waitForSemaphore:(id)arg1;	// IMP=0x0000000000049889
+ (unsigned long long)dispatchTimeWithSecondsFromNow:(double)arg1;	// IMP=0x0000000000049851

@end

