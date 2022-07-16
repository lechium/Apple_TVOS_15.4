//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiAccessPoint : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_macId;	// 16 = 0x10
    unsigned long long _scanTimestamp;	// 24 = 0x18
    unsigned int _age;	// 32 = 0x20
    int _channel;	// 36 = 0x24
    int _rssi;	// 40 = 0x28
    CDStruct_e664d718 _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000005ff305
- (unsigned long long)hash;	// IMP=0x00000000005ff260
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005ff135
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005ff033
- (void)writeTo:(id)arg1;	// IMP=0x00000000005fef4b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005fef3c
- (id)jsonRepresentation;	// IMP=0x00000000005fe94c
- (id)dictionaryRepresentation;	// IMP=0x00000000005fe631
- (id)description;	// IMP=0x00000000005fe582
- (id)initWithGEOWifiAccessPoint:(id)arg1;	// IMP=0x00000000009d098d

@end

