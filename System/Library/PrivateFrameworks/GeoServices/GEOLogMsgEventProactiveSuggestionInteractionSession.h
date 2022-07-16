//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying>
{
    NSMutableArray *_proactiveItems;	// 8 = 0x8
    int _duration;	// 16 = 0x10
    int _interactedItemIndex;	// 20 = 0x14
    int _listType;	// 24 = 0x18
    struct {
        unsigned int has_duration:1;
        unsigned int has_interactedItemIndex:1;
        unsigned int has_listType:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003733c8
+ (Class)proactiveItemType;	// IMP=0x0000000000371dfd
- (void).cxx_destruct;	// IMP=0x00000000003743aa
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003741cd
- (unsigned long long)hash;	// IMP=0x0000000000374127
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000373fd3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000373d99
- (void)copyTo:(id)arg1;	// IMP=0x0000000000373c66
- (void)writeTo:(id)arg1;	// IMP=0x0000000000373ab7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000373aa8
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003728c4
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003728b2
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003723cf
- (id)jsonRepresentation;	// IMP=0x00000000003723c0
- (id)dictionaryRepresentation;	// IMP=0x0000000000371f7d
- (id)description;	// IMP=0x0000000000371ece
@property(nonatomic) _Bool hasInteractedItemIndex;
@property(nonatomic) int interactedItemIndex;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) int duration;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000371de0
- (unsigned long long)proactiveItemsCount;	// IMP=0x0000000000371dc3
- (void)addProactiveItem:(id)arg1;	// IMP=0x0000000000371d59
- (void)clearProactiveItems;	// IMP=0x0000000000371d3c
@property(retain, nonatomic) NSMutableArray *proactiveItems;
- (int)StringAsListType:(id)arg1;	// IMP=0x0000000000371c48
- (id)listTypeAsString:(int)arg1;	// IMP=0x0000000000371bbe
@property(nonatomic) _Bool hasListType;
@property(nonatomic) int listType;

@end
