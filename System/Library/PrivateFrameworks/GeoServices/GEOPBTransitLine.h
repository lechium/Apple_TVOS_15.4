//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitArtwork, GEOPBTransitLineDisplayHints, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitLine : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    struct GEOPBTransitTimeRange *_operatingHours;	// 24 = 0x18
    unsigned long long _operatingHoursCount;	// 32 = 0x20
    unsigned long long _operatingHoursSpace;	// 40 = 0x28
    GEOPBTransitArtwork *_alternateArtwork;	// 48 = 0x30
    GEOPBTransitArtwork *_artwork;	// 56 = 0x38
    GEOPBTransitLineDisplayHints *_displayHints;	// 64 = 0x40
    GEOPBTransitArtwork *_headerArtwork;	// 72 = 0x48
    NSString *_lineColor;	// 80 = 0x50
    GEOPBTransitArtwork *_modeArtwork;	// 88 = 0x58
    unsigned long long _muid;	// 96 = 0x60
    NSString *_nameDisplayString;	// 104 = 0x68
    GEOStyleAttributes *_styleAttributes;	// 112 = 0x70
    unsigned int _readerMarkPos;	// 120 = 0x78
    unsigned int _readerMarkLength;	// 124 = 0x7c
    struct os_unfair_lock_s _readerLock;	// 128 = 0x80
    int _guidanceSnappingType;	// 132 = 0x84
    unsigned int _lineIndex;	// 136 = 0x88
    int _placeDisplayStyle;	// 140 = 0x8c
    int _preferredDepartureTimeStyle;	// 144 = 0x90
    unsigned int _systemIndex;	// 148 = 0x94
    int _transitType;	// 152 = 0x98
    struct {
        unsigned int has_muid:1;
        unsigned int has_guidanceSnappingType:1;
        unsigned int has_lineIndex:1;
        unsigned int has_placeDisplayStyle:1;
        unsigned int has_preferredDepartureTimeStyle:1;
        unsigned int has_systemIndex:1;
        unsigned int has_transitType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_operatingHours:1;
        unsigned int read_alternateArtwork:1;
        unsigned int read_artwork:1;
        unsigned int read_displayHints:1;
        unsigned int read_headerArtwork:1;
        unsigned int read_lineColor:1;
        unsigned int read_modeArtwork:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 156 = 0x9c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d2c992
- (void).cxx_destruct;	// IMP=0x0000000000d2e7d8
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000d2e6e0
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d2e2e0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2dce4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2d8da
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d2d5ee
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d2d12d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d2d11e
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d2c1e8
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d2c1bb
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d2b4f5
- (id)jsonRepresentation;	// IMP=0x0000000000d2b3c8
- (id)dictionaryRepresentation;	// IMP=0x0000000000d2a9fa
@property(readonly, copy) NSString *description;
- (int)StringAsPlaceDisplayStyle:(id)arg1;	// IMP=0x0000000000d2a8b9
- (id)placeDisplayStyleAsString:(int)arg1;	// IMP=0x0000000000d2a853
@property(nonatomic) _Bool hasPlaceDisplayStyle;
@property(nonatomic) int placeDisplayStyle;
@property(retain, nonatomic) NSString *nameDisplayString;
@property(readonly, nonatomic) _Bool hasNameDisplayString;
@property(retain, nonatomic) GEOPBTransitLineDisplayHints *displayHints;
@property(readonly, nonatomic) _Bool hasDisplayHints;
- (void)setOperatingHours:(struct GEOPBTransitTimeRange *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000d2a4e6
- (struct GEOPBTransitTimeRange)operatingHoursAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000d2a409
- (void)addOperatingHours:(struct GEOPBTransitTimeRange)arg1;	// IMP=0x0000000000d2a394
- (void)clearOperatingHours;	// IMP=0x0000000000d2a341
@property(readonly, nonatomic) struct GEOPBTransitTimeRange *operatingHours;
@property(readonly, nonatomic) unsigned long long operatingHoursCount;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
- (int)StringAsPreferredDepartureTimeStyle:(id)arg1;	// IMP=0x0000000000d29f0c
- (id)preferredDepartureTimeStyleAsString:(int)arg1;	// IMP=0x0000000000d29e7f
@property(nonatomic) _Bool hasPreferredDepartureTimeStyle;
@property(nonatomic) int preferredDepartureTimeStyle;
@property(nonatomic) _Bool hasTransitType;
@property(nonatomic) int transitType;
@property(nonatomic) _Bool hasSystemIndex;
@property(nonatomic) unsigned int systemIndex;
@property(retain, nonatomic) NSString *lineColor;
@property(readonly, nonatomic) _Bool hasLineColor;
- (int)StringAsGuidanceSnappingType:(id)arg1;	// IMP=0x0000000000d29b68
- (id)guidanceSnappingTypeAsString:(int)arg1;	// IMP=0x0000000000d29b02
@property(nonatomic) _Bool hasGuidanceSnappingType;
@property(nonatomic) int guidanceSnappingType;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
@property(retain, nonatomic) GEOPBTransitArtwork *headerArtwork;
@property(readonly, nonatomic) _Bool hasHeaderArtwork;
@property(retain, nonatomic) GEOPBTransitArtwork *alternateArtwork;
@property(readonly, nonatomic) _Bool hasAlternateArtwork;
@property(retain, nonatomic) GEOPBTransitArtwork *modeArtwork;
@property(readonly, nonatomic) _Bool hasModeArtwork;
@property(retain, nonatomic) GEOPBTransitArtwork *artwork;
@property(readonly, nonatomic) _Bool hasArtwork;
@property(nonatomic) _Bool hasLineIndex;
@property(nonatomic) unsigned int lineIndex;
- (void)dealloc;	// IMP=0x0000000000d28159
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d280fd
- (id)init;	// IMP=0x0000000000d280a1
- (id)identifierWithLocationHint:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000fcf514
- (id)geoTransitLineWithSystem:(id)arg1 locationHint:(CDStruct_c3b9c2ee)arg2;	// IMP=0x0000000000fcf4a1
- (id)bestName;	// IMP=0x00000000010377ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

