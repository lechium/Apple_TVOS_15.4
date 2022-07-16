//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, NSString, _MRContentItemProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

__attribute__((visibility("hidden")))
@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying>
{
    double _playbackPosition;	// 8 = 0x8
    double _playbackRate;	// 16 = 0x10
    _MRContentItemProtobuf *_contentItem;	// 24 = 0x18
    unsigned int _destinationTypes;	// 32 = 0x20
    int _endpointOptions;	// 36 = 0x24
    NSMutableArray *_events;	// 40 = 0x28
    unsigned int _originatorType;	// 48 = 0x30
    _MRPlaybackSessionRequestProtobuf *_playbackSessionRequest;	// 56 = 0x38
    int _playbackState;	// 64 = 0x40
    int _playerOptions;	// 68 = 0x44
    _MRNowPlayingPlayerPathProtobuf *_playerPath;	// 72 = 0x48
    NSString *_requestID;	// 80 = 0x50
    _Bool _allowFadeTransition;	// 88 = 0x58
    struct {
        unsigned int playbackPosition:1;
        unsigned int playbackRate:1;
        unsigned int destinationTypes:1;
        unsigned int endpointOptions:1;
        unsigned int originatorType:1;
        unsigned int playbackState:1;
        unsigned int playerOptions:1;
        unsigned int allowFadeTransition:1;
    } _has;	// 92 = 0x5c
}

- (void).cxx_destruct;	// IMP=0x00000000000e7ff2
- (unsigned long long)hash;	// IMP=0x00000000000e7b49
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e785e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e74cd
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e71bd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e71b0
- (id)dictionaryRepresentation;	// IMP=0x00000000000e633b
- (id)description;	// IMP=0x00000000000e628c

@end

