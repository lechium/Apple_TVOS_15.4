//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MPNowPlayingInfoLyricsItemToken : NSObject
{
    void *_mediaRemoteLyricsItemToken;	// 8 = 0x8
}

@property(readonly, nonatomic) void *mediaRemoteLyricsItemToken; // @synthesize mediaRemoteLyricsItemToken=_mediaRemoteLyricsItemToken;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;	// IMP=0x0000000000107d11
- (id)initWithMediaRemoteLyricsItemToken:(void *)arg1;	// IMP=0x0000000000107cbd
- (id)initWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000107c37

@end

