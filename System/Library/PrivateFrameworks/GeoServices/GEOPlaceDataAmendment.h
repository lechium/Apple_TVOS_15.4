//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPlaceDataAmendment : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _suppressSiriRating;	// 16 = 0x10
    struct {
        unsigned int has_suppressSiriRating:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e9ddcf
- (void).cxx_destruct;	// IMP=0x0000000000e9e0e5
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000e9e09f
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e9e035
- (unsigned long long)hash;	// IMP=0x0000000000e9dfee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e9df23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e9dea3
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e9de4e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e9ddeb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e9dddc
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e9dd6f
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e9dd5d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e9dc7f
- (id)jsonRepresentation;	// IMP=0x0000000000e9db6d
- (id)dictionaryRepresentation;	// IMP=0x0000000000e9d998
- (id)description;	// IMP=0x0000000000e9d8e9
@property(nonatomic) _Bool hasSuppressSiriRating;
@property(nonatomic) _Bool suppressSiriRating;

@end

