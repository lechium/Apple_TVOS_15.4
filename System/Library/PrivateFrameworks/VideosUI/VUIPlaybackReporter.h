//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface VUIPlaybackReporter : NSObject
{
    _Bool _enforceSinglePlaybackSession;	// 8 = 0x8
    NSMutableArray *_sessions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b188
@property(retain, nonatomic) NSMutableArray *sessions; // @synthesize sessions=_sessions;
@property(readonly, nonatomic) _Bool enforceSinglePlaybackSession; // @synthesize enforceSinglePlaybackSession=_enforceSinglePlaybackSession;
- (id)_createSessionForPlayer:(id)arg1;	// IMP=0x000000000002b0a4
- (void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3;	// IMP=0x000000000002afe5
- (_Bool)_isTransitionValidForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3;	// IMP=0x000000000002af3b
- (void)_handlePlaybackChangeForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3 reason:(id)arg4;	// IMP=0x000000000002aa0a
- (void)_playerCurrentMediaItemWillChange:(id)arg1;	// IMP=0x000000000002a86b
- (void)_playerStateWillChange:(id)arg1;	// IMP=0x000000000002a732
- (void)_beginSession:(id)arg1;	// IMP=0x000000000002a6a7
- (void)_endSession:(id)arg1;	// IMP=0x000000000002a61c
- (void)_endSessions:(id)arg1;	// IMP=0x000000000002a5a3
- (id)_sessionForPlayer:(id)arg1;	// IMP=0x000000000002a402
- (void)_removeObservers;	// IMP=0x000000000002a3af
- (void)_registerObservers;	// IMP=0x000000000002a326
- (void)_logWithFormat:(id)arg1;	// IMP=0x000000000002a199
- (void)dealloc;	// IMP=0x000000000002a15b
- (id)init;	// IMP=0x000000000002a0f1

@end

