//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRNowPlayingInfoProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueCapabilitiesProtobuf, _MRPlaybackQueueProtobuf, _MRPlaybackQueueRequestProtobuf, _MRSupportedCommandsProtobuf;

__attribute__((visibility("hidden")))
@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying>
{
    double _playbackStateTimestamp;	// 8 = 0x8
    NSString *_displayID;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    _MRNowPlayingInfoProtobuf *_nowPlayingInfo;	// 32 = 0x20
    _MRPlaybackQueueProtobuf *_playbackQueue;	// 40 = 0x28
    _MRPlaybackQueueCapabilitiesProtobuf *_playbackQueueCapabilities;	// 48 = 0x30
    int _playbackState;	// 56 = 0x38
    _MRNowPlayingPlayerPathProtobuf *_playerPath;	// 64 = 0x40
    _MRPlaybackQueueRequestProtobuf *_request;	// 72 = 0x48
    _MRSupportedCommandsProtobuf *_supportedCommands;	// 80 = 0x50
    struct {
        unsigned int playbackStateTimestamp:1;
        unsigned int playbackState:1;
    } _has;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000017663
- (unsigned long long)hash;	// IMP=0x0000000000017365
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000170f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016f28
- (void)writeTo:(id)arg1;	// IMP=0x0000000000016d19
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000016d0c
- (id)dictionaryRepresentation;	// IMP=0x00000000000164e8
- (id)description;	// IMP=0x0000000000016439

@end

