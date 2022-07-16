//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, SHServerLyricsResponse, SHServerMusicVideoResponse, SHServerShazamResponse, SHServerSongsResponse;

__attribute__((visibility("hidden")))
@interface SHServerResourcesResponse : NSObject
{
    NSDictionary *_resourcesDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000080aa
@property(retain, nonatomic) NSDictionary *resourcesDictionary; // @synthesize resourcesDictionary=_resourcesDictionary;
@property(readonly, nonatomic) SHServerMusicVideoResponse *musicVideoResponse;
@property(readonly, nonatomic) SHServerLyricsResponse *lyricsResponse;
@property(readonly, nonatomic) SHServerShazamResponse *shazamResponse;
@property(readonly, nonatomic) SHServerSongsResponse *songsResponse;
- (id)initWithResourcesDictionary:(id)arg1;	// IMP=0x0010000000007c80

@end

