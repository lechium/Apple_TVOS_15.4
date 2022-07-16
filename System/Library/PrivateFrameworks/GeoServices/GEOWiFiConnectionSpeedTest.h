//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOWiFiConnectionSpeedTest : PBCodable <NSCopying>
{
    float _avgDL;	// 8 = 0x8
    float _avgUL;	// 12 = 0xc
    struct {
        unsigned int has_avgDL:1;
        unsigned int has_avgUL:1;
    } _flags;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001028ada
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001028f8c
- (unsigned long long)hash;	// IMP=0x0000000001028d61
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001028c6a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001028be5
- (void)copyTo:(id)arg1;	// IMP=0x0000000001028b6b
- (void)writeTo:(id)arg1;	// IMP=0x0000000001028af6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001028ae7
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001028a7a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001028a6d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001028931
- (id)jsonRepresentation;	// IMP=0x0000000001028927
- (id)dictionaryRepresentation;	// IMP=0x0000000001028813
- (id)description;	// IMP=0x0000000001028764
@property(nonatomic) _Bool hasAvgDL;
@property(nonatomic) float avgDL;
@property(nonatomic) _Bool hasAvgUL;
@property(nonatomic) float avgUL;

@end
