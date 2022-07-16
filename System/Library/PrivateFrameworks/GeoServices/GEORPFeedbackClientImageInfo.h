//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackClientImageInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_imageUrl;	// 24 = 0x18
    NSString *_providerImageId;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_imageUrl:1;
        unsigned int read_providerImageId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000042feb7
- (void).cxx_destruct;	// IMP=0x000000000043061a
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000004305c9
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000043045e
- (unsigned long long)hash;	// IMP=0x0000000000430402
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000430311
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000043014f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000430081
- (void)writeTo:(id)arg1;	// IMP=0x000000000042fed3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000042fec4
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000042fdab
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000042fd99
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000042fc15
- (id)jsonRepresentation;	// IMP=0x000000000042fb03
- (id)dictionaryRepresentation;	// IMP=0x000000000042f8f1
- (id)description;	// IMP=0x000000000042f842
@property(retain, nonatomic) NSString *imageUrl;
@property(readonly, nonatomic) _Bool hasImageUrl;
@property(retain, nonatomic) NSString *providerImageId;
@property(readonly, nonatomic) _Bool hasProviderImageId;
- (id)initWithData:(id)arg1;	// IMP=0x000000000042f078
- (id)init;	// IMP=0x000000000042f01c

@end

