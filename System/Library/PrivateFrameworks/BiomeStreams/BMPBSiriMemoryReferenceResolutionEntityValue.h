//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSData;

@interface BMPBSiriMemoryReferenceResolutionEntityValue : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    NSData *_valueData;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000074111
@property(retain, nonatomic) NSData *valueData; // @synthesize valueData=_valueData;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000074073
- (unsigned long long)hash;	// IMP=0x0000000000073f3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000073e70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000073ddc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000073d75
- (void)writeTo:(id)arg1;	// IMP=0x0000000000073d0f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000073d02
- (id)dictionaryRepresentation;	// IMP=0x0000000000073a5c
- (id)description;	// IMP=0x00000000000739ad
@property(readonly, nonatomic) _Bool hasValueData;
@property(nonatomic) _Bool hasTimestamp;

@end

