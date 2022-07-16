//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsFoundation/DTSpringBoardProcessControlServiceAuthorizedMethods-Protocol.h>

@class NSString;

@interface DTSpringBoardProcessControlService <DTSpringBoardProcessControlServiceAuthorizedMethods>
{
}

+ (void)registerCapabilities:(id)arg1;	// IMP=0x0000000000060af7
- (_Bool)_HIDEvent:(unsigned int)arg1 hold:(_Bool)arg2;	// IMP=0x0000000000064468
- (_Bool)_dismissTodayView;	// IMP=0x000000000006444f
- (_Bool)_triggerSiri;	// IMP=0x00000000000643df
- (void)showSBWidget:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000064305
- (void)showNotificiationCenterWidget:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000063de4
- (void)simulateNotificationForBundleID:(id)arg1 payload:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000000063c29
- (void)sendProcessControlEvent:(id)arg1 toPid:(id)arg2;	// IMP=0x0000000000063bc0
- (void)sendProcessControlEvent:(id)arg1 toPid:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000062c45
- (id)processIdentifierForBundleIdentifier:(id)arg1;	// IMP=0x0000000000062c1d
- (id)_launchSuspendedProcessWithBundleIdentifier:(id)arg1 orDevicePath:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000060cbc
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;	// IMP=0x0000000000060b8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
