//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSOtherAppRecordingStateMonitor
{
}

+ (id)sharedInstance;	// IMP=0x00000000000155ed
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x00000000000158b9
- (void)_systemControllerDied:(id)arg1;	// IMP=0x00000000000157e2
- (void)_startObservingOtherAppRecordingState;	// IMP=0x00000000000157dc
- (_Bool)isOtherAppRecording;	// IMP=0x00000000000157d4
- (void)handleOtherAppRecordingStateChange:(id)arg1;	// IMP=0x00000000000156e3
- (void)_stopMonitoring;	// IMP=0x00000000000156dd
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000000000156af
- (id)init;	// IMP=0x0000000000015642

@end

