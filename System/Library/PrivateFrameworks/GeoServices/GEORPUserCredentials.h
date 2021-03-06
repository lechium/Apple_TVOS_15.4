//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEORPUserCredentials : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_icloudUserMapsAuthToken;	// 16 = 0x10
    NSString *_icloudUserPersonId;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_icloudUserMapsAuthToken:1;
        unsigned int read_icloudUserPersonId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e4e201
+ (id)_credentialsForPrimaryICloudAccount;	// IMP=0x00000000003eefd8
- (void).cxx_destruct;	// IMP=0x0000000000e4e7ec
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e4e777
- (unsigned long long)hash;	// IMP=0x0000000000e4e71b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e4e62a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e4e482
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e4e3b4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e4e21d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e4e20e
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e4e0f5
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e4e0e3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e4df5f
- (id)jsonRepresentation;	// IMP=0x0000000000e4df50
- (id)dictionaryRepresentation;	// IMP=0x0000000000e4de47
- (id)description;	// IMP=0x0000000000e4dd98
@property(retain, nonatomic) NSString *icloudUserMapsAuthToken;
@property(readonly, nonatomic) _Bool hasIcloudUserMapsAuthToken;
@property(retain, nonatomic) NSString *icloudUserPersonId;
@property(readonly, nonatomic) _Bool hasIcloudUserPersonId;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e4d6f8
- (id)init;	// IMP=0x0000000000e4d69c

@end

