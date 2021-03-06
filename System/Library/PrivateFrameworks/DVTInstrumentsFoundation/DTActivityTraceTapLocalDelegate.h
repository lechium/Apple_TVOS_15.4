//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTOSLogLoaderDelegate-Protocol.h>
#import <DVTInstrumentsFoundation/DTTapLocalDelegate-Protocol.h>

@class DTActivityTraceTapConfig, DTActivityTraceTapLocalShuttle, DTOSLogLoader, DTTapLocal, NSString, XRMobileAgentDock;
@protocol DVTDeviceGlobalStatusIndicator, OS_dispatch_source;

@interface DTActivityTraceTapLocalDelegate : NSObject <DTOSLogLoaderDelegate, DTTapLocalDelegate>
{
    DTTapLocal *_tap;	// 8 = 0x8
    DTActivityTraceTapConfig *_config;	// 16 = 0x10
    DTOSLogLoader *_loaderStop;	// 24 = 0x18
    XRMobileAgentDock *_dock;	// 32 = 0x20
    DTActivityTraceTapLocalShuttle *_shuttle;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_harLoggingTimer;	// 48 = 0x30
    int _harLoggingNotificationToken;	// 56 = 0x38
    id <DVTDeviceGlobalStatusIndicator> _recordingStatusIndicator;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000417da
- (void)fetchDataForReason:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040f79
- (_Bool)canFetchWhileArchiving;	// IMP=0x0000000000040f71
- (void)unpause;	// IMP=0x0000000000040f6b
- (void)pause;	// IMP=0x0000000000040f65
- (void)stop;	// IMP=0x0000000000040d26
- (void)start;	// IMP=0x000000000004006f
- (void)updateHARLogPrefsWithIsEnabled:(_Bool)arg1;	// IMP=0x000000000003fca7
- (void)tearDownHARTimer;	// IMP=0x000000000003fc99
- (void)initializeHARTimer;	// IMP=0x000000000003fb72
- (void)_handleHARExternalNotificationChange;	// IMP=0x000000000003fac7
- (void)_handleStopOfHARRecordingCausedByUser;	// IMP=0x000000000003fa11
- (void)_tearDownHARDisabledNotifications;	// IMP=0x000000000003f9ed
- (void)_setupHARDisabledByExternalClientNotifications;	// IMP=0x000000000003f8c5
- (void)logLoaderNeedsFetchNow:(id)arg1;	// IMP=0x000000000003f88c
- (void)setTap:(id)arg1;	// IMP=0x000000000003f850
- (id)validateConfig;	// IMP=0x000000000003f456
- (void)dealloc;	// IMP=0x000000000003f414
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000003f398

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

