//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOStyleAttributes, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_completion;	// 24 = 0x18
    NSMutableArray *_resultRefinements;	// 32 = 0x20
    GEOStyleAttributes *_styleAttributes;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _tapBehavior;	// 60 = 0x3c
    _Bool _queryHasAttributeIntentsInRefinements;	// 64 = 0x40
    _Bool _showIntermediateStateTapBehaviorListView;	// 65 = 0x41
    struct {
        unsigned int has_tapBehavior:1;
        unsigned int has_queryHasAttributeIntentsInRefinements:1;
        unsigned int has_showIntermediateStateTapBehaviorListView:1;
        unsigned int read_unknownFields:1;
        unsigned int read_completion:1;
        unsigned int read_resultRefinements:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000062c70b
+ (Class)resultRefinementType;	// IMP=0x000000000062b6ff
- (void).cxx_destruct;	// IMP=0x000000000062d891
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000062d704
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000062d3ef
- (unsigned long long)hash;	// IMP=0x000000000062d2f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000062d121
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000062cd69
- (void)copyTo:(id)arg1;	// IMP=0x000000000062cba1
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000062ca6f
- (void)writeTo:(id)arg1;	// IMP=0x000000000062c727
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000062c718
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000062c5ff
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000062c5ed
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000062c061
- (id)jsonRepresentation;	// IMP=0x000000000062bf4f
- (id)dictionaryRepresentation;	// IMP=0x000000000062b95a
- (id)description;	// IMP=0x000000000062b8ab
@property(nonatomic) _Bool hasQueryHasAttributeIntentsInRefinements;
@property(nonatomic) _Bool queryHasAttributeIntentsInRefinements;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
- (id)resultRefinementAtIndex:(unsigned long long)arg1;	// IMP=0x000000000062b6ce
- (unsigned long long)resultRefinementsCount;	// IMP=0x000000000062b6a2
- (void)addResultRefinement:(id)arg1;	// IMP=0x000000000062b5ee
- (void)clearResultRefinements;	// IMP=0x000000000062b5c6
@property(retain, nonatomic) NSMutableArray *resultRefinements;
@property(nonatomic) _Bool hasShowIntermediateStateTapBehaviorListView;
@property(nonatomic) _Bool showIntermediateStateTapBehaviorListView;
- (int)StringAsTapBehavior:(id)arg1;	// IMP=0x000000000062b3eb
- (id)tapBehaviorAsString:(int)arg1;	// IMP=0x000000000062b396
@property(nonatomic) _Bool hasTapBehavior;
@property(nonatomic) int tapBehavior;
@property(retain, nonatomic) NSString *completion;
@property(readonly, nonatomic) _Bool hasCompletion;
- (id)initWithData:(id)arg1;	// IMP=0x000000000062a608
- (id)init;	// IMP=0x000000000062a5ac

@end

