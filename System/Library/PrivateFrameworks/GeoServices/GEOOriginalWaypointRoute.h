//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOOriginalWaypointRoute : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_routeLegs;	// 16 = 0x10
    unsigned int _identifier;	// 24 = 0x18
    int _purpose;	// 28 = 0x1c
    struct {
        unsigned int has_identifier:1;
        unsigned int has_purpose:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008b6fb8
+ (Class)routeLegType;	// IMP=0x00000000008b5e9a
- (void).cxx_destruct;	// IMP=0x00000000008b7d79
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008b7c0d
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008b7a3b
- (unsigned long long)hash;	// IMP=0x00000000008b79b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008b788a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008b7665
- (void)copyTo:(id)arg1;	// IMP=0x00000000008b754b
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000008b7406
- (void)writeTo:(id)arg1;	// IMP=0x00000000008b725d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008b724e
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008b6b4f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008b6b3d
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008b66fa
- (id)jsonRepresentation;	// IMP=0x00000000008b65e8
- (id)dictionaryRepresentation;	// IMP=0x00000000008b611a
- (id)description;	// IMP=0x00000000008b606b
- (int)StringAsPurpose:(id)arg1;	// IMP=0x00000000008b5fa0
- (id)purposeAsString:(int)arg1;	// IMP=0x00000000008b5f16
@property(nonatomic) _Bool hasPurpose;
@property(nonatomic) int purpose;
- (id)routeLegAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008b5e7d
- (unsigned long long)routeLegsCount;	// IMP=0x00000000008b5e60
- (void)addRouteLeg:(id)arg1;	// IMP=0x00000000008b5df6
- (void)clearRouteLegs;	// IMP=0x00000000008b5dd9
@property(retain, nonatomic) NSMutableArray *routeLegs;
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) unsigned int identifier;

@end

