//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSExtensionRequestHandling-Protocol.h>

@class NSString;

@interface ASDTestFlightServiceExtension : NSObject <NSExtensionRequestHandling>
{
}

- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x0000000000044dff
- (void)serviceExtensionTimeWillExpire;	// IMP=0x0000000000044df9
- (void)reloadAppsFromServerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044de4
- (void)didReachTerminalPhaseWithBetaBundleID:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000044dcf
- (void)didReceivePushMessages:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044dba
- (void)didReceivePushToken:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044da5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

