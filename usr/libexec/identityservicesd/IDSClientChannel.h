//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSUUID;

@interface IDSClientChannel : NSObject
{
    _Bool _hasMetadata;	// 8 = 0x8
    _Bool _clientReady;	// 9 = 0x9
    _Bool _closed;	// 10 = 0xa
    _Bool _verboseFunctionalLogging;	// 11 = 0xb
    _Bool _verbosePerformanceLogging;	// 12 = 0xc
    int _excessiveCachingReportCounter;	// 16 = 0x10
    int _excessiveCachingCount;	// 20 = 0x14
    NSUUID *_uuid;	// 24 = 0x18
    CDUnknownBlockType _readHandler;	// 32 = 0x20
    CDUnknownBlockType _writeHandler;	// 40 = 0x28
    NSString *_destination;	// 48 = 0x30
    long long _transportType;	// 56 = 0x38
    CDUnknownBlockType _packetBufferHandler;	// 64 = 0x40
    NSMutableArray *_cachedDataForClient;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000057bc0
@property(retain, nonatomic) NSMutableArray *cachedDataForClient; // @synthesize cachedDataForClient=_cachedDataForClient;
@property(copy, nonatomic) CDUnknownBlockType packetBufferHandler; // @synthesize packetBufferHandler=_packetBufferHandler;
@property(nonatomic) _Bool verbosePerformanceLogging; // @synthesize verbosePerformanceLogging=_verbosePerformanceLogging;
@property(nonatomic) _Bool verboseFunctionalLogging; // @synthesize verboseFunctionalLogging=_verboseFunctionalLogging;
@property(readonly, nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(readonly, nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(nonatomic) _Bool clientReady; // @synthesize clientReady=_clientReady;
@property(nonatomic) int excessiveCachingCount; // @synthesize excessiveCachingCount=_excessiveCachingCount;
@property(nonatomic) int excessiveCachingReportCounter; // @synthesize excessiveCachingReportCounter=_excessiveCachingReportCounter;
@property(readonly, nonatomic) _Bool hasMetadata; // @synthesize hasMetadata=_hasMetadata;
@property(copy, nonatomic) CDUnknownBlockType writeHandler; // @synthesize writeHandler=_writeHandler;
@property(copy, nonatomic) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
@property(copy, nonatomic, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)osChannelInfoLog;	// IMP=0x0010000000057830
- (void)invalidate;	// IMP=0x0010000000057820
- (_Bool)writeBuffer:(char *)arg1 bufferSize:(unsigned int)arg2 metaData:(const void *)arg3 metadataSize:(unsigned int)arg4 moreComing:(_Bool)arg5;	// IMP=0x00100000000577f0
- (_Bool)writePacketBuffer:(CDStruct_727fadec *)arg1 metaData:(const void *)arg2 metadataSize:(unsigned int)arg3 moreComing:(_Bool)arg4;	// IMP=0x00100000000577c0
- (_Bool)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 metaData:(const void *)arg3 metadataSize:(unsigned int)arg4;	// IMP=0x0010000000057790
- (void)connectWithProtocoHandler;	// IMP=0x0010000000057780
- (_Bool)connectWithTransportThread;	// IMP=0x0010000000057760
- (id)initWithDestination:(id)arg1;	// IMP=0x0010000000057680

@end

