//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTerritoryDataTileData : PBCodable <NSCopying>
{
    NSMutableArray *_territorys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c63353
- (unsigned long long)hash;	// IMP=0x0000000000c63336
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c6329c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c630ff
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c62fcf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c62dc7
- (id)jsonRepresentation;	// IMP=0x0000000000c62db8
- (id)dictionaryRepresentation;	// IMP=0x0000000000c62b49
- (id)description;	// IMP=0x0000000000c62a9a

@end
