//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDPlaceSummaryLayoutUnitPublisherDescription : PBCodable <NSCopying>
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000d68560
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d6866b
- (unsigned long long)hash;	// IMP=0x0000000000d68651
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d685cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d68596
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d68582
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d6857c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d6856d
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d68506
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d684f9
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d684a9
- (id)jsonRepresentation;	// IMP=0x0000000000d6849f
- (id)dictionaryRepresentation;	// IMP=0x0000000000d68448
- (id)description;	// IMP=0x0000000000d68399

@end

