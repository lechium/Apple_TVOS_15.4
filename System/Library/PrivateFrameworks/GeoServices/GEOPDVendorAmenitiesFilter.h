//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVendorAmenitiesFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000beeaff
- (unsigned long long)hash;	// IMP=0x0000000000beeaf7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000beeab2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000beea57
- (void)writeTo:(id)arg1;	// IMP=0x0000000000beea3a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000beea2b
- (id)jsonRepresentation;	// IMP=0x0000000000bee919
- (id)dictionaryRepresentation;	// IMP=0x0000000000bee7ae
- (id)description;	// IMP=0x0000000000bee6ff

@end

