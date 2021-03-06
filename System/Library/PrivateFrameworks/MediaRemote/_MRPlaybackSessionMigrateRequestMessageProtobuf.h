//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionMigrateRequestProtobuf, _MRPlaybackSessionProtobuf;

__attribute__((visibility("hidden")))
@interface _MRPlaybackSessionMigrateRequestMessageProtobuf : PBCodable <NSCopying>
{
    _MRPlaybackSessionProtobuf *_playbackSession;	// 8 = 0x8
    _MRNowPlayingPlayerPathProtobuf *_playerPath;	// 16 = 0x10
    _MRPlaybackSessionMigrateRequestProtobuf *_request;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000149c1b
- (unsigned long long)hash;	// IMP=0x0000000000149b63
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000149a6b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001499a7
- (void)writeTo:(id)arg1;	// IMP=0x00000000001498df
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001498d2
- (id)dictionaryRepresentation;	// IMP=0x000000000014955b
- (id)description;	// IMP=0x00000000001494ac

@end

