//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCControllerPlayerIndicator-Protocol.h>
#import <GameController/GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface-Protocol.h>
#import <GameController/_GCIPCEndpointClient-Protocol.h>

@class GCController, NSString;
@protocol GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCPlayerIndicatorXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerPlayerIndicator, GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface>
{
    GCController *_controller;	// 8 = 0x8
    id <GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface> _serverEndpoint;	// 16 = 0x10
    id _connectionInterruptionRegistration;	// 24 = 0x18
    id _connectionInvalidationRegistration;	// 32 = 0x20
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 40 = 0x28
    long long _playerIndex;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009fc2d
@property long long playerIndex; // @synthesize playerIndex=_playerIndex;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000009fba3
- (void)invalidateConnection;	// IMP=0x000000000009faff
- (void)refreshPlayerIndex;	// IMP=0x000000000009fa3e
- (void)newPlayerIndex:(long long)arg1;	// IMP=0x000000000009f9c9
- (void)_remoteEndpointSetPlayerIndex:(long long)arg1;	// IMP=0x000000000009f95b
- (void)setController:(id)arg1;	// IMP=0x000000000009f930
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;	// IMP=0x000000000009f708
- (id)init;	// IMP=0x000000000009f6dd
- (id)initWithIdentifier:(id)arg1 initialPlayerIndex:(long long)arg2;	// IMP=0x000000000009f5c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

