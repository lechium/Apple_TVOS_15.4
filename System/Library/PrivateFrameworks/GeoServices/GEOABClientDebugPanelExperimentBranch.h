//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABDebugPanelExperimentBranch, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOABClientDebugPanelExperimentBranch : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_configKeyValues;	// 24 = 0x18
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_configKeyValues:1;
        unsigned int read_debugExperimentBranch:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010eebe9
+ (Class)configKeyValueType;	// IMP=0x00000000010edfdb
- (void).cxx_destruct;	// IMP=0x00000000010efa8d
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000010ef90f
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010ef676
- (unsigned long long)hash;	// IMP=0x00000000010ef61a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010ef529
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010ef212
- (void)copyTo:(id)arg1;	// IMP=0x00000000010ef0c8
- (void)writeTo:(id)arg1;	// IMP=0x00000000010eedeb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010eeddc
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010ee936
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010ee924
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010ee5e0
- (id)jsonRepresentation;	// IMP=0x00000000010ee4ce
- (id)dictionaryRepresentation;	// IMP=0x00000000010ee09b
- (id)description;	// IMP=0x00000000010edfec
- (id)configKeyValueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010edfaa
- (unsigned long long)configKeyValuesCount;	// IMP=0x00000000010edf7e
- (void)addConfigKeyValue:(id)arg1;	// IMP=0x00000000010edeca
- (void)clearConfigKeyValues;	// IMP=0x00000000010edea2
@property(retain, nonatomic) NSMutableArray *configKeyValues;
@property(retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property(readonly, nonatomic) _Bool hasDebugExperimentBranch;
- (id)initWithData:(id)arg1;	// IMP=0x00000000010ed413
- (id)init;	// IMP=0x00000000010ed3b7

@end

