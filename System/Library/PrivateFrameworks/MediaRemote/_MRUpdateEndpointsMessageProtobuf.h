//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MRUpdateEndpointsMessageProtobuf : PBCodable <NSCopying>
{
    int _endpointFeatures;	// 8 = 0x8
    NSMutableArray *_endpoints;	// 16 = 0x10
    struct {
        unsigned int endpointFeatures:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000023d4b0
- (unsigned long long)hash;	// IMP=0x000000000023d42a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023d369
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023d19d
- (void)writeTo:(id)arg1;	// IMP=0x000000000023d033
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023d026
- (id)dictionaryRepresentation;	// IMP=0x000000000023cac4
- (id)description;	// IMP=0x000000000023ca15

@end

