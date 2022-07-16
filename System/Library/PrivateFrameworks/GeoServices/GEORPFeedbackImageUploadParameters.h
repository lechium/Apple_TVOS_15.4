//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackImageUploadParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_images;	// 16 = 0x10
    _Bool _isEnrichment;	// 24 = 0x18
    struct {
        unsigned int has_isEnrichment:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000044a12e
+ (Class)imageType;	// IMP=0x0000000000449446
- (void).cxx_destruct;	// IMP=0x000000000044af0e
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000044aec8
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000044ad28
- (unsigned long long)hash;	// IMP=0x000000000044acc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000044abbb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000044a9b7
- (void)copyTo:(id)arg1;	// IMP=0x000000000044a8c6
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000044a781
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x000000000044a4fc
- (void)writeTo:(id)arg1;	// IMP=0x000000000044a377
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000044a368
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000449d95
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000449d83
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000449a7c
- (id)jsonRepresentation;	// IMP=0x000000000044996a
- (id)dictionaryRepresentation;	// IMP=0x000000000044955b
- (id)description;	// IMP=0x00000000004494ac
@property(nonatomic) _Bool hasIsEnrichment;
@property(nonatomic) _Bool isEnrichment;
- (id)imageAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000449429
- (unsigned long long)imagesCount;	// IMP=0x000000000044940c
- (void)addImage:(id)arg1;	// IMP=0x00000000004493a2
- (void)clearImages;	// IMP=0x0000000000449385
@property(retain, nonatomic) NSMutableArray *images;

@end
