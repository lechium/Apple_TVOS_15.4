//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDateTimeRange : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDLocalTimeRange *_timeRanges;	// 16 = 0x10
    unsigned long long _timeRangesCount;	// 24 = 0x18
    unsigned long long _timeRangesSpace;	// 32 = 0x20
    unsigned long long _endDate;	// 40 = 0x28
    unsigned long long _startDate;	// 48 = 0x30
    struct {
        unsigned int has_endDate:1;
        unsigned int has_startDate:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000af1137
- (unsigned long long)hash;	// IMP=0x0000000000af10c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af0fd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000af0ef9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000af0db4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000af0da5
- (id)jsonRepresentation;	// IMP=0x0000000000aeffce
- (id)dictionaryRepresentation;	// IMP=0x0000000000aefca6
- (id)description;	// IMP=0x0000000000aefbf7
- (void)dealloc;	// IMP=0x0000000000aef9ab
@property(readonly, nonatomic) _Bool hasValidStartAndEndDates;

@end

