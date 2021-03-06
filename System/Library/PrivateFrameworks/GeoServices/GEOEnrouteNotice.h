//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORouteAnnotation, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOEnrouteNotice : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_guidances;	// 24 = 0x18
    NSString *_objectIdentifier;	// 32 = 0x20
    GEORouteAnnotation *_routeAnnotation;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    unsigned int _groupItemHorizontalDisplayOrder;	// 60 = 0x3c
    unsigned int _groupItemVerticalDisplayOrder;	// 64 = 0x40
    unsigned int _highlightDistance;	// 68 = 0x44
    unsigned int _objectGroupId;	// 72 = 0x48
    unsigned int _priority;	// 76 = 0x4c
    int _type;	// 80 = 0x50
    unsigned int _zilchPathIndex;	// 84 = 0x54
    struct {
        unsigned int has_groupItemHorizontalDisplayOrder:1;
        unsigned int has_groupItemVerticalDisplayOrder:1;
        unsigned int has_highlightDistance:1;
        unsigned int has_objectGroupId:1;
        unsigned int has_priority:1;
        unsigned int has_type:1;
        unsigned int has_zilchPathIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_guidances:1;
        unsigned int read_objectIdentifier:1;
        unsigned int read_routeAnnotation:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 88 = 0x58
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000873bb4
+ (Class)guidanceType;	// IMP=0x00000000008720cd
- (void).cxx_destruct;	// IMP=0x0000000000876110
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000875f63
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000875b99
- (unsigned long long)hash;	// IMP=0x0000000000875a09
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008757b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000875382
- (void)copyTo:(id)arg1;	// IMP=0x0000000000875146
- (void)writeTo:(id)arg1;	// IMP=0x0000000000874ac3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000874ab4
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000008735b3
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000008735a1
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000872dfa
- (id)jsonRepresentation;	// IMP=0x0000000000872ce8
- (id)dictionaryRepresentation;	// IMP=0x0000000000872526
- (id)description;	// IMP=0x0000000000872477
@property(nonatomic) _Bool hasGroupItemVerticalDisplayOrder;
@property(nonatomic) unsigned int groupItemVerticalDisplayOrder;
@property(nonatomic) _Bool hasGroupItemHorizontalDisplayOrder;
@property(nonatomic) unsigned int groupItemHorizontalDisplayOrder;
@property(nonatomic) _Bool hasZilchPathIndex;
@property(nonatomic) unsigned int zilchPathIndex;
@property(retain, nonatomic) GEORouteAnnotation *routeAnnotation;
@property(readonly, nonatomic) _Bool hasRouteAnnotation;
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) unsigned int priority;
@property(nonatomic) _Bool hasObjectGroupId;
@property(nonatomic) unsigned int objectGroupId;
@property(nonatomic) _Bool hasHighlightDistance;
@property(nonatomic) unsigned int highlightDistance;
- (id)guidanceAtIndex:(unsigned long long)arg1;	// IMP=0x000000000087209c
- (unsigned long long)guidancesCount;	// IMP=0x0000000000872070
- (void)addGuidance:(id)arg1;	// IMP=0x0000000000871fbb
- (void)clearGuidances;	// IMP=0x0000000000871f92
@property(retain, nonatomic) NSMutableArray *guidances;
@property(retain, nonatomic) NSString *objectIdentifier;
@property(readonly, nonatomic) _Bool hasObjectIdentifier;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000000870df0
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000870d71
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000870ca0
- (id)init;	// IMP=0x0000000000870c44

@end

