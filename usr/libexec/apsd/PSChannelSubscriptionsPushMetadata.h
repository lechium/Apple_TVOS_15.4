//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface PSChannelSubscriptionsPushMetadata : PBCodable
{
    unsigned long long _checkpoint;	// 8 = 0x8
    NSData *_channelId;	// 16 = 0x10
    struct {
        unsigned int checkpoint:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000071b08
@property(nonatomic) unsigned long long checkpoint; // @synthesize checkpoint=_checkpoint;
@property(retain, nonatomic) NSData *channelId; // @synthesize channelId=_channelId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000071a6e
- (unsigned long long)hash;	// IMP=0x0010000000071a1e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007195d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000718c4
- (void)copyTo:(id)arg1;	// IMP=0x0010000000071860
- (void)writeTo:(id)arg1;	// IMP=0x00100000000717fb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000717ee
- (id)dictionaryRepresentation;	// IMP=0x001000000007151a
- (id)description;	// IMP=0x001000000007146b
@property(nonatomic) _Bool hasCheckpoint;
@property(readonly, nonatomic) _Bool hasChannelId;

@end
