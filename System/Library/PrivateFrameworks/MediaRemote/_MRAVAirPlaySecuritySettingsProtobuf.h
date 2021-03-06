//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying>
{
    NSString *_password;	// 8 = 0x8
    int _securityType;	// 16 = 0x10
    struct {
        unsigned int securityType:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000001453a8
- (unsigned long long)hash;	// IMP=0x0000000000145339
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000145278
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001451e0
- (void)writeTo:(id)arg1;	// IMP=0x000000000014515f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000145152
- (id)dictionaryRepresentation;	// IMP=0x0000000000144e28
- (id)description;	// IMP=0x0000000000144d79

@end

