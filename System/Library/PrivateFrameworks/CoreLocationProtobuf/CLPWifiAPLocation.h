//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPLocation, NSString;

@interface CLPWifiAPLocation : PBCodable <NSCopying>
{
    double _scanTimestamp;	// 8 = 0x8
    NSString *_appBundleId;	// 16 = 0x10
    int _channel;	// 24 = 0x18
    int _hidden;	// 28 = 0x1c
    CLPLocation *_location;	// 32 = 0x20
    NSString *_mac;	// 40 = 0x28
    int _rssi;	// 48 = 0x30
    int _scanType;	// 52 = 0x34
    int _serverHash;	// 56 = 0x38
    struct {
        unsigned int scanTimestamp:1;
        unsigned int hidden:1;
        unsigned int scanType:1;
        unsigned int serverHash:1;
    } _has;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000055cac
@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(nonatomic) double scanTimestamp; // @synthesize scanTimestamp=_scanTimestamp;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int hidden; // @synthesize hidden=_hidden;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000055a9e
- (unsigned long long)hash;	// IMP=0x0000000000055885
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000556c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005556b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000055455
- (void)writeTo:(id)arg1;	// IMP=0x000000000005530d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000055300
- (id)dictionaryRepresentation;	// IMP=0x0000000000054f5a
- (id)description;	// IMP=0x0000000000054eab
- (int)StringAsScanType:(id)arg1;	// IMP=0x0000000000054c8c
- (id)scanTypeAsString:(int)arg1;	// IMP=0x0000000000054b7b
@property(nonatomic) _Bool hasScanType;
@property(nonatomic) int scanType; // @synthesize scanType=_scanType;
@property(nonatomic) _Bool hasServerHash;
@property(readonly, nonatomic) _Bool hasAppBundleId;
@property(nonatomic) _Bool hasScanTimestamp;
@property(nonatomic) _Bool hasHidden;

@end

