//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceLookupResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000057654c
- (unsigned long long)hash;	// IMP=0x0000000000576544
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005764ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005764a4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000576487
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000576478
- (id)jsonRepresentation;	// IMP=0x0000000000576366
- (id)dictionaryRepresentation;	// IMP=0x00000000005761fb
- (id)description;	// IMP=0x000000000057614c

@end

