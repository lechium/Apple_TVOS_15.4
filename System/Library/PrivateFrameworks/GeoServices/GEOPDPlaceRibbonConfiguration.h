//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceRibbonConfiguration : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_ribbonItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b84dc3
- (unsigned long long)hash;	// IMP=0x0000000000b84da6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b84d0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b84b4c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b849ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b849de
- (id)jsonRepresentation;	// IMP=0x0000000000b84725
- (id)dictionaryRepresentation;	// IMP=0x0000000000b84382
- (id)description;	// IMP=0x0000000000b842d3

@end

