//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServiceGap-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSDate, NSString, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOFormattedString *_displayMessage;	// 16 = 0x10
    unsigned int _absEndTime;	// 24 = 0x18
    unsigned int _absStartTime;	// 28 = 0x1c
    unsigned int _appearsBeforeSuggestedRouteIndex;	// 32 = 0x20
    struct {
        unsigned int has_absEndTime:1;
        unsigned int has_absStartTime:1;
        unsigned int has_appearsBeforeSuggestedRouteIndex:1;
    } _flags;	// 36 = 0x24
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003c2f6e
- (void).cxx_destruct;	// IMP=0x00000000003c37ef
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003c3789
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003c36b0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003c34da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003c33fc
- (void)copyTo:(id)arg1;	// IMP=0x00000000003c334f
- (void)writeTo:(id)arg1;	// IMP=0x00000000003c3287
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003c3278
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003c2aa5
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003c2a93
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003c280a
- (id)jsonRepresentation;	// IMP=0x00000000003c26f8
- (id)dictionaryRepresentation;	// IMP=0x00000000003c23bb
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOFormattedString *displayMessage;
@property(readonly, nonatomic) _Bool hasDisplayMessage;
@property(nonatomic) _Bool hasAbsEndTime;
@property(nonatomic) unsigned int absEndTime;
@property(nonatomic) _Bool hasAbsStartTime;
@property(nonatomic) unsigned int absStartTime;
@property(nonatomic) _Bool hasAppearsBeforeSuggestedRouteIndex;
@property(nonatomic) unsigned int appearsBeforeSuggestedRouteIndex;
@property(readonly, nonatomic) id <GEOServerFormattedString> displayMessagFormatString;
@property(readonly, nonatomic) unsigned long long routeListInsertBeforeIndex;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

