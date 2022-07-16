//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONonTiledInfo;

@interface GEONonTiledMaterialMap : PBCodable <NSCopying>
{
    GEONonTiledInfo *_info;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c14adb
- (void).cxx_destruct;	// IMP=0x0000000000c14d6c
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c14ce6
- (unsigned long long)hash;	// IMP=0x0000000000c14cab
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c14be8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c14b70
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c14b1b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c14af7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c14ae8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c14a7b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c14a69
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c14960
- (id)jsonRepresentation;	// IMP=0x0000000000c14951
- (id)dictionaryRepresentation;	// IMP=0x0000000000c14875
- (id)description;	// IMP=0x0000000000c147c6
@property(retain, nonatomic) GEONonTiledInfo *info;
@property(readonly, nonatomic) _Bool hasInfo;

@end

