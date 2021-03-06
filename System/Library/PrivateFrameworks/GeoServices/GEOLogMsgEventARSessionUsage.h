//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

@interface GEOLogMsgEventARSessionUsage : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_arElementDetails;	// 16 = 0x10
    NSMutableArray *_thermalPressures;	// 24 = 0x18
    NSMutableArray *_vlfLocalizationResults;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _sessionTimeMs;	// 52 = 0x34
    unsigned int _timeRoundedToHour;	// 56 = 0x38
    _Bool _didLocalize;	// 60 = 0x3c
    struct {
        unsigned int has_sessionTimeMs:1;
        unsigned int has_timeRoundedToHour:1;
        unsigned int has_didLocalize:1;
        unsigned int read_arElementDetails:1;
        unsigned int read_thermalPressures:1;
        unsigned int read_vlfLocalizationResults:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001325efc
+ (Class)thermalPressureType;	// IMP=0x0000000001324bd4
+ (Class)arElementDetailsType;	// IMP=0x000000000132485d
+ (Class)vlfLocalizationResultsType;	// IMP=0x00000000013245f8
- (void).cxx_destruct;	// IMP=0x000000000132764e
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013272a6
- (unsigned long long)hash;	// IMP=0x00000000013271c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001327020
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001326a65
- (void)copyTo:(id)arg1;	// IMP=0x00000000013267b0
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000132665f
- (void)writeTo:(id)arg1;	// IMP=0x00000000013261bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013261ac
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001325c49
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001325c37
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001325473
- (id)jsonRepresentation;	// IMP=0x0000000001325464
- (id)dictionaryRepresentation;	// IMP=0x0000000001324c94
- (id)description;	// IMP=0x0000000001324be5
- (id)thermalPressureAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001324ba3
- (unsigned long long)thermalPressuresCount;	// IMP=0x0000000001324b77
- (void)addThermalPressure:(id)arg1;	// IMP=0x0000000001324ac3
- (void)clearThermalPressures;	// IMP=0x0000000001324a9b
@property(retain, nonatomic) NSMutableArray *thermalPressures;
@property(nonatomic) _Bool hasTimeRoundedToHour;
@property(nonatomic) unsigned int timeRoundedToHour;
@property(nonatomic) _Bool hasDidLocalize;
@property(nonatomic) _Bool didLocalize;
@property(nonatomic) _Bool hasSessionTimeMs;
@property(nonatomic) unsigned int sessionTimeMs;
- (id)arElementDetailsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000132482c
- (unsigned long long)arElementDetailsCount;	// IMP=0x0000000001324800
- (void)addArElementDetails:(id)arg1;	// IMP=0x000000000132474c
- (void)clearArElementDetails;	// IMP=0x0000000001324724
@property(retain, nonatomic) NSMutableArray *arElementDetails;
- (id)vlfLocalizationResultsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000013245c7
- (unsigned long long)vlfLocalizationResultsCount;	// IMP=0x000000000132459b
- (void)addVlfLocalizationResults:(id)arg1;	// IMP=0x00000000013244e7
- (void)clearVlfLocalizationResults;	// IMP=0x00000000013244bf
@property(retain, nonatomic) NSMutableArray *vlfLocalizationResults;
- (id)initWithData:(id)arg1;	// IMP=0x0000000001323814
- (id)init;	// IMP=0x00000000013237b8

@end

