//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPrototype : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_componentType;	// 24 = 0x18
    NSMutableArray *_values;	// 32 = 0x20
    NSString *_version;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_componentType:1;
        unsigned int read_values:1;
        unsigned int read_version:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000b8e76f
- (unsigned long long)hash;	// IMP=0x0000000000b8e6f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b8e5e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b8e2da
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b8e00c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b8dffd
- (id)jsonRepresentation;	// IMP=0x0000000000b8dc7c
- (id)dictionaryRepresentation;	// IMP=0x0000000000b8d6c4
- (id)description;	// IMP=0x0000000000b8d615
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b8ce03
- (id)init;	// IMP=0x0000000000b8cda7

@end

