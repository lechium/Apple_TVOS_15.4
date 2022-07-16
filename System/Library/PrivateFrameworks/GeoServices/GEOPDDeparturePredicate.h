//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDeparturePredicate : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDTimeRange _timeRange;	// 16 = 0x10
    unsigned int _numAdditionalDepartures;	// 28 = 0x1c
    struct {
        unsigned int has_timeRange:1;
        unsigned int has_numAdditionalDepartures:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000af70b3
- (unsigned long long)hash;	// IMP=0x0000000000af7056
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af6f7e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000af6ed7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000af6de5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000af6dd6
- (id)jsonRepresentation;	// IMP=0x0000000000af6329
- (id)dictionaryRepresentation;	// IMP=0x0000000000af60f2
- (id)description;	// IMP=0x0000000000af6043
- (id)initWithTraitsTransitModeFilter:(id)arg1;	// IMP=0x000000000120698e

@end

