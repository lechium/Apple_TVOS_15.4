//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSString, PBDataReader;

@interface GEORPUpdatedLabel : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOLatLng *_center;	// 16 = 0x10
    NSString *_localizedText;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_center:1;
        unsigned int read_localizedText:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e4d027
- (void).cxx_destruct;	// IMP=0x0000000000e4d65a
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e4d5ce
- (unsigned long long)hash;	// IMP=0x0000000000e4d572
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e4d481
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e4d2d9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e4d20b
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000e4d1da
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e4d043
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e4d034
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e4cf1b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e4cf09
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e4cd6e
- (id)jsonRepresentation;	// IMP=0x0000000000e4cd5f
- (id)dictionaryRepresentation;	// IMP=0x0000000000e4cc29
- (id)description;	// IMP=0x0000000000e4cb7a
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
@property(retain, nonatomic) NSString *localizedText;
@property(readonly, nonatomic) _Bool hasLocalizedText;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e4c407
- (id)init;	// IMP=0x0000000000e4c3ab

@end

