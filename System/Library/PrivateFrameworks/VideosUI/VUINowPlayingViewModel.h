//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, UIImage, VUIMediaController, VUIVideoAdvisoryLogoImageDownloader;

__attribute__((visibility("hidden")))
@interface VUINowPlayingViewModel : NSObject
{
    _Bool _includesProductPageButton;	// 8 = 0x8
    _Bool _livePlayback;	// 9 = 0x9
    _Bool _currentMediaATVShow;	// 10 = 0xa
    NSDictionary *_metadata;	// 16 = 0x10
    NSString *_currentMediaType;	// 24 = 0x18
    NSString *_canonicalID;	// 32 = 0x20
    NSString *_showCanonicalID;	// 40 = 0x28
    unsigned long long _autoPlayedEpisodesCount;	// 48 = 0x30
    NSDate *_initialPlaybackStartDate;	// 56 = 0x38
    VUIMediaController *_mediaController;	// 64 = 0x40
    VUIVideoAdvisoryLogoImageDownloader *_logoImageDownloader;	// 72 = 0x48
    UIImage *_ratingImage;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000b84e9
@property(nonatomic, getter=isCurrentMediaATVShow) _Bool currentMediaATVShow; // @synthesize currentMediaATVShow=_currentMediaATVShow;
@property(retain, nonatomic) UIImage *ratingImage; // @synthesize ratingImage=_ratingImage;
@property(retain, nonatomic) VUIVideoAdvisoryLogoImageDownloader *logoImageDownloader; // @synthesize logoImageDownloader=_logoImageDownloader;
@property(retain, nonatomic) VUIMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(nonatomic, getter=isLivePlayback) _Bool livePlayback; // @synthesize livePlayback=_livePlayback;
@property(retain, nonatomic) NSDate *initialPlaybackStartDate; // @synthesize initialPlaybackStartDate=_initialPlaybackStartDate;
@property(nonatomic) unsigned long long autoPlayedEpisodesCount; // @synthesize autoPlayedEpisodesCount=_autoPlayedEpisodesCount;
@property(nonatomic) _Bool includesProductPageButton; // @synthesize includesProductPageButton=_includesProductPageButton;
@property(copy, nonatomic) NSString *showCanonicalID; // @synthesize showCanonicalID=_showCanonicalID;
@property(copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(copy, nonatomic) NSString *currentMediaType; // @synthesize currentMediaType=_currentMediaType;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (id)_metaDataInfoFromMediaItem:(id)arg1;	// IMP=0x00000000000b8349
- (void)_updateMetadataForCurrentMediaItem;	// IMP=0x00000000000b7bc4
- (void)_handleMetadataDidChangeNotification:(id)arg1;	// IMP=0x00000000000b7bb2
- (void)_handleMediaItemDidChangeNotification:(id)arg1;	// IMP=0x00000000000b7ba0
- (void)_unregisterPlaybackNotifications;	// IMP=0x00000000000b7a6c
- (void)_registerPlaybackNotifications;	// IMP=0x00000000000b7991
- (void)_unregisterPlayerObserver;	// IMP=0x00000000000b793e
- (void)_registerPlayerObserver;	// IMP=0x00000000000b78de
@property(readonly, nonatomic, getter=canAutoPlay) _Bool autoPlay;
@property(readonly, nonatomic) NSString *currentMediaTitle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000b755e
- (void)dealloc;	// IMP=0x00000000000b750b
- (id)initWithMediaController:(id)arg1;	// IMP=0x00000000000b7452
- (id)init;	// IMP=0x00000000000b7411

@end

