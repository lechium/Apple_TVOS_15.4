//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSSpringboardStartMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isSpringBoardStarted;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00000000000b1abc
- (_Bool)_checkSpringBoardStarted;	// IMP=0x00000000000b1eef
- (_Bool)isSpringboardStarted;	// IMP=0x00000000000b1edf
- (void)_notifyObserver:(id)arg1 withStarted:(_Bool)arg2;	// IMP=0x00000000000b1e75
- (void)_didReceiveSpringboardStarted:(_Bool)arg1;	// IMP=0x00000000000b1e03
- (void)_didReceiveSpringboardStartedInQueue:(_Bool)arg1;	// IMP=0x00000000000b1d91
- (void)_stopMonitoring;	// IMP=0x00000000000b1cee
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000000000b1b5e
- (id)init;	// IMP=0x00000000000b1b11

@end

