//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDMapsIdentifier, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFactoid : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_icon;	// 24 = 0x18
    double _number;	// 32 = 0x20
    GEOPDMapsIdentifier *_placeId;	// 40 = 0x28
    NSMutableArray *_placeNames;	// 48 = 0x30
    NSString *_text;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    int _entryType;	// 84 = 0x54
    int _unit;	// 88 = 0x58
    _Bool _canBeDisplayedInPlaceSummary;	// 92 = 0x5c
    struct {
        unsigned int has_number:1;
        unsigned int has_entryType:1;
        unsigned int has_unit:1;
        unsigned int has_canBeDisplayedInPlaceSummary:1;
        unsigned int read_unknownFields:1;
        unsigned int read_icon:1;
        unsigned int read_placeId:1;
        unsigned int read_placeNames:1;
        unsigned int read_text:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 96 = 0x60
}

+ (id)factoidsForPlaceData:(id)arg1;	// IMP=0x00000000009ceb63
+ (_Bool)factoidPairAvailableForPlaceData:(id)arg1;	// IMP=0x00000000009cea69
- (void).cxx_destruct;	// IMP=0x0000000000b21b08
- (unsigned long long)hash;	// IMP=0x0000000000b218be
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b2166b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b2125f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b20ebf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b20eb0
- (id)jsonRepresentation;	// IMP=0x0000000000b203b0
- (id)dictionaryRepresentation;	// IMP=0x0000000000b1fc7b
- (id)description;	// IMP=0x0000000000b1fbcc
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b1e79f
- (id)init;	// IMP=0x0000000000b1e743
- (id)bestLocalizedPlaceName;	// IMP=0x00000000009cecb6

@end
