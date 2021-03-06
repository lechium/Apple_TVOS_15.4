//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface CUPersistentTimer : NSObject
{
    NSDate *_cachedDate;	// 8 = 0x8
    double _cachedInterval;	// 16 = 0x10
    double _cachedLeeway;	// 24 = 0x18
    _Bool _cachedRepeating;	// 32 = 0x20
    _Bool _cachedUseXPC;	// 33 = 0x21
    _Bool _cachedWakeSystem;	// 34 = 0x22
    NSString *_identifier;	// 40 = 0x28
    _Bool _invalidateCalled;	// 48 = 0x30
    PCPersistentTimer *_pcPersistentTimer;	// 56 = 0x38
    struct LogCategory *_ucat;	// 64 = 0x40
    _Bool _xpcRegistered;	// 72 = 0x48
    _Bool _repeating;	// 73 = 0x49
    _Bool _useXPC;	// 74 = 0x4a
    _Bool _wakeSystem;	// 75 = 0x4b
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 80 = 0x50
    NSDate *_date;	// 88 = 0x58
    double _interval;	// 96 = 0x60
    double _leeway;	// 104 = 0x68
    CDUnknownBlockType _invalidationHandler;	// 112 = 0x70
    CDUnknownBlockType _timerHandler;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000091414
@property(nonatomic) _Bool wakeSystem; // @synthesize wakeSystem=_wakeSystem;
@property(nonatomic) _Bool useXPC; // @synthesize useXPC=_useXPC;
@property(copy, nonatomic) CDUnknownBlockType timerHandler; // @synthesize timerHandler=_timerHandler;
@property(nonatomic) _Bool repeating; // @synthesize repeating=_repeating;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) double leeway; // @synthesize leeway=_leeway;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcTimerFired:(id)arg1;	// IMP=0x0000000000091289
- (void)_pcTimerFired:(id)arg1;	// IMP=0x0000000000091225
- (void)_startXPCActivity;	// IMP=0x0000000000091093
- (void)_startPCPersistentTimer;	// IMP=0x0000000000090df5
- (void)_start;	// IMP=0x0000000000090d4a
- (void)start;	// IMP=0x0000000000090cff
- (void)_invalidate;	// IMP=0x0000000000090c0a
- (void)invalidate;	// IMP=0x0000000000090bbf
- (void)dealloc;	// IMP=0x000000000009098b
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000090858

@end

