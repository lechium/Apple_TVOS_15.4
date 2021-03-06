//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOTransitPrice : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_currencyCode;	// 16 = 0x10
    int _amountInCents;	// 24 = 0x18
    unsigned int _subunit;	// 28 = 0x1c
    struct {
        unsigned int has_amountInCents:1;
        unsigned int has_subunit:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003b1212
- (void).cxx_destruct;	// IMP=0x00000000003b16dc
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003b1696
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003b15e8
- (unsigned long long)hash;	// IMP=0x00000000003b1560
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b1438
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003b136e
- (void)copyTo:(id)arg1;	// IMP=0x00000000003b12d5
- (void)writeTo:(id)arg1;	// IMP=0x00000000003b122e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003b121f
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003b11b2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003b11a0
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003b0fc4
- (id)jsonRepresentation;	// IMP=0x00000000003b0eb2
- (id)dictionaryRepresentation;	// IMP=0x00000000003b0c36
- (id)description;	// IMP=0x00000000003b0b87
@property(nonatomic) _Bool hasSubunit;
@property(nonatomic) unsigned int subunit;
@property(retain, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) _Bool hasCurrencyCode;
@property(nonatomic) _Bool hasAmountInCents;
@property(nonatomic) int amountInCents;

@end

