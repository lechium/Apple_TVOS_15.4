//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPModelSong;

@interface MPStoreLyricsRequest : NSObject <NSCopying>
{
    MPModelSong *_song;	// 8 = 0x8
}

+ (_Bool)supportsLyricsForURLBagDictionary:(id)arg1;	// IMP=0x000000000004dd03
+ (_Bool)supportsLyricsForURLBag:(id)arg1;	// IMP=0x000000000004dcea
- (void).cxx_destruct;	// IMP=0x000000000004df9b
@property(retain, nonatomic) MPModelSong *song; // @synthesize song=_song;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ddb0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004dd79

@end
