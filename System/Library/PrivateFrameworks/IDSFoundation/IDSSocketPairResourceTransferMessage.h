//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IDSSocketPairResourceTransferMessage
{
}

+ (id)cancelMessageWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 cancelReason:(unsigned char)arg4;	// IMP=0x00000000000a91c7
+ (id)resumeMessageWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 nextByteOffset:(unsigned long long)arg4;	// IMP=0x00000000000a90af
- (unsigned char)cancelReason;	// IMP=0x00000000000a8deb
- (unsigned long long)byteOffset;	// IMP=0x00000000000a8abd
- (unsigned char)type;	// IMP=0x00000000000a8a14
- (unsigned char)command;	// IMP=0x00000000000a8a09

@end

