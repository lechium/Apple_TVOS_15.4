//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAdBlockerAssetMetaUpdateMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000cf9c9
- (void)_notifyObserver:(id)arg1;	// IMP=0x00200000000cfd0f
- (void)_didReceiveNewAdBlockerAssetMetaData;	// IMP=0x00100000000cfc2f
- (void)_stopMonitoring;	// IMP=0x00100000000cfb8c
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000cfa6d
- (const char *)_asssetMetaUpdatedKey;	// IMP=0x00100000000cfa60
- (id)init;	// IMP=0x00100000000cfa1e

@end

