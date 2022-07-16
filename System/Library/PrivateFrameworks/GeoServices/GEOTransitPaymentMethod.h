//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOTransitPaymentMethod : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003b0739
- (void).cxx_destruct;	// IMP=0x00000000003b0a58
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003b0a12
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003b098e
- (unsigned long long)hash;	// IMP=0x00000000003b0953
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b0890
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003b0805
- (void)copyTo:(id)arg1;	// IMP=0x00000000003b07b0
- (void)writeTo:(id)arg1;	// IMP=0x00000000003b0755
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003b0746
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003b06d9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003b06cc
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003b05ec
- (id)jsonRepresentation;	// IMP=0x00000000003b04da
- (id)dictionaryRepresentation;	// IMP=0x00000000003b0327
- (id)description;	// IMP=0x00000000003b0278
@property(retain, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
