//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCControlChannelTransactionDelegate-Protocol.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCControlChannelMultiWay <VCControlChannelTransactionDelegate>
{
    unsigned int _transportSessionID;	// 104 = 0x68
    int _vfdMessage;	// 108 = 0x6c
    int _vfdCancel;	// 112 = 0x70
    _Bool _isRunning;	// 116 = 0x74
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_pidReceiveProc;	// 120 = 0x78
    NSMutableDictionary *_dialogs;	// 128 = 0x80
    NSMutableDictionary *_activeParticipants;	// 136 = 0x88
    _Bool _isEncryptionEnabled;	// 144 = 0x90
    NSMutableDictionary *_cryptors;	// 152 = 0x98
    void *_currentSendMKI;	// 160 = 0xa0
    void *_currentReceiveMKI;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_sequentialKeyMaterialQueue;	// 176 = 0xb0
    long long _transactionID;	// 184 = 0xb8
    _Bool _didSubmitCCReliableDataNotReceivedSymptom;	// 192 = 0xc0
}

+ (id)allocPayoadDataFromVTPPacket:(struct VCBlockBuffer_t *)arg1 vpktFlags:(struct tagVPKTFLAG *)arg2 channelDataFormat:(struct tagVCIDSChannelDataFormat **)arg3;	// IMP=0x000000000029d8ef
@property(readonly) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(readonly) _Bool isEncryptionEnabled; // @synthesize isEncryptionEnabled=_isEncryptionEnabled;
@property(readonly, nonatomic) NSMutableDictionary *dialogs; // @synthesize dialogs=_dialogs;
@property(nonatomic) int vfdCancel; // @synthesize vfdCancel=_vfdCancel;
@property(nonatomic) int vfdMessage; // @synthesize vfdMessage=_vfdMessage;
@property(nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
- (void)flushReportingStats;	// IMP=0x00000000002a134f
- (void)flushRealTimeReportingStats;	// IMP=0x00000000002a12f4
- (void)deregisterPeriodicTask;	// IMP=0x00000000002a12d5
- (void)registerPeriodicTask;	// IMP=0x00000000002a1282
- (void)periodicTask:(void *)arg1;	// IMP=0x00000000002a0fd3
@property(readonly, nonatomic) unsigned long long nextTransactionID;
- (void)reportSignificantHandshakeDelaySymptomForParticipantID:(id)arg1;	// IMP=0x00000000002a0f2a
- (int)protocolVersionforParticipantID:(id)arg1;	// IMP=0x00000000002a0eb1
- (id)lastUsedMKIBytes;	// IMP=0x00000000002a0cfd
- (_Bool)isParticipantActive:(unsigned long long)arg1;	// IMP=0x00000000002a0c86
- (void)addToReceivedStats:(int)arg1;	// IMP=0x00000000002a0c72
- (void)addToSentStats:(int)arg1;	// IMP=0x00000000002a0c5e
- (void)setEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;	// IMP=0x00000000002a0b54
- (void)addNewKeyMaterial:(id)arg1;	// IMP=0x00000000002a0a93
- (void)updateTransactionIDWithKeyMaterial:(id)arg1;	// IMP=0x00000000002a0675
- (void)scheduleAfter:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a05ce
- (void)removeAllActiveParticipants;	// IMP=0x00000000002a0588
- (void)removeActiveParticipant:(unsigned long long)arg1;	// IMP=0x00000000002a025f
- (_Bool)addActiveParticipant:(unsigned long long)arg1 participantUUID:(id)arg2 withConfiguration:(CDStruct_c24deb19 *)arg3;	// IMP=0x000000000029f941
- (void)sendUnreliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x000000000029f46e
- (void)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x000000000029f0a4
- (_Bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 timeout:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000029ee35
- (_Bool)sendReliableMessageAndWait:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 timeout:(id)arg4;	// IMP=0x000000000029e913
- (id)copyDialogForParticipantID:(id)arg1;	// IMP=0x000000000029e5b8
- (_Bool)sendReliableMessageAndWait:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x000000000029e54c
- (void)messageReceived:(id)arg1 participantInfo:(struct tagVCIDSChannelDataFormat *)arg2;	// IMP=0x000000000029df47
- (id)remoteParticipantIDFromChannelDataFormat:(struct tagVCIDSChannelDataFormat *)arg1;	// IMP=0x000000000029dd81
- (void)flushActiveMessages;	// IMP=0x000000000029dbcf
- (void)stop;	// IMP=0x000000000029d465
- (void)start;	// IMP=0x000000000029c2b2
- (void)dealloc;	// IMP=0x000000000029bd29
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;	// IMP=0x000000000029bd14
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2 mode:(int)arg3;	// IMP=0x000000000029b836
- (_Bool)decryptWithMKI:(void *)arg1 data:(char *)arg2 size:(int)arg3 sequenceNumber:(unsigned short)arg4;	// IMP=0x000000000006bd22
- (_Bool)encryptData:(char *)arg1 size:(int)arg2 sequenceNumber:(unsigned short)arg3;	// IMP=0x000000000006bb5c
- (int)updateEncryption:(CDStruct_5b6da142 *)arg1 derivedSSRC:(unsigned int)arg2;	// IMP=0x000000000006b760
- (int)getKeyDerivationCryptoSet:(CDStruct_5b6da142 *)arg1 withKeyMaterial:(id)arg2 derivedSSRC:(unsigned int *)arg3;	// IMP=0x000000000006b567
- (void)setCurrentSendMKIWithKeyMaterial:(id)arg1;	// IMP=0x000000000006b434
- (void)updateEncryptionWithKeyMaterial:(id)arg1;	// IMP=0x000000000006b192
- (void)updateEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;	// IMP=0x000000000006ad0f
- (void)initializeSRTPInfo:(struct tagSRTPINFO *)arg1;	// IMP=0x000000000006acdc
- (void)finalizeEncryption;	// IMP=0x000000000006ac95
- (void)initializeEncryption;	// IMP=0x000000000006ac38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

