//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface STTimerShowTimerAndPerformAction : AFSiriRequest
{
    NSArray *_timers;	// 8 = 0x8
    NSArray *_templateActions;	// 16 = 0x10
    unsigned long long _action;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007c82
- (void).cxx_destruct;	// IMP=0x0000000000007fb8
@property(copy, nonatomic) NSArray *templateActions; // @synthesize templateActions=_templateActions;
@property(copy, nonatomic) NSArray *timers; // @synthesize timers=_timers;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007d48
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007c8a
- (unsigned long long)action;	// IMP=0x0000000000007c71
- (id)timer;	// IMP=0x0000000000007c54
- (id)_initWithTimers:(id)arg1 templateActions:(id)arg2 timerAction:(unsigned long long)arg3;	// IMP=0x0000000000007b80
- (id)_initWithTimers:(id)arg1 action:(unsigned long long)arg2;	// IMP=0x0000000000007b69
- (id)_initWithTimer:(id)arg1 action:(unsigned long long)arg2;	// IMP=0x0000000000007ac9

@end

