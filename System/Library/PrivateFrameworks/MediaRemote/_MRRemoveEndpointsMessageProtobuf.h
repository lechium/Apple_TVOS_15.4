//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MRRemoveEndpointsMessageProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_endpointUIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001de7be
- (unsigned long long)hash;	// IMP=0x00000000001de76e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001de6d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001de537
- (void)writeTo:(id)arg1;	// IMP=0x00000000001de407
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001de3fa
- (id)dictionaryRepresentation;	// IMP=0x00000000001de224
- (id)description;	// IMP=0x00000000001de175

@end
