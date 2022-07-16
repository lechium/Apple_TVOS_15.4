//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitDeparture-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSDate, NSString, PBDataReader, PBUnknownFields;
@protocol GEOServerFormattedString;

__attribute__((visibility("hidden")))
@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    double _absDepartureTime;	// 24 = 0x18
    double _absLiveDepartureTime;	// 32 = 0x20
    NSString *_displayNameOverride;	// 40 = 0x28
    GEOFormattedString *_realTimeStatus;	// 48 = 0x30
    unsigned long long _referenceTripId;	// 56 = 0x38
    NSString *_vehicleNumber;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    int _realTimeStatusInfo;	// 84 = 0x54
    _Bool _isCanceled;	// 88 = 0x58
    struct {
        unsigned int has_absDepartureTime:1;
        unsigned int has_absLiveDepartureTime:1;
        unsigned int has_referenceTripId:1;
        unsigned int has_realTimeStatusInfo:1;
        unsigned int has_isCanceled:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayNameOverride:1;
        unsigned int read_realTimeStatus:1;
        unsigned int read_vehicleNumber:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000af31fb
- (void).cxx_destruct;	// IMP=0x0000000000af4497
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000af4424
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000af41e1
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af3c94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000af39f8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000af386e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000af3597
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000af3588
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000af2fa2
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000af2f90
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000af2a36
- (id)jsonRepresentation;	// IMP=0x0000000000af2924
- (id)dictionaryRepresentation;	// IMP=0x0000000000af241b
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *displayNameOverride;
@property(readonly, nonatomic) _Bool hasDisplayNameOverride;
- (int)StringAsRealTimeStatusInfo:(id)arg1;	// IMP=0x0000000000af217c
- (id)realTimeStatusInfoAsString:(int)arg1;	// IMP=0x0000000000af20ff
@property(nonatomic) _Bool hasRealTimeStatusInfo;
@property(nonatomic) int realTimeStatusInfo;
@property(retain, nonatomic) GEOFormattedString *realTimeStatus;
@property(readonly, nonatomic) _Bool hasRealTimeStatus;
@property(nonatomic) _Bool hasReferenceTripId;
@property(nonatomic) unsigned long long referenceTripId;
@property(nonatomic) _Bool hasIsCanceled;
@property(nonatomic) _Bool isCanceled;
@property(nonatomic) _Bool hasAbsLiveDepartureTime;
@property(nonatomic) double absLiveDepartureTime;
@property(retain, nonatomic) NSString *vehicleNumber;
@property(readonly, nonatomic) _Bool hasVehicleNumber;
@property(nonatomic) _Bool hasAbsDepartureTime;
@property(nonatomic) double absDepartureTime;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000af11a6
- (id)init;	// IMP=0x0000000000af114a
- (_Bool)isPastDepartureRelativeToDate:(id)arg1 usingGracePeriod:(_Bool)arg2;	// IMP=0x00000000010386f7
@property(readonly, nonatomic) _Bool isPastDeparture;
@property(readonly, nonatomic) unsigned long long tripIdentifier;
@property(readonly, nonatomic) id <GEOServerFormattedString> liveStatusString;
@property(readonly, nonatomic) long long liveStatus;
@property(readonly, nonatomic) NSString *vehicleIdentifier;
@property(readonly, nonatomic) NSDate *liveDepartureDate;
@property(readonly, nonatomic) NSDate *scheduledDepartureDate;
@property(readonly, nonatomic) NSDate *departureDate;
@property(readonly, nonatomic) NSString *displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

