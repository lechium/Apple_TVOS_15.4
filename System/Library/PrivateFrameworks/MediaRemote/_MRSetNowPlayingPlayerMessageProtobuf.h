//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRNowPlayingPlayerPathProtobuf;

__attribute__((visibility("hidden")))
@interface _MRSetNowPlayingPlayerMessageProtobuf : PBCodable <NSCopying>
{
    _MRNowPlayingPlayerPathProtobuf *_playerPath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000d265
- (unsigned long long)hash;	// IMP=0x000000000000d22f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d195
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d11d
- (void)writeTo:(id)arg1;	// IMP=0x000000000000d0df
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000d0d2
- (id)dictionaryRepresentation;	// IMP=0x000000000000ce8e
- (id)description;	// IMP=0x000000000000cddf

@end

