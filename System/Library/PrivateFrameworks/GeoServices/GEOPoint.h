//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPoint : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _elevationCm;	// 16 = 0x10
    unsigned int _offsetM;	// 20 = 0x14
    struct {
        unsigned int has_elevationCm:1;
        unsigned int has_offsetM:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008bca5e
- (void).cxx_destruct;	// IMP=0x00000000008bce2c
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008bcde6
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008bcd5f
- (unsigned long long)hash;	// IMP=0x00000000008bccfe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008bcc15
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008bcb78
- (void)copyTo:(id)arg1;	// IMP=0x00000000008bcb06
- (void)writeTo:(id)arg1;	// IMP=0x00000000008bca7a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008bca6b
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008bc9fe
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008bc9ec
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008bc884
- (id)jsonRepresentation;	// IMP=0x00000000008bc772
- (id)dictionaryRepresentation;	// IMP=0x00000000008bc53b
- (id)description;	// IMP=0x00000000008bc48c
@property(nonatomic) _Bool hasElevationCm;
@property(nonatomic) int elevationCm;
@property(nonatomic) _Bool hasOffsetM;
@property(nonatomic) unsigned int offsetM;

@end

