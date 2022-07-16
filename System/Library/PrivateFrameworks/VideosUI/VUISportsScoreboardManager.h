//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface VUISportsScoreboardManager : NSObject
{
    _Bool _updateInProgress;	// 8 = 0x8
    NSMutableDictionary *_sportsEventsById;	// 16 = 0x10
    NSTimer *_scoreboardUpdateTimer;	// 24 = 0x18
    long long _scoreboardUpdateInterval;	// 32 = 0x20
}

+ (void)unregisterDelegate:(id)arg1 canonicalId:(id)arg2;	// IMP=0x00000000001b7f9c
+ (void)registerDelegate:(id)arg1 canonicalId:(id)arg2;	// IMP=0x00000000001b7dec
+ (id)sharedInstance;	// IMP=0x00000000001b7abd
- (void).cxx_destruct;	// IMP=0x00000000001b939f
@property(nonatomic) _Bool updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property(nonatomic) long long scoreboardUpdateInterval; // @synthesize scoreboardUpdateInterval=_scoreboardUpdateInterval;
@property(retain, nonatomic) NSTimer *scoreboardUpdateTimer; // @synthesize scoreboardUpdateTimer=_scoreboardUpdateTimer;
@property(retain, nonatomic) NSMutableDictionary *sportsEventsById; // @synthesize sportsEventsById=_sportsEventsById;
- (void)_invalidateTimer;	// IMP=0x00000000001b92bb
- (void)_resetTimer;	// IMP=0x00000000001b90ca
- (void)_updateTimer;	// IMP=0x00000000001b9062
- (void)_registerToPlaybackNotifications;	// IMP=0x00000000001b8ffb
- (void)_registerToApplicationNotifications;	// IMP=0x00000000001b8f41
- (void)_playbackUIBeingShownDidChange:(id)arg1;	// IMP=0x00000000001b8d89
- (void)_updateScores:(id)arg1;	// IMP=0x00000000001b8a23
- (id)_prepareJSContextDictionaryArgument;	// IMP=0x00000000001b871c
- (void)_getScoreboardUpdates;	// IMP=0x00000000001b80d2
- (id)init;	// IMP=0x00000000001b7b12

@end

