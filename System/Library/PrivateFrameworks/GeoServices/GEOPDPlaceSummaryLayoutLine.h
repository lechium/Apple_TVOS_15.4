//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDPlaceSummaryLayoutLine : PBCodable <NSCopying>
{
    NSMutableArray *_units;	// 8 = 0x8
    _Bool _isDynamicContextLine;	// 16 = 0x10
    _Bool _shouldOmitSpacingDelimiter;	// 17 = 0x11
    struct {
        unsigned int has_isDynamicContextLine:1;
        unsigned int has_shouldOmitSpacingDelimiter:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d4cd6f
+ (Class)unitType;	// IMP=0x0000000000d4bf59
- (void).cxx_destruct;	// IMP=0x0000000000d4e008
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d4de62
- (unsigned long long)hash;	// IMP=0x0000000000d4ddd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d4dc9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d4da88
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d4d97c
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000d4d837
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d4d6ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d4d69c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d4c7da
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d4c7c8
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d4c445
- (id)jsonRepresentation;	// IMP=0x0000000000d4c436
- (id)dictionaryRepresentation;	// IMP=0x0000000000d4c0c7
- (id)description;	// IMP=0x0000000000d4c018
@property(nonatomic) _Bool hasShouldOmitSpacingDelimiter;
@property(nonatomic) _Bool shouldOmitSpacingDelimiter;
@property(nonatomic) _Bool hasIsDynamicContextLine;
@property(nonatomic) _Bool isDynamicContextLine;
- (id)unitAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000d4bf3c
- (unsigned long long)unitsCount;	// IMP=0x0000000000d4bf1f
- (void)addUnit:(id)arg1;	// IMP=0x0000000000d4beb5
- (void)clearUnits;	// IMP=0x0000000000d4be98
@property(retain, nonatomic) NSMutableArray *units;

@end

