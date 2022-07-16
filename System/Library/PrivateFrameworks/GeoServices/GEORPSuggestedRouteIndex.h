//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _clusteredRouteRideSelections;	// 8 = 0x8
    unsigned int _directionsResponseIndex;	// 32 = 0x20
    unsigned int _directionsResponseSuggestedRoutesIndex;	// 36 = 0x24
    struct {
        unsigned int has_directionsResponseIndex:1;
        unsigned int has_directionsResponseSuggestedRoutesIndex:1;
    } _flags;	// 40 = 0x28
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e46793
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e46b76
- (unsigned long long)hash;	// IMP=0x0000000000e46af6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e469ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e46950
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e46850
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e467af
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e467a0
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e4635a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e46348
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e46000
- (id)jsonRepresentation;	// IMP=0x0000000000e45ff1
- (id)dictionaryRepresentation;	// IMP=0x0000000000e45e61
- (id)description;	// IMP=0x0000000000e45db2
- (void)setClusteredRouteRideSelections:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000e45d9b
- (unsigned int)clusteredRouteRideSelectionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000e45cce
- (void)addClusteredRouteRideSelections:(unsigned int)arg1;	// IMP=0x0000000000e45cbb
- (void)clearClusteredRouteRideSelections;	// IMP=0x0000000000e45caa
@property(readonly, nonatomic) unsigned int *clusteredRouteRideSelections;
@property(readonly, nonatomic) unsigned long long clusteredRouteRideSelectionsCount;
@property(nonatomic) _Bool hasDirectionsResponseSuggestedRoutesIndex;
@property(nonatomic) unsigned int directionsResponseSuggestedRoutesIndex;
@property(nonatomic) _Bool hasDirectionsResponseIndex;
@property(nonatomic) unsigned int directionsResponseIndex;
- (void)dealloc;	// IMP=0x0000000000e45b99

@end

