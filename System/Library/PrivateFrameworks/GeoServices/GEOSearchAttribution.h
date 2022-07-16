//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOSearchAttribution : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_attributionURLs;	// 24 = 0x18
    NSString *_sourceIdentifier;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _sourceVersion;	// 52 = 0x34
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_attributionURLs:1;
        unsigned int read_sourceIdentifier:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000ece164
+ (Class)attributionURLsType;	// IMP=0x0000000000ecd8fb
- (void).cxx_destruct;	// IMP=0x0000000000eced1a
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000ececc9
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000ecea3b
- (unsigned long long)hash;	// IMP=0x0000000000ece9bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ece8b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ece597
- (void)copyTo:(id)arg1;	// IMP=0x0000000000ece44d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ece180
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ece171
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000ece058
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000ece04b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000ecdd16
- (id)jsonRepresentation;	// IMP=0x0000000000ecdc04
- (id)dictionaryRepresentation;	// IMP=0x0000000000ecd9bb
- (id)description;	// IMP=0x0000000000ecd90c
- (id)attributionURLsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000ecd8ca
- (unsigned long long)attributionURLsCount;	// IMP=0x0000000000ecd89e
- (void)addAttributionURLs:(id)arg1;	// IMP=0x0000000000ecd7ea
- (void)clearAttributionURLs;	// IMP=0x0000000000ecd7c2
@property(retain, nonatomic) NSMutableArray *attributionURLs;
@property(nonatomic) unsigned int sourceVersion;
@property(retain, nonatomic) NSString *sourceIdentifier;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000eccef3
- (id)init;	// IMP=0x0000000000ecce97

@end

