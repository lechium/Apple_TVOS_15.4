//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityNetworkSearch : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_ess;	// 16 = 0x10
    GEOLocation *_location;	// 24 = 0x18
    unsigned long long _radius;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int has_radius:1;
        unsigned int read_ess:1;
        unsigned int read_location:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000009efdaf
+ (Class)essType;	// IMP=0x00000000009ef188
- (void).cxx_destruct;	// IMP=0x00000000009f0f79
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009f0da0
- (unsigned long long)hash;	// IMP=0x00000000009f0d1f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009f0c00
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009f08ac
- (void)copyTo:(id)arg1;	// IMP=0x00000000009f0744
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000009f05b4
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000009f0452
- (void)writeTo:(id)arg1;	// IMP=0x00000000009f0027
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009f0018
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009efafc
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009efaea
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009ef75b
- (id)jsonRepresentation;	// IMP=0x00000000009ef74c
- (id)dictionaryRepresentation;	// IMP=0x00000000009ef3e1
- (id)description;	// IMP=0x00000000009ef332
@property(nonatomic) _Bool hasRadius;
@property(nonatomic) unsigned long long radius;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) _Bool hasLocation;
- (id)essAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009ef157
- (unsigned long long)essCount;	// IMP=0x00000000009ef12b
- (void)addEss:(id)arg1;	// IMP=0x00000000009ef077
- (void)clearEss;	// IMP=0x00000000009ef04f
@property(retain, nonatomic) NSMutableArray *ess;
- (id)initWithData:(id)arg1;	// IMP=0x00000000009ee756
- (id)init;	// IMP=0x00000000009ee6fa

@end

