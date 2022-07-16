//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitIconDataSource-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOStyleAttributes, NSString, PBUnknownFields;

@interface GEOPBTransitIcon : PBCodable <GEOTransitIconDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOStyleAttributes *_styleAttributes;	// 16 = 0x10
    unsigned int _cartoId;	// 24 = 0x18
    unsigned int _transitTypeEnumValue;	// 28 = 0x1c
    struct {
        unsigned int has_cartoId:1;
        unsigned int has_transitTypeEnumValue:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d21015
- (void).cxx_destruct;	// IMP=0x0000000000d214fe
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000d21498
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d213da
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2122f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2116c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d210da
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d21031
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d21022
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d20fb5
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d20fa3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d20d9c
- (id)jsonRepresentation;	// IMP=0x0000000000d20c8a
- (id)dictionaryRepresentation;	// IMP=0x0000000000d209b1
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(nonatomic) _Bool hasTransitTypeEnumValue;
@property(nonatomic) unsigned int transitTypeEnumValue;
@property(nonatomic) _Bool hasCartoId;
@property(nonatomic) unsigned int cartoId;
- (id)_firstAttribute;	// IMP=0x00000000010375ad
@property(readonly, nonatomic) unsigned int iconAttributeValue;
@property(readonly, nonatomic) unsigned int iconAttributeKey;
@property(readonly, nonatomic) unsigned int defaultTransitType;
@property(readonly, nonatomic) unsigned int cartoID;
@property(readonly, nonatomic) int iconType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
