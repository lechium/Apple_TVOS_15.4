//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerProtobuf, _MROriginProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying>
{
    _MRNowPlayingClientProtobuf *_client;	// 8 = 0x8
    _MROriginProtobuf *_origin;	// 16 = 0x10
    _MRNowPlayingPlayerProtobuf *_player;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000025af5e
@property(retain, nonatomic) _MRNowPlayingPlayerProtobuf *player; // @synthesize player=_player;
@property(retain, nonatomic) _MRNowPlayingClientProtobuf *client; // @synthesize client=_client;
@property(retain, nonatomic) _MROriginProtobuf *origin; // @synthesize origin=_origin;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000025ae2b
- (unsigned long long)hash;	// IMP=0x000000000025adbe
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025acc6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025ac02
- (void)copyTo:(id)arg1;	// IMP=0x000000000025ab7f
- (void)writeTo:(id)arg1;	// IMP=0x000000000025ab05
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000025aaf8
- (id)dictionaryRepresentation;	// IMP=0x000000000025a781
- (id)description;	// IMP=0x000000000025a6d2
@property(readonly, nonatomic) _Bool hasPlayer;
@property(readonly, nonatomic) _Bool hasClient;
@property(readonly, nonatomic) _Bool hasOrigin;

@end

