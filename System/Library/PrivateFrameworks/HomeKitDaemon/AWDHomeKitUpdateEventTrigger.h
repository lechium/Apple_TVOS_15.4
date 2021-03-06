//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitUpdateEventTrigger : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _requestOrigin;	// 16 = 0x10
    unsigned int _resultErrorCode;	// 20 = 0x14
    int _updateType;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
        unsigned int requestOrigin:1;
        unsigned int resultErrorCode:1;
        unsigned int updateType:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) unsigned int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000068a4b5
- (unsigned long long)hash;	// IMP=0x000000000068a437
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000068a340
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000068a28f
- (void)copyTo:(id)arg1;	// IMP=0x000000000068a201
- (void)writeTo:(id)arg1;	// IMP=0x000000000068a151
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000068a144
- (id)dictionaryRepresentation;	// IMP=0x0000000000689ec3
- (id)description;	// IMP=0x0000000000689e14
- (int)StringAsRequestOrigin:(id)arg1;	// IMP=0x0000000000689d77
- (id)requestOriginAsString:(int)arg1;	// IMP=0x0000000000689d10
@property(nonatomic) _Bool hasRequestOrigin;
@property(nonatomic) int requestOrigin; // @synthesize requestOrigin=_requestOrigin;
- (int)StringAsUpdateType:(id)arg1;	// IMP=0x0000000000689b2c
- (id)updateTypeAsString:(int)arg1;	// IMP=0x0000000000689a5e
@property(nonatomic) _Bool hasUpdateType;
@property(nonatomic) int updateType; // @synthesize updateType=_updateType;
@property(nonatomic) _Bool hasResultErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end

