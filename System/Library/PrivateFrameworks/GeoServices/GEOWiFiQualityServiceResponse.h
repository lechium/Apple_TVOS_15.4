//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

@interface GEOWiFiQualityServiceResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_locationResults;	// 16 = 0x10
    NSMutableArray *_networkResults;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    int _statusCode;	// 44 = 0x2c
    struct {
        unsigned int has_statusCode:1;
        unsigned int read_locationResults:1;
        unsigned int read_networkResults:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 48 = 0x30
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000009fbd92
+ (Class)networkResultsType;	// IMP=0x00000000009fae39
+ (Class)locationResultsType;	// IMP=0x00000000009fabd4
- (void).cxx_destruct;	// IMP=0x00000000009fd33a
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009fd0c0
- (unsigned long long)hash;	// IMP=0x00000000009fd02d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009fcf0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009fcac9
- (void)copyTo:(id)arg1;	// IMP=0x00000000009fc8e2
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000009fc66d
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000009fc3b2
- (void)writeTo:(id)arg1;	// IMP=0x00000000009fc020
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009fc011
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009fbadf
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009fbacd
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009fb493
- (id)jsonRepresentation;	// IMP=0x00000000009fb484
- (id)dictionaryRepresentation;	// IMP=0x00000000009faef9
- (id)description;	// IMP=0x00000000009fae4a
- (id)networkResultsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009fae08
- (unsigned long long)networkResultsCount;	// IMP=0x00000000009faddc
- (void)addNetworkResults:(id)arg1;	// IMP=0x00000000009fad28
- (void)clearNetworkResults;	// IMP=0x00000000009fad00
@property(retain, nonatomic) NSMutableArray *networkResults;
- (id)locationResultsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009faba3
- (unsigned long long)locationResultsCount;	// IMP=0x00000000009fab77
- (void)addLocationResults:(id)arg1;	// IMP=0x00000000009faac3
- (void)clearLocationResults;	// IMP=0x00000000009faa9b
@property(retain, nonatomic) NSMutableArray *locationResults;
- (int)StringAsStatusCode:(id)arg1;	// IMP=0x00000000009fa044
- (id)statusCodeAsString:(int)arg1;	// IMP=0x00000000009f9f69
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode;
- (id)initWithData:(id)arg1;	// IMP=0x00000000009f9ea6
- (id)init;	// IMP=0x00000000009f9e4a

@end

