//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueInfoFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000402862
- (unsigned long long)hash;	// IMP=0x0000000000402858
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000402813
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004027b8
- (void)writeTo:(id)arg1;	// IMP=0x000000000040279b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000040278c
- (id)jsonRepresentation;	// IMP=0x00000000004022c0
- (id)dictionaryRepresentation;	// IMP=0x0000000000402155
- (id)description;	// IMP=0x00000000004020a6

@end

