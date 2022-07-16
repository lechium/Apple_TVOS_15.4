//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitHomeSharing : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _errorCode;	// 16 = 0x10
    int _responseType;	// 20 = 0x14
    int _stage;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
        unsigned int responseType:1;
        unsigned int stage:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004d10ca
- (unsigned long long)hash;	// IMP=0x00000000004d104b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d0f54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d0ea3
- (void)copyTo:(id)arg1;	// IMP=0x00000000004d0e15
- (void)writeTo:(id)arg1;	// IMP=0x00000000004d0d65
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004d0d58
- (id)dictionaryRepresentation;	// IMP=0x00000000004d0aec
- (id)description;	// IMP=0x00000000004d0a3d
- (int)StringAsStage:(id)arg1;	// IMP=0x00000000004d0948
- (id)stageAsString:(int)arg1;	// IMP=0x00000000004d08b0
@property(nonatomic) _Bool hasStage;
@property(nonatomic) int stage; // @synthesize stage=_stage;
- (int)StringAsResponseType:(id)arg1;	// IMP=0x00000000004d0794
- (id)responseTypeAsString:(int)arg1;	// IMP=0x00000000004d0716
@property(nonatomic) _Bool hasResponseType;
@property(nonatomic) int responseType; // @synthesize responseType=_responseType;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end

