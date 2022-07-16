//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEExtensionAppProxyProviderHostDelegate-Protocol.h>
#import <NetworkExtension/NEFlowDivertPluginDriver-Protocol.h>

@class NSString;

@interface NEAgentAppProxyExtension <NEExtensionAppProxyProviderHostDelegate, NEFlowDivertPluginDriver>
{
}

- (void)extension:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000171496
- (void)setDelegateInterface:(unsigned int)arg1;	// IMP=0x000000000017144a
- (void)connectWithParameters:(id)arg1;	// IMP=0x000000000017112d
- (id)driverInterface;	// IMP=0x00000000001710c1
- (id)managerInterface;	// IMP=0x0000000000171055

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

