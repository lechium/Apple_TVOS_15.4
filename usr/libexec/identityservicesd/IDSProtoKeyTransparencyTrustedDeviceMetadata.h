//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface IDSProtoKeyTransparencyTrustedDeviceMetadata : PBCodable
{
    unsigned int _status;	// 8 = 0x8
    struct {
        unsigned int status:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000117b90
- (unsigned long long)hash;	// IMP=0x0010000000117b00
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000117990
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001178c0
- (void)copyTo:(id)arg1;	// IMP=0x0010000000117820
- (void)writeTo:(id)arg1;	// IMP=0x00100000001177a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000117740
- (id)dictionaryRepresentation;	// IMP=0x0010000000117000
- (id)description;	// IMP=0x0010000000116f30
@property(nonatomic) _Bool hasStatus;

@end

