//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPIndoorPressure : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    float _pressure;	// 16 = 0x10
    float _temperature;	// 20 = 0x14
    struct {
        unsigned int timestamp:1;
        unsigned int pressure:1;
        unsigned int temperature:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) float temperature; // @synthesize temperature=_temperature;
@property(nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002aaa3
- (unsigned long long)hash;	// IMP=0x000000000002a794
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a6ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a60b
- (void)copyTo:(id)arg1;	// IMP=0x000000000002a58c
- (void)writeTo:(id)arg1;	// IMP=0x000000000002a4f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002a4e9
- (id)dictionaryRepresentation;	// IMP=0x000000000002a394
- (id)description;	// IMP=0x000000000002a2e5
@property(nonatomic) _Bool hasTemperature;
@property(nonatomic) _Bool hasPressure;
@property(nonatomic) _Bool hasTimestamp;

@end
