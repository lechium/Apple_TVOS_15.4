//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPQuaternion : PBCodable <NSCopying>
{
    float _w;	// 8 = 0x8
    float _x;	// 12 = 0xc
    float _y;	// 16 = 0x10
    float _z;	// 20 = 0x14
    struct {
        unsigned int w:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) float z; // @synthesize z=_z;
@property(nonatomic) float y; // @synthesize y=_y;
@property(nonatomic) float x; // @synthesize x=_x;
@property(nonatomic) float w; // @synthesize w=_w;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004e664
- (unsigned long long)hash;	// IMP=0x000000000004e2a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004e1c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e12a
- (void)copyTo:(id)arg1;	// IMP=0x000000000004e0cf
- (void)writeTo:(id)arg1;	// IMP=0x000000000004e03b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004e02e
- (id)dictionaryRepresentation;	// IMP=0x000000000004de88
- (id)description;	// IMP=0x000000000004ddd9
@property(nonatomic) _Bool hasW;

@end

