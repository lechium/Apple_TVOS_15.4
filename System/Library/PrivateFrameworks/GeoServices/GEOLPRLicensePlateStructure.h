//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOLPRLicensePlateStructure : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_supportedPlateAlphabetLetters;	// 16 = 0x10
    NSString *_supportedPlateNumerics;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_supportedPlateAlphabetLetters:1;
        unsigned int read_supportedPlateNumerics:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000066bb2a
- (void).cxx_destruct;	// IMP=0x000000000066c115
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000066c0a0
- (unsigned long long)hash;	// IMP=0x000000000066c044
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000066bf53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000066bdab
- (void)copyTo:(id)arg1;	// IMP=0x000000000066bcdd
- (void)writeTo:(id)arg1;	// IMP=0x000000000066bb46
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000066bb37
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000066ba1e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000066ba0c
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000066b888
- (id)jsonRepresentation;	// IMP=0x000000000066b879
- (id)dictionaryRepresentation;	// IMP=0x000000000066b770
- (id)description;	// IMP=0x000000000066b6c1
@property(retain, nonatomic) NSString *supportedPlateNumerics;
@property(readonly, nonatomic) _Bool hasSupportedPlateNumerics;
@property(retain, nonatomic) NSString *supportedPlateAlphabetLetters;
@property(readonly, nonatomic) _Bool hasSupportedPlateAlphabetLetters;
- (id)initWithData:(id)arg1;	// IMP=0x000000000066b021
- (id)init;	// IMP=0x000000000066afc5

@end

