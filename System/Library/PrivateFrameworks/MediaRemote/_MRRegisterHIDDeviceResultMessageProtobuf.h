//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRRegisterHIDDeviceResultMessageProtobuf : PBCodable <NSCopying>
{
    unsigned int _deviceIdentifier;	// 8 = 0x8
    unsigned int _errorCode;	// 12 = 0xc
    struct {
        unsigned int deviceIdentifier:1;
        unsigned int errorCode:1;
    } _has;	// 16 = 0x10
}

- (unsigned long long)hash;	// IMP=0x000000000014aed6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014ae23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014ada6
- (void)writeTo:(id)arg1;	// IMP=0x000000000014ad35
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014ad28
- (id)dictionaryRepresentation;	// IMP=0x000000000014a9ac
- (id)description;	// IMP=0x000000000014a8fd

@end

