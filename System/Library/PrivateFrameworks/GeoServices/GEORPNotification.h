//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPNotification : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_localizedText;	// 16 = 0x10
    NSString *_localizedTitle;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_localizedText:1;
        unsigned int read_localizedTitle:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e0c829
- (void).cxx_destruct;	// IMP=0x0000000000e0cfd2
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e0cf5d
- (unsigned long long)hash;	// IMP=0x0000000000e0cf01
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e0ce10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e0cc68
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e0cb9a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e0c9de
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e0c9cf
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e0c576
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e0c564
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e0c3e0
- (id)jsonRepresentation;	// IMP=0x0000000000e0c3d1
- (id)dictionaryRepresentation;	// IMP=0x0000000000e0c2c8
- (id)description;	// IMP=0x0000000000e0c219
@property(retain, nonatomic) NSString *localizedText;
@property(readonly, nonatomic) _Bool hasLocalizedText;
@property(retain, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) _Bool hasLocalizedTitle;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e0bb79
- (id)init;	// IMP=0x0000000000e0bb1d

@end
