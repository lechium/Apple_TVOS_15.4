//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOWiFiQualityNetworkSearchResult : PBCodable <NSCopying>
{
    NSMutableArray *_matches;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000009f1906
+ (Class)matchesType;	// IMP=0x00000000009f10a5
- (void).cxx_destruct;	// IMP=0x00000000009f225e
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009f20f2
- (unsigned long long)hash;	// IMP=0x00000000009f20b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009f1ff4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009f1e31
- (void)copyTo:(id)arg1;	// IMP=0x00000000009f1d5e
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000009f1c19
- (void)writeTo:(id)arg1;	// IMP=0x00000000009f1ae9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009f1ada
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009f1687
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009f1675
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009f13f2
- (id)jsonRepresentation;	// IMP=0x00000000009f13e3
- (id)dictionaryRepresentation;	// IMP=0x00000000009f1165
- (id)description;	// IMP=0x00000000009f10b6
- (id)matchesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009f1088
- (unsigned long long)matchesCount;	// IMP=0x00000000009f106b
- (void)addMatches:(id)arg1;	// IMP=0x00000000009f1001
- (void)clearMatches;	// IMP=0x00000000009f0fe4
@property(retain, nonatomic) NSMutableArray *matches;

@end

