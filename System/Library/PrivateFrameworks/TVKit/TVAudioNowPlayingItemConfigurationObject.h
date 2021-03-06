//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVImageProxy;

@interface TVAudioNowPlayingItemConfigurationObject : NSObject
{
    _Bool _shuffleEnabled;	// 8 = 0x8
    _Bool _repeating;	// 9 = 0x9
    _Bool _streaming;	// 10 = 0xa
    _Bool _explicit;	// 11 = 0xb
    NSString *_trackTitle;	// 16 = 0x10
    NSString *_artistName;	// 24 = 0x18
    NSString *_albumTitle;	// 32 = 0x20
    NSString *_radioStationName;	// 40 = 0x28
    NSString *_artworkIdentifier;	// 48 = 0x30
    TVImageProxy *_artworkProxy;	// 56 = 0x38
    unsigned long long _trackNumber;	// 64 = 0x40
    unsigned long long _playlistTrackCount;	// 72 = 0x48
    double _duration;	// 80 = 0x50
}

+ (void)load;	// IMP=0x0000000000047201
- (void).cxx_destruct;	// IMP=0x0000000000047351
@property(nonatomic) _Bool explicit; // @synthesize explicit=_explicit;
@property(nonatomic) _Bool streaming; // @synthesize streaming=_streaming;
@property(nonatomic) _Bool repeating; // @synthesize repeating=_repeating;
@property(nonatomic) _Bool shuffleEnabled; // @synthesize shuffleEnabled=_shuffleEnabled;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long playlistTrackCount; // @synthesize playlistTrackCount=_playlistTrackCount;
@property(nonatomic) unsigned long long trackNumber; // @synthesize trackNumber=_trackNumber;
@property(retain, nonatomic) TVImageProxy *artworkProxy; // @synthesize artworkProxy=_artworkProxy;
@property(copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(copy, nonatomic) NSString *radioStationName; // @synthesize radioStationName=_radioStationName;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;

@end

