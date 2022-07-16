//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOComposedRouteStepTransitInstructionMerging-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEODrivingWalkingInstruction, GEODrivingWalkingSpokenInstruction, GEOFormattedString, GEOGenericInstruction, GEOTransitListInstruction, GEOTransitSignInstruction, NSString, PBDataReader, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEOInstructionSet : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOFormattedString *_countStopsText;	// 24 = 0x18
    GEOFormattedString *_departureBar;	// 32 = 0x20
    GEODrivingWalkingInstruction *_drivingWalkingListInstruction;	// 40 = 0x28
    GEODrivingWalkingInstruction *_drivingWalkingSignInstruction;	// 48 = 0x30
    GEODrivingWalkingSpokenInstruction *_drivingWalkingSpokenInstruction;	// 56 = 0x38
    GEOGenericInstruction *_genericInstruction;	// 64 = 0x40
    GEOTransitListInstruction *_transitListInstruction;	// 72 = 0x48
    GEOTransitSignInstruction *_transitSignInstruction;	// 80 = 0x50
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    int _departureBarStyle;	// 100 = 0x64
    struct {
        unsigned int has_departureBarStyle:1;
        unsigned int read_unknownFields:1;
        unsigned int read_countStopsText:1;
        unsigned int read_departureBar:1;
        unsigned int read_drivingWalkingListInstruction:1;
        unsigned int read_drivingWalkingSignInstruction:1;
        unsigned int read_drivingWalkingSpokenInstruction:1;
        unsigned int read_genericInstruction:1;
        unsigned int read_transitListInstruction:1;
        unsigned int read_transitSignInstruction:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 104 = 0x68
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008949a8
- (void).cxx_destruct;	// IMP=0x0000000000896861
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000089674a
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000896445
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008960b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000895da8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000895bf8
- (void)writeTo:(id)arg1;	// IMP=0x00000000008950ef
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008950e0
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008943a7
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000894395
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000893c86
- (id)jsonRepresentation;	// IMP=0x0000000000893b74
- (id)dictionaryRepresentation;	// IMP=0x00000000008934e6
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEODrivingWalkingSpokenInstruction *drivingWalkingSpokenInstruction;
@property(readonly, nonatomic) _Bool hasDrivingWalkingSpokenInstruction;
@property(retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingListInstruction;
@property(readonly, nonatomic) _Bool hasDrivingWalkingListInstruction;
@property(retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingSignInstruction;
@property(readonly, nonatomic) _Bool hasDrivingWalkingSignInstruction;
@property(retain, nonatomic) GEOFormattedString *countStopsText;
@property(readonly, nonatomic) _Bool hasCountStopsText;
- (int)StringAsDepartureBarStyle:(id)arg1;	// IMP=0x0000000000892e84
- (id)departureBarStyleAsString:(int)arg1;	// IMP=0x0000000000892e07
@property(nonatomic) _Bool hasDepartureBarStyle;
@property(nonatomic) int departureBarStyle;
@property(retain, nonatomic) GEOFormattedString *departureBar;
@property(readonly, nonatomic) _Bool hasDepartureBar;
@property(retain, nonatomic) GEOGenericInstruction *genericInstruction;
@property(readonly, nonatomic) _Bool hasGenericInstruction;
@property(retain, nonatomic) GEOTransitListInstruction *transitListInstruction;
@property(readonly, nonatomic) _Bool hasTransitListInstruction;
@property(retain, nonatomic) GEOTransitSignInstruction *transitSignInstruction;
@property(readonly, nonatomic) _Bool hasTransitSignInstruction;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000891aca
- (id)init;	// IMP=0x0000000000891a6e
@property(readonly, nonatomic) _Bool hideTimeInstructionsIfCollapsed;
@property(readonly, nonatomic) id <GEOServerFormattedString> secondaryTimeFormattedString;
@property(readonly, nonatomic) id <GEOServerFormattedString> primaryTimeFormattedString;
@property(readonly, nonatomic) id <GEOServerFormattedString> expandableListFormattedString;
@property(readonly, nonatomic) id <GEOServerFormattedString> countStopsFormattedString;
@property(readonly, nonatomic) long long departureBarFormatStyle;
@property(readonly, nonatomic) id <GEOServerFormattedString> departureBarFormattedString;
- (void)_transit_mergeFrom:(id)arg1;	// IMP=0x00000000011d9295
- (_Bool)_transit_hasAnyFieldSet;	// IMP=0x00000000011d9220

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

