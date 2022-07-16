//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreDaemon/ASDTestFlightServiceExtensionRemoteXPCInterface-Protocol.h>

@class ASDTestFlightServiceExtension, NSString;

@interface ASDTestFlightServiceExtensionRemoteContext <ASDTestFlightServiceExtensionRemoteXPCInterface>
{
    ASDTestFlightServiceExtension *_extensionInstance;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003fa36
@property(retain, nonatomic) ASDTestFlightServiceExtension *extensionInstance; // @synthesize extensionInstance=_extensionInstance;
- (void)serviceExtensionTimeWillExpire;	// IMP=0x000000000003f9d4
- (void)serviceExtensionPerformCleanup;	// IMP=0x000000000003f9a0
- (void)reloadAppsFromServerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f8a1
- (void)didReachTerminalPhaseWithBetaBundle:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000003f785
- (void)didReceivePushMessages:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f661
- (void)didReceivePushToken:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f53d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
