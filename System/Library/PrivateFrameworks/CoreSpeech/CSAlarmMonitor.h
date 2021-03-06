//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAlarmMonitor
{
    long long _alarmFiringState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000009698
- (void).cxx_destruct;	// IMP=0x000000000000999e
- (long long)alarmState;	// IMP=0x00000000000098ea
- (void)_stopMonitoring;	// IMP=0x0000000000009833
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0000000000009761
- (void)initializeAlarmState;	// IMP=0x000000000000975b
- (id)init;	// IMP=0x00000000000096ed

@end

