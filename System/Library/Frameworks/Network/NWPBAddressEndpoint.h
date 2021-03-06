//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSData;

@interface NWPBAddressEndpoint : PBCodable <NSCopying>
{
    NSData *_address;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005b540
@property(retain, nonatomic) NSData *address; // @synthesize address=_address;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005b4d0
- (unsigned long long)hash;	// IMP=0x000000000005b4b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005b410
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005b390
- (void)copyTo:(id)arg1;	// IMP=0x000000000005b360
- (void)writeTo:(id)arg1;	// IMP=0x000000000005b330
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005b320
- (id)dictionaryRepresentation;	// IMP=0x000000000005b2c0
- (id)description;	// IMP=0x000000000005b210
@property(readonly, nonatomic) _Bool hasAddress;

@end

