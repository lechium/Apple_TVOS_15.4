//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildPlaceLookupByCategoryParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSData *_categoryMetadata;	// 16 = 0x10
    unsigned long long _parentMuid;	// 24 = 0x18
    struct {
        unsigned int has_parentMuid:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004fe347
- (unsigned long long)hash;	// IMP=0x00000000004fe2f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004fe236
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004fe187
- (void)writeTo:(id)arg1;	// IMP=0x00000000004fe107
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004fe0f8
- (id)jsonRepresentation;	// IMP=0x00000000004fdd11
- (id)dictionaryRepresentation;	// IMP=0x00000000004fdab5
- (id)description;	// IMP=0x00000000004fda06

@end

