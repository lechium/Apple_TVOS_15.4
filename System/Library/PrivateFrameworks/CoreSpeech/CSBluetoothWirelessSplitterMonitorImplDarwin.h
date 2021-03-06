//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSBluetoothWirelessSplitterMonitorImplDarwin
{
    unsigned long long _splitterState;	// 8 = 0x8
    _Bool _shouldDisableSpeakerVerificationInSplitterMode;	// 16 = 0x10
}

- (void)_notifyObserver:(id)arg1 splitterState:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(_Bool)arg3;	// IMP=0x000000000002850f
- (void)_didReceiveWirelessSplitterStateChange;	// IMP=0x0000000000028444
- (void)_stopMonitoring;	// IMP=0x00000000000283c5
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0000000000028339
- (unsigned long long)splitterState;	// IMP=0x0000000000028305
- (void)splitterState:(CDUnknownBlockType)arg1;	// IMP=0x00000000000282d9
- (void)updateSplitterState:(unsigned long long)arg1 shouldDisableSpeakerVerificationInSplitterMode:(_Bool)arg2;	// IMP=0x00000000000281f4
- (id)init;	// IMP=0x0000000000028168

@end

