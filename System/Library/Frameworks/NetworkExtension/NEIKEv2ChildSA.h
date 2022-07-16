//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEIKEv2ChildSAConfiguration, NEIKEv2ChildSAProposal, NEIKEv2ESPSPI, NEIKEv2IKESA, NSArray, NSData, NSError, NSMutableData;

@interface NEIKEv2ChildSA : NSObject
{
    CDUnion_a1d6768c _dhECKey;	// 16 = 0x10
    _Bool _shouldSendStateUpdate;	// 320 = 0x140
    _Bool _isFirstChild;	// 321 = 0x141
    _Bool _isInitiator;	// 322 = 0x142
    _Bool _sequencePerTrafficClassSupported;	// 323 = 0x143
    unsigned short _incomingDatabaseReqID;	// 324 = 0x144
    unsigned short _outgoingDatabaseReqID;	// 326 = 0x146
    unsigned int _childID;	// 328 = 0x148
    NEIKEv2IKESA *_ikeSA;	// 336 = 0x150
    unsigned long long _state;	// 344 = 0x158
    NSError *_error;	// 352 = 0x160
    NEIKEv2ChildSAConfiguration *_configuration;	// 360 = 0x168
    NEIKEv2ChildSAProposal *_chosenProposal;	// 368 = 0x170
    NSArray *_localTrafficSelectors;	// 376 = 0x178
    NSArray *_remoteTrafficSelectors;	// 384 = 0x180
    NSData *_localNonce;	// 392 = 0x188
    NSData *_remoteNonce;	// 400 = 0x190
    NSMutableData *_dhPublicKey;	// 408 = 0x198
    NSData *_dhRemotePublicKey;	// 416 = 0x1a0
    struct OpaqueSecDHContext *_dhContext;	// 424 = 0x1a8
    unsigned long long _dhPublicKeySize;	// 432 = 0x1b0
    NSMutableData *_incomingEncryptionKey;	// 440 = 0x1b8
    NSMutableData *_incomingIntegrityKey;	// 448 = 0x1c0
    NSMutableData *_outgoingEncryptionKey;	// 456 = 0x1c8
    NSMutableData *_outgoingIntegrityKey;	// 464 = 0x1d0
    NEIKEv2ChildSAProposal *_initiatorRekeyProposal;	// 472 = 0x1d8
    NEIKEv2ChildSAProposal *_initiatorRekeyNonPFSProposal;	// 480 = 0x1e0
    NEIKEv2ChildSAProposal *_responderRekeyProposal;	// 488 = 0x1e8
    NEIKEv2ESPSPI *_rekeyedSPI;	// 496 = 0x1f0
    NEIKEv2ESPSPI *_rekeyedRemoteSPI;	// 504 = 0x1f8
}

+ (unsigned short)nextDatabaseReqID;	// IMP=0x0000000000088156
- (void).cxx_destruct;	// IMP=0x00000000000896fa
@property _Bool sequencePerTrafficClassSupported; // @synthesize sequencePerTrafficClassSupported=_sequencePerTrafficClassSupported;
@property(retain) NEIKEv2ESPSPI *rekeyedRemoteSPI; // @synthesize rekeyedRemoteSPI=_rekeyedRemoteSPI;
@property(retain) NEIKEv2ESPSPI *rekeyedSPI; // @synthesize rekeyedSPI=_rekeyedSPI;
@property(retain) NEIKEv2ChildSAProposal *responderRekeyProposal; // @synthesize responderRekeyProposal=_responderRekeyProposal;
@property(retain) NEIKEv2ChildSAProposal *initiatorRekeyNonPFSProposal; // @synthesize initiatorRekeyNonPFSProposal=_initiatorRekeyNonPFSProposal;
@property(retain) NEIKEv2ChildSAProposal *initiatorRekeyProposal; // @synthesize initiatorRekeyProposal=_initiatorRekeyProposal;
@property(retain) NSMutableData *outgoingIntegrityKey; // @synthesize outgoingIntegrityKey=_outgoingIntegrityKey;
@property(retain) NSMutableData *outgoingEncryptionKey; // @synthesize outgoingEncryptionKey=_outgoingEncryptionKey;
@property(retain) NSMutableData *incomingIntegrityKey; // @synthesize incomingIntegrityKey=_incomingIntegrityKey;
@property(retain) NSMutableData *incomingEncryptionKey; // @synthesize incomingEncryptionKey=_incomingEncryptionKey;
@property unsigned long long dhPublicKeySize; // @synthesize dhPublicKeySize=_dhPublicKeySize;
@property struct OpaqueSecDHContext *dhContext; // @synthesize dhContext=_dhContext;
@property(retain) NSData *dhRemotePublicKey; // @synthesize dhRemotePublicKey=_dhRemotePublicKey;
@property(retain) NSMutableData *dhPublicKey; // @synthesize dhPublicKey=_dhPublicKey;
@property(retain) NSData *remoteNonce; // @synthesize remoteNonce=_remoteNonce;
@property(retain) NSData *localNonce; // @synthesize localNonce=_localNonce;
@property(retain) NSArray *remoteTrafficSelectors; // @synthesize remoteTrafficSelectors=_remoteTrafficSelectors;
@property(retain) NSArray *localTrafficSelectors; // @synthesize localTrafficSelectors=_localTrafficSelectors;
@property(retain) NEIKEv2ChildSAProposal *chosenProposal; // @synthesize chosenProposal=_chosenProposal;
@property(retain) NEIKEv2ChildSAConfiguration *configuration; // @synthesize configuration=_configuration;
@property _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property _Bool isFirstChild; // @synthesize isFirstChild=_isFirstChild;
@property _Bool shouldSendStateUpdate; // @synthesize shouldSendStateUpdate=_shouldSendStateUpdate;
@property(retain) NSError *error; // @synthesize error=_error;
@property unsigned long long state; // @synthesize state=_state;
@property unsigned short outgoingDatabaseReqID; // @synthesize outgoingDatabaseReqID=_outgoingDatabaseReqID;
@property unsigned short incomingDatabaseReqID; // @synthesize incomingDatabaseReqID=_incomingDatabaseReqID;
@property unsigned int childID; // @synthesize childID=_childID;
@property __weak NEIKEv2IKESA *ikeSA; // @synthesize ikeSA=_ikeSA;
@property(retain) NSArray *responderTrafficSelectors;
@property(retain) NSArray *initiatorTrafficSelectors;
@property(readonly) NSArray *configuredResponderTrafficSelectors;
@property(readonly) NSArray *configuredInitiatorTrafficSelectors;
@property(readonly) _Bool isRekeying;
@property(retain) NSMutableData *responderSendIntegrityKey;
@property(retain) NSMutableData *initiatorSendIntegrityKey;
@property(retain) NSMutableData *responderSendEncryptionKey;
@property(retain) NSMutableData *initiatorSendEncryptionKey;
- (unsigned char (*)[32])dhCurveKeyForDesc:(int)arg1;	// IMP=0x0000000000088dc8
- (struct ccec_full_ctx *)dhECPKeyForDesc:(int)arg1;	// IMP=0x0000000000088da8
@property(retain) NSData *responderNonce;
@property(retain) NSData *initiatorNonce;
- (_Bool)shouldGenerateNewDHKeys;	// IMP=0x0000000000088a8e
- (void)sentStateUpdate;	// IMP=0x0000000000088a7a
- (void)setState:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00000000000886c9
- (void)dealloc;	// IMP=0x000000000008868b
- (void)resetIKESA:(id)arg1;	// IMP=0x0000000000088679
- (void)reset;	// IMP=0x0000000000088535
- (id)initWithConfiguration:(id)arg1 childID:(unsigned int)arg2 isFirstChild:(_Bool)arg3 ikeSA:(id)arg4;	// IMP=0x0000000000088270
- (id)description;	// IMP=0x000000000008817e
- (_Bool)generateAllValues;	// IMP=0x00000000000b0631
- (_Bool)generateLocalValues;	// IMP=0x00000000000b05e0
- (_Bool)generateLocalNonce;	// IMP=0x00000000000b04f2
- (_Bool)generateLocalDHValues;	// IMP=0x00000000000b0174

@end

