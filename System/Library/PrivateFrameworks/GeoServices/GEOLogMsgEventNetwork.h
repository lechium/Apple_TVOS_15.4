//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONetworkSessionTaskTransactionMetrics, NSString, PBDataReader;

@interface GEOLogMsgEventNetwork : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_manifestEnv;	// 16 = 0x10
    NSString *_requestAppIdMajorVer;	// 24 = 0x18
    NSString *_requestAppIdMinorVer;	// 32 = 0x20
    NSString *_requestAppIdentifier;	// 40 = 0x28
    double _requestEnd;	// 48 = 0x30
    long long _requestErrorCode;	// 56 = 0x38
    NSString *_requestErrorDescription;	// 64 = 0x40
    NSString *_requestErrorDomain;	// 72 = 0x48
    double _requestStart;	// 80 = 0x50
    NSString *_serviceIpAddress;	// 88 = 0x58
    GEONetworkSessionTaskTransactionMetrics *_taskMetrics;	// 96 = 0x60
    unsigned int _readerMarkPos;	// 104 = 0x68
    unsigned int _readerMarkLength;	// 108 = 0x6c
    struct os_unfair_lock_s _readerLock;	// 112 = 0x70
    int _decodeTime;	// 116 = 0x74
    int _httpResponseCode;	// 120 = 0x78
    int _mptcpServiceType;	// 124 = 0x7c
    int _networkService;	// 128 = 0x80
    int _queuedTime;	// 132 = 0x84
    int _redirectCount;	// 136 = 0x88
    int _requestDataSize;	// 140 = 0x8c
    int _responseDataSize;	// 144 = 0x90
    unsigned int _samplingRate;	// 148 = 0x94
    unsigned int _tilesetId;	// 152 = 0x98
    int _totalTime;	// 156 = 0x9c
    _Bool _mptcpNegotiated;	// 160 = 0xa0
    _Bool _rnfTriggered;	// 161 = 0xa1
    _Bool _wasBackground;	// 162 = 0xa2
    struct {
        unsigned int has_requestEnd:1;
        unsigned int has_requestErrorCode:1;
        unsigned int has_requestStart:1;
        unsigned int has_decodeTime:1;
        unsigned int has_httpResponseCode:1;
        unsigned int has_mptcpServiceType:1;
        unsigned int has_networkService:1;
        unsigned int has_queuedTime:1;
        unsigned int has_redirectCount:1;
        unsigned int has_requestDataSize:1;
        unsigned int has_responseDataSize:1;
        unsigned int has_samplingRate:1;
        unsigned int has_tilesetId:1;
        unsigned int has_totalTime:1;
        unsigned int has_mptcpNegotiated:1;
        unsigned int has_rnfTriggered:1;
        unsigned int has_wasBackground:1;
        unsigned int read_manifestEnv:1;
        unsigned int read_requestAppIdMajorVer:1;
        unsigned int read_requestAppIdMinorVer:1;
        unsigned int read_requestAppIdentifier:1;
        unsigned int read_requestErrorDescription:1;
        unsigned int read_requestErrorDomain:1;
        unsigned int read_serviceIpAddress:1;
        unsigned int read_taskMetrics:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 164 = 0xa4
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000136b1fc
- (void).cxx_destruct;	// IMP=0x000000000136d0fd
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000136cdb7
- (unsigned long long)hash;	// IMP=0x000000000136c7f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000136c260
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000136bd65
- (void)copyTo:(id)arg1;	// IMP=0x000000000136b9d6
- (void)writeTo:(id)arg1;	// IMP=0x000000000136b553
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000136b544
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000136a7d1
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000136a7bf
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000013695fb
- (id)jsonRepresentation;	// IMP=0x00000000013695ec
- (id)dictionaryRepresentation;	// IMP=0x00000000013689d3
- (id)description;	// IMP=0x0000000001368924
@property(retain, nonatomic) GEONetworkSessionTaskTransactionMetrics *taskMetrics;
@property(readonly, nonatomic) _Bool hasTaskMetrics;
@property(nonatomic) _Bool hasSamplingRate;
@property(nonatomic) unsigned int samplingRate;
@property(retain, nonatomic) NSString *requestAppIdMinorVer;
@property(readonly, nonatomic) _Bool hasRequestAppIdMinorVer;
@property(retain, nonatomic) NSString *requestAppIdMajorVer;
@property(readonly, nonatomic) _Bool hasRequestAppIdMajorVer;
@property(nonatomic) _Bool hasRnfTriggered;
@property(nonatomic) _Bool rnfTriggered;
@property(retain, nonatomic) NSString *serviceIpAddress;
@property(readonly, nonatomic) _Bool hasServiceIpAddress;
@property(nonatomic) _Bool hasWasBackground;
@property(nonatomic) _Bool wasBackground;
@property(nonatomic) _Bool hasMptcpNegotiated;
@property(nonatomic) _Bool mptcpNegotiated;
- (int)StringAsMptcpServiceType:(id)arg1;	// IMP=0x00000000013681d0
- (id)mptcpServiceTypeAsString:(int)arg1;	// IMP=0x0000000001368150
@property(nonatomic) _Bool hasMptcpServiceType;
@property(nonatomic) int mptcpServiceType;
@property(nonatomic) _Bool hasTilesetId;
@property(nonatomic) unsigned int tilesetId;
@property(retain, nonatomic) NSString *manifestEnv;
@property(readonly, nonatomic) _Bool hasManifestEnv;
@property(nonatomic) _Bool hasRedirectCount;
@property(nonatomic) int redirectCount;
@property(nonatomic) _Bool hasRequestEnd;
@property(nonatomic) double requestEnd;
@property(nonatomic) _Bool hasRequestStart;
@property(nonatomic) double requestStart;
@property(nonatomic) _Bool hasDecodeTime;
@property(nonatomic) int decodeTime;
@property(nonatomic) _Bool hasHttpResponseCode;
@property(nonatomic) int httpResponseCode;
@property(nonatomic) _Bool hasTotalTime;
@property(nonatomic) int totalTime;
@property(nonatomic) _Bool hasQueuedTime;
@property(nonatomic) int queuedTime;
@property(retain, nonatomic) NSString *requestAppIdentifier;
@property(readonly, nonatomic) _Bool hasRequestAppIdentifier;
@property(retain, nonatomic) NSString *requestErrorDescription;
@property(readonly, nonatomic) _Bool hasRequestErrorDescription;
@property(nonatomic) _Bool hasRequestErrorCode;
@property(nonatomic) long long requestErrorCode;
@property(retain, nonatomic) NSString *requestErrorDomain;
@property(readonly, nonatomic) _Bool hasRequestErrorDomain;
@property(nonatomic) _Bool hasResponseDataSize;
@property(nonatomic) int responseDataSize;
@property(nonatomic) _Bool hasRequestDataSize;
@property(nonatomic) int requestDataSize;
- (int)StringAsNetworkService:(id)arg1;	// IMP=0x0000000001365ed0
- (id)networkServiceAsString:(int)arg1;	// IMP=0x0000000001365cfd
@property(nonatomic) _Bool hasNetworkService;
@property(nonatomic) int networkService;
- (id)initWithData:(id)arg1;	// IMP=0x0000000001365c2c
- (id)init;	// IMP=0x0000000001365bd0

@end

