//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_deviceHwIdentifier;	// 16 = 0x10
    NSString *_deviceOsVersion;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    _Bool _deviceDarkMode;	// 44 = 0x2c
    _Bool _isInternalInstall;	// 45 = 0x2d
    _Bool _isInternalTool;	// 46 = 0x2e
    struct {
        unsigned int has_deviceDarkMode:1;
        unsigned int has_isInternalInstall:1;
        unsigned int has_isInternalTool:1;
        unsigned int read_deviceHwIdentifier:1;
        unsigned int read_deviceOsVersion:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 48 = 0x30
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000145c1f7
- (void).cxx_destruct;	// IMP=0x000000000145ca90
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000145c9c3
- (unsigned long long)hash;	// IMP=0x000000000145c8fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000145c772
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000145c544
- (void)copyTo:(id)arg1;	// IMP=0x000000000145c418
- (void)writeTo:(id)arg1;	// IMP=0x000000000145c213
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000145c204
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000145c0eb
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000145c0d9
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000145bde2
- (id)jsonRepresentation;	// IMP=0x000000000145bdd3
- (id)dictionaryRepresentation;	// IMP=0x000000000145bb8f
- (id)description;	// IMP=0x000000000145bae0
@property(nonatomic) _Bool hasDeviceDarkMode;
@property(nonatomic) _Bool deviceDarkMode;
@property(nonatomic) _Bool hasIsInternalInstall;
@property(nonatomic) _Bool isInternalInstall;
@property(nonatomic) _Bool hasIsInternalTool;
@property(nonatomic) _Bool isInternalTool;
@property(retain, nonatomic) NSString *deviceHwIdentifier;
@property(readonly, nonatomic) _Bool hasDeviceHwIdentifier;
@property(retain, nonatomic) NSString *deviceOsVersion;
@property(readonly, nonatomic) _Bool hasDeviceOsVersion;
- (id)initWithData:(id)arg1;	// IMP=0x000000000145b0dd
- (id)init;	// IMP=0x000000000145b081

@end
