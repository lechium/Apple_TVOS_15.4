//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOGeoServiceTag : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_tag;	// 16 = 0x10
    int _serviceType;	// 24 = 0x18
    struct {
        unsigned int has_serviceType:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001092ecc
+ (id)defaultTag;	// IMP=0x0000000000fa5ce0
- (void).cxx_destruct;	// IMP=0x00000000010934a8
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000001093462
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010933d8
- (unsigned long long)hash;	// IMP=0x0000000001093375
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000109327a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010931d4
- (void)copyTo:(id)arg1;	// IMP=0x0000000001093158
- (void)writeTo:(id)arg1;	// IMP=0x00000000010930de
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010930cf
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001092b8f
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001092b82
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000109261a
- (id)jsonRepresentation;	// IMP=0x0000000001092508
- (id)dictionaryRepresentation;	// IMP=0x0000000001092147
- (id)description;	// IMP=0x0000000001092098
@property(retain, nonatomic) NSString *tag;
- (int)StringAsServiceType:(id)arg1;	// IMP=0x0000000001091cc4
- (id)serviceTypeAsString:(int)arg1;	// IMP=0x0000000001091af7
@property(nonatomic) _Bool hasServiceType;
@property(nonatomic) int serviceType;

@end

