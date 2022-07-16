//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompleteEntry, PBUnknownFields;

@interface GEOStorageCompletion : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDAutocompleteEntry *_autocompleteEntry;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000990c73
+ (id)storageForCompletionItem:(id)arg1;	// IMP=0x000000000103ce13
- (void).cxx_destruct;	// IMP=0x00000000009911ad
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000991147
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009910ac
- (unsigned long long)hash;	// IMP=0x0000000000991071
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000990fae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000990f23
- (void)copyTo:(id)arg1;	// IMP=0x0000000000990ece
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000990eb1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000990e56
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000990e47
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009909b2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009909a0
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000990897
- (id)jsonRepresentation;	// IMP=0x0000000000990785
- (id)dictionaryRepresentation;	// IMP=0x000000000099058d
- (id)description;	// IMP=0x00000000009904de
@property(retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry;
@property(readonly, nonatomic) _Bool hasAutocompleteEntry;
- (void)applyToUserSearchInput:(id)arg1;	// IMP=0x000000000103ceca

@end
