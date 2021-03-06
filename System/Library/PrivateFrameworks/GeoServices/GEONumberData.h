//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEONumberData : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    float _value;	// 16 = 0x10
    struct {
        unsigned int has_value:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000008b075c
- (void).cxx_destruct;	// IMP=0x00000000008b0b4e
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000008b0b08
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008b0a9a
- (unsigned long long)hash;	// IMP=0x00000000008b0979
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008b08b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008b0835
- (void)copyTo:(id)arg1;	// IMP=0x00000000008b07dc
- (void)writeTo:(id)arg1;	// IMP=0x00000000008b0778
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008b0769
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008b06fc
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008b06ef
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000008b0627
- (id)jsonRepresentation;	// IMP=0x00000000008b0515
- (id)dictionaryRepresentation;	// IMP=0x00000000008b034d
- (id)description;	// IMP=0x00000000008b029e
@property(nonatomic) _Bool hasValue;
@property(nonatomic) float value;

@end

