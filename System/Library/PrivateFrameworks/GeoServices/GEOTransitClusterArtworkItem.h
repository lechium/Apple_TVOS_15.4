//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitArtworkDataSource-Protocol.h>
#import <GeoServices/GEOTransitTextDataSource-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSString, PBUnknownFields;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@interface GEOTransitClusterArtworkItem : PBCodable <GEOTransitArtworkDataSource, GEOTransitTextDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOFormattedString *_text;	// 16 = 0x10
    unsigned int _artworkIndex;	// 24 = 0x18
    struct {
        unsigned int has_artworkIndex:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000395d1a
- (void).cxx_destruct;	// IMP=0x000000000039636c
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000396306
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000396265
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000396108
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000396062
- (void)copyTo:(id)arg1;	// IMP=0x0000000000395fed
- (void)writeTo:(id)arg1;	// IMP=0x0000000000395f6e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000395f5f
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000395994
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000395982
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003957fd
- (id)jsonRepresentation;	// IMP=0x00000000003956eb
- (id)dictionaryRepresentation;	// IMP=0x000000000039548d
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOFormattedString *text;
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic) _Bool hasArtworkIndex;
@property(nonatomic) unsigned int artworkIndex;
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, nonatomic) _Bool hasRoutingIncidentBadge;
@property(readonly, nonatomic) id <GEOTransitTextDataSource> textDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) int artworkUseType;
@property(readonly, nonatomic) int artworkSourceType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

