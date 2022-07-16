//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMMediaError, DOMTimeRanges, NSString;

@interface DOMHTMLMediaElement
{
}

- (void)fastSeek:(double)arg1;	// IMP=0x000000000006bd70
- (void)pause;	// IMP=0x000000000006bc80
- (void)play;	// IMP=0x000000000006bb90
- (double)getStartDate;	// IMP=0x000000000006ba90
- (id)canPlayType:(id)arg1;	// IMP=0x000000000006b8b0
- (void)load;	// IMP=0x000000000006b7c0
@property(copy) NSString *mediaGroup;
@property _Bool webkitClosedCaptionsVisible;
@property(readonly) _Bool webkitHasClosedCaptions;
@property _Bool webkitPreservesPitch;
@property _Bool defaultMuted;
@property _Bool muted;
@property double volume;
@property _Bool controls;
@property _Bool loop;
@property _Bool autoplay;
@property(readonly) _Bool ended;
@property(readonly) DOMTimeRanges *seekable;
@property(readonly) DOMTimeRanges *played;
@property double playbackRate;
@property double defaultPlaybackRate;
@property(readonly) _Bool paused;
@property(readonly) double duration;
@property double currentTime;
@property(readonly) _Bool seeking;
@property(readonly) unsigned short readyState;
@property(readonly) DOMTimeRanges *buffered;
@property(copy) NSString *preload;
@property(readonly) unsigned short networkState;
@property(copy) NSString *crossOrigin;
@property(readonly, copy) NSString *currentSrc;
@property(copy) NSString *src;
@property(readonly) DOMMediaError *error;

@end

