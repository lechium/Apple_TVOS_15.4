//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AWAttentionEvent;

@interface SleepSM
{
    unsigned long long _suppressWakeForHIDEventsTimeRangeStart;	// 32 = 0x20
    unsigned long long _suppressTimeInTicks;	// 40 = 0x28
    _Bool _sleepAllowed;	// 48 = 0x30
    AWAttentionEvent *_attentionalEvent;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000012cb0
@property(retain, nonatomic) AWAttentionEvent *attentionalEvent; // @synthesize attentionalEvent=_attentionalEvent;
- (void)_temporarilySuppressWakeForHIDEvents;	// IMP=0x0010000000012c20
- (void)_enterOffStateForced;	// IMP=0x0010000000012bf0
- (void)_enterOnStateForced;	// IMP=0x0010000000012b10
- (void)_enterOffStateAutomatically;	// IMP=0x0010000000012970
- (void)_enterOnStateAutomatically;	// IMP=0x00100000000127a0
- (_Bool)_canEnterOffStateAutomatically;	// IMP=0x0010000000012750
- (_Bool)_canBeInOnStateAutomatically;	// IMP=0x00100000000122a0
- (id)init;	// IMP=0x0010000000011b70

@end

