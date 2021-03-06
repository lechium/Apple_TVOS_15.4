//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPFeedbackTransitLine : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_transitLineMuid;	// 16 = 0x10
    NSString *_transitLineName;	// 24 = 0x18
    NSString *_transitSystemName;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_transitLineMuid:1;
        unsigned int read_transitLineName:1;
        unsigned int read_transitSystemName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000dd3610
- (void).cxx_destruct;	// IMP=0x0000000000dd3cd2
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000dd3c3d
- (unsigned long long)hash;	// IMP=0x0000000000dd3bc1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000dd3a9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000dd38d2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000dd37e4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000dd362c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000dd361d
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000dd3504
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000dd34f2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000dd32e5
- (id)jsonRepresentation;	// IMP=0x0000000000dd32d6
- (id)dictionaryRepresentation;	// IMP=0x0000000000dd317c
- (id)description;	// IMP=0x0000000000dd30cd
@property(retain, nonatomic) NSString *transitSystemName;
@property(readonly, nonatomic) _Bool hasTransitSystemName;
@property(retain, nonatomic) NSString *transitLineName;
@property(readonly, nonatomic) _Bool hasTransitLineName;
@property(retain, nonatomic) NSString *transitLineMuid;
@property(readonly, nonatomic) _Bool hasTransitLineMuid;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000dd285d
- (id)init;	// IMP=0x0000000000dd2801

@end

