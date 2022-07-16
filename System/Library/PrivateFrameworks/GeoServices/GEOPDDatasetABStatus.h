//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDDatasetABStatus : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _datasetId;	// 16 = 0x10
    struct {
        unsigned int has_datasetId:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c54efc
- (void).cxx_destruct;	// IMP=0x0000000000c553c3
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000c5537d
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c55313
- (unsigned long long)hash;	// IMP=0x0000000000c552cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c55212
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c55192
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c5513d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c550db
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c550cc
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c54c0a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c54bf8
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c54b1b
- (id)jsonRepresentation;	// IMP=0x0000000000c54a09
- (id)dictionaryRepresentation;	// IMP=0x0000000000c54835
- (id)description;	// IMP=0x0000000000c54786
@property(nonatomic) _Bool hasDatasetId;
@property(nonatomic) unsigned int datasetId;

@end
