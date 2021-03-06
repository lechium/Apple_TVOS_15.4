//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NRPBDeviceCollectionDiff;

@interface NRPBDeviceCollectionHistoryEntry : PBCodable <NSCopying>
{
    double _date;	// 8 = 0x8
    long long _index;	// 16 = 0x10
    NRPBDeviceCollectionDiff *_diff;	// 24 = 0x18
    struct {
        unsigned int date:1;
        unsigned int index:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003b0ab
@property(retain, nonatomic) NRPBDeviceCollectionDiff *diff; // @synthesize diff=_diff;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003afc7
- (unsigned long long)hash;	// IMP=0x000000000003ae6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003ad7d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003accb
- (void)copyTo:(id)arg1;	// IMP=0x000000000003ac46
- (void)writeTo:(id)arg1;	// IMP=0x000000000003abb5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003aba8
- (id)dictionaryRepresentation;	// IMP=0x000000000003a7a2
- (id)description;	// IMP=0x000000000003a6f3
@property(readonly, nonatomic) _Bool hasDiff;
@property(nonatomic) _Bool hasDate;
@property(nonatomic) _Bool hasIndex;

@end

