//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSClamshellStateMonitor
{
}

+ (id)sharedInstance;	// IMP=0x000000000002fa05
- (void)_notifyObserver:(id)arg1 withClamshellState:(_Bool)arg2;	// IMP=0x000000000002fb0f
- (void)_didReceiveClamshellStateChangeNotification:(_Bool)arg1;	// IMP=0x000000000002fa9d
- (void)_stopMonitoring;	// IMP=0x000000000002fa97
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000000002fa91
- (_Bool)isClamshellClosed;	// IMP=0x000000000002fa89
- (id)init;	// IMP=0x000000000002fa5a

@end

