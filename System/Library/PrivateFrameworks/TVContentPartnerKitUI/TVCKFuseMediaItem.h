//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPBaseMediaItem.h>

@class SSVPlaybackLeaseAsset, SSVPlaybackLeaseResponse, TVCKDataItem, TVCKMutableBookmark;

@interface TVCKFuseMediaItem : TVPBaseMediaItem
{
    _Bool _isMusicVideo;	// 8 = 0x8
    _Bool _shouldBookmarkMusicVideo;	// 9 = 0x9
    long long _adamID;	// 16 = 0x10
    TVCKDataItem *_dataItem;	// 24 = 0x18
    SSVPlaybackLeaseResponse *_leaseResponse;	// 32 = 0x20
    unsigned long long _loadingContext;	// 40 = 0x28
    SSVPlaybackLeaseAsset *_currentLeaseAsset;	// 48 = 0x30
    TVCKMutableBookmark *_bookmark;	// 56 = 0x38
}

+ (double)_playedThresholdTimeForDuration:(double)arg1;	// IMP=0x0000000000015cb6
+ (id)_extractLeaseAssetFromLeaseResponse:(id)arg1;	// IMP=0x0000000000015703
+ (_Bool)isPendingStartLeaseSession;	// IMP=0x00000000000156f7
+ (void)setPendingStartLeaseSession:(_Bool)arg1;	// IMP=0x00000000000156eb
- (void).cxx_destruct;	// IMP=0x0000000000015e33
@property(retain, nonatomic) TVCKMutableBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(retain, nonatomic) SSVPlaybackLeaseAsset *currentLeaseAsset; // @synthesize currentLeaseAsset=_currentLeaseAsset;
@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) SSVPlaybackLeaseResponse *leaseResponse; // @synthesize leaseResponse=_leaseResponse;
@property(nonatomic) _Bool shouldBookmarkMusicVideo; // @synthesize shouldBookmarkMusicVideo=_shouldBookmarkMusicVideo;
@property(nonatomic) _Bool isMusicVideo; // @synthesize isMusicVideo=_isMusicVideo;
@property(retain, nonatomic) TVCKDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) long long adamID; // @synthesize adamID=_adamID;
- (id)_bookmarkNetTime;	// IMP=0x0000000000015c49
- (id)_propertyNameMappings;	// IMP=0x0000000000015ae2
- (void)cleanUpMediaItem;	// IMP=0x00000000000153e1
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014c17
- (_Bool)hasTrait:(id)arg1;	// IMP=0x0000000000014b7a
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x0000000000014ae7
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;	// IMP=0x0000000000014958
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x0000000000013fe4
- (id)mediaItemURL;	// IMP=0x0000000000013f56
- (id)initWithAdamID:(long long)arg1 isMusicVideo:(_Bool)arg2;	// IMP=0x0000000000013e16
- (id)initWithAdamID:(long long)arg1;	// IMP=0x0000000000013e02

@end
