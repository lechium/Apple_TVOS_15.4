//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateDirectionsDetail : PBCodable <NSCopying>
{
    int _transportType;	// 8 = 0x8
    _Bool _isEv;	// 12 = 0xc
    struct {
        unsigned int has_transportType:1;
        unsigned int has_isEv:1;
    } _flags;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000145efe6
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000145f2be
- (unsigned long long)hash;	// IMP=0x000000000145f25c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000145f163
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000145f0e6
- (void)copyTo:(id)arg1;	// IMP=0x000000000145f074
- (void)writeTo:(id)arg1;	// IMP=0x000000000145f002
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000145eff3
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000145ef86
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000145ef74
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000145eccf
- (id)jsonRepresentation;	// IMP=0x000000000145ecc0
- (id)dictionaryRepresentation;	// IMP=0x000000000145eb03
- (id)description;	// IMP=0x000000000145ea54
@property(nonatomic) _Bool hasIsEv;
@property(nonatomic) _Bool isEv;
- (int)StringAsTransportType:(id)arg1;	// IMP=0x000000000145e8e4
- (id)transportTypeAsString:(int)arg1;	// IMP=0x000000000145e83f
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType;

@end

