//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPriceDescriptionFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b8cd94
- (unsigned long long)hash;	// IMP=0x0000000000b8cd8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b8cd47
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b8ccec
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b8cccf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b8ccc0
- (id)jsonRepresentation;	// IMP=0x0000000000b8cbae
- (id)dictionaryRepresentation;	// IMP=0x0000000000b8ca43
- (id)description;	// IMP=0x0000000000b8c994

@end
