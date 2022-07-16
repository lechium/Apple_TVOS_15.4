//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOJunctionView : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_imageIds;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000089b415
+ (Class)imageIdType;	// IMP=0x000000000089ab68
- (void).cxx_destruct;	// IMP=0x000000000089bb0e
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000089bac8
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000089b947
- (unsigned long long)hash;	// IMP=0x000000000089b90c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000089b849
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000089b663
- (void)copyTo:(id)arg1;	// IMP=0x000000000089b590
- (void)writeTo:(id)arg1;	// IMP=0x000000000089b431
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000089b422
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000089b3b5
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000089b3a3
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000089b128
- (id)jsonRepresentation;	// IMP=0x000000000089b016
- (id)dictionaryRepresentation;	// IMP=0x000000000089ac28
- (id)description;	// IMP=0x000000000089ab79
- (id)imageIdAtIndex:(unsigned long long)arg1;	// IMP=0x000000000089ab4b
- (unsigned long long)imageIdsCount;	// IMP=0x000000000089ab2e
- (void)addImageId:(id)arg1;	// IMP=0x000000000089aac4
- (void)clearImageIds;	// IMP=0x000000000089aaa7
@property(retain, nonatomic) NSMutableArray *imageIds;

@end
