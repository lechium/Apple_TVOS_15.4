//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSVoiceTriggerAssetDownloadMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000012c0b
- (void)_notifyObserver:(id)arg1;	// IMP=0x0000000000012fad
- (void)_didInstalledNewVoiceTriggerAsset;	// IMP=0x0000000000012ecd
- (void)_stopMonitoring;	// IMP=0x0000000000012e2a
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0000000000012d0b
- (const char *)_notificationKey;	// IMP=0x0000000000012ca2
- (id)init;	// IMP=0x0000000000012c60

@end

