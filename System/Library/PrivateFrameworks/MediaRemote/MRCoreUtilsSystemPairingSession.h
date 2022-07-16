//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MRCoreUtilsSystemPairingSession
{
}

+ (id)pairingManager;	// IMP=0x000000000000cc87
+ (_Bool)systemPairingAvailable;	// IMP=0x000000000000cc2f
- (id)mediaRemotePairedDevices;	// IMP=0x000000000000c12d
- (id)pairedPeerDevices;	// IMP=0x000000000000bc07
- (id)pairedPeerDevice;	// IMP=0x000000000000b818
- (id)updatePeer;	// IMP=0x000000000000b781
- (id)removePeer;	// IMP=0x000000000000b17f
- (id)addPeer;	// IMP=0x000000000000b029
- (_Bool)shouldAutoRetryPairingExchange:(id)arg1;	// IMP=0x000000000000b021
- (id)initializePairingSession:(struct PairingSessionPrivate *)arg1;	// IMP=0x000000000000b007

@end
