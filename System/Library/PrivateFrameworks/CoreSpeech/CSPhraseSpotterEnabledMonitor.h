//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSPhraseSpotterEnabledMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isPhraseSpotterEnabled;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00000000000d4156
- (void)_phraseSpotterEnabledDidChange;	// IMP=0x00000000000d4446
- (_Bool)_checkPhraseSpotterEnabled;	// IMP=0x00000000000d4364
- (_Bool)isEnabled;	// IMP=0x00000000000d4354
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x00000000000d42ea
- (void)_didReceivePhraseSpotterSettingChangedInQueue:(_Bool)arg1;	// IMP=0x00000000000d4278
- (void)_stopMonitoring;	// IMP=0x00000000000d4250
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000000000d41ea
- (id)init;	// IMP=0x00000000000d41ab

@end

