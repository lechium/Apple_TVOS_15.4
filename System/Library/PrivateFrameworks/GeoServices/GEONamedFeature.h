//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEONamedFeature : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    double _value;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e89cbe
- (void).cxx_destruct;	// IMP=0x0000000000e8a2fe
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000e8a2b8
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e8a23c
- (unsigned long long)hash;	// IMP=0x0000000000e8a103
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e8a02a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e89f8d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e89f1f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e89ea3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e89e94
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e899f0
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e899e3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e89893
- (id)jsonRepresentation;	// IMP=0x0000000000e89781
- (id)dictionaryRepresentation;	// IMP=0x0000000000e89579
- (id)description;	// IMP=0x0000000000e894ca
@property(nonatomic) double value;
@property(retain, nonatomic) NSString *name;

@end
