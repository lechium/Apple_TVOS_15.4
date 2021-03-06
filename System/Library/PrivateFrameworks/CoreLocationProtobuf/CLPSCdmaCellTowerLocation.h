//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPCellNeighborsGroup, CLPLocation, NSMutableArray, NSString;

@interface CLPSCdmaCellTowerLocation : PBCodable <NSCopying>
{
    NSString *_appBundleId;	// 8 = 0x8
    int _arfcn;	// 16 = 0x10
    int _ci;	// 20 = 0x14
    int _ecn0;	// 24 = 0x18
    int _lac;	// 28 = 0x1c
    CLPLocation *_location;	// 32 = 0x20
    int _mcc;	// 40 = 0x28
    int _mnc;	// 44 = 0x2c
    CLPCellNeighborsGroup *_neighborGroup;	// 48 = 0x30
    NSMutableArray *_neighbors;	// 56 = 0x38
    NSString *_operatorName;	// 64 = 0x40
    int _psc;	// 72 = 0x48
    int _rat;	// 76 = 0x4c
    int _rscp;	// 80 = 0x50
    int _rssi;	// 84 = 0x54
    int _serverHash;	// 88 = 0x58
    NSString *_serviceProviderName;	// 96 = 0x60
    int _transmit;	// 104 = 0x68
    _Bool _isLimitedService;	// 108 = 0x6c
    CDStruct_648273eb _has;	// 112 = 0x70
}

+ (Class)neighborType;	// IMP=0x000000000004f35d
- (void).cxx_destruct;	// IMP=0x000000000005118e
@property(retain, nonatomic) NSString *serviceProviderName; // @synthesize serviceProviderName=_serviceProviderName;
@property(nonatomic) _Bool isLimitedService; // @synthesize isLimitedService=_isLimitedService;
@property(retain, nonatomic) CLPCellNeighborsGroup *neighborGroup; // @synthesize neighborGroup=_neighborGroup;
@property(retain, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property(nonatomic) int rat; // @synthesize rat=_rat;
@property(nonatomic) int rscp; // @synthesize rscp=_rscp;
@property(nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property(retain, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(nonatomic) int transmit; // @synthesize transmit=_transmit;
@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(nonatomic) int psc; // @synthesize psc=_psc;
@property(nonatomic) int arfcn; // @synthesize arfcn=_arfcn;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int ci; // @synthesize ci=_ci;
@property(nonatomic) int lac; // @synthesize lac=_lac;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000050bd7
- (unsigned long long)hash;	// IMP=0x0000000000050944
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000505c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000501f2
- (void)copyTo:(id)arg1;	// IMP=0x000000000004ff60
- (void)writeTo:(id)arg1;	// IMP=0x000000000004fc0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004fbff
- (id)dictionaryRepresentation;	// IMP=0x000000000004f490
- (id)description;	// IMP=0x000000000004f3e1
@property(readonly, nonatomic) _Bool hasServiceProviderName;
@property(nonatomic) _Bool hasIsLimitedService;
@property(readonly, nonatomic) _Bool hasNeighborGroup;
- (id)neighborAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004f340
- (unsigned long long)neighborsCount;	// IMP=0x000000000004f323
- (void)addNeighbor:(id)arg1;	// IMP=0x000000000004f2b9
- (void)clearNeighbors;	// IMP=0x000000000004f29c
@property(nonatomic) _Bool hasRat;
@property(nonatomic) _Bool hasRscp;
@property(nonatomic) _Bool hasEcn0;
@property(readonly, nonatomic) _Bool hasOperatorName;
@property(nonatomic) _Bool hasTransmit;
@property(nonatomic) _Bool hasServerHash;
@property(readonly, nonatomic) _Bool hasAppBundleId;
@property(nonatomic) _Bool hasPsc;
@property(nonatomic) _Bool hasArfcn;

@end

