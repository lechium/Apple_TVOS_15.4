//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOImageServiceRequest : PBRequest <NSCopying>
{
    NSMutableArray *_imageIds;	// 8 = 0x8
    unsigned int _height;	// 16 = 0x10
    unsigned int _width;	// 20 = 0x14
    CDStruct_a1cdbaa7 _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000011fb4b7
+ (Class)imageIdType;	// IMP=0x00000000011fa88f
- (void).cxx_destruct;	// IMP=0x00000000011fbf15
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000011fbd6f
- (unsigned long long)hash;	// IMP=0x00000000011fbce5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011fbbc6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011fb9b2
- (void)copyTo:(id)arg1;	// IMP=0x00000000011fb8a6
- (Class)responseClass;	// IMP=0x00000000011fb895
- (unsigned int)requestTypeCode;	// IMP=0x00000000011fb88a
- (void)writeTo:(id)arg1;	// IMP=0x00000000011fb700
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011fb6f1
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000011fb10a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000011fb0f8
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000011fada1
- (id)jsonRepresentation;	// IMP=0x00000000011fad92
- (id)dictionaryRepresentation;	// IMP=0x00000000011fa9fd
- (id)description;	// IMP=0x00000000011fa94e
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) unsigned int height;
@property(nonatomic) _Bool hasWidth;
@property(nonatomic) unsigned int width;
- (id)imageIdAtIndex:(unsigned long long)arg1;	// IMP=0x00000000011fa872
- (unsigned long long)imageIdsCount;	// IMP=0x00000000011fa855
- (void)addImageId:(id)arg1;	// IMP=0x00000000011fa7eb
- (void)clearImageIds;	// IMP=0x00000000011fa7ce
@property(retain, nonatomic) NSMutableArray *imageIds;

@end

