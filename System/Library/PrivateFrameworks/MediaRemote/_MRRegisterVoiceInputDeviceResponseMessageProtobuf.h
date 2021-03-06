//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRRegisterVoiceInputDeviceResponseMessageProtobuf : PBCodable <NSCopying>
{
    unsigned int _deviceID;	// 8 = 0x8
    unsigned int _errorCode;	// 12 = 0xc
    struct {
        unsigned int deviceID:1;
        unsigned int errorCode:1;
    } _has;	// 16 = 0x10
}

- (unsigned long long)hash;	// IMP=0x000000000023ada5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023acf2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023ac75
- (void)writeTo:(id)arg1;	// IMP=0x000000000023ac04
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023abf7
- (id)dictionaryRepresentation;	// IMP=0x000000000023a87b
- (id)description;	// IMP=0x000000000023a7cc

@end

