//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOMapKitCount : PBCodable <NSCopying>
{
    unsigned int _appCount;	// 8 = 0x8
    int _appType;	// 12 = 0xc
    int _countType;	// 16 = 0x10
    unsigned int _useCount;	// 20 = 0x14
    struct {
        unsigned int has_appCount:1;
        unsigned int has_appType:1;
        unsigned int has_countType:1;
        unsigned int has_useCount:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014b4363
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014b474c
- (unsigned long long)hash;	// IMP=0x00000000014b46b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014b4585
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014b44d6
- (void)copyTo:(id)arg1;	// IMP=0x00000000014b442e
- (void)writeTo:(id)arg1;	// IMP=0x00000000014b437f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014b4370
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014b4303
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014b42f1
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014b3f13
- (id)jsonRepresentation;	// IMP=0x00000000014b3f04
- (id)dictionaryRepresentation;	// IMP=0x00000000014b3c4a
- (id)description;	// IMP=0x00000000014b3b9b
@property(nonatomic) _Bool hasAppCount;
@property(nonatomic) unsigned int appCount;
@property(nonatomic) _Bool hasUseCount;
@property(nonatomic) unsigned int useCount;
- (int)StringAsAppType:(id)arg1;	// IMP=0x00000000014b3a20
- (id)appTypeAsString:(int)arg1;	// IMP=0x00000000014b3993
@property(nonatomic) _Bool hasAppType;
@property(nonatomic) int appType;
- (int)StringAsCountType:(id)arg1;	// IMP=0x00000000014b387c
- (id)countTypeAsString:(int)arg1;	// IMP=0x00000000014b37fd
@property(nonatomic) _Bool hasCountType;
@property(nonatomic) int countType;

@end

