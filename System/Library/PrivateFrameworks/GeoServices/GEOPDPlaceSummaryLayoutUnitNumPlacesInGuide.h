//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDPlaceSummaryLayoutUnitNumPlacesInGuide : PBCodable <NSCopying>
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d67f8e
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d68099
- (unsigned long long)hash;	// IMP=0x0000000000d6807f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d67ffd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d67fc4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d67fb0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d67faa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d67f9b
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d67f34
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d67f27
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d67ed7
- (id)jsonRepresentation;	// IMP=0x0000000000d67ecd
- (id)dictionaryRepresentation;	// IMP=0x0000000000d67e76
- (id)description;	// IMP=0x0000000000d67dc7

@end

