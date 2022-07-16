//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, PCSDevice, PCSIDSTransport, PCSKeyClient, PCSKeySyncing;

@interface PCSPeerSyncing : NSObject
{
    _Bool _pendingRequest;	// 8 = 0x8
    int _clientVersion;	// 12 = 0xc
    PCSDevice *_device;	// 16 = 0x10
    PCSIDSTransport *_transport;	// 24 = 0x18
    NSData *_keys;	// 32 = 0x20
    PCSKeyClient *_client;	// 40 = 0x28
    PCSKeySyncing *_syncingManager;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000000b834
@property(retain) PCSKeySyncing *syncingManager; // @synthesize syncingManager=_syncingManager;
@property(retain) PCSKeyClient *client; // @synthesize client=_client;
@property int clientVersion; // @synthesize clientVersion=_clientVersion;
@property _Bool pendingRequest; // @synthesize pendingRequest=_pendingRequest;
@property(retain) NSData *keys; // @synthesize keys=_keys;
@property(retain) PCSIDSTransport *transport; // @synthesize transport=_transport;
@property(retain) PCSDevice *device; // @synthesize device=_device;
- (void)handleIncomingMessage:(id)arg1;	// IMP=0x001000000000b333
- (void)sendReply:(int)arg1 error:(id)arg2 toMessage:(id)arg3;	// IMP=0x001000000000b16e
- (void)keyFailure:(id)arg1;	// IMP=0x001000000000afd5
- (void)setPeerCircleStatus:(_Bool)arg1;	// IMP=0x001000000000aed5
- (void)setPeeriCDPStatus:(_Bool)arg1;	// IMP=0x001000000000add5
- (void)haveKeys:(id)arg1;	// IMP=0x001000000000ab38
- (void)sendKeys;	// IMP=0x001000000000a280
- (void)sendCurrentKeys:(id)arg1;	// IMP=0x0010000000009ed7
- (void)sendSomeKeys:(id)arg1 dsid:(id)arg2;	// IMP=0x0010000000009541
- (void)sendKeysOld;	// IMP=0x0010000000008d99
- (void)checkSyncing:(_Bool)arg1;	// IMP=0x0010000000007e1d
- (_Bool)checkHashWithRateLimit:(id)arg1;	// IMP=0x0010000000007d5e
- (_Bool)ratelimitClientSyncing;	// IMP=0x0010000000007d40
- (double)timeUntilSyncing;	// IMP=0x0010000000007c27
- (double)checkRatelimit:(double)arg1;	// IMP=0x0010000000007b64
- (void)sendiCDPStatus:(_Bool)arg1 circleStatus:(_Bool)arg2 handleReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000079e5
- (void)sendKeys:(id)arg1 dsid:(id)arg2 handleReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000077f4
- (void)sendCurrents:(id)arg1 dsid:(id)arg2 handleReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007603
- (void)sendCommand:(unsigned int)arg1 data:(id)arg2 dsid:(id)arg3 handleReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007358
- (void)updateLastSeen;	// IMP=0x0010000000007289
- (id)uuid;	// IMP=0x0010000000007239
- (id)initWithDevice:(id)arg1 syncingManager:(id)arg2;	// IMP=0x00100000000070f6

@end
