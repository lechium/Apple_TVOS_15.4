//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDLabelLocalizations : PBCodable <NSCopying>
{
    NSMutableArray *_localizedStrings;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010cf341
+ (Class)localizedStringType;	// IMP=0x00000000010cecdb
- (void).cxx_destruct;	// IMP=0x00000000010cf98d
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010cf821
- (unsigned long long)hash;	// IMP=0x00000000010cf7e6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010cf723
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010cf560
- (void)copyTo:(id)arg1;	// IMP=0x00000000010cf48d
- (void)writeTo:(id)arg1;	// IMP=0x00000000010cf35d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010cf34e
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010cf2e1
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010cf2cf
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010cf03a
- (id)jsonRepresentation;	// IMP=0x00000000010cf02b
- (id)dictionaryRepresentation;	// IMP=0x00000000010ced9b
- (id)description;	// IMP=0x00000000010cecec
- (id)localizedStringAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010cecbe
- (unsigned long long)localizedStringsCount;	// IMP=0x00000000010ceca1
- (void)addLocalizedString:(id)arg1;	// IMP=0x00000000010cec37
- (void)clearLocalizedStrings;	// IMP=0x00000000010cec1a
@property(retain, nonatomic) NSMutableArray *localizedStrings;
- (id)bestLocalizedName;	// IMP=0x00000000009ced62

@end

