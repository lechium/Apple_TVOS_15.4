//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface PSChannelUpdate : PBCodable
{
    unsigned long long _checkpoint;	// 8 = 0x8
    NSData *_channelId;	// 16 = 0x10
    int _channelStatus;	// 24 = 0x18
    struct {
        unsigned int checkpoint:1;
        unsigned int channelStatus:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0020000000042b52
@property(nonatomic) unsigned long long checkpoint; // @synthesize checkpoint=_checkpoint;
@property(retain, nonatomic) NSData *channelId; // @synthesize channelId=_channelId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000042a9b
- (unsigned long long)hash;	// IMP=0x0010000000042a2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000042946
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000042890
- (void)copyTo:(id)arg1;	// IMP=0x001000000004280f
- (void)writeTo:(id)arg1;	// IMP=0x0010000000042780
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000042773
- (id)dictionaryRepresentation;	// IMP=0x0010000000042381
- (id)description;	// IMP=0x00100000000422d2
@property(nonatomic) _Bool hasCheckpoint;
- (int)StringAsChannelStatus:(id)arg1;	// IMP=0x001000000004222a
- (id)channelStatusAsString:(int)arg1;	// IMP=0x00100000000421d5
@property(nonatomic) _Bool hasChannelStatus;
@property(nonatomic) int channelStatus; // @synthesize channelStatus=_channelStatus;
@property(readonly, nonatomic) _Bool hasChannelId;

@end

