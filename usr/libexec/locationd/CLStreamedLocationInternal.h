//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CLStreamedLocationInternal : PBCodable
{
    double _rawCoordinateLatitude;	// 8 = 0x8
    double _rawCoordinateLongitude;	// 16 = 0x10
    struct {
        unsigned int rawCoordinateLatitude:1;
        unsigned int rawCoordinateLongitude:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) double rawCoordinateLongitude; // @synthesize rawCoordinateLongitude=_rawCoordinateLongitude;
@property(nonatomic) double rawCoordinateLatitude; // @synthesize rawCoordinateLatitude=_rawCoordinateLatitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000006c3180
- (unsigned long long)hash;	// IMP=0x00100000006c2f59
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006c2ecc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006c2e47
- (void)copyTo:(id)arg1;	// IMP=0x00100000006c2e00
- (void)writeTo:(id)arg1;	// IMP=0x00100000006c2d92
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000006c2d85
- (id)dictionaryRepresentation;	// IMP=0x00100000006c2aaa
- (id)description;	// IMP=0x00100000006c2a33
@property(nonatomic) _Bool hasRawCoordinateLongitude;
@property(nonatomic) _Bool hasRawCoordinateLatitude;
- (void)mergeIntoDaemonLocation:(struct CLDaemonLocation *)arg1;	// IMP=0x001000000044e75e
- (id)initWithDaemonLocation:(const struct CLDaemonLocation *)arg1;	// IMP=0x001000000044e6ec

@end

