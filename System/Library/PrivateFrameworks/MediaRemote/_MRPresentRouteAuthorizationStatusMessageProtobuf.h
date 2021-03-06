//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRAVOutputDeviceDescriptorProtobuf;

__attribute__((visibility("hidden")))
@interface _MRPresentRouteAuthorizationStatusMessageProtobuf : PBCodable <NSCopying>
{
    _MRAVOutputDeviceDescriptorProtobuf *_route;	// 8 = 0x8
    int _status;	// 16 = 0x10
    struct {
        unsigned int status:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000179abf
- (unsigned long long)hash;	// IMP=0x0000000000179a50
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017998f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001798f7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000179876
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000179869
- (id)dictionaryRepresentation;	// IMP=0x0000000000179481
- (id)description;	// IMP=0x00000000001793d2

@end

