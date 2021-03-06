//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEntityFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _includeName;	// 16 = 0x10
    _Bool _includeSpokenNames;	// 17 = 0x11
    struct {
        unsigned int has_includeName:1;
        unsigned int has_includeSpokenNames:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000b172b8
- (unsigned long long)hash;	// IMP=0x0000000000b17272
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b171a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b17107
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b17079
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b1706a
- (id)jsonRepresentation;	// IMP=0x0000000000b16f58
- (id)dictionaryRepresentation;	// IMP=0x0000000000b16d19
- (id)description;	// IMP=0x0000000000b16c6a

@end

