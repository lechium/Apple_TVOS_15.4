//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSArray, NSString, TVPPlaylist, UIColor, UIView, VUIAppContext, VUIImageProxy;

@interface VUIMediaInfo : NSObject <NSCopying>
{
    _Bool _hasProgress;	// 8 = 0x8
    _Bool _showsSecondaryVideoView;	// 9 = 0x9
    _Bool _automaticPlaybackStart;	// 10 = 0xa
    _Bool _automaticPlaybackStop;	// 11 = 0xb
    _Bool _restrictionsAlreadyUnlocked;	// 12 = 0xc
    _Bool _shouldDelayLoadingImage;	// 13 = 0xd
    _Bool _allowsPictureInPicture;	// 14 = 0xe
    _Bool _overridesStartTimeWithResumeTime;	// 15 = 0xf
    unsigned long long _intent;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UIColor *_backgroundColor;	// 32 = 0x20
    NSArray *_imageProxies;	// 40 = 0x28
    TVPPlaylist *_playlist;	// 48 = 0x30
    UIView *_overlayView;	// 56 = 0x38
    TVPPlaylist *_tvpPlaylist;	// 64 = 0x40
    NSArray *_videosPlayables;	// 72 = 0x48
    unsigned long long _playbackStartReason;	// 80 = 0x50
    unsigned long long _playbackStopReason;	// 88 = 0x58
    unsigned long long _playbackContext;	// 96 = 0x60
    VUIAppContext *_appContext;	// 104 = 0x68
    double _playbackDelayInterval;	// 112 = 0x70
    VUIImageProxy *_alphaImageProxy;	// 120 = 0x78
    NSString *_alphaLayerAccessibilityText;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000001653af
@property(nonatomic) _Bool overridesStartTimeWithResumeTime; // @synthesize overridesStartTimeWithResumeTime=_overridesStartTimeWithResumeTime;
@property(retain, nonatomic) NSString *alphaLayerAccessibilityText; // @synthesize alphaLayerAccessibilityText=_alphaLayerAccessibilityText;
@property(retain, nonatomic) VUIImageProxy *alphaImageProxy; // @synthesize alphaImageProxy=_alphaImageProxy;
@property(nonatomic) double playbackDelayInterval; // @synthesize playbackDelayInterval=_playbackDelayInterval;
@property(nonatomic) _Bool allowsPictureInPicture; // @synthesize allowsPictureInPicture=_allowsPictureInPicture;
@property(retain, nonatomic) VUIAppContext *appContext; // @synthesize appContext=_appContext;
@property(nonatomic) unsigned long long playbackContext; // @synthesize playbackContext=_playbackContext;
@property(nonatomic) _Bool shouldDelayLoadingImage; // @synthesize shouldDelayLoadingImage=_shouldDelayLoadingImage;
@property(nonatomic) _Bool restrictionsAlreadyUnlocked; // @synthesize restrictionsAlreadyUnlocked=_restrictionsAlreadyUnlocked;
@property(nonatomic) unsigned long long playbackStopReason; // @synthesize playbackStopReason=_playbackStopReason;
@property(nonatomic, getter=isAutomaticPlaybackStop) _Bool automaticPlaybackStop; // @synthesize automaticPlaybackStop=_automaticPlaybackStop;
@property(nonatomic) unsigned long long playbackStartReason; // @synthesize playbackStartReason=_playbackStartReason;
@property(nonatomic, getter=isAutomaticPlaybackStart) _Bool automaticPlaybackStart; // @synthesize automaticPlaybackStart=_automaticPlaybackStart;
@property(nonatomic) _Bool showsSecondaryVideoView; // @synthesize showsSecondaryVideoView=_showsSecondaryVideoView;
@property(retain, nonatomic) NSArray *videosPlayables; // @synthesize videosPlayables=_videosPlayables;
@property(retain, nonatomic) TVPPlaylist *tvpPlaylist; // @synthesize tvpPlaylist=_tvpPlaylist;
@property(readonly, nonatomic) _Bool hasProgress; // @synthesize hasProgress=_hasProgress;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) TVPPlaylist *playlist; // @synthesize playlist=_playlist;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long intent; // @synthesize intent=_intent;
- (id)_hlsURLUpdatedWithBingeWatchingParamFromURL:(id)arg1;	// IMP=0x0000000000165028
- (id)_hlsURLEnsuringDsidQueryParamIsPresentFromURL:(id)arg1;	// IMP=0x0000000000164d4b
- (id)_playbackOverridesForURL:(id)arg1 orAdamID:(id)arg2;	// IMP=0x0000000000164913
- (id)_tvpMediaTypeFromPlayable:(id)arg1;	// IMP=0x00000000001647ce
- (void)_populateMediaItem:(id)arg1 withResumeTimeInfoFromPlayable:(id)arg2;	// IMP=0x00000000001643c3
- (void)_populateMediaItem:(id)arg1 withMetadataOverrides:(id)arg2;	// IMP=0x0000000000163b9a
- (void)_populateMediaItem:(id)arg1 withMetadataFromVideosPlayable:(id)arg2;	// IMP=0x0000000000163772
- (id)_auxMediaItemFromVideosPlayable:(id)arg1;	// IMP=0x00000000001624c3
- (id)_storeMediaItemFromVideosPlayable:(id)arg1 andStoreDictionary:(id)arg2;	// IMP=0x0000000000161a8e
- (id)_playlistFromVideosPlayables:(id)arg1 andStoreDictionary:(id)arg2;	// IMP=0x0000000000160e08
- (id)_tvpRatingDomainFromUTSRatingDomain:(id)arg1;	// IMP=0x0000000000160d7c
- (void)_updatePlaybackStartReason;	// IMP=0x0000000000160c03
- (void)setUserPlaybackInitiationDate:(id)arg1 openURLCompletionDate:(id)arg2;	// IMP=0x0000000000160a56
- (id)description;	// IMP=0x00000000001608f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016044a
- (unsigned long long)hash;	// IMP=0x0000000000160389
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001600c6
- (id)initWithPlaybackContext:(unsigned long long)arg1 videosPlayables:(id)arg2 imageProxies:(id)arg3 storeDictionary:(id)arg4;	// IMP=0x000000000015ff2c
- (id)init;	// IMP=0x000000000015ff10
- (long long)_storeMediaTypeFromMPMediaType:(unsigned long long)arg1 isRental:(_Bool)arg2;	// IMP=0x0000000000165e77
- (long long)_videoDynamimcRangeFromMPColorCapability:(long long)arg1;	// IMP=0x0000000000165e58
- (long long)_videoResolutionFromMPVideoQuality:(long long)arg1;	// IMP=0x0000000000165e37
- (id)_storeMediaItemFromMPMediaItem:(id)arg1;	// IMP=0x0000000000165742
- (id)_playlistFromMPMediaItems:(id)arg1;	// IMP=0x000000000016551b
- (id)initWithPlaybackContext:(unsigned long long)arg1 mpMediaItems:(id)arg2;	// IMP=0x0000000000165432
- (id)_playlistForVUIMediaItems:(id)arg1;	// IMP=0x0000000000165f86
- (id)initWithPlaybackContext:(unsigned long long)arg1 vuiMediaItems:(id)arg2;	// IMP=0x0000000000165e9d
- (id)_playlistFromIKPlaylistElement:(id)arg1;	// IMP=0x00000000001662c6
- (id)initWithPlaybackContext:(unsigned long long)arg1 playlistElements:(id)arg2;	// IMP=0x00000000001661dd

@end
