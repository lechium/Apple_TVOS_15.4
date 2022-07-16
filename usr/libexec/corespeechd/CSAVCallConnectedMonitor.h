//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAVCallConnectedMonitor
{
    _Bool _hasConnectedAVCall;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000cdac2
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x00200000000cdc97
- (void)_systemControllerDied:(id)arg1;	// IMP=0x00100000000cdbc0
- (void)_startObservingAVCallActiveChange;	// IMP=0x00100000000cdbba
- (_Bool)hasConnectedAVCall;	// IMP=0x00100000000cdbaa
- (void)_stopMonitoring;	// IMP=0x00100000000cdba4
- (void)_handleCallActiveDidChangeNotification:(id)arg1;	// IMP=0x00100000000cdb93
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000cdb56
- (id)init;	// IMP=0x00100000000cdb17

@end

