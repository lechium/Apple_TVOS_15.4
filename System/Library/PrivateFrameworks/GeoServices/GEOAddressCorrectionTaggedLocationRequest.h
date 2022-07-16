//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOAddressCorrectionTaggedLocationRequest : PBRequest <NSCopying>
{
    NSMutableArray *_significantLocations;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000076caff
+ (Class)significantLocationType;	// IMP=0x000000000076c29e
- (void).cxx_destruct;	// IMP=0x000000000076d728
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000076d5bc
- (unsigned long long)hash;	// IMP=0x000000000076d581
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000076d4be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000076d2fb
- (void)copyTo:(id)arg1;	// IMP=0x000000000076d228
- (Class)responseClass;	// IMP=0x000000000076d217
- (unsigned int)requestTypeCode;	// IMP=0x000000000076d20c
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000076d0c7
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x000000000076ce12
- (void)writeTo:(id)arg1;	// IMP=0x000000000076cce2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000076ccd3
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000076c880
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000076c86e
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000076c5eb
- (id)jsonRepresentation;	// IMP=0x000000000076c5dc
- (id)dictionaryRepresentation;	// IMP=0x000000000076c35e
- (id)description;	// IMP=0x000000000076c2af
- (id)significantLocationAtIndex:(unsigned long long)arg1;	// IMP=0x000000000076c281
- (unsigned long long)significantLocationsCount;	// IMP=0x000000000076c264
- (void)addSignificantLocation:(id)arg1;	// IMP=0x000000000076c1fa
- (void)clearSignificantLocations;	// IMP=0x000000000076c1dd
@property(retain, nonatomic) NSMutableArray *significantLocations;

@end

