//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTerritoryLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_locations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005f5b4f
- (unsigned long long)hash;	// IMP=0x00000000005f5b32
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005f5a98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005f58d8
- (void)writeTo:(id)arg1;	// IMP=0x00000000005f5779
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005f576a
- (id)jsonRepresentation;	// IMP=0x00000000005f5658
- (id)dictionaryRepresentation;	// IMP=0x00000000005f52c7
- (id)description;	// IMP=0x00000000005f5218

@end

