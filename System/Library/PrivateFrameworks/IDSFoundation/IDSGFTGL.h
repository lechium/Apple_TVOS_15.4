//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSMutableArray;

@interface IDSGFTGL
{
    NSArray *_remoteCandidatePairs;	// 840 = 0x348
    NSMutableArray *_virtualCandidatePairs;	// 848 = 0x350
    _Bool _allowE2E;	// 856 = 0x358
    unsigned int _keyMaterialDataCounter;	// 860 = 0x35c
    _Bool _keyMaterialReady;	// 864 = 0x360
    NSData *_keyMaterialData;	// 872 = 0x368
    CDUnknownBlockType _keyMaterialSentHandler;	// 880 = 0x370
}

- (void).cxx_destruct;	// IMP=0x0000000000097046
- (void)_discardKeyMaterialMessage:(long long)arg1;	// IMP=0x0000000000096fd2
- (void)sendKeyMaterialMessageData:(id)arg1 relayGroupID:(id)arg2 destinationURIs:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000009668a
- (void)setTimeBase:(id)arg1;	// IMP=0x0000000000096673
- (void)updateURIToParticipantIDs:(id)arg1 relaySessionID:(id)arg2 sessionInfo:(id)arg3;	// IMP=0x000000000009635f
- (void)_destroyVirtualRelayLinksForCandidatePair:(id)arg1;	// IMP=0x0000000000095df3
- (void)removeParticipantIDs:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 sessionStateCounter:(unsigned int)arg4;	// IMP=0x00000000000959b9
- (void)manageDesignatedDestinations:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 withType:(unsigned short)arg4 sessionStateCounter:(unsigned int)arg5;	// IMP=0x0000000000095030
- (_Bool)_processRemovedLocalAddressList:(id)arg1;	// IMP=0x00000000000949dd
- (void)_discardCandidatePairsWithOption:(_Bool)arg1;	// IMP=0x0000000000094857
- (void)enableUPlusOneSessionForTransition:(_Bool)arg1;	// IMP=0x00000000000946e2
- (void)setIsUPlusOneSession:(_Bool)arg1;	// IMP=0x00000000000945f5
- (void)receiveJoinNotificationFromAParticipant;	// IMP=0x0000000000094560
- (void)_sendConnectionDataWithRemovedAddressList:(id)arg1;	// IMP=0x000000000009442b
- (void)_disableE2E;	// IMP=0x0000000000093e8b
- (void)_enableE2E;	// IMP=0x0000000000093ce9
- (_Bool)_setupNewQRLinkIfNecessary:(id)arg1;	// IMP=0x0000000000093a82
- (void)_sendRelayInterfaceInfo:(id)arg1;	// IMP=0x000000000009319f
- (long long)_getQRAllocateType;	// IMP=0x0000000000093194
- (_Bool)_postProcessAllocbindResponse:(id)arg1 candidatePair:(id)arg2 candidatePairToken:(id)arg3;	// IMP=0x0000000000091fc6
- (void)_processCommandRelayInterfaceInfo:(id)arg1 candidatePairToken:(id)arg2;	// IMP=0x00000000000906e7
- (void)_processReceivedRemoteCandidatePairs:(id)arg1;	// IMP=0x000000000008f457
- (id)_findVirtualCandidatePair:(id)arg1;	// IMP=0x000000000008f28b
- (void)_setupVirtualCandidatePairs:(id)arg1 remoteCandidatePair:(id)arg2;	// IMP=0x000000000008eac3
- (void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2;	// IMP=0x000000000008eabd
- (void)setDefaultUnderlyingLink:(BOOL)arg1;	// IMP=0x000000000008e835
- (void)disconnectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000008e7f4
- (void)invalidate;	// IMP=0x000000000008e778
- (void)startWithOptions:(id)arg1;	// IMP=0x000000000008e48a

@end
