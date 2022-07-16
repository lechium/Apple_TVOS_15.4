//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitSection : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _actionSheetArtworkIndexs;	// 24 = 0x18
    CDStruct_9f2792e4 _routeDetailsArtworkIndexs;	// 48 = 0x30
    CDStruct_9f2792e4 _stepIndexs;	// 72 = 0x48
    NSString *_actionSheetName;	// 96 = 0x60
    NSMutableArray *_ticketingSegments;	// 104 = 0x68
    unsigned int _readerMarkPos;	// 112 = 0x70
    unsigned int _readerMarkLength;	// 116 = 0x74
    struct os_unfair_lock_s _readerLock;	// 120 = 0x78
    int _nextOptionsIndex;	// 124 = 0x7c
    _Bool _disableAlightNotifications;	// 128 = 0x80
    struct {
        unsigned int has_nextOptionsIndex:1;
        unsigned int has_disableAlightNotifications:1;
        unsigned int read_unknownFields:1;
        unsigned int read_actionSheetArtworkIndexs:1;
        unsigned int read_routeDetailsArtworkIndexs:1;
        unsigned int read_stepIndexs:1;
        unsigned int read_actionSheetName:1;
        unsigned int read_ticketingSegments:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 132 = 0x84
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003bc608
+ (Class)ticketingSegmentType;	// IMP=0x00000000003bb0f8
- (void).cxx_destruct;	// IMP=0x00000000003be0fe
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003bdf85
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003bdb90
- (unsigned long long)hash;	// IMP=0x00000000003bda99
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003bd8f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003bd559
- (void)copyTo:(id)arg1;	// IMP=0x00000000003bd253
- (void)writeTo:(id)arg1;	// IMP=0x00000000003bcdf5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003bcde6
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003bc1ae
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003bc19c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003bb8b4
- (id)jsonRepresentation;	// IMP=0x00000000003bb7a2
- (id)dictionaryRepresentation;	// IMP=0x00000000003bb1b8
- (id)description;	// IMP=0x00000000003bb109
- (id)ticketingSegmentAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003bb0c7
- (unsigned long long)ticketingSegmentsCount;	// IMP=0x00000000003bb09b
- (void)addTicketingSegment:(id)arg1;	// IMP=0x00000000003bafe5
- (void)clearTicketingSegments;	// IMP=0x00000000003bafbb
@property(retain, nonatomic) NSMutableArray *ticketingSegments;
@property(nonatomic) _Bool hasDisableAlightNotifications;
@property(nonatomic) _Bool disableAlightNotifications;
- (void)setRouteDetailsArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000003bae17
- (unsigned int)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003bad41
- (void)addRouteDetailsArtworkIndex:(unsigned int)arg1;	// IMP=0x00000000003bad06
- (void)clearRouteDetailsArtworkIndexs;	// IMP=0x00000000003bace8
@property(readonly, nonatomic) unsigned int *routeDetailsArtworkIndexs;
@property(readonly, nonatomic) unsigned long long routeDetailsArtworkIndexsCount;
- (void)setActionSheetArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000003babab
- (unsigned int)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003baad5
- (void)addActionSheetArtworkIndex:(unsigned int)arg1;	// IMP=0x00000000003baa9a
- (void)clearActionSheetArtworkIndexs;	// IMP=0x00000000003baa7c
@property(readonly, nonatomic) unsigned int *actionSheetArtworkIndexs;
@property(readonly, nonatomic) unsigned long long actionSheetArtworkIndexsCount;
@property(retain, nonatomic) NSString *actionSheetName;
@property(readonly, nonatomic) _Bool hasActionSheetName;
@property(nonatomic) _Bool hasNextOptionsIndex;
@property(nonatomic) int nextOptionsIndex;
- (void)setStepIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000003ba78c
- (unsigned int)stepIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003ba6b6
- (void)addStepIndex:(unsigned int)arg1;	// IMP=0x00000000003ba67b
- (void)clearStepIndexs;	// IMP=0x00000000003ba65d
@property(readonly, nonatomic) unsigned int *stepIndexs;
@property(readonly, nonatomic) unsigned long long stepIndexsCount;
- (void)dealloc;	// IMP=0x00000000003b94cf
- (id)initWithData:(id)arg1;	// IMP=0x00000000003b9473
- (id)init;	// IMP=0x00000000003b9417

@end
