//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOARInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_storefrontFaceGeometrys;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000824347
+ (Class)storefrontFaceGeometryType;	// IMP=0x0000000000823846
- (void).cxx_destruct;	// IMP=0x0000000000824c07
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000824bc1
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000824a40
- (unsigned long long)hash;	// IMP=0x0000000000824a05
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000824942
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000082475c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000824689
- (void)writeTo:(id)arg1;	// IMP=0x000000000082452a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000082451b
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000824073
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000824061
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000823dcc
- (id)jsonRepresentation;	// IMP=0x0000000000823cba
- (id)dictionaryRepresentation;	// IMP=0x0000000000823906
- (id)description;	// IMP=0x0000000000823857
- (id)storefrontFaceGeometryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000823829
- (unsigned long long)storefrontFaceGeometrysCount;	// IMP=0x000000000082380c
- (void)addStorefrontFaceGeometry:(id)arg1;	// IMP=0x00000000008237a2
- (void)clearStorefrontFaceGeometrys;	// IMP=0x0000000000823785
@property(retain, nonatomic) NSMutableArray *storefrontFaceGeometrys;

@end
