//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _MRGameControllerAccelerationProtobuf : PBCodable <NSCopying>
{
    NSData *_data;	// 8 = 0x8
    float _w;	// 16 = 0x10
    float _x;	// 20 = 0x14
    float _y;	// 24 = 0x18
    float _z;	// 28 = 0x1c
    struct {
        unsigned int w:1;
        unsigned int x:1;
        unsigned int y:1;
        unsigned int z:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000153b53
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned long long)hash;	// IMP=0x00000000001536aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000153564
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000153469
- (void)writeTo:(id)arg1;	// IMP=0x0000000000153395
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000153388
- (id)dictionaryRepresentation;	// IMP=0x0000000000152e94
- (id)description;	// IMP=0x0000000000152de5
@property(readonly, nonatomic) _Bool hasData;

@end

