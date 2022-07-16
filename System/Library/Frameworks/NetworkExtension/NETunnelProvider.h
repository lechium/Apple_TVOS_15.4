//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider <NSExtensionRequestHandling>
{
    _Bool _reasserting;	// 8 = 0x8
    _Bool _onDemandEnabled;	// 9 = 0x9
    _Bool _gracefulShutdown;	// 10 = 0xa
    NEVPNProtocol *_protocolConfiguration;	// 16 = 0x10
    NSArray *_appRules;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001833ce
@property _Bool gracefulShutdown; // @synthesize gracefulShutdown=_gracefulShutdown;
@property _Bool onDemandEnabled; // @synthesize onDemandEnabled=_onDemandEnabled;
@property(retain) NSArray *appRules; // @synthesize appRules=_appRules;
@property(retain) NEVPNProtocol *protocolConfiguration; // @synthesize protocolConfiguration=_protocolConfiguration;
@property(readonly) long long routingMethod;
- (void)handleAppMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000183109
@property _Bool reasserting;
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000182ca5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

