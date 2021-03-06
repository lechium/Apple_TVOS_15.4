//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAbsoluteMachTimer, NSDate;
@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;

@interface BSWatchdog : NSObject
{
    BSAbsoluteMachTimer *_timer;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
    _Bool _completed;	// 25 = 0x19
    _Bool _hasFired;	// 26 = 0x1a
    id <BSWatchdogDelegate> _delegate;	// 32 = 0x20
    id <BSWatchdogProviding> _provider;	// 40 = 0x28
    double _timeout;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSDate *_startDate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000040b06
@property(readonly, nonatomic, getter=hasFired) _Bool fired; // @synthesize fired=_hasFired;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) id <BSWatchdogProviding> provider; // @synthesize provider=_provider;
@property(retain, nonatomic) id <BSWatchdogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_watchdogTimerFired;	// IMP=0x0000000000040893
- (void)_watchdogInvalidated;	// IMP=0x000000000004088d
- (void)invalidate;	// IMP=0x0000000000040757
- (void)start;	// IMP=0x000000000004067a
- (id)description;	// IMP=0x0000000000040482
- (void)dealloc;	// IMP=0x000000000004039b
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000040241
- (id)initWithTimeout:(double)arg1 queue:(id)arg2;	// IMP=0x000000000004022d
- (id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000400cc
- (id)initWithProvider:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000400b7

@end

