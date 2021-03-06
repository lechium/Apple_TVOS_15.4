//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSFirstUnlockMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _firstUnlocked;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x0040000000083a22
- (_Bool)_checkFirstUnlocked;	// IMP=0x0020000000083d4c
- (_Bool)isFirstUnlocked;	// IMP=0x0010000000083d3c
- (void)_notifyObserver:(id)arg1 withUnlocked:(_Bool)arg2;	// IMP=0x0010000000083cd2
- (void)_didReceiveFirstUnlock:(_Bool)arg1;	// IMP=0x0010000000083c60
- (void)_didReceiveFirstUnlockInQueue:(_Bool)arg1;	// IMP=0x0010000000083bee
- (void)_stopMonitoring;	// IMP=0x0010000000083b4b
- (void)_firstUnlockNotified;	// IMP=0x0010000000083b10
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000083ae9
- (id)init;	// IMP=0x0010000000083a9c

@end

