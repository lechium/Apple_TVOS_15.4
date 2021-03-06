//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitBrand : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    unsigned long long _muid;	// 24 = 0x18
    NSString *_nameDisplayString;	// 32 = 0x20
    GEOStyleAttributes *_styleAttributes;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    unsigned int _brandIndex;	// 60 = 0x3c
    struct {
        unsigned int has_muid:1;
        unsigned int has_brandIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000d1ccce
- (unsigned long long)hash;	// IMP=0x0000000000d1cc29
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d1caf4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d1c8eb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d1c701
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d1c6f4
- (id)jsonRepresentation;	// IMP=0x0000000000d1c381
- (id)dictionaryRepresentation;	// IMP=0x0000000000d1bf0f
- (id)description;	// IMP=0x0000000000d1be60
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d1b637
- (id)init;	// IMP=0x0000000000d1b5db

@end

