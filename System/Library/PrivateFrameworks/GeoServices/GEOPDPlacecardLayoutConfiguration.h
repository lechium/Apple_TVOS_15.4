//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOPDPlacecardLayoutConfiguration : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_entries;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000b85747
+ (Class)entriesType;	// IMP=0x0000000000b84ede
+ (id)placecardLayoutConfigurationPlaceData:(id)arg1;	// IMP=0x00000000009d01c1
- (void).cxx_destruct;	// IMP=0x0000000000b85f66
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000b85dfa
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000b85c79
- (unsigned long long)hash;	// IMP=0x0000000000b85c3e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b85b7b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b85995
- (void)copyTo:(id)arg1;	// IMP=0x0000000000b858c2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b85763
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b85754
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000b856e7
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000b856d5
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000b85452
- (id)jsonRepresentation;	// IMP=0x0000000000b85340
- (id)dictionaryRepresentation;	// IMP=0x0000000000b84f9e
- (id)description;	// IMP=0x0000000000b84eef
- (id)entriesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000b84ec1
- (unsigned long long)entriesCount;	// IMP=0x0000000000b84ea4
- (void)addEntries:(id)arg1;	// IMP=0x0000000000b84e3a
- (void)clearEntries;	// IMP=0x0000000000b84e1d
@property(retain, nonatomic) NSMutableArray *entries;

@end

