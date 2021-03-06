//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOInstructionSet, GEOTransitBoardingInfo, GEOTransitScheduleInfo, GEOTransitVehiclePositionInfo, NSData, PBDataReader, PBUnknownFields;

@interface GEOTransitStepUpdate : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOTransitBoardingInfo *_boardingInfo;	// 24 = 0x18
    GEOInstructionSet *_instructions;	// 32 = 0x20
    GEOTransitScheduleInfo *_scheduleInfo;	// 40 = 0x28
    NSData *_updateIdentifier;	// 48 = 0x30
    GEOTransitVehiclePositionInfo *_vehiclePositionInfo;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_boardingInfo:1;
        unsigned int read_instructions:1;
        unsigned int read_scheduleInfo:1;
        unsigned int read_updateIdentifier:1;
        unsigned int read_vehiclePositionInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000002f0ff2
- (void).cxx_destruct;	// IMP=0x00000000002f1abc
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000002f19f3
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002f17cc
- (unsigned long long)hash;	// IMP=0x00000000002f1719
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f1590
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f1343
- (void)copyTo:(id)arg1;	// IMP=0x00000000002f1215
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f100e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f0fff
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000002f0ee6
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002f0ed4
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002f0b3a
- (id)jsonRepresentation;	// IMP=0x00000000002f0a28
- (id)dictionaryRepresentation;	// IMP=0x00000000002f05fe
- (id)description;	// IMP=0x00000000002f054f
@property(retain, nonatomic) GEOTransitBoardingInfo *boardingInfo;
@property(readonly, nonatomic) _Bool hasBoardingInfo;
@property(retain, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property(readonly, nonatomic) _Bool hasScheduleInfo;
@property(retain, nonatomic) GEOTransitVehiclePositionInfo *vehiclePositionInfo;
@property(readonly, nonatomic) _Bool hasVehiclePositionInfo;
@property(retain, nonatomic) GEOInstructionSet *instructions;
@property(readonly, nonatomic) _Bool hasInstructions;
@property(retain, nonatomic) NSData *updateIdentifier;
@property(readonly, nonatomic) _Bool hasUpdateIdentifier;
- (id)initWithData:(id)arg1;	// IMP=0x00000000002ef593
- (id)init;	// IMP=0x00000000002ef537

@end

