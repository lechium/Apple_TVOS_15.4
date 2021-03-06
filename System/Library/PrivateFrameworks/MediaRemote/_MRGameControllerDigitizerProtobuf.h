//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRGameControllerDigitizerProtobuf : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    double _x;	// 16 = 0x10
    double _y;	// 24 = 0x18
    _Bool _touchDown;	// 32 = 0x20
    struct {
        unsigned int timestamp:1;
        unsigned int x:1;
        unsigned int y:1;
        unsigned int touchDown:1;
    } _has;	// 36 = 0x24
}

- (unsigned long long)hash;	// IMP=0x00000000000f9e7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f9d67
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f9cae
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f9bf9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f9bec
- (id)dictionaryRepresentation;	// IMP=0x00000000000f96e4
- (id)description;	// IMP=0x00000000000f9635

@end

