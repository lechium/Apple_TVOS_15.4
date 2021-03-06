//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEONameInfoList : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_nameInfos;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010ad1cc
+ (Class)nameInfoType;	// IMP=0x00000000010ac6a4
- (void).cxx_destruct;	// IMP=0x00000000010adbb2
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000010ada46
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010ad8c5
- (unsigned long long)hash;	// IMP=0x00000000010ad88a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010ad7c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010ad5e1
- (void)copyTo:(id)arg1;	// IMP=0x00000000010ad50e
- (void)writeTo:(id)arg1;	// IMP=0x00000000010ad3af
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010ad3a0
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010acead
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010ace9b
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010acc18
- (id)jsonRepresentation;	// IMP=0x00000000010acb06
- (id)dictionaryRepresentation;	// IMP=0x00000000010ac764
- (id)description;	// IMP=0x00000000010ac6b5
- (id)nameInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010ac687
- (unsigned long long)nameInfosCount;	// IMP=0x00000000010ac66a
- (void)addNameInfo:(id)arg1;	// IMP=0x00000000010ac600
- (void)clearNameInfos;	// IMP=0x00000000010ac5e3
@property(retain, nonatomic) NSMutableArray *nameInfos;

@end

