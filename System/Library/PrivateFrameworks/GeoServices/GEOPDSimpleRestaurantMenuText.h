//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSimpleRestaurantMenuText : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_menuGroups;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000bae622
- (unsigned long long)hash;	// IMP=0x0000000000bae605
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bae56b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bae3ab
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bae24c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bae23d
- (id)jsonRepresentation;	// IMP=0x0000000000badf84
- (id)dictionaryRepresentation;	// IMP=0x0000000000badbe1
- (id)description;	// IMP=0x0000000000badb32

@end

