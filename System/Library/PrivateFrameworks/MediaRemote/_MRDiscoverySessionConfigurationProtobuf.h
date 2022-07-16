//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MRDiscoverySessionConfigurationProtobuf : PBCodable <NSCopying>
{
    int _features;	// 8 = 0x8
    NSString *_outputDeviceUID;	// 16 = 0x10
    NSString *_routingContextUID;	// 24 = 0x18
    unsigned int _targetSessionID;	// 32 = 0x20
    _Bool _alwaysAllowUpdates;	// 36 = 0x24
    _Bool _enableThrottling;	// 37 = 0x25
    _Bool _populatesExternalDevice;	// 38 = 0x26
    struct {
        unsigned int features:1;
        unsigned int targetSessionID:1;
        unsigned int alwaysAllowUpdates:1;
        unsigned int enableThrottling:1;
        unsigned int populatesExternalDevice:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001a1a24
- (unsigned long long)hash;	// IMP=0x00000000001a1876
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a169e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a1570
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a1431
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a1424
- (id)dictionaryRepresentation;	// IMP=0x00000000001a0cbc
- (id)description;	// IMP=0x00000000001a0c0d

@end

