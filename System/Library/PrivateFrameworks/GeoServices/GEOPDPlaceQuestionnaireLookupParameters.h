//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceQuestionnaireLookupParameters : PBCodable <NSCopying>
{
    NSMutableArray *_placeInfos;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000128825a
- (unsigned long long)hash;	// IMP=0x000000000128811e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001288084
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001287ee7
- (void)writeTo:(id)arg1;	// IMP=0x0000000001287c3b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001287c2c
- (id)jsonRepresentation;	// IMP=0x0000000001286e7e
- (id)dictionaryRepresentation;	// IMP=0x0000000001286bfd
- (id)description;	// IMP=0x0000000001286b4e

@end

