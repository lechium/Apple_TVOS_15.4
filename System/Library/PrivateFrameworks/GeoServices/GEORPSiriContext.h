//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPSiriContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_additionalDetails;	// 16 = 0x10
    NSString *_siriIncidentType;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_additionalDetails:1;
        unsigned int read_siriIncidentType:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000365fba
- (void).cxx_destruct;	// IMP=0x00000000003665a5
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000366530
- (unsigned long long)hash;	// IMP=0x00000000003664d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003663e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000036623b
- (void)copyTo:(id)arg1;	// IMP=0x000000000036616d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000365fd6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000365fc7
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000365eae
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000365e9c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000365d18
- (id)jsonRepresentation;	// IMP=0x0000000000365d09
- (id)dictionaryRepresentation;	// IMP=0x0000000000365c00
- (id)description;	// IMP=0x0000000000365b51
@property(retain, nonatomic) NSString *additionalDetails;
@property(readonly, nonatomic) _Bool hasAdditionalDetails;
@property(retain, nonatomic) NSString *siriIncidentType;
@property(readonly, nonatomic) _Bool hasSiriIncidentType;
- (id)initWithData:(id)arg1;	// IMP=0x00000000003654b1
- (id)init;	// IMP=0x0000000000365455

@end
