//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, _MRDiscoverySessionConfigurationProtobuf;

__attribute__((visibility("hidden")))
@interface _MRDiscoveryUpdateEndpointsProtobufMessage : PBCodable <NSCopying>
{
    _MRDiscoverySessionConfigurationProtobuf *_configuration;	// 8 = 0x8
    NSMutableArray *_endpoints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001a24c8
- (unsigned long long)hash;	// IMP=0x00000000001a242f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a2367
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a218a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a2010
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a2003
- (id)dictionaryRepresentation;	// IMP=0x00000000001a1b76
- (id)description;	// IMP=0x00000000001a1ac7

@end

