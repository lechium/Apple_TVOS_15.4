//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSSoftwareUpdateCheckingMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isSoftwareUpdateCheckingRunning;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00000000000a4c16
- (void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(_Bool)arg2;	// IMP=0x00000000000a50f4
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(_Bool)arg1;	// IMP=0x00000000000a5082
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(_Bool)arg1;	// IMP=0x00000000000a5010
- (_Bool)isSoftwareUpdateCheckingRunning;	// IMP=0x00000000000a5000
- (unsigned char)_softwareUpdateCheckingState;	// IMP=0x00000000000a4fa6
- (_Bool)_checkSoftwareUpdateCheckingState;	// IMP=0x00000000000a4eeb
- (void)_stopMonitoring;	// IMP=0x00000000000a4e48
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000000000a4cb8
- (id)init;	// IMP=0x00000000000a4c6b

@end

