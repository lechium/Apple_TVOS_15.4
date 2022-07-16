//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUCoalescer : NSObject
{
    _Bool _invalidateCalled;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timer;	// 24 = 0x18
    int _triggered;	// 32 = 0x20
    CDUnknownBlockType _actionHandler;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    CDUnknownBlockType _invalidationHandler;	// 56 = 0x38
    double _leeway;	// 64 = 0x40
    double _maxDelay;	// 72 = 0x48
    double _minDelay;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000049fc6
@property(nonatomic) double minDelay; // @synthesize minDelay=_minDelay;
@property(nonatomic) double maxDelay; // @synthesize maxDelay=_maxDelay;
@property(nonatomic) double leeway; // @synthesize leeway=_leeway;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)_timerFired;	// IMP=0x0000000000049e9b
- (void)_cancel;	// IMP=0x0000000000049e37
- (void)cancel;	// IMP=0x0000000000049de7
- (void)_trigger;	// IMP=0x0000000000049c20
- (void)trigger;	// IMP=0x0000000000049bd5
- (void)_invalidate;	// IMP=0x0000000000049b22
- (void)invalidate;	// IMP=0x0000000000049ad2
- (void)dealloc;	// IMP=0x0000000000049a64
- (id)init;	// IMP=0x00000000000499fb

@end

