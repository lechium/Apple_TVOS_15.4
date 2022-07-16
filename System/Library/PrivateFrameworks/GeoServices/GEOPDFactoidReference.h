//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFactoidReference : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _factoidItemIndex;	// 16 = 0x10
    int _style;	// 20 = 0x14
    struct {
        unsigned int has_factoidItemIndex:1;
        unsigned int has_style:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000b23c92
- (unsigned long long)hash;	// IMP=0x0000000000b23c4d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b23b9a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b23afd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b23a71
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b23a62
- (id)jsonRepresentation;	// IMP=0x0000000000b23950
- (id)dictionaryRepresentation;	// IMP=0x0000000000b236f0
- (id)description;	// IMP=0x0000000000b23641

@end
