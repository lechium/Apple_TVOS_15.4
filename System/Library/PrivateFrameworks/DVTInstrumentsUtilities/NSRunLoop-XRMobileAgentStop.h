//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSRunLoop.h>

#import <DVTInstrumentsUtilities/XRMobileAgentStop-Protocol.h>

@class NSString;

@interface NSRunLoop (XRMobileAgentStop) <XRMobileAgentStop>
- (void)receiveMobileAgent:(id)arg1;	// IMP=0x00000000000220fd
- (void)_scheduleAgentVisit:(id)arg1;	// IMP=0x0000000000021fce
- (id)xr_exitRunLoopTicket;	// IMP=0x0000000000021f96
- (id)xr_waitForGroupTicket:(id)arg1;	// IMP=0x0000000000021f40

// Remaining properties
@property(readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
