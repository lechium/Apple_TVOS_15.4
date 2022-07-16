//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEORPCuratedCollectionCorrections : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _correctionType;	// 16 = 0x10
    CDStruct_ef3e2236 _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000041f1c0
- (void).cxx_destruct;	// IMP=0x000000000041f688
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000041f642
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000041f5d8
- (unsigned long long)hash;	// IMP=0x000000000041f591
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000041f4d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041f456
- (void)copyTo:(id)arg1;	// IMP=0x000000000041f401
- (void)writeTo:(id)arg1;	// IMP=0x000000000041f39f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000041f390
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000041eec4
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000041eeb2
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000041ed0a
- (id)jsonRepresentation;	// IMP=0x000000000041ebf8
- (id)dictionaryRepresentation;	// IMP=0x000000000041e9c6
- (id)description;	// IMP=0x000000000041e917
- (int)StringAsCorrectionType:(id)arg1;	// IMP=0x000000000041e868
- (id)correctionTypeAsString:(int)arg1;	// IMP=0x000000000041e7ea
@property(nonatomic) _Bool hasCorrectionType;
@property(nonatomic) int correctionType;

@end

