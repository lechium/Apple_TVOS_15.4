//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary, NSString, NSTimer, TVPAudioOption, TVPChapter, TVPChapterCollection, TVPDateRange, TVPInterstitial, TVPPlaybackState, TVPPlaylist, TVPSubtitleOption, TVPTimeRange;
@protocol TVNPMetadataPlayerCommandDelegate, TVPASyncPlaybackDelegate, TVPMediaItem, TVPPlaybackDelegate;

@interface TVNPMetadataPlayer : NSObject
{
    NSDate *_lastUpdateTimestamp;	// 8 = 0x8
    double _lastElapsedTime;	// 16 = 0x10
    NSTimer *_elapsedTimeTimer;	// 24 = 0x18
    _Bool _muted;	// 32 = 0x20
    _Bool _interactive;	// 33 = 0x21
    _Bool _waitsAfterPreparingMediaItems;	// 34 = 0x22
    _Bool _currentMediaItemHasDates;	// 35 = 0x23
    _Bool _currentMediaItemInitialLoadingComplete;	// 36 = 0x24
    _Bool _currentMediaItemPreparedForLoading;	// 37 = 0x25
    _Bool _preventsSleepDuringVideoPlayback;	// 38 = 0x26
    _Bool _updatesMediaRemoteInfoAutomatically;	// 39 = 0x27
    _Bool _isLive;	// 40 = 0x28
    _Bool _limitReadAhead;	// 41 = 0x29
    _Bool _initiatedSkip;	// 42 = 0x2a
    _Bool _isScanningForward;	// 43 = 0x2b
    float _volume;	// 44 = 0x2c
    NSString *_name;	// 48 = 0x30
    double _rate;	// 56 = 0x38
    double _rateUsedForPlayback;	// 64 = 0x40
    TVPPlaylist *_playlist;	// 72 = 0x48
    TVPPlaybackState *_state;	// 80 = 0x50
    double _duration;	// 88 = 0x58
    long long _errorBehavior;	// 96 = 0x60
    NSDate *_playbackDate;	// 104 = 0x68
    NSArray *_chapterCollections;	// 112 = 0x70
    TVPChapter *_currentChapter;	// 120 = 0x78
    TVPTimeRange *_bufferedTimeRange;	// 128 = 0x80
    TVPDateRange *_seekableDateRange;	// 136 = 0x88
    TVPChapterCollection *_currentChapterCollection;	// 144 = 0x90
    long long _mediaItemEndAction;	// 152 = 0x98
    NSArray *_audioOptions;	// 160 = 0xa0
    TVPAudioOption *_selectedAudioOption;	// 168 = 0xa8
    NSArray *_subtitleOptions;	// 176 = 0xb0
    TVPSubtitleOption *_selectedSubtitleOption;	// 184 = 0xb8
    double _maximumBitRate;	// 192 = 0xc0
    id <TVPPlaybackDelegate> _delegate;	// 200 = 0xc8
    id <TVPASyncPlaybackDelegate> _asyncDelegate;	// 208 = 0xd0
    TVPTimeRange *_seekableTimeRange;	// 216 = 0xd8
    TVPInterstitial *_currentInterstitial;	// 224 = 0xe0
    double _forwardPlaybackEndTime;	// 232 = 0xe8
    double _reversePlaybackEndTime;	// 240 = 0xf0
    id <TVNPMetadataPlayerCommandDelegate> _commandDelegate;	// 248 = 0xf8
    long long _lastChangeDirection;	// 256 = 0x100
    NSMutableDictionary *_elapsedTimeObserverBlocks;	// 264 = 0x108
    struct CGSize _currentMediaItemPresentationSize;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x002000000001c2b0
@property(nonatomic) _Bool isScanningForward; // @synthesize isScanningForward=_isScanningForward;
@property(retain, nonatomic) NSMutableDictionary *elapsedTimeObserverBlocks; // @synthesize elapsedTimeObserverBlocks=_elapsedTimeObserverBlocks;
@property(nonatomic) _Bool initiatedSkip; // @synthesize initiatedSkip=_initiatedSkip;
@property(nonatomic) long long lastChangeDirection; // @synthesize lastChangeDirection=_lastChangeDirection;
@property(nonatomic) __weak id <TVNPMetadataPlayerCommandDelegate> commandDelegate; // @synthesize commandDelegate=_commandDelegate;
@property(nonatomic) _Bool limitReadAhead; // @synthesize limitReadAhead=_limitReadAhead;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) double reversePlaybackEndTime; // @synthesize reversePlaybackEndTime=_reversePlaybackEndTime;
@property(readonly, nonatomic) double forwardPlaybackEndTime; // @synthesize forwardPlaybackEndTime=_forwardPlaybackEndTime;
@property(nonatomic) _Bool updatesMediaRemoteInfoAutomatically; // @synthesize updatesMediaRemoteInfoAutomatically=_updatesMediaRemoteInfoAutomatically;
@property(nonatomic) _Bool preventsSleepDuringVideoPlayback; // @synthesize preventsSleepDuringVideoPlayback=_preventsSleepDuringVideoPlayback;
@property(readonly, nonatomic) _Bool currentMediaItemPreparedForLoading; // @synthesize currentMediaItemPreparedForLoading=_currentMediaItemPreparedForLoading;
@property(readonly, nonatomic) _Bool currentMediaItemInitialLoadingComplete; // @synthesize currentMediaItemInitialLoadingComplete=_currentMediaItemInitialLoadingComplete;
@property(readonly, nonatomic) _Bool currentMediaItemHasDates; // @synthesize currentMediaItemHasDates=_currentMediaItemHasDates;
@property(readonly, nonatomic) struct CGSize currentMediaItemPresentationSize; // @synthesize currentMediaItemPresentationSize=_currentMediaItemPresentationSize;
@property(nonatomic) _Bool waitsAfterPreparingMediaItems; // @synthesize waitsAfterPreparingMediaItems=_waitsAfterPreparingMediaItems;
@property(readonly, nonatomic) TVPInterstitial *currentInterstitial; // @synthesize currentInterstitial=_currentInterstitial;
@property(readonly, nonatomic) TVPTimeRange *seekableTimeRange; // @synthesize seekableTimeRange=_seekableTimeRange;
@property(nonatomic) __weak id <TVPASyncPlaybackDelegate> asyncDelegate; // @synthesize asyncDelegate=_asyncDelegate;
@property(nonatomic) __weak id <TVPPlaybackDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double maximumBitRate; // @synthesize maximumBitRate=_maximumBitRate;
@property(retain, nonatomic) TVPSubtitleOption *selectedSubtitleOption; // @synthesize selectedSubtitleOption=_selectedSubtitleOption;
@property(readonly, nonatomic) NSArray *subtitleOptions; // @synthesize subtitleOptions=_subtitleOptions;
@property(retain, nonatomic) TVPAudioOption *selectedAudioOption; // @synthesize selectedAudioOption=_selectedAudioOption;
@property(readonly, nonatomic) NSArray *audioOptions; // @synthesize audioOptions=_audioOptions;
@property(nonatomic) long long mediaItemEndAction; // @synthesize mediaItemEndAction=_mediaItemEndAction;
@property(retain, nonatomic) TVPChapterCollection *currentChapterCollection; // @synthesize currentChapterCollection=_currentChapterCollection;
@property(readonly, nonatomic) TVPDateRange *seekableDateRange; // @synthesize seekableDateRange=_seekableDateRange;
@property(readonly, nonatomic) TVPTimeRange *bufferedTimeRange; // @synthesize bufferedTimeRange=_bufferedTimeRange;
@property(readonly, nonatomic) TVPChapter *currentChapter; // @synthesize currentChapter=_currentChapter;
@property(readonly, nonatomic) NSArray *chapterCollections; // @synthesize chapterCollections=_chapterCollections;
@property(copy, nonatomic) NSDate *playbackDate; // @synthesize playbackDate=_playbackDate;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) long long errorBehavior; // @synthesize errorBehavior=_errorBehavior;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) TVPPlaybackState *state; // @synthesize state=_state;
@property(retain, nonatomic) TVPPlaylist *playlist; // @synthesize playlist=_playlist;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) double rateUsedForPlayback; // @synthesize rateUsedForPlayback=_rateUsedForPlayback;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_callElapsedTimeObserversDueToTimeJump:(_Bool)arg1;	// IMP=0x001000000001b660
- (void)_fireElapsedTimeUpdate:(id)arg1;	// IMP=0x001000000001b600
- (void)_updateElapsedTimeTimer;	// IMP=0x001000000001b500
@property(readonly, nonatomic) double elapsedTime;
- (float)_rateForState:(id)arg1;	// IMP=0x001000000001ae40
@property(readonly, nonatomic) double rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) _Bool currentMediaItemIsStreaming;
@property(readonly, nonatomic) _Bool currentMediaItemHasVideoContent;
@property(retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
- (_Bool)currentMediaItemSupportsScrubbingUsingPlayer;	// IMP=0x001000000001aab0
- (void)setSelectedSubtitleOption:(id)arg1 setGlobalPreference:(_Bool)arg2;	// IMP=0x001000000001aa60
- (void)updateSubtitleOptions;	// IMP=0x001000000001aa50
- (void)removeBoundaryTimeObserverWithToken:(id)arg1;	// IMP=0x001000000001aa10
- (id)addBoundaryTimeObserverForDates:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a9a0
- (id)addBoundaryTimeObserverForTimes:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a930
- (void)removeElapsedTimeObserverWithToken:(id)arg1;	// IMP=0x001000000001a8a0
- (id)addElapsedTimeObserver:(CDUnknownBlockType)arg1;	// IMP=0x001000000001a790
- (void)skipToNextChapterInDirection:(long long)arg1;	// IMP=0x001000000001a700
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_198678f7)arg2 ignoreDelegate:(_Bool)arg3;	// IMP=0x001000000001a6c0
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_198678f7)arg2;	// IMP=0x001000000001a680
- (void)setElapsedTime:(double)arg1 precise:(_Bool)arg2;	// IMP=0x001000000001a640
- (void)setElapsedTime:(double)arg1;	// IMP=0x001000000001a530
- (void)stopWithVolumeRampDuration:(double)arg1;	// IMP=0x001000000001a500
- (void)stop;	// IMP=0x001000000001a460
- (void)scanWithRate:(double)arg1;	// IMP=0x001000000001a280
- (void)togglePlayPause;	// IMP=0x001000000001a220
- (void)pauseIgnoringDelegate:(_Bool)arg1;	// IMP=0x001000000001a1f0
- (void)pauseWithVolumeRampDuration:(double)arg1;	// IMP=0x001000000001a1c0
- (void)pause;	// IMP=0x001000000001a160
- (void)playIgnoringDelegate:(_Bool)arg1;	// IMP=0x001000000001a130
- (void)play;	// IMP=0x001000000001a020
- (void)continueLoadingCurrentItem;	// IMP=0x001000000001a010
- (void)changeMediaInDirection:(long long)arg1 reason:(id)arg2;	// IMP=0x0010000000019f40
- (void)changeMediaInDirection:(long long)arg1;	// IMP=0x0010000000019f00
- (void)setLastElapsedTime:(double)arg1 atTimestamp:(id)arg2;	// IMP=0x0010000000019e00
- (void)invalidate;	// IMP=0x0010000000019dc0
- (id)initWithName:(id)arg1;	// IMP=0x0010000000019c60
- (id)init;	// IMP=0x0010000000019c00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
