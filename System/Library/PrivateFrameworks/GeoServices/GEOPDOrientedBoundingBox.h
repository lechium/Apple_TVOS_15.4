//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDOrientedPosition;

@interface GEOPDOrientedBoundingBox : PBCodable <NSCopying>
{
    double _depth;	// 8 = 0x8
    double _height;	// 16 = 0x10
    GEOPDOrientedPosition *_position;	// 24 = 0x18
    double _width;	// 32 = 0x20
    struct {
        unsigned int has_depth:1;
        unsigned int has_height:1;
        unsigned int has_width:1;
    } _flags;	// 40 = 0x28
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000ff6466
- (void).cxx_destruct;	// IMP=0x0000000000ff6e9a
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000ff6dca
- (unsigned long long)hash;	// IMP=0x0000000000ff6a65
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ff690f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ff6833
- (void)copyTo:(id)arg1;	// IMP=0x0000000000ff677a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ff66c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ff66b8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000ff6072
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000ff6060
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000ff5e26
- (id)jsonRepresentation;	// IMP=0x0000000000ff5e17
- (id)dictionaryRepresentation;	// IMP=0x0000000000ff5c2a
- (id)description;	// IMP=0x0000000000ff5b7b
@property(nonatomic) _Bool hasDepth;
@property(nonatomic) double depth;
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) double height;
@property(nonatomic) _Bool hasWidth;
@property(nonatomic) double width;
@property(retain, nonatomic) GEOPDOrientedPosition *position;
@property(readonly, nonatomic) _Bool hasPosition;

@end

