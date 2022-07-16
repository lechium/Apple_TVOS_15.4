//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLMicroLocationIntersiloDelegate : NSObject
{
    void *_microLocationNotifier;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)duetMonitor:(id)arg1 nowPlayingDidChange:(id)arg2;	// IMP=0x00100000006491bd
- (void)duetMonitor:(id)arg1 homekitAccessoryDidChange:(id)arg2;	// IMP=0x0010000000648cf3
- (void)duetMonitor:(id)arg1 homekitSceneDidChange:(id)arg2;	// IMP=0x0010000000648905
- (void)duetMonitor:(id)arg1 foregroundAppDidLaunch:(id)arg2;	// IMP=0x0010000000648895
- (void)duetMonitorDeviceFirstWakeOfDay:(id)arg1;	// IMP=0x0010000000648790
- (void)onLowConfidenceVisit:(id)arg1;	// IMP=0x0010000000648784
- (void)onVisit:(id)arg1;	// IMP=0x0010000000648777
- (void)clATVAirplayMonitorService:(id)arg1 didFindDevices:(id)arg2;	// IMP=0x001000000064846d
- (id)initWithMicroLocationNotifier:(void *)arg1;	// IMP=0x0010000000648423

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

