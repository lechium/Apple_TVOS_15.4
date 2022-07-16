//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPBTransitLineDisplayHints : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _showVehicleNumber;	// 16 = 0x10
    struct {
        unsigned int has_showVehicleNumber:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d2ede1
- (void).cxx_destruct;	// IMP=0x0000000000d2f0f7
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000d2f0b1
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d2f047
- (unsigned long long)hash;	// IMP=0x0000000000d2f000
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2ef35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2eeb5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d2ee60
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d2edfd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d2edee
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d2ed81
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d2ed6f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d2ec91
- (id)jsonRepresentation;	// IMP=0x0000000000d2eb7f
- (id)dictionaryRepresentation;	// IMP=0x0000000000d2e9aa
- (id)description;	// IMP=0x0000000000d2e8fb
@property(nonatomic) _Bool hasShowVehicleNumber;
@property(nonatomic) _Bool showVehicleNumber;

@end
