//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSSpeechDetectionDevicePresentMonitor
{
}

+ (id)sharedInstance;	// IMP=0x004000000004c5dc
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x004000000004c859
- (void)_systemControllerDied:(id)arg1;	// IMP=0x001000000004c782
- (void)_startObservingSpeechDetectionVADPresence;	// IMP=0x001000000004c77c
- (_Bool)isPresent;	// IMP=0x001000000004c774
- (void)handleSpeechDetectionVADPresentChange:(id)arg1;	// IMP=0x001000000004c694
- (void)_stopMonitoring;	// IMP=0x001000000004c68e
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000004c660
- (id)init;	// IMP=0x001000000004c631

@end

