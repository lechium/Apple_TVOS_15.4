//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface TFGetImageUploadUrlsResponse : PBCodable
{
    unsigned long long _expiresTimeMillis;	// 8 = 0x8
    NSMutableArray *_uploadUrls;	// 16 = 0x10
    struct {
        unsigned int expiresTimeMillis:1;
    } _has;	// 24 = 0x18
}

+ (Class)uploadUrlsType;	// IMP=0x002000000003b728
- (void).cxx_destruct;	// IMP=0x002000000003c21a
@property(nonatomic) unsigned long long expiresTimeMillis; // @synthesize expiresTimeMillis=_expiresTimeMillis;
@property(retain, nonatomic) NSMutableArray *uploadUrls; // @synthesize uploadUrls=_uploadUrls;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003c06d
- (unsigned long long)hash;	// IMP=0x001000000003c01d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003bf5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003bd68
- (void)copyTo:(id)arg1;	// IMP=0x001000000003bc81
- (void)writeTo:(id)arg1;	// IMP=0x001000000003bb19
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003b8ee
- (id)dictionaryRepresentation;	// IMP=0x001000000003b82e
- (id)description;	// IMP=0x001000000003b77f
@property(nonatomic) _Bool hasExpiresTimeMillis;
- (id)uploadUrlsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000003b70b
- (unsigned long long)uploadUrlsCount;	// IMP=0x001000000003b6ee
- (void)addUploadUrls:(id)arg1;	// IMP=0x001000000003b684
- (void)clearUploadUrls;	// IMP=0x001000000003b667

@end

