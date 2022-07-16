//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_offlineMarkets;	// 24 = 0x18
    NSMutableArray *_transitMarkets;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_offlineMarkets:1;
        unsigned int read_transitMarkets:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e575f7
+ (Class)offlineMarketType;	// IMP=0x0000000000e56b1d
+ (Class)transitMarketType;	// IMP=0x0000000000e568b8
+ (id)additionalEnabledMarkets;	// IMP=0x0000000000f9205e
+ (id)_additionalEnabledTransitMarkets;	// IMP=0x0000000000f91eda
- (void).cxx_destruct;	// IMP=0x0000000000e58620
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000e585cf
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e58279
- (unsigned long long)hash;	// IMP=0x0000000000e5821d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e5812c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e57d09
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e57b3f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e577ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e5779d
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e57344
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e57332
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e56f0a
- (id)jsonRepresentation;	// IMP=0x0000000000e56df8
- (id)dictionaryRepresentation;	// IMP=0x0000000000e56bdd
- (id)description;	// IMP=0x0000000000e56b2e
- (id)offlineMarketAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e56aec
- (unsigned long long)offlineMarketsCount;	// IMP=0x0000000000e56ac0
- (void)addOfflineMarket:(id)arg1;	// IMP=0x0000000000e56a0c
- (void)clearOfflineMarkets;	// IMP=0x0000000000e569e4
@property(retain, nonatomic) NSMutableArray *offlineMarkets;
- (id)transitMarketAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e56887
- (unsigned long long)transitMarketsCount;	// IMP=0x0000000000e5685b
- (void)addTransitMarket:(id)arg1;	// IMP=0x0000000000e567a7
- (void)clearTransitMarkets;	// IMP=0x0000000000e5677f
@property(retain, nonatomic) NSMutableArray *transitMarkets;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e56154
- (id)init;	// IMP=0x0000000000e560f8
@property(readonly, nonatomic) NSArray *queryItems;
@property(readonly, nonatomic) NSDictionary *queryParameters;
- (void)reload;	// IMP=0x0000000000f92113

@end
