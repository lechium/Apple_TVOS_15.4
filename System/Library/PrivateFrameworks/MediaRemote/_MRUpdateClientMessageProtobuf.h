//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRNowPlayingClientProtobuf;

__attribute__((visibility("hidden")))
@interface _MRUpdateClientMessageProtobuf : PBCodable <NSCopying>
{
    _MRNowPlayingClientProtobuf *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000199493
- (unsigned long long)hash;	// IMP=0x000000000019945d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001993c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019934b
- (void)writeTo:(id)arg1;	// IMP=0x000000000019930d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000199300
- (id)dictionaryRepresentation;	// IMP=0x00000000001990bc
- (id)description;	// IMP=0x000000000019900d

@end

