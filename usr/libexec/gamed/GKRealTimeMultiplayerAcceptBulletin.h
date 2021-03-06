//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSNumber;

@interface GKRealTimeMultiplayerAcceptBulletin
{
    NSNumber *_blobType;	// 128 = 0x80
    NSNumber *_relayType;	// 136 = 0x88
    NSData *_relayConnectionID;	// 144 = 0x90
    NSData *_relayTranscationID;	// 152 = 0x98
    NSData *_selfRelayIP;	// 160 = 0xa0
    NSNumber *_selfRelayPort;	// 168 = 0xa8
    NSData *_peerRelayIP;	// 176 = 0xb0
    NSNumber *_peerRelayPort;	// 184 = 0xb8
    NSData *_relayToken;	// 192 = 0xc0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000004223d
- (void).cxx_destruct;	// IMP=0x002000000004387b
@property(retain) NSData *relayToken; // @synthesize relayToken=_relayToken;
@property(retain) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(retain) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(retain) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(retain) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(retain) NSData *relayTranscationID; // @synthesize relayTranscationID=_relayTranscationID;
@property(retain) NSData *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(retain) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(retain) NSNumber *blobType; // @synthesize blobType=_blobType;
- (void)handleAction:(id)arg1;	// IMP=0x00100000000433d1
- (void)assembleBulletin;	// IMP=0x0010000000042dae
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000042a25
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000042668
- (id)initWithPushNotification:(id)arg1;	// IMP=0x0010000000042282
- (_Bool)isAccept;	// IMP=0x001000000004227a
- (id)notificationName;	// IMP=0x0010000000042266
- (id)debugLine;	// IMP=0x0010000000042259
- (id)aggregateDictionaryKey;	// IMP=0x0010000000042245

@end

