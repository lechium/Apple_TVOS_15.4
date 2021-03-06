//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_labelLanguage;	// 24 = 0x18
    NSString *_labelText;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _minZoom;	// 52 = 0x34
    struct {
        unsigned int has_minZoom:1;
        unsigned int read_unknownFields:1;
        unsigned int read_labelLanguage:1;
        unsigned int read_labelText:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d4571f
- (void).cxx_destruct;	// IMP=0x0000000000d45f7d
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000d45f2c
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d45da1
- (unsigned long long)hash;	// IMP=0x0000000000d45d0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d45bec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d459f8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d4590c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d4573b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d4572c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d45613
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d45601
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d45403
- (id)jsonRepresentation;	// IMP=0x0000000000d452f1
- (id)dictionaryRepresentation;	// IMP=0x0000000000d45079
- (id)description;	// IMP=0x0000000000d44fca
@property(retain, nonatomic) NSString *labelText;
@property(readonly, nonatomic) _Bool hasLabelText;
@property(retain, nonatomic) NSString *labelLanguage;
@property(readonly, nonatomic) _Bool hasLabelLanguage;
@property(nonatomic) _Bool hasMinZoom;
@property(nonatomic) unsigned int minZoom;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d44674
- (id)init;	// IMP=0x0000000000d44618

@end

