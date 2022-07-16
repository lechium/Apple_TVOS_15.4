//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface CSAutomaticVolumeEnabledMonitor
{
    _Bool _isAutomaticVolumeEnabled;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0040000000077ae5
- (void).cxx_destruct;	// IMP=0x0020000000077f57
- (void)_stopMonitoring;	// IMP=0x0010000000077f36
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000077df9
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x0010000000077d8f
- (void)_didReceiveAutomaticVolumeToggled:(_Bool)arg1;	// IMP=0x0010000000077d1d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000077b69
- (id)init;	// IMP=0x0010000000077b3a

@end

