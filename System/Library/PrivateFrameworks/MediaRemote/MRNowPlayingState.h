//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class MRPlaybackQueue, MRPlaybackQueueRequest, MRPlayerPath, NSArray, NSData, NSDictionary, NSString, _MRSetStateMessageProtobuf;

@interface MRNowPlayingState : NSObject <NSCopying>
{
    _Bool _hasPlaybackState;	// 8 = 0x8
    _Bool _hasPlaybackStateTimestamp;	// 9 = 0x9
    unsigned int _playbackState;	// 12 = 0xc
    NSArray *_supportedCommands;	// 16 = 0x10
    MRPlaybackQueue *_playbackQueue;	// 24 = 0x18
    NSString *_displayID;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
    MRPlayerPath *_playerPath;	// 48 = 0x30
    MRPlaybackQueueRequest *_request;	// 56 = 0x38
    double _playbackStateTimestamp;	// 64 = 0x40
    unsigned long long _playbackQueueCapabilities;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000925c4
@property(nonatomic) unsigned long long playbackQueueCapabilities; // @synthesize playbackQueueCapabilities=_playbackQueueCapabilities;
@property(nonatomic) double playbackStateTimestamp; // @synthesize playbackStateTimestamp=_playbackStateTimestamp;
@property(nonatomic) _Bool hasPlaybackStateTimestamp; // @synthesize hasPlaybackStateTimestamp=_hasPlaybackStateTimestamp;
@property(nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) _Bool hasPlaybackState; // @synthesize hasPlaybackState=_hasPlaybackState;
@property(copy, nonatomic) MRPlaybackQueueRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *displayID; // @synthesize displayID=_displayID;
@property(copy, nonatomic) MRPlaybackQueue *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property(copy, nonatomic) NSArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000092192
- (id)description;	// IMP=0x0000000000092107
@property(copy, nonatomic) NSDictionary *nowPlayingInfo;
- (id)dictionaryRepresentation;	// IMP=0x0000000000091ce8
- (id)copyWithoutArtwork;	// IMP=0x0000000000091ab5
@property(readonly, nonatomic) _Bool containsArtwork;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRSetStateMessageProtobuf *protobuf;
- (id)initWithData:(id)arg1;	// IMP=0x000000000009150f
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000091249
- (id)initWithPlayerPath:(id)arg1;	// IMP=0x00000000000911d6

@end

