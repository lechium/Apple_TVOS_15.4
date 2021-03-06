//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSCancellable-Protocol.h>
#import <BaseBoard/BSInvalidatable-Protocol.h>
#import <BaseBoard/BSTimerScheduleQuerying-Protocol.h>

@class BSDispatchTimer, NSString;

@interface BSWallclockTimer : NSObject <BSTimerScheduleQuerying, BSCancellable, BSInvalidatable>
{
    BSDispatchTimer *_timer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002b7c8
- (void)invalidate;	// IMP=0x000000000002b7ba
- (void)cancel;	// IMP=0x000000000002b7ac
- (void)scheduleForDate:(id)arg1 leewayInterval:(double)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002b1c4
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double timeRemaining;
@property(readonly, nonatomic, getter=isScheduled) _Bool scheduled;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000002afda

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

