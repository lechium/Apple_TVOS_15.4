//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitCameraRecordingBulkSendDataRead : PBCodable <NSCopying>
{
    unsigned long long _bitRate;	// 8 = 0x8
    unsigned long long _bytesRead;	// 16 = 0x10
    unsigned long long _chunkSequenceNumber;	// 24 = 0x18
    unsigned long long _duration;	// 32 = 0x20
    unsigned long long _iFrameInterval;	// 40 = 0x28
    unsigned long long _imageHeight;	// 48 = 0x30
    unsigned long long _imageWidth;	// 56 = 0x38
    unsigned long long _sequenceNumber;	// 64 = 0x40
    unsigned long long _timestamp;	// 72 = 0x48
    NSString *_cameraUUID;	// 80 = 0x50
    NSString *_sessionUUID;	// 88 = 0x58
    unsigned int _status;	// 96 = 0x60
    struct {
        unsigned int bitRate:1;
        unsigned int bytesRead:1;
        unsigned int chunkSequenceNumber:1;
        unsigned int duration:1;
        unsigned int iFrameInterval:1;
        unsigned int imageHeight:1;
        unsigned int imageWidth:1;
        unsigned int sequenceNumber:1;
        unsigned int timestamp:1;
        unsigned int status:1;
    } _has;	// 100 = 0x64
}

- (void).cxx_destruct;	// IMP=0x0000000000849385
@property(nonatomic) unsigned long long iFrameInterval; // @synthesize iFrameInterval=_iFrameInterval;
@property(nonatomic) unsigned long long imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) unsigned long long imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) unsigned long long bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long bytesRead; // @synthesize bytesRead=_bytesRead;
@property(nonatomic) unsigned long long chunkSequenceNumber; // @synthesize chunkSequenceNumber=_chunkSequenceNumber;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(retain, nonatomic) NSString *cameraUUID; // @synthesize cameraUUID=_cameraUUID;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008490f9
- (unsigned long long)hash;	// IMP=0x0000000000848f63
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000848cee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000848b23
- (void)copyTo:(id)arg1;	// IMP=0x000000000084898a
- (void)writeTo:(id)arg1;	// IMP=0x00000000008487d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008487c4
- (id)dictionaryRepresentation;	// IMP=0x00000000008483c0
- (id)description;	// IMP=0x0000000000848311
@property(nonatomic) _Bool hasIFrameInterval;
@property(nonatomic) _Bool hasImageWidth;
@property(nonatomic) _Bool hasImageHeight;
@property(nonatomic) _Bool hasBitRate;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) _Bool hasBytesRead;
@property(nonatomic) _Bool hasChunkSequenceNumber;
@property(nonatomic) _Bool hasSequenceNumber;
@property(readonly, nonatomic) _Bool hasSessionUUID;
@property(readonly, nonatomic) _Bool hasCameraUUID;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end
