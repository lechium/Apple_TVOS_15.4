//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPhoto : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_photoInfos;	// 24 = 0x18
    NSString *_uid;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _photoType;	// 52 = 0x34
    struct {
        unsigned int has_photoType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_photoInfos:1;
        unsigned int read_uid:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e900ba
+ (Class)photoInfoType;	// IMP=0x0000000000e8f0c8
- (void).cxx_destruct;	// IMP=0x0000000000e91052
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000e90edb
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e90c26
- (unsigned long long)hash;	// IMP=0x0000000000e90b93
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e90a71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e90711
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e905a4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e902cc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e902bd
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e8fcdb
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e8fcc9
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e8f87e
- (id)jsonRepresentation;	// IMP=0x0000000000e8f76c
- (id)dictionaryRepresentation;	// IMP=0x0000000000e8f2c7
- (id)description;	// IMP=0x0000000000e8f218
@property(retain, nonatomic) NSString *uid;
@property(readonly, nonatomic) _Bool hasUid;
- (id)photoInfoAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e8f097
- (unsigned long long)photoInfosCount;	// IMP=0x0000000000e8f06b
- (void)addPhotoInfo:(id)arg1;	// IMP=0x0000000000e8efb7
- (void)clearPhotoInfos;	// IMP=0x0000000000e8ef8f
@property(retain, nonatomic) NSMutableArray *photoInfos;
- (int)StringAsPhotoType:(id)arg1;	// IMP=0x0000000000e8e520
- (id)photoTypeAsString:(int)arg1;	// IMP=0x0000000000e8e493
@property(nonatomic) _Bool hasPhotoType;
@property(nonatomic) int photoType;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e8e3d0
- (id)init;	// IMP=0x0000000000e8e374
- (id)initWithPlaceDataPhoto:(id)arg1;	// IMP=0x00000000009c605d

@end
