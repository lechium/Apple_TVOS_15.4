//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface SDAutoUnlockDeviceRegistrationRequest : PBRequest
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000014338d
- (unsigned long long)hash;	// IMP=0x0010000000143363
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001432d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000014326f
- (void)copyTo:(id)arg1;	// IMP=0x001000000014324b
- (void)writeTo:(id)arg1;	// IMP=0x0010000000143220
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000143213
- (id)dictionaryRepresentation;	// IMP=0x0010000000142f9a
- (id)description;	// IMP=0x0010000000142eeb
@property(nonatomic) _Bool hasVersion;

@end

