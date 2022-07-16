//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKBRTTimerBlock : NSObject
{
    NSObject<OS_dispatch_queue> *_selfQueue;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _onTimer;	// 32 = 0x20
    id _owner;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000009f12e6
@property(readonly, nonatomic) id owner; // @synthesize owner=_owner;
@property(readonly, copy, nonatomic) CDUnknownBlockType onTimer; // @synthesize onTimer=_onTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *selfQueue; // @synthesize selfQueue=_selfQueue;
- (void)timerFired:(id)arg1;	// IMP=0x00000000009f0eef
- (void)invalidate;	// IMP=0x00000000009f0e4e
- (void)fireNow;	// IMP=0x00000000009f0d5f
- (void)dealloc;	// IMP=0x00000000009f0d21
- (id)initWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(CDUnknownBlockType)arg3 owner:(id)arg4;	// IMP=0x00000000009f0bb2

@end
