//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, PBUnknownFields;

@interface GEOElevationSegmentDescription : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOFormattedString *_formattedDescription;	// 16 = 0x10
    unsigned int _endOffsetM;	// 24 = 0x18
    unsigned int _startOffsetM;	// 28 = 0x1c
    struct {
        unsigned int has_endOffsetM:1;
        unsigned int has_startOffsetM:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000087072a
- (void).cxx_destruct;	// IMP=0x0000000000870c13
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000870bad
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000870aef
- (unsigned long long)hash;	// IMP=0x0000000000870a66
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000870944
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000870881
- (void)copyTo:(id)arg1;	// IMP=0x00000000008707ef
- (void)writeTo:(id)arg1;	// IMP=0x0000000000870746
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000870737
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008706ca
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008706b8
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008704b1
- (id)jsonRepresentation;	// IMP=0x000000000087039f
- (id)dictionaryRepresentation;	// IMP=0x00000000008700c6
- (id)description;	// IMP=0x0000000000870017
@property(retain, nonatomic) GEOFormattedString *formattedDescription;
@property(readonly, nonatomic) _Bool hasFormattedDescription;
@property(nonatomic) _Bool hasEndOffsetM;
@property(nonatomic) unsigned int endOffsetM;
@property(nonatomic) _Bool hasStartOffsetM;
@property(nonatomic) unsigned int startOffsetM;

@end

