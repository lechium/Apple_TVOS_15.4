//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPLocationCoordinate, CKDPRecordFieldIdentifier;

@interface CKDPQuerySort : PBCodable <NSCopying>
{
    CKDPLocationCoordinate *_coordinate;	// 8 = 0x8
    CKDPRecordFieldIdentifier *_fieldName;	// 16 = 0x10
    int _order;	// 24 = 0x18
    struct {
        unsigned int order:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000004c2c7
@property(retain, nonatomic) CKDPLocationCoordinate *coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *fieldName; // @synthesize fieldName=_fieldName;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004c1cc
- (unsigned long long)hash;	// IMP=0x000000000004c159
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004c064
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004bfa3
- (void)copyTo:(id)arg1;	// IMP=0x000000000004bf20
- (void)writeTo:(id)arg1;	// IMP=0x000000000004be9f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004be92
- (id)dictionaryRepresentation;	// IMP=0x000000000004baa1
- (id)description;	// IMP=0x000000000004b9f2
@property(readonly, nonatomic) _Bool hasCoordinate;
- (int)StringAsOrder:(id)arg1;	// IMP=0x000000000004b976
- (id)orderAsString:(int)arg1;	// IMP=0x000000000004b920
@property(nonatomic) _Bool hasOrder;
@property(nonatomic) int order; // @synthesize order=_order;
@property(readonly, nonatomic) _Bool hasFieldName;

@end
