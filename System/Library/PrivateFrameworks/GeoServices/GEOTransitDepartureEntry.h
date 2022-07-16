//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOTransitDepartureEntry : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _tripMuid;	// 16 = 0x10
    unsigned int _departureTime;	// 24 = 0x18
    struct {
        unsigned int has_tripMuid:1;
        unsigned int has_departureTime:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003a681a
- (void).cxx_destruct;	// IMP=0x00000000003a6dfc
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003a6db6
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003a6d2e
- (unsigned long long)hash;	// IMP=0x00000000003a6ccd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a6be4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a6b46
- (void)copyTo:(id)arg1;	// IMP=0x00000000003a6ad3
- (void)writeTo:(id)arg1;	// IMP=0x00000000003a6a46
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003a6a37
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003a6465
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003a6453
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003a62ea
- (id)jsonRepresentation;	// IMP=0x00000000003a61d8
- (id)dictionaryRepresentation;	// IMP=0x00000000003a5fa0
- (id)description;	// IMP=0x00000000003a5ef1
@property(nonatomic) _Bool hasDepartureTime;
@property(nonatomic) unsigned int departureTime;
@property(nonatomic) _Bool hasTripMuid;
@property(nonatomic) unsigned long long tripMuid;

@end

