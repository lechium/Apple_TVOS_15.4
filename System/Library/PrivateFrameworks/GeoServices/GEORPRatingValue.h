//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString;

@interface GEORPRatingValue : PBCodable <NSCopying>
{
    GEOLocalizedString *_categoryName;	// 8 = 0x8
    int _score;	// 16 = 0x10
    CDStruct_f58e6c32 _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000007865f0
- (void).cxx_destruct;	// IMP=0x000000000078696a
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000007868de
- (unsigned long long)hash;	// IMP=0x0000000000786879
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000078677d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007866e5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000786670
- (void)writeTo:(id)arg1;	// IMP=0x000000000078660c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000007865fd
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000786590
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000078657e
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000007863f9
- (id)jsonRepresentation;	// IMP=0x00000000007863ea
- (id)dictionaryRepresentation;	// IMP=0x0000000000786295
- (id)description;	// IMP=0x00000000007861e6
@property(nonatomic) _Bool hasScore;
@property(nonatomic) int score;
@property(retain, nonatomic) GEOLocalizedString *categoryName;
@property(readonly, nonatomic) _Bool hasCategoryName;

@end
