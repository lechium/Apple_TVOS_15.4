//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLabelGeometry : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_labelShapes;	// 16 = 0x10
    _Bool _hasSelectionPolygon;	// 24 = 0x18
    struct {
        unsigned int has_hasSelectionPolygon:1;
    } _flags;	// 28 = 0x1c
}

+ (id)labelGeometryWithPlaceData:(id)arg1;	// IMP=0x00000000009d1b91
- (void).cxx_destruct;	// IMP=0x0000000000b34f6a
- (unsigned long long)hash;	// IMP=0x0000000000b34f17
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b34e46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b34c68
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b34ae3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b34ad4
- (id)jsonRepresentation;	// IMP=0x0000000000b34765
- (id)dictionaryRepresentation;	// IMP=0x0000000000b34353
- (id)description;	// IMP=0x0000000000b342a4

@end

