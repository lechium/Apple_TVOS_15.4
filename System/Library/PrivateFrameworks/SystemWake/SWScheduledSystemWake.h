//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemWake/BSInvalidatable-Protocol.h>

@class NSDate, NSString;

@interface SWScheduledSystemWake : NSObject <BSInvalidatable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSDate *_lock_wakeDate;	// 16 = 0x10
    NSString *_lock_wakeIdentifier;	// 24 = 0x18
    long long _lock_leeway;	// 32 = 0x20
    _Bool _lock_invalidated;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000009d8d
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)invalidate;	// IMP=0x0000000000009d4d
- (void)cancelWake;	// IMP=0x0000000000009c62
- (void)scheduleWake:(double)arg1 leeway:(long long)arg2;	// IMP=0x00000000000098d9
@property(readonly, nonatomic) long long leeway;
@property(readonly, nonatomic) double wakeTime;
@property(readonly, nonatomic, getter=isScheduled) _Bool scheduled;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000009486
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000009400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
