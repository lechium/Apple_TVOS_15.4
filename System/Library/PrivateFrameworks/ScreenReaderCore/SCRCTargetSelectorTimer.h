//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock;

@interface SCRCTargetSelectorTimer
{
    struct __CFRunLoopTimer *_timer;	// 8 = 0x8
    id _key;	// 16 = 0x10
    _Bool _isCanceled;	// 24 = 0x18
    _Bool _isPending;	// 25 = 0x19
    id _object;	// 32 = 0x20
    NSLock *_lock;	// 40 = 0x28
    _Bool _createdTimer;	// 48 = 0x30
    CDUnknownBlockType _block;	// 56 = 0x38
}

+ (void)_assignThreadPriority;	// IMP=0x00000000000234db
+ (void)_runThread;	// IMP=0x00000000000232b8
+ (void)initialize;	// IMP=0x000000000002317f
- (void).cxx_destruct;	// IMP=0x000000000002423c
- (void)_runTimerBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024231
- (void)_dispatchSCRCThread;	// IMP=0x00000000000240c5
- (void)_dispatchMainThread;	// IMP=0x0000000000023f93
- (void)_dispatch;	// IMP=0x0000000000023e24
- (void)_dispatchThreadHelper:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023e19
- (id)threadKey;	// IMP=0x0000000000023e04
- (_Bool)isPending;	// IMP=0x0000000000023db5
- (_Bool)isCancelled;	// IMP=0x0000000000023da5
- (_Bool)isCanceled;	// IMP=0x0000000000023d95
- (void)cancel;	// IMP=0x0000000000023cd2
- (void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2;	// IMP=0x0000000000023bff
- (void)dispatchAfterDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023b47
- (void)dispatchAfterDelay:(double)arg1;	// IMP=0x0000000000023a8d
- (void)dealloc;	// IMP=0x0000000000023a4f
- (void)invalidate;	// IMP=0x0000000000023979
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 thread:(id)arg3;	// IMP=0x0000000000023967
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3;	// IMP=0x0000000000023955
- (id)_initWithTarget:(id)arg1 selector:(SEL)arg2 threadKeyOrThread:(id)arg3;	// IMP=0x0000000000023659
- (_Bool)_createdTimer;	// IMP=0x0000000000023649
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000000023634

@end

