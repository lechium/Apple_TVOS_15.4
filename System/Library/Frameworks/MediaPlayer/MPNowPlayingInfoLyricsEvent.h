//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPNowPlayingInfoLyricsItemToken, NSDate;

@interface MPNowPlayingInfoLyricsEvent : NSObject
{
    void *_mediaRemoteLyricsEvent;	// 8 = 0x8
}

@property(readonly, nonatomic) void *mediaRemoteLyricsEvent; // @synthesize mediaRemoteLyricsEvent=_mediaRemoteLyricsEvent;
@property(readonly, nonatomic) MPNowPlayingInfoLyricsItemToken *token;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (void)dealloc;	// IMP=0x0000000000107fe0
- (id)initWithMediaRemoteLyricsEvent:(void *)arg1;	// IMP=0x0000000000107f91

@end

