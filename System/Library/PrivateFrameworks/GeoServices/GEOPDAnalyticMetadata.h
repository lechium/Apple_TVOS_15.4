//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAbAssignInfo, GEOLocalTime, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAnalyticMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    struct GEOSessionID _sessionId;	// 24 = 0x18
    GEOAbAssignInfo *_abAssignInfo;	// 40 = 0x28
    NSString *_appIdentifier;	// 48 = 0x30
    NSString *_appMajorVersion;	// 56 = 0x38
    NSString *_appMinorVersion;	// 64 = 0x40
    NSString *_hardwareModel;	// 72 = 0x48
    NSString *_loggedAbExperiment;	// 80 = 0x50
    NSString *_osVersion;	// 88 = 0x58
    NSString *_productName;	// 96 = 0x60
    double _relativeTimestamp;	// 104 = 0x68
    GEOLocalTime *_requestTime;	// 112 = 0x70
    NSMutableArray *_serviceTags;	// 120 = 0x78
    unsigned int _readerMarkPos;	// 128 = 0x80
    unsigned int _readerMarkLength;	// 132 = 0x84
    struct os_unfair_lock_s _readerLock;	// 136 = 0x88
    int _requestSource;	// 140 = 0x8c
    unsigned int _sequenceNumber;	// 144 = 0x90
    _Bool _isFromApi;	// 148 = 0x94
    _Bool _isInternalInstall;	// 149 = 0x95
    _Bool _isInternalTool;	// 150 = 0x96
    _Bool _isSiriOriginalRequest;	// 151 = 0x97
    struct {
        unsigned int has_sessionId:1;
        unsigned int has_relativeTimestamp:1;
        unsigned int has_requestSource:1;
        unsigned int has_sequenceNumber:1;
        unsigned int has_isFromApi:1;
        unsigned int has_isInternalInstall:1;
        unsigned int has_isInternalTool:1;
        unsigned int has_isSiriOriginalRequest:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abAssignInfo:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_appMajorVersion:1;
        unsigned int read_appMinorVersion:1;
        unsigned int read_hardwareModel:1;
        unsigned int read_loggedAbExperiment:1;
        unsigned int read_osVersion:1;
        unsigned int read_productName:1;
        unsigned int read_requestTime:1;
        unsigned int read_serviceTags:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 152 = 0x98
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d94570
+ (Class)serviceTagType;	// IMP=0x0000000000d91fcb
- (void).cxx_destruct;	// IMP=0x0000000000d966cc
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000d96515
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d9607e
- (unsigned long long)hash;	// IMP=0x0000000000d95d1f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d958de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d9535d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d9502c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d94b03
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d94af4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d942bd
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d942ab
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d9338a
- (id)jsonRepresentation;	// IMP=0x0000000000d93278
- (id)dictionaryRepresentation;	// IMP=0x0000000000d92662
- (id)description;	// IMP=0x0000000000d925b3
@property(nonatomic) _Bool hasIsSiriOriginalRequest;
@property(nonatomic) _Bool isSiriOriginalRequest;
@property(nonatomic) _Bool hasRelativeTimestamp;
@property(nonatomic) double relativeTimestamp;
@property(retain, nonatomic) GEOLocalTime *requestTime;
@property(readonly, nonatomic) _Bool hasRequestTime;
@property(retain, nonatomic) GEOAbAssignInfo *abAssignInfo;
@property(readonly, nonatomic) _Bool hasAbAssignInfo;
@property(retain, nonatomic) NSString *loggedAbExperiment;
@property(readonly, nonatomic) _Bool hasLoggedAbExperiment;
@property(retain, nonatomic) NSString *productName;
@property(readonly, nonatomic) _Bool hasProductName;
- (id)serviceTagAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000d91f9a
- (unsigned long long)serviceTagsCount;	// IMP=0x0000000000d91f6e
- (void)addServiceTag:(id)arg1;	// IMP=0x0000000000d91eb9
- (void)clearServiceTags;	// IMP=0x0000000000d91e90
@property(retain, nonatomic) NSMutableArray *serviceTags;
@property(nonatomic) _Bool hasIsFromApi;
@property(nonatomic) _Bool isFromApi;
- (int)StringAsRequestSource:(id)arg1;	// IMP=0x0000000000d919c4
- (id)requestSourceAsString:(int)arg1;	// IMP=0x0000000000d91815
@property(nonatomic) _Bool hasRequestSource;
@property(nonatomic) int requestSource;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) unsigned int sequenceNumber;
@property(nonatomic) _Bool hasSessionId;
@property(nonatomic) struct GEOSessionID sessionId;
@property(nonatomic) _Bool hasIsInternalInstall;
@property(nonatomic) _Bool isInternalInstall;
@property(nonatomic) _Bool hasIsInternalTool;
@property(nonatomic) _Bool isInternalTool;
@property(retain, nonatomic) NSString *osVersion;
@property(readonly, nonatomic) _Bool hasOsVersion;
@property(retain, nonatomic) NSString *hardwareModel;
@property(readonly, nonatomic) _Bool hasHardwareModel;
@property(retain, nonatomic) NSString *appMinorVersion;
@property(readonly, nonatomic) _Bool hasAppMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion;
@property(readonly, nonatomic) _Bool hasAppMajorVersion;
@property(retain, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d8fa74
- (id)init;	// IMP=0x0000000000d8fa18
- (id)initWithTraits:(id)arg1;	// IMP=0x0000000001201fec

@end
