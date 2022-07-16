//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSString;

@interface CLPPoiWifiAccessPoint : PBCodable <NSCopying>
{
    double _age;	// 8 = 0x8
    double _scanTimestamp;	// 16 = 0x10
    int _channel;	// 24 = 0x18
    NSString *_mac;	// 32 = 0x20
    int _rssi;	// 40 = 0x28
    struct {
        unsigned int age:1;
        unsigned int scanTimestamp:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000004c4a5
@property(nonatomic) double scanTimestamp; // @synthesize scanTimestamp=_scanTimestamp;
@property(nonatomic) double age; // @synthesize age=_age;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004c378
- (unsigned long long)hash;	// IMP=0x000000000004c0f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004bfde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004bf05
- (void)copyTo:(id)arg1;	// IMP=0x000000000004be66
- (void)writeTo:(id)arg1;	// IMP=0x000000000004bd9d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004bd90
- (id)dictionaryRepresentation;	// IMP=0x000000000004bbcd
- (id)description;	// IMP=0x000000000004bb1e
@property(nonatomic) _Bool hasScanTimestamp;
@property(nonatomic) _Bool hasAge;

@end
