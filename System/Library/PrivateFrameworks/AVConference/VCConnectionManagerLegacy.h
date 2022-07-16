//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol VCConnectionProtocol;

__attribute__((visibility("hidden")))
@interface VCConnectionManagerLegacy
{
    id <VCConnectionProtocol> _pendingPrimaryConnection;	// 712 = 0x2c8
    id <VCConnectionProtocol> _pendingSecondaryConnection;	// 720 = 0x2d0
    NSString *_relayConnectionID;	// 728 = 0x2d8
}

@property(copy, nonatomic) NSString *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(retain, nonatomic) id <VCConnectionProtocol> pendingSecondaryConnection; // @synthesize pendingSecondaryConnection=_pendingSecondaryConnection;
@property(retain, nonatomic) id <VCConnectionProtocol> pendingPrimaryConnection; // @synthesize pendingPrimaryConnection=_pendingPrimaryConnection;
- (void)updateNegotiatedSettingsOnetoOne:(id)arg1;	// IMP=0x00000000000ecdfc
- (void)updateAllBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000000ecdf6
- (void)updateOneToOneBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000000ecdf0
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x00000000000ecdea
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x00000000000ecde4
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000000ecdde
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000000ecdd8
- (void)reportLinkProbingStatsWithDuplicationJustStarted:(_Bool)arg1;	// IMP=0x00000000000ecdd2
- (void)updateConnectionForDuplication;	// IMP=0x00000000000ecdcc
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x00000000000ecdc4
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x00000000000ecdbc
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;	// IMP=0x00000000000ecdb6
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(_Bool)arg4 isOutgoing:(_Bool)arg5;	// IMP=0x00000000000ecdb0
- (void)updateSessionStats:(unsigned short)arg1;	// IMP=0x00000000000ecdaa
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(_Bool *)arg2;	// IMP=0x00000000000ecccd
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x00000000000ecb7f
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(_Bool *)arg2 isSourceIPv6:(_Bool *)arg3;	// IMP=0x00000000000ecafd
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x00000000000eca3a
- (void)updateCellularMTU:(int)arg1;	// IMP=0x00000000000ec989
- (id)getSecondaryConnectionToBeCompared;	// IMP=0x00000000000ec951
- (id)getPrimaryConnectionToBeCompared;	// IMP=0x00000000000ec919
- (int)updateStateWithCurrentConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3 demote:(int *)arg4 replaceOnly:(int *)arg5;	// IMP=0x00000000000ec7d1
- (_Bool)shouldNominateConnection:(id)arg1;	// IMP=0x00000000000ec752
- (int)nominateConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;	// IMP=0x00000000000ec6b5
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;	// IMP=0x00000000000ebfef
- (int)removeConnectionWithIPPortInternal:(struct tagIPPORT *)arg1 isLocalInterface:(_Bool)arg2;	// IMP=0x00000000000eba88
- (int)removeConnectionWithIPPort:(struct tagIPPORT *)arg1 isLocalInterface:(_Bool)arg2;	// IMP=0x00000000000eba32
- (int)removeConnection:(id)arg1;	// IMP=0x00000000000eb9a3
- (int)addConnection:(id)arg1;	// IMP=0x00000000000eadcb
- (int)shouldNominateCandidatePairInternal:(struct tagCANDIDATEPAIR *)arg1 interfaceMask:(int)arg2 nominated:(int *)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;	// IMP=0x00000000000ea861
- (int)shouldNominateCandidatePair:(struct tagCANDIDATEPAIR *)arg1 interfaceMask:(int)arg2 nominated:(int *)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;	// IMP=0x00000000000ea7eb
- (void)dealloc;	// IMP=0x00000000000ea762
- (id)init;	// IMP=0x00000000000ea710

@end
