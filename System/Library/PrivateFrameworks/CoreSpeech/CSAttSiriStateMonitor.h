//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAttSiriStateMonitor
{
    unsigned long long _currentState;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000007dccc
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void)_stopMonitoring;	// IMP=0x000000000007ddef
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000000007dde9
- (void)notifyUpdatedState:(unsigned long long)arg1;	// IMP=0x000000000007dd79
- (_Bool)isInAttendingState;	// IMP=0x000000000007dd64
- (id)init;	// IMP=0x000000000007dd21

@end

