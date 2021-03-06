//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VCControlChannelDialogV1
{
    NSArray *_optionalTopics;	// 32 = 0x20
}

+ (_Bool)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 messageType:(unsigned int)arg3 sessionID:(unsigned int)arg4 transactionDelegate:(id)arg5;	// IMP=0x000000000034abaa
+ (void)sendConfirmationToParticipantID:(id)arg1 transactionID:(id)arg2 sessionID:(unsigned int)arg3 transactionDelegate:(id)arg4;	// IMP=0x000000000034a761
+ (id)newEncryptedMessageFromMessage:(id)arg1 sequenceNumber:(unsigned short)arg2 transactionDelegate:(id)arg3;	// IMP=0x000000000034a477
+ (_Bool)encryptMessage:(id)arg1 buffer:(char *)arg2 size:(unsigned int)arg3 sequenceNumber:(unsigned short)arg4 transactionDelegate:(id)arg5;	// IMP=0x0000000000349bf8
- (void)getTopic:(id *)arg1 message:(id *)arg2 fromPayload:(id)arg3;	// IMP=0x000000000034d2d7
- (id)processMessageData:(id)arg1 participantID:(id)arg2 topic:(id *)arg3 transactionID:(id *)arg4 messageStatus:(unsigned int *)arg5 isInternalMessage:(_Bool *)arg6;	// IMP=0x000000000034b976
- (id)processEncryptedPayload:(id)arg1 isData:(_Bool)arg2 topic:(id *)arg3 sequenceNumber:(id)arg4 MKIData:(id)arg5 participantID:(id)arg6;	// IMP=0x000000000034b48d
- (_Bool)decryptMessageWithMKI:(void *)arg1 message:(id)arg2 buffer:(char *)arg3 size:(unsigned int)arg4 sequenceNumber:(unsigned short)arg5;	// IMP=0x000000000034afc7
- (id)newDataFromMessage:(id)arg1 topic:(id)arg2 transactionID:(unsigned long long)arg3 isReliable:(_Bool)arg4 transactionDelegate:(id)arg5;	// IMP=0x0000000000349eac
- (_Bool)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 messageType:(unsigned int)arg3 transactionDelegate:(id)arg4;	// IMP=0x00000000003493c8
- (void)dealloc;	// IMP=0x0000000000349363
- (id)initWithSessionID:(unsigned int)arg1 participantID:(id)arg2 participantUUID:(id)arg3 optionalTopics:(id)arg4 participantConfig:(CDStruct_c24deb19 *)arg5 transactionDelegate:(id)arg6;	// IMP=0x00000000003492dd

@end

