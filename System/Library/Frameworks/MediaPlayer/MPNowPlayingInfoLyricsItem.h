//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPNowPlayingInfoLyricsItemToken, NSString;

@interface MPNowPlayingInfoLyricsItem : NSObject
{
    void *_mediaRemoteLyricsItem;	// 8 = 0x8
}

@property(readonly, nonatomic) void *mediaRemoteLyricsItem; // @synthesize mediaRemoteLyricsItem=_mediaRemoteLyricsItem;
@property(readonly, nonatomic) MPNowPlayingInfoLyricsItemToken *token;
@property(readonly, nonatomic) _Bool userProvided;
@property(readonly, nonatomic) NSString *lyrics;
- (void)dealloc;	// IMP=0x0000000000107eeb
- (id)initWithMediaRemoteLyricsItem:(void *)arg1;	// IMP=0x0000000000107e7e
- (id)initWithLyrics:(id)arg1 userProvided:(_Bool)arg2 token:(id)arg3;	// IMP=0x0000000000107ddd
- (id)initWithLyrics:(id)arg1 userProvided:(_Bool)arg2;	// IMP=0x0000000000107d76

@end
