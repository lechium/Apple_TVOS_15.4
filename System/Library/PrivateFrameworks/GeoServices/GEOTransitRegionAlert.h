//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitBanner, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitRegionAlert : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOTransitBanner *_banner;	// 24 = 0x18
    NSMutableArray *_triggerRegions;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_banner:1;
        unsigned int read_triggerRegions:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003b2f0e
+ (Class)triggerRegionType;	// IMP=0x00000000003b2333
- (void).cxx_destruct;	// IMP=0x00000000003b3f3e
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003b3dc0
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003b3b27
- (unsigned long long)hash;	// IMP=0x00000000003b3acb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b39da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003b36c3
- (void)copyTo:(id)arg1;	// IMP=0x00000000003b3579
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000003b3428
- (void)writeTo:(id)arg1;	// IMP=0x00000000003b311c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003b310d
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003b2c5b
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003b2c49
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003b2917
- (id)jsonRepresentation;	// IMP=0x00000000003b2805
- (id)dictionaryRepresentation;	// IMP=0x00000000003b23f3
- (id)description;	// IMP=0x00000000003b2344
- (id)triggerRegionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003b2302
- (unsigned long long)triggerRegionsCount;	// IMP=0x00000000003b22d6
- (void)addTriggerRegion:(id)arg1;	// IMP=0x00000000003b2222
- (void)clearTriggerRegions;	// IMP=0x00000000003b21fa
@property(retain, nonatomic) NSMutableArray *triggerRegions;
@property(retain, nonatomic) GEOTransitBanner *banner;
@property(readonly, nonatomic) _Bool hasBanner;
- (id)initWithData:(id)arg1;	// IMP=0x00000000003b1769
- (id)init;	// IMP=0x00000000003b170d

@end
