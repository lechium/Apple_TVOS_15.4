//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialLookupFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000bb8349
- (unsigned long long)hash;	// IMP=0x0000000000bb8341
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bb82fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bb82a1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bb8284
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bb8275
- (id)jsonRepresentation;	// IMP=0x0000000000bb8163
- (id)dictionaryRepresentation;	// IMP=0x0000000000bb7ff8
- (id)description;	// IMP=0x0000000000bb7f49

@end

