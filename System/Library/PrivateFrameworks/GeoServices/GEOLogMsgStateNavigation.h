//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONavCameraState;

@interface GEOLogMsgStateNavigation : PBCodable <NSCopying>
{
    double _distanceToDestination;	// 8 = 0x8
    GEONavCameraState *_navCameraState;	// 16 = 0x10
    int _lineType;	// 24 = 0x18
    int _navState;	// 28 = 0x1c
    struct {
        unsigned int has_distanceToDestination:1;
        unsigned int has_lineType:1;
        unsigned int has_navState:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001472ad4
- (void).cxx_destruct;	// IMP=0x000000000147337d
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014732b5
- (unsigned long long)hash;	// IMP=0x000000000147312b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001472ff3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001472f27
- (void)copyTo:(id)arg1;	// IMP=0x0000000001472e76
- (void)writeTo:(id)arg1;	// IMP=0x0000000001472dc7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001472db8
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000147260b
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014725f9
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001471dcb
- (id)jsonRepresentation;	// IMP=0x0000000001471dbc
- (id)dictionaryRepresentation;	// IMP=0x000000000147193a
- (id)description;	// IMP=0x000000000147188b
@property(retain, nonatomic) GEONavCameraState *navCameraState;
@property(readonly, nonatomic) _Bool hasNavCameraState;
@property(nonatomic) _Bool hasDistanceToDestination;
@property(nonatomic) double distanceToDestination;
- (int)StringAsNavState:(id)arg1;	// IMP=0x00000000014716bc
- (id)navStateAsString:(int)arg1;	// IMP=0x000000000147160a
@property(nonatomic) _Bool hasNavState;
@property(nonatomic) int navState;
- (int)StringAsLineType:(id)arg1;	// IMP=0x00000000014711d4
- (id)lineTypeAsString:(int)arg1;	// IMP=0x0000000001470ff6
@property(nonatomic) _Bool hasLineType;
@property(nonatomic) int lineType;

@end

