//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PXAudioAssetFetchResult;

@interface PXFlexMusicCuration : NSObject
{
    id <PXAudioAssetFetchResult> _bestSongSuggestions;	// 8 = 0x8
    id <PXAudioAssetFetchResult> _secondarySongSuggestions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007ba97
@property(readonly, nonatomic) id <PXAudioAssetFetchResult> secondarySongSuggestions; // @synthesize secondarySongSuggestions=_secondarySongSuggestions;
@property(readonly, nonatomic) id <PXAudioAssetFetchResult> bestSongSuggestions; // @synthesize bestSongSuggestions=_bestSongSuggestions;
- (id)init;	// IMP=0x000000000007ba09
- (id)initWithBestSongSuggestions:(id)arg1 secondarySongSuggestions:(id)arg2;	// IMP=0x000000000007b970

@end

