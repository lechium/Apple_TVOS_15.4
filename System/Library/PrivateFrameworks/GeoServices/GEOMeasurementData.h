//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOMeasurementData : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _enableUnitScaling;	// 16 = 0x10
    struct {
        unsigned int has_enableUnitScaling:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008abc28
- (void).cxx_destruct;	// IMP=0x00000000008abf3e
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008abef8
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008abe8e
- (unsigned long long)hash;	// IMP=0x00000000008abe47
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008abd7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008abcfc
- (void)copyTo:(id)arg1;	// IMP=0x00000000008abca7
- (void)writeTo:(id)arg1;	// IMP=0x00000000008abc44
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008abc35
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008abbc8
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008abbb6
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008abad8
- (id)jsonRepresentation;	// IMP=0x00000000008ab9c6
- (id)dictionaryRepresentation;	// IMP=0x00000000008ab7f1
- (id)description;	// IMP=0x00000000008ab742
@property(nonatomic) _Bool hasEnableUnitScaling;
@property(nonatomic) _Bool enableUnitScaling;

@end

