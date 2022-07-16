//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CSBiometricMatchMonitorDelegate;

@interface CSBiometricMatchMonitor
{
    id <CSBiometricMatchMonitorDelegate> _delegate;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000000a955
- (void).cxx_destruct;	// IMP=0x000000000000a9a0
@property(nonatomic) __weak id <CSBiometricMatchMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1;	// IMP=0x000000000000a96b
- (_Bool)getLastBiometricMatchEvent:(_Bool *)arg1 atTime:(unsigned long long *)arg2;	// IMP=0x000000000000a963
- (void)startObserving;	// IMP=0x000000000000a95d

@end
