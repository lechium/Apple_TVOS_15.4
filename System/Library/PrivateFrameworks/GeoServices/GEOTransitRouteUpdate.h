//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitRouteDisplayStrings, GEOTransitRouteIdentifier, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteUpdate : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_alerts;	// 24 = 0x18
    GEOTransitRouteDisplayStrings *_displayStrings;	// 32 = 0x20
    GEOTransitRouteIdentifier *_routeIdentifier;	// 40 = 0x28
    NSMutableArray *_stepUpdates;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _status;	// 68 = 0x44
    struct {
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_alerts:1;
        unsigned int read_displayStrings:1;
        unsigned int read_routeIdentifier:1;
        unsigned int read_stepUpdates:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000002e1c8d
+ (Class)alertType;	// IMP=0x00000000002e0653
+ (Class)stepUpdateType;	// IMP=0x00000000002e03ee
- (void).cxx_destruct;	// IMP=0x00000000002e3863
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000002e35f1
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002e3213
- (unsigned long long)hash;	// IMP=0x00000000002e3158
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e2fcb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e2b29
- (void)copyTo:(id)arg1;	// IMP=0x00000000002e2902
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e23e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e23d4
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000002e168c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002e167a
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002e0f7e
- (id)jsonRepresentation;	// IMP=0x00000000002e0e6c
- (id)dictionaryRepresentation;	// IMP=0x00000000002e0713
- (id)description;	// IMP=0x00000000002e0664
- (id)alertAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002e0622
- (unsigned long long)alertsCount;	// IMP=0x00000000002e05f6
- (void)addAlert:(id)arg1;	// IMP=0x00000000002e0542
- (void)clearAlerts;	// IMP=0x00000000002e051a
@property(retain, nonatomic) NSMutableArray *alerts;
- (id)stepUpdateAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002e03bd
- (unsigned long long)stepUpdatesCount;	// IMP=0x00000000002e0391
- (void)addStepUpdate:(id)arg1;	// IMP=0x00000000002e02dd
- (void)clearStepUpdates;	// IMP=0x00000000002e02b5
@property(retain, nonatomic) NSMutableArray *stepUpdates;
@property(retain, nonatomic) GEOTransitRouteDisplayStrings *displayStrings;
@property(readonly, nonatomic) _Bool hasDisplayStrings;
- (int)StringAsStatus:(id)arg1;	// IMP=0x00000000002dff90
- (id)statusAsString:(int)arg1;	// IMP=0x00000000002dff06
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
@property(retain, nonatomic) GEOTransitRouteIdentifier *routeIdentifier;
@property(readonly, nonatomic) _Bool hasRouteIdentifier;
- (id)initWithData:(id)arg1;	// IMP=0x00000000002df148
- (id)init;	// IMP=0x00000000002df0ec
- (id)_logDescription;	// IMP=0x000000000037179a

@end

