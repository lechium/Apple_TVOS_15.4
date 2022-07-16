//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOLogMsgEventThrottle : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_manifestEnv;	// 16 = 0x10
    NSString *_requestAppIdentifier;	// 24 = 0x18
    double _throttleDuration;	// 32 = 0x20
    NSString *_throttleReqType;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _networkService;	// 60 = 0x3c
    unsigned int _throttleCount;	// 64 = 0x40
    int _throttleMode;	// 68 = 0x44
    unsigned int _throttleTriggerCount;	// 72 = 0x48
    unsigned int _throttleTriggerDuration;	// 76 = 0x4c
    int _throttleType;	// 80 = 0x50
    unsigned int _tilesetId;	// 84 = 0x54
    struct {
        unsigned int has_throttleDuration:1;
        unsigned int has_networkService:1;
        unsigned int has_throttleCount:1;
        unsigned int has_throttleMode:1;
        unsigned int has_throttleTriggerCount:1;
        unsigned int has_throttleTriggerDuration:1;
        unsigned int has_throttleType:1;
        unsigned int has_tilesetId:1;
        unsigned int read_manifestEnv:1;
        unsigned int read_requestAppIdentifier:1;
        unsigned int read_throttleReqType:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 88 = 0x58
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000138b5aa
- (void).cxx_destruct;	// IMP=0x000000000138c3fa
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000138c273
- (unsigned long long)hash;	// IMP=0x000000000138bfdd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000138bd5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000138ba66
- (void)copyTo:(id)arg1;	// IMP=0x000000000138b887
- (void)writeTo:(id)arg1;	// IMP=0x000000000138b5c6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000138b5b7
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000138b49e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000138b48c
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000138a973
- (id)jsonRepresentation;	// IMP=0x000000000138a964
- (id)dictionaryRepresentation;	// IMP=0x000000000138a293
- (id)description;	// IMP=0x000000000138a1e4
@property(nonatomic) _Bool hasThrottleDuration;
@property(nonatomic) double throttleDuration;
@property(nonatomic) _Bool hasThrottleCount;
@property(nonatomic) unsigned int throttleCount;
@property(nonatomic) _Bool hasThrottleTriggerDuration;
@property(nonatomic) unsigned int throttleTriggerDuration;
@property(nonatomic) _Bool hasThrottleTriggerCount;
@property(nonatomic) unsigned int throttleTriggerCount;
@property(retain, nonatomic) NSString *throttleReqType;
@property(readonly, nonatomic) _Bool hasThrottleReqType;
- (int)StringAsThrottleMode:(id)arg1;	// IMP=0x0000000001389e7c
- (id)throttleModeAsString:(int)arg1;	// IMP=0x0000000001389e16
@property(nonatomic) _Bool hasThrottleMode;
@property(nonatomic) int throttleMode;
- (int)StringAsThrottleType:(id)arg1;	// IMP=0x0000000001389d11
- (id)throttleTypeAsString:(int)arg1;	// IMP=0x0000000001389cab
@property(nonatomic) _Bool hasThrottleType;
@property(nonatomic) int throttleType;
@property(nonatomic) _Bool hasTilesetId;
@property(nonatomic) unsigned int tilesetId;
@property(retain, nonatomic) NSString *manifestEnv;
@property(readonly, nonatomic) _Bool hasManifestEnv;
@property(retain, nonatomic) NSString *requestAppIdentifier;
@property(readonly, nonatomic) _Bool hasRequestAppIdentifier;
- (int)StringAsNetworkService:(id)arg1;	// IMP=0x0000000001388b54
- (id)networkServiceAsString:(int)arg1;	// IMP=0x0000000001388982
@property(nonatomic) _Bool hasNetworkService;
@property(nonatomic) int networkService;
- (id)initWithData:(id)arg1;	// IMP=0x00000000013888b4
- (id)init;	// IMP=0x0000000001388858

@end

