//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIpGeoLookupResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_countryCode;	// 24 = 0x18
    NSString *_ipAddress;	// 32 = 0x20
    GEOLatLng *_location;	// 40 = 0x28
    NSString *_timeZome;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _status;	// 68 = 0x44
    struct {
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_countryCode:1;
        unsigned int read_ipAddress:1;
        unsigned int read_location:1;
        unsigned int read_timeZome:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000526663
- (unsigned long long)hash;	// IMP=0x000000000052659f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000526421
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005261d3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000525fd0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000525fc1
- (id)jsonRepresentation;	// IMP=0x0000000000525c40
- (id)dictionaryRepresentation;	// IMP=0x000000000052586b
- (id)description;	// IMP=0x00000000005257bc
- (id)initWithData:(id)arg1;	// IMP=0x000000000052494f
- (id)init;	// IMP=0x00000000005248f3

@end

