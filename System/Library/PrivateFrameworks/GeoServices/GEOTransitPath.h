//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOTransitPath : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_legs;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003af823
+ (Class)legType;	// IMP=0x00000000003aed46
- (void).cxx_destruct;	// IMP=0x00000000003b0209
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003b009d
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003aff1c
- (unsigned long long)hash;	// IMP=0x00000000003afee1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003afe1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003afc38
- (void)copyTo:(id)arg1;	// IMP=0x00000000003afb65
- (void)writeTo:(id)arg1;	// IMP=0x00000000003afa06
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003af9f7
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003af54f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003af53d
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003af2ba
- (id)jsonRepresentation;	// IMP=0x00000000003af1a8
- (id)dictionaryRepresentation;	// IMP=0x00000000003aee06
- (id)description;	// IMP=0x00000000003aed57
- (id)legAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003aed29
- (unsigned long long)legsCount;	// IMP=0x00000000003aed0c
- (void)addLeg:(id)arg1;	// IMP=0x00000000003aeca2
- (void)clearLegs;	// IMP=0x00000000003aec85
@property(retain, nonatomic) NSMutableArray *legs;

@end

