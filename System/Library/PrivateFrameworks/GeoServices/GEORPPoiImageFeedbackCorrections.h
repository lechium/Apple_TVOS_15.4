//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEORPPoiImageFeedbackCorrections : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_comments;	// 16 = 0x10
    int _correctionType;	// 24 = 0x18
    CDStruct_ef3e2236 _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000479f24
- (void).cxx_destruct;	// IMP=0x000000000047a308
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000047a2c2
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000047a238
- (unsigned long long)hash;	// IMP=0x000000000047a1d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047a0da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047a034
- (void)copyTo:(id)arg1;	// IMP=0x0000000000479fbf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000479f40
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000479f31
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000479ec4
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000479eb2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000479bf6
- (id)jsonRepresentation;	// IMP=0x0000000000479ae4
- (id)dictionaryRepresentation;	// IMP=0x000000000047982d
- (id)description;	// IMP=0x000000000047977e
@property(retain, nonatomic) NSString *comments;
@property(readonly, nonatomic) _Bool hasComments;
- (int)StringAsCorrectionType:(id)arg1;	// IMP=0x0000000000479608
- (id)correctionTypeAsString:(int)arg1;	// IMP=0x0000000000479554
@property(nonatomic) _Bool hasCorrectionType;
@property(nonatomic) int correctionType;

@end

