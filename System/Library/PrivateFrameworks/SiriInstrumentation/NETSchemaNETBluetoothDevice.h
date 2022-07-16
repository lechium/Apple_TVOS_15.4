//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NETSchemaNETBluetoothDevice
{
    unsigned int _index;	// 8 = 0x8
    double _rssi;	// 16 = 0x10
    struct {
        unsigned int index:1;
        unsigned int rssi:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) double rssi; // @synthesize rssi=_rssi;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000023b52d
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000023b46f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000023b2d4
- (unsigned long long)hash;	// IMP=0x000000000023b1a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023b0a9
- (void)writeTo:(id)arg1;	// IMP=0x000000000023b036
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023ae0a
- (void)deleteRssi;	// IMP=0x000000000023addf
@property(nonatomic) _Bool hasRssi;
- (void)deleteIndex;	// IMP=0x000000000023ad6a
@property(nonatomic) _Bool hasIndex;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033050d

@end

