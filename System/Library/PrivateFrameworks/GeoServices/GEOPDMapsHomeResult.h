//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsHomeResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_mapsHomeSections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000052c205
- (unsigned long long)hash;	// IMP=0x000000000052c1e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052c14e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000052bf8e
- (void)writeTo:(id)arg1;	// IMP=0x000000000052be2f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000052be20
- (id)jsonRepresentation;	// IMP=0x000000000052b90a
- (id)dictionaryRepresentation;	// IMP=0x000000000052b567
- (id)description;	// IMP=0x000000000052b4b8

@end

