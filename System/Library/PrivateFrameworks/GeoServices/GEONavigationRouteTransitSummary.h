//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

@interface GEONavigationRouteTransitSummary : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_possibleStops;	// 16 = 0x10
    NSMutableArray *_scheduledLinks;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_possibleStops:1;
        unsigned int read_scheduledLinks:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000009aab22
+ (Class)possibleStopType;	// IMP=0x00000000009a9a7d
+ (Class)scheduledLinkType;	// IMP=0x00000000009a9818
- (void).cxx_destruct;	// IMP=0x00000000009ac190
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009abf30
- (unsigned long long)hash;	// IMP=0x00000000009abed4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009abde3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009ab9e1
- (void)copyTo:(id)arg1;	// IMP=0x00000000009ab817
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000009ab5a2
- (void)writeTo:(id)arg1;	// IMP=0x00000000009ab20b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009ab1fc
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009aa41b
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009aa409
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009a9fb8
- (id)jsonRepresentation;	// IMP=0x00000000009a9fa9
- (id)dictionaryRepresentation;	// IMP=0x00000000009a9b3d
- (id)description;	// IMP=0x00000000009a9a8e
- (id)possibleStopAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009a9a4c
- (unsigned long long)possibleStopsCount;	// IMP=0x00000000009a9a20
- (void)addPossibleStop:(id)arg1;	// IMP=0x00000000009a996c
- (void)clearPossibleStops;	// IMP=0x00000000009a9944
@property(retain, nonatomic) NSMutableArray *possibleStops;
- (id)scheduledLinkAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009a97e7
- (unsigned long long)scheduledLinksCount;	// IMP=0x00000000009a97bb
- (void)addScheduledLink:(id)arg1;	// IMP=0x00000000009a9707
- (void)clearScheduledLinks;	// IMP=0x00000000009a96df
@property(retain, nonatomic) NSMutableArray *scheduledLinks;
- (id)initWithData:(id)arg1;	// IMP=0x00000000009a8ead
- (id)init;	// IMP=0x00000000009a8e51
- (id)initWithRoute:(id)arg1;	// IMP=0x00000000012eb371

@end

