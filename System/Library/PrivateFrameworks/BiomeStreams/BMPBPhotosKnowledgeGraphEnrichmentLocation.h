//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSData, NSString;

@interface BMPBPhotosKnowledgeGraphEnrichmentLocation : PBCodable <NSCopying>
{
    NSString *_city;	// 8 = 0x8
    NSString *_country;	// 16 = 0x10
    NSData *_encodedLocation;	// 24 = 0x18
    NSString *_state;	// 32 = 0x20
    NSString *_street;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006d2b3
@property(retain, nonatomic) NSData *encodedLocation; // @synthesize encodedLocation=_encodedLocation;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *street; // @synthesize street=_street;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006d137
- (unsigned long long)hash;	// IMP=0x000000000006d094
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006cf34
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ce1c
- (void)copyTo:(id)arg1;	// IMP=0x000000000006cd59
- (void)writeTo:(id)arg1;	// IMP=0x000000000006cca5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006cc98
- (id)dictionaryRepresentation;	// IMP=0x000000000006c99c
- (id)description;	// IMP=0x000000000006c8ed
@property(readonly, nonatomic) _Bool hasEncodedLocation;
@property(readonly, nonatomic) _Bool hasCountry;
@property(readonly, nonatomic) _Bool hasState;
@property(readonly, nonatomic) _Bool hasCity;
@property(readonly, nonatomic) _Bool hasStreet;

@end

