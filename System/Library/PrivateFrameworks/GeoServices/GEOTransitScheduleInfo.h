//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitEntry, PBUnknownFields;

@interface GEOTransitScheduleInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOTransitEntry *_entry;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003b8ec9
- (void).cxx_destruct;	// IMP=0x00000000003b93e6
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003b9380
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003b92e5
- (unsigned long long)hash;	// IMP=0x00000000003b92aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b91e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003b915c
- (void)copyTo:(id)arg1;	// IMP=0x00000000003b9107
- (void)writeTo:(id)arg1;	// IMP=0x00000000003b90ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003b909d
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003b8bc0
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003b8bae
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003b8aa5
- (id)jsonRepresentation;	// IMP=0x00000000003b8993
- (id)dictionaryRepresentation;	// IMP=0x00000000003b879b
- (id)description;	// IMP=0x00000000003b86ec
@property(retain, nonatomic) GEOTransitEntry *entry;
@property(readonly, nonatomic) _Bool hasEntry;
- (id)routingParameters;	// IMP=0x0000000001039bfc
- (id)windowStartDate;	// IMP=0x0000000001039b72
- (id)staticDepartureDate;	// IMP=0x0000000001039ae8
- (unsigned long long)lineID;	// IMP=0x0000000001039a84
- (unsigned long long)tripID;	// IMP=0x0000000001039a20

@end
