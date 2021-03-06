//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEORPFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _placeMuid;	// 16 = 0x10
    struct {
        unsigned int has_placeMuid:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001256532
- (void).cxx_destruct;	// IMP=0x0000000001256839
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000012567f3
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001256788
- (unsigned long long)hash;	// IMP=0x0000000001256744
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001256688
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001256607
- (void)copyTo:(id)arg1;	// IMP=0x00000000012565b1
- (void)writeTo:(id)arg1;	// IMP=0x000000000125654e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000125653f
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000012564d2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000012564c0
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000012563e2
- (id)jsonRepresentation;	// IMP=0x00000000012562d0
- (id)dictionaryRepresentation;	// IMP=0x00000000012560fb
- (id)description;	// IMP=0x000000000125604c
@property(nonatomic) _Bool hasPlaceMuid;
@property(nonatomic) unsigned long long placeMuid;

@end

