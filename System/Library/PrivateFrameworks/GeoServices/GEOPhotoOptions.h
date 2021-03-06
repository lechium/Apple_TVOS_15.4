//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPhotoOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_95bda58d _photoSizes;	// 16 = 0x10
    int _maxPhotos;	// 40 = 0x28
    int _photoType;	// 44 = 0x2c
    struct {
        unsigned int has_photoType:1;
    } _flags;	// 48 = 0x30
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e93090
- (void).cxx_destruct;	// IMP=0x0000000000e9358c
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000e93546
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e9345b
- (unsigned long long)hash;	// IMP=0x0000000000e933e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e932f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e93250
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e9315f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e930ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e9309d
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e93030
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e93023
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e92ac6
- (id)jsonRepresentation;	// IMP=0x0000000000e929b4
- (id)dictionaryRepresentation;	// IMP=0x0000000000e925aa
- (id)description;	// IMP=0x0000000000e924fb
- (int)StringAsPhotoSizes:(id)arg1;	// IMP=0x0000000000e92388
- (id)photoSizesAsString:(int)arg1;	// IMP=0x0000000000e922ba
- (void)setPhotoSizes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000e922a3
- (int)photoSizeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e921d6
- (void)addPhotoSize:(int)arg1;	// IMP=0x0000000000e921c3
- (void)clearPhotoSizes;	// IMP=0x0000000000e921b2
@property(readonly, nonatomic) int *photoSizes;
@property(readonly, nonatomic) unsigned long long photoSizesCount;
- (int)StringAsPhotoType:(id)arg1;	// IMP=0x0000000000e920c4
- (id)photoTypeAsString:(int)arg1;	// IMP=0x0000000000e92038
@property(nonatomic) _Bool hasPhotoType;
@property(nonatomic) int photoType;
@property(nonatomic) int maxPhotos;
- (void)dealloc;	// IMP=0x0000000000e91f74

@end

