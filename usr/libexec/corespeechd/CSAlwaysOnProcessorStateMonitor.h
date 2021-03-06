//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAlwaysOnProcessorStateMonitor
{
    _Bool _isListeningEnabled;	// 8 = 0x8
    int _notifyToken;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x004000000009c184
- (_Bool)isEnabled;	// IMP=0x002000000009c39d
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x001000000009c333
- (void)_didReceiveAOPListeningStateChange:(_Bool)arg1;	// IMP=0x001000000009c232
- (void)_stopMonitoring;	// IMP=0x001000000009c22c
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000009c226
- (id)init;	// IMP=0x001000000009c1d9

@end

