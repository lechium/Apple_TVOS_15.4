//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/CalActivatable-Protocol.h>

@class NSDate;
@protocol CalDateProvider, OS_dispatch_queue, OS_dispatch_source;

@interface EKTravelAdvisoryTimelinessAuthority : NSObject <CalActivatable>
{
    _Bool _internalActive;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
    NSDate *_startOfLeaveNowPeriodInternal;	// 40 = 0x28
    NSDate *_startOfRunningLatePeriodInternal;	// 48 = 0x30
    unsigned long long _internalPeriod;	// 56 = 0x38
    CDUnknownBlockType _internalPeriodChangedCallback;	// 64 = 0x40
    id <CalDateProvider> _dateProvider;	// 72 = 0x48
}

+ (id)stringForPeriod:(unsigned long long)arg1;	// IMP=0x0000000000066cd8
- (void).cxx_destruct;	// IMP=0x000000000006771e
@property(readonly, nonatomic) id <CalDateProvider> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(copy, nonatomic) CDUnknownBlockType internalPeriodChangedCallback; // @synthesize internalPeriodChangedCallback=_internalPeriodChangedCallback;
@property(nonatomic) unsigned long long internalPeriod; // @synthesize internalPeriod=_internalPeriod;
@property(nonatomic) _Bool internalActive; // @synthesize internalActive=_internalActive;
@property(retain, nonatomic) NSDate *startOfRunningLatePeriodInternal; // @synthesize startOfRunningLatePeriodInternal=_startOfRunningLatePeriodInternal;
@property(retain, nonatomic) NSDate *startOfLeaveNowPeriodInternal; // @synthesize startOfLeaveNowPeriodInternal=_startOfLeaveNowPeriodInternal;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)_uninstallTimer;	// IMP=0x00000000000675ce
- (void)_refreshOnDate:(id)arg1;	// IMP=0x00000000000671b0
- (void)_refreshTimer;	// IMP=0x0000000000067051
- (void)_refreshPeriod;	// IMP=0x0000000000066d69
- (void)_refresh;	// IMP=0x0000000000066d11
@property(readonly, nonatomic) unsigned long long period;
@property(copy, nonatomic) CDUnknownBlockType periodChangedCallback;
- (void)updateWithHypothesis:(id)arg1;	// IMP=0x00000000000666ec
@property(readonly, nonatomic) NSDate *startOfRunningLatePeriod;
@property(readonly, nonatomic) NSDate *startOfLeaveNowPeriod;
- (void)deactivate;	// IMP=0x0000000000066373
- (void)activate;	// IMP=0x0000000000066286
- (_Bool)active;	// IMP=0x0000000000066190
- (void)dealloc;	// IMP=0x0000000000066152
- (id)initWithDateProvider:(id)arg1;	// IMP=0x0000000000065ff9
- (id)init;	// IMP=0x0000000000065f9f

@end
