//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying>
{
    double _confidenceScore;	// 8 = 0x8
    int _destinationType;	// 16 = 0x10
    _Bool _chosen;	// 20 = 0x14
    struct {
        unsigned int has_confidenceScore:1;
        unsigned int has_destinationType:1;
        unsigned int has_chosen:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014c1a0d
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014c1e7f
- (unsigned long long)hash;	// IMP=0x00000000014c1d0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014c1be7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014c1b4d
- (void)copyTo:(id)arg1;	// IMP=0x00000000014c1abc
- (void)writeTo:(id)arg1;	// IMP=0x00000000014c1a29
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014c1a1a
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014c19ad
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014c199b
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014c16e7
- (id)jsonRepresentation;	// IMP=0x00000000014c16d8
- (id)dictionaryRepresentation;	// IMP=0x00000000014c14de
- (id)description;	// IMP=0x00000000014c142f
@property(nonatomic) _Bool hasChosen;
@property(nonatomic) _Bool chosen;
@property(nonatomic) _Bool hasConfidenceScore;
@property(nonatomic) double confidenceScore;
- (int)StringAsDestinationType:(id)arg1;	// IMP=0x00000000014c12b0
- (id)destinationTypeAsString:(int)arg1;	// IMP=0x00000000014c1224
@property(nonatomic) _Bool hasDestinationType;
@property(nonatomic) int destinationType;

@end

