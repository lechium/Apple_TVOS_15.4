//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAVVCRecordingClientMonitor
{
    unsigned long long _numOfAVVCRecordingClients;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000b5c9d
@property(readonly, nonatomic) unsigned long long numOfAVVCRecordingClients; // @synthesize numOfAVVCRecordingClients=_numOfAVVCRecordingClients;
- (void)_stopMonitoring;	// IMP=0x00100000000b5ce5
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000b5cdf
- (id)init;	// IMP=0x00100000000b5ca5

@end

