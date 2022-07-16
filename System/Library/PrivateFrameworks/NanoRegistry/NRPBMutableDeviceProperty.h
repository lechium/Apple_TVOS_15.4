//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NRPBPropertyValue;

@interface NRPBMutableDeviceProperty : PBCodable <NSCopying>
{
    NRPBPropertyValue *_value;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000031956
@property(retain, nonatomic) NRPBPropertyValue *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000318d7
- (unsigned long long)hash;	// IMP=0x00000000000318ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000031820
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000317a8
- (void)copyTo:(id)arg1;	// IMP=0x000000000003177e
- (void)writeTo:(id)arg1;	// IMP=0x000000000003175a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003174d
- (id)dictionaryRepresentation;	// IMP=0x000000000003150b
- (id)description;	// IMP=0x000000000003145c
@property(readonly, nonatomic) _Bool hasValue;

@end
