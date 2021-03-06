//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, PBDataReader;

@interface GEOPDPlaceSummaryDynamicContextServerOverride : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_mapsIds;	// 16 = 0x10
    NSMutableArray *_serverDynamicContexts;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_mapsIds:1;
        unsigned int read_serverDynamicContexts:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d49385
+ (Class)serverDynamicContextType;	// IMP=0x0000000000d48545
+ (Class)mapsIdType;	// IMP=0x0000000000d482e0
- (void).cxx_destruct;	// IMP=0x0000000000d4a827
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d4a5c7
- (unsigned long long)hash;	// IMP=0x0000000000d4a56b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d4a47a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d4a078
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d49eae
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000d49c39
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d498a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d49898
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d48f2b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d48f19
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d48aa4
- (id)jsonRepresentation;	// IMP=0x0000000000d48a95
- (id)dictionaryRepresentation;	// IMP=0x0000000000d48605
- (id)description;	// IMP=0x0000000000d48556
- (id)serverDynamicContextAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000d48514
- (unsigned long long)serverDynamicContextsCount;	// IMP=0x0000000000d484e8
- (void)addServerDynamicContext:(id)arg1;	// IMP=0x0000000000d48434
- (void)clearServerDynamicContexts;	// IMP=0x0000000000d4840c
@property(retain, nonatomic) NSMutableArray *serverDynamicContexts;
- (id)mapsIdAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000d482af
- (unsigned long long)mapsIdsCount;	// IMP=0x0000000000d48283
- (void)addMapsId:(id)arg1;	// IMP=0x0000000000d481cf
- (void)clearMapsIds;	// IMP=0x0000000000d481a7
@property(retain, nonatomic) NSMutableArray *mapsIds;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d47974
- (id)init;	// IMP=0x0000000000d47918
@property(readonly, nonatomic) NSArray *mapItemIdentifiers;

@end

