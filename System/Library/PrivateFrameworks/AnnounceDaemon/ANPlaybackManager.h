//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AnnounceDaemon/ANTrackPlayerDelegate-Protocol.h>

@class ANTrackPlayer, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, NSUUID;
@protocol ANPlaybackManagerDataSource, ANPlaybackManagerDelegate, OS_dispatch_queue, OS_os_log;

@interface ANPlaybackManager : NSObject <ANTrackPlayerDelegate>
{
    NSUUID *_endpointID;	// 8 = 0x8
    id <ANPlaybackManagerDelegate> _delegate;	// 16 = 0x10
    id <ANPlaybackManagerDataSource> _dataSource;	// 24 = 0x18
    ANTrackPlayer *_audioPlayer;	// 32 = 0x20
    NSMutableDictionary *_playbackInfo;	// 40 = 0x28
    NSMutableOrderedSet *_announcementsToPlay;	// 48 = 0x30
    long long _lastAnnoucementIndex;	// 56 = 0x38
    unsigned long long _playbackOptions;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_playbackQueue;	// 72 = 0x48
    CDUnknownBlockType _playbackCompletionHandler;	// 80 = 0x50
    NSObject<OS_os_log> *_log;	// 88 = 0x58
}

+ (id)managerWithEndpointID:(id)arg1;	// IMP=0x0000000000029394
- (void).cxx_destruct;	// IMP=0x000000000002d76e
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(copy, nonatomic) CDUnknownBlockType playbackCompletionHandler; // @synthesize playbackCompletionHandler=_playbackCompletionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property(readonly, nonatomic) unsigned long long playbackOptions; // @synthesize playbackOptions=_playbackOptions;
@property(nonatomic) long long lastAnnoucementIndex; // @synthesize lastAnnoucementIndex=_lastAnnoucementIndex;
@property(retain, nonatomic) NSMutableOrderedSet *announcementsToPlay; // @synthesize announcementsToPlay=_announcementsToPlay;
@property(readonly, nonatomic) NSMutableDictionary *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) ANTrackPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak id <ANPlaybackManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ANPlaybackManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSUUID *endpointID; // @synthesize endpointID=_endpointID;
- (void)trackPlayer:(id)arg1 didFinishPlayingTrackType:(long long)arg2 announcementID:(id)arg3 error:(id)arg4;	// IMP=0x000000000002d003
- (void)trackPlayer:(id)arg1 didUpdatePlaybackState:(unsigned long long)arg2 announcementID:(id)arg3;	// IMP=0x000000000002ce64
- (void)_handlePlaybackEndedForPlayer:(id)arg1 withError:(id)arg2;	// IMP=0x000000000002cc1b
- (void)_stopAudioPlayer;	// IMP=0x000000000002cbde
- (_Bool)_startPlayingAnnouncements;	// IMP=0x000000000002c4a1
- (id)_createTrackPlayerWithAnnouncement:(id)arg1 options:(unsigned long long)arg2 anchorPoint:(unsigned long long *)arg3;	// IMP=0x000000000002bb97
- (id)_nextAnnouncementToPlay;	// IMP=0x000000000002b3d6
- (id)_announcementsForPlaybackOptions:(unsigned long long)arg1 fromAnnouncements:(id)arg2;	// IMP=0x000000000002b36b
- (_Bool)_playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b1a1
- (_Bool)_playAnnouncements:(id)arg1 announceIDToStart:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002ac46
- (void)_previousAnnouncementWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002aa3f
- (void)_nextAnnouncementWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a70d
- (void)_stopPlayingAnnouncementsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a5fb
- (void)_updatePlaybackInfoForAnnouncementID:(id)arg1 options:(unsigned long long)arg2 player:(id)arg3;	// IMP=0x0000000000029c16
@property(readonly) unsigned long long playbackItemCount;
@property(readonly) unsigned long long playbackState;
@property(readonly) NSDictionary *lastPlayedAnnouncementInfo;
- (void)updatePlaybackForAnnouncementID:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000029909
- (void)performPlaybackCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000293e1
- (id)initWithEndpointID:(id)arg1;	// IMP=0x00000000000292c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

