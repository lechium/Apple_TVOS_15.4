//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SiriCoreAceSerialization : NSObject
{
}

+ (id)_insufficientDataErrorForBytesNeeded:(unsigned long long)arg1 available:(unsigned long long)arg2;	// IMP=0x000000000002752c
+ (_Bool)tryParsingPacketWithBytes:(const void *)arg1 length:(unsigned long long)arg2 rawPacket:(CDStruct_95d471ab *)arg3 object:(id *)arg4 bytesRead:(unsigned long long *)arg5 error:(id *)arg6;	// IMP=0x0000000000027226
+ (id)_tryParsingSpeechPacketBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000026fd2
+ (id)_tryParsingPlistPacketBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000026f5f
+ (_Bool)tryParsingAceHeaderData:(id)arg1 compressionType:(unsigned char *)arg2 bytesRead:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000026d32
+ (id)aceDataForSpeechPacket:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026d20
+ (id)aceDataForStreamEnd;	// IMP=0x0000000000026d0e
+ (id)aceDataForNop;	// IMP=0x0000000000026cfc
+ (id)aceDataForPong:(unsigned int)arg1;	// IMP=0x0000000000026cea
+ (id)aceDataForPing:(unsigned int)arg1;	// IMP=0x0000000000026cd8
+ (id)aceDataForObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026cc6
+ (id)aceDataForStreamHeaderWithCompressionType:(unsigned char)arg1;	// IMP=0x0000000000026cb4
+ (id)dataForSpeechPacket:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000266ae
+ (id)dataForStreamEnd;	// IMP=0x0000000000026676
+ (id)dataForNop;	// IMP=0x0000000000026645
+ (id)dataForPong:(unsigned int)arg1;	// IMP=0x0000000000026616
+ (id)dataForPing:(unsigned int)arg1;	// IMP=0x00000000000265e7
+ (id)dataForObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026447
+ (id)dataForStreamHeaderWithCompressionType:(unsigned char)arg1;	// IMP=0x0000000000026414

@end

