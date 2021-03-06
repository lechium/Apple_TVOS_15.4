//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDataChannelLinkContext, NSArray, _IDSDatagramChannel;

@interface IDSDatagramChannel : NSObject
{
    _IDSDatagramChannel *_internal;	// 8 = 0x8
}

+ (id)realTimeContext;	// IMP=0x00000000000deb4c
- (void).cxx_destruct;	// IMP=0x00000000000edf14
- (void)osChannelInfoLog;	// IMP=0x00000000000edf0e
- (void)generateMetadataWithDatagramInfo:(CDStruct_4aae7d13)arg1 options:(CDStruct_a035aa27 *)arg2 currentDatagramCount:(unsigned char)arg3 totalDatagramCount:(unsigned char)arg4 byteBuffer:(CDStruct_457e09f6 *)arg5;	// IMP=0x00000000000edbbc
- (void)_reportFirstPacketTimeForMKI:(id)arg1;	// IMP=0x00000000000ed7bd
- (void)reportFirstPacketTimeForMKI:(id)arg1;	// IMP=0x00000000000ed489
- (void)requestSessionInfoWithOptions:(id)arg1;	// IMP=0x00000000000ed059
- (void)startMKMRecoveryForParticipantIDs:(id)arg1;	// IMP=0x00000000000ecb1b
- (void)setUPlusOneMode:(_Bool)arg1 isInitiator:(_Bool)arg2;	// IMP=0x00000000000ec947
- (void)queryStatusWithOptions:(id)arg1;	// IMP=0x00000000000ec5ee
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x00000000000ec295
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000000ebf3c
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000000ebbe3
- (void)setWiFiAssist:(_Bool)arg1;	// IMP=0x00000000000ebb46
- (CDStruct_d00011ad *)_setWiFiAssist:(_Bool)arg1;	// IMP=0x00000000000eba9d
- (void)setChannelPreferences:(id)arg1;	// IMP=0x00000000000e9f3b
- (void)_buildPacketBufferMetaData:(CDStruct_d00011ad *)arg1;	// IMP=0x00000000000e9f17
- (void)sendMetadata;	// IMP=0x00000000000e99e2
- (void)readyToRead;	// IMP=0x00000000000e9991
- (void)setReadHandlerWithOptions:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e98ae
- (void)setReadHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e97cb
- (void)setEventHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e96e8
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_4aae7d13)arg3 options:(CDStruct_a035aa27 *)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e96d6
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 flags:(CDStruct_4aae7d13)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e96ba
- (void)_writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_4aae7d13)arg3 options:(CDStruct_a035aa27 *)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000e8a3d
- (void)writeDatagrams:(const void **)arg1 datagramSizes:(unsigned int *)arg2 datagramInfo:(CDStruct_4aae7d13)arg3 datagramCount:(int)arg4 options:(CDStruct_a035aa27 *)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e8a37
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_4aae7d13 *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e8a31
- (void)start;	// IMP=0x00000000000e828b
- (void)invalidate;	// IMP=0x00000000000e8131
- (void)close;	// IMP=0x00000000000e80b7
- (void)readDatagramsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e72bb
- (void)readDatagramWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6498
- (void)processMetadataForDatagram:(char *)arg1 size:(unsigned long long)arg2 datagramInfo:(CDStruct_4aae7d13 *)arg3 options:(CDStruct_a035aa27 *)arg4;	// IMP=0x00000000000e0db7
- (void)sendMediaMembershipChangedInfo:(unsigned char)arg1;	// IMP=0x00000000000e0c55
- (void)sendMediaEncryptionInfoWithMKM:(id)arg1 MKS:(id)arg2 MKI:(id)arg3 isLocallyGenerated:(_Bool)arg4 encryptionSequenceNumber:(unsigned long long)arg5;	// IMP=0x00000000000e0674
- (void)selectDefaultLink:(BOOL)arg1;	// IMP=0x00000000000e04a1
- (void)addNewIDSDataChannelLinkWithAttributes:(char *)arg1 linkAttributesLength:(unsigned short)arg2;	// IMP=0x00000000000dfeb5
- (void)removeIDSDataChannelLinkContext:(BOOL)arg1 linkUUID:(id)arg2 reason:(unsigned char)arg3;	// IMP=0x00000000000dfa0d
- (void)sendEventConnectedWithDummyLinkInfo;	// IMP=0x00000000000df7b4
- (int)underlyingFileDescriptor;	// IMP=0x00000000000df700
- (void)_logReceivingStats:(unsigned long long)arg1;	// IMP=0x00000000000df4a7
- (void)_logSendingStats:(unsigned long long)arg1;	// IMP=0x00000000000df24e
- (id)description;	// IMP=0x00000000000df0a2
- (void)dealloc;	// IMP=0x00000000000defd2
- (id)cachedMetadata;	// IMP=0x00000000000defc0
- (id)initWithDestination:(id)arg1;	// IMP=0x00000000000debcf
- (id)initWithSocketDescriptor:(int)arg1;	// IMP=0x00000000000de9ca
@property(readonly) IDSDataChannelLinkContext *defaultLink;
@property(readonly) NSArray *connectedLinks;

@end

