//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, PBUnknownFields;

@interface GEOWaypointLocation : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOLocation *_location;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000ee3cb6
- (void).cxx_destruct;	// IMP=0x0000000000ee4352
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000ee42ec
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000ee4251
- (unsigned long long)hash;	// IMP=0x0000000000ee4216
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ee4153
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ee40c8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000ee4073
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000ee4056
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000ee3ef4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ee3e99
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ee3e8a
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000ee39f5
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000ee39e3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000ee38da
- (id)jsonRepresentation;	// IMP=0x0000000000ee37c8
- (id)dictionaryRepresentation;	// IMP=0x0000000000ee35d0
- (id)description;	// IMP=0x0000000000ee3521
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) _Bool hasLocation;

@end

