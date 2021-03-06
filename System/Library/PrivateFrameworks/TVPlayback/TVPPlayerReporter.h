//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RTCReporting, TVPPlayer;

__attribute__((visibility("hidden")))
@interface TVPPlayerReporter : NSObject
{
    TVPPlayer *_player;	// 8 = 0x8
    RTCReporting *_rtcAgent;	// 16 = 0x10
    id _reportingHierarchyToken;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00000000000e8c2a
- (void).cxx_destruct;	// IMP=0x00000000000e9fc4
@property(retain, nonatomic) id reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(retain) RTCReporting *rtcAgent; // @synthesize rtcAgent=_rtcAgent;
@property(nonatomic) __weak TVPPlayer *player; // @synthesize player=_player;
- (id)_rtcAgentUserInfo;	// IMP=0x00000000000e9ca4
- (void)_sendPlaybackStartupEventsIfNecessary;	// IMP=0x00000000000e9891
- (void)_sendRTCEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4;	// IMP=0x00000000000e95e7
- (void)_playerCurrentMediaItemDidChange:(id)arg1;	// IMP=0x00000000000e9563
- (void)_playerCurrentMediaItemWillChange:(id)arg1;	// IMP=0x00000000000e94ed
- (void)_tearDownRTCAgent;	// IMP=0x00000000000e94d9
- (void)_setupRTCAgent;	// IMP=0x00000000000e9035
- (void)_playerStateWillChange:(id)arg1;	// IMP=0x00000000000e8e96
- (void)sendPlaybackStartupMetricsManually;	// IMP=0x00000000000e8df6
- (void)dealloc;	// IMP=0x00000000000e8d81
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000000000e8c7a

@end

