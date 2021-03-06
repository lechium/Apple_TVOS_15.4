//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOJunctionInfo, PBUnknownFields;

@interface GEOManeuverData : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOJunctionInfo *_junctionInfo;	// 16 = 0x10
    int _maneuverType;	// 24 = 0x18
    struct {
        unsigned int has_maneuverType:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008ab28e
- (void).cxx_destruct;	// IMP=0x00000000008ab6a9
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008ab643
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008ab5a2
- (unsigned long long)hash;	// IMP=0x00000000008ab53f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008ab444
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008ab39e
- (void)copyTo:(id)arg1;	// IMP=0x00000000008ab329
- (void)writeTo:(id)arg1;	// IMP=0x00000000008ab2aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008ab29b
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008ab22e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008ab21c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008aa7a2
- (id)jsonRepresentation;	// IMP=0x00000000008aa690
- (id)dictionaryRepresentation;	// IMP=0x00000000008a9ff5
- (id)description;	// IMP=0x00000000008a9f46
@property(retain, nonatomic) GEOJunctionInfo *junctionInfo;
@property(readonly, nonatomic) _Bool hasJunctionInfo;
- (int)StringAsManeuverType:(id)arg1;	// IMP=0x00000000008a971c
- (id)maneuverTypeAsString:(int)arg1;	// IMP=0x00000000008a92d6
@property(nonatomic) _Bool hasManeuverType;
@property(nonatomic) int maneuverType;

@end

