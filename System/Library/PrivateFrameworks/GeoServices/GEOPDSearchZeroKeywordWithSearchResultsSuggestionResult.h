//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_searchResultsForCategoryEntrys;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005ec965
- (unsigned long long)hash;	// IMP=0x00000000005ec948
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005ec8ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005ec6ee
- (void)writeTo:(id)arg1;	// IMP=0x00000000005ec58f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005ec580
- (id)jsonRepresentation;	// IMP=0x00000000005ec46e
- (id)dictionaryRepresentation;	// IMP=0x00000000005ec0cb
- (id)description;	// IMP=0x00000000005ec01c

@end

