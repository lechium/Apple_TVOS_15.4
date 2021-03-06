//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CPLCKAvailabilityResponse : PBCodable
{
    int _feature;	// 8 = 0x8
    _Bool _allowed;	// 12 = 0xc
    struct {
        unsigned int feature:1;
        unsigned int allowed:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool allowed; // @synthesize allowed=_allowed;
@property(nonatomic) int feature; // @synthesize feature=_feature;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000f145f
- (unsigned long long)hash;	// IMP=0x00100000000f1419
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f1356
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f12d9
- (void)copyTo:(id)arg1;	// IMP=0x00100000000f127f
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f120d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000f1200
- (id)dictionaryRepresentation;	// IMP=0x00100000000f0e9a
- (id)description;	// IMP=0x00100000000f0deb
@property(nonatomic) _Bool hasAllowed;
- (int)StringAsFeature:(id)arg1;	// IMP=0x00100000000f0d95
- (id)featureAsString:(int)arg1;	// IMP=0x00100000000f0d89
@property(nonatomic) _Bool hasFeature;

@end

