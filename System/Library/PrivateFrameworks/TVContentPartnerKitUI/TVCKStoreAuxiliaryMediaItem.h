//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPURLMediaItem.h>

#import <TVContentPartnerKitUI/TVPSecureKeyDeliveryCoordinatorDelegate-Protocol.h>

@class NSError, NSNumber, NSURL, TVCKMutableBookmark, TVPPlayer, TVPSecureKeyDeliveryCoordinator;

@interface TVCKStoreAuxiliaryMediaItem : TVPURLMediaItem <TVPSecureKeyDeliveryCoordinatorDelegate>
{
    TVPSecureKeyDeliveryCoordinator *_secureKeyDeliveryCoordinator;	// 8 = 0x8
    NSURL *_fpsCertificateURL;	// 16 = 0x10
    NSURL *_fpsKeyServerURL;	// 24 = 0x18
    TVCKMutableBookmark *_bookmark;	// 32 = 0x20
    NSError *_skdError;	// 40 = 0x28
    TVPPlayer *_scrubPlayer;	// 48 = 0x30
    NSNumber *_dsid;	// 56 = 0x38
    NSNumber *_bookmarkOverrideTime;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000097703
@property(copy, nonatomic) NSNumber *bookmarkOverrideTime; // @synthesize bookmarkOverrideTime=_bookmarkOverrideTime;
@property(retain, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) TVPPlayer *scrubPlayer; // @synthesize scrubPlayer=_scrubPlayer;
@property(retain, nonatomic) NSError *skdError; // @synthesize skdError=_skdError;
@property(retain, nonatomic) TVCKMutableBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(copy, nonatomic) NSURL *fpsKeyServerURL; // @synthesize fpsKeyServerURL=_fpsKeyServerURL;
@property(copy, nonatomic) NSURL *fpsCertificateURL; // @synthesize fpsCertificateURL=_fpsCertificateURL;
- (void)_scrubPlayerItemDidLoad:(id)arg1;	// IMP=0x0000000000097587
- (id)replacementErrorForPlaybackError:(id)arg1;	// IMP=0x00000000000973f1
- (void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;	// IMP=0x00000000000973eb
- (void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2;	// IMP=0x0000000000097383
- (void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1;	// IMP=0x000000000009736f
- (void)loadStreamingKeyForRequest:(id)arg1;	// IMP=0x000000000009714f
- (void)cleanUpMediaItem;	// IMP=0x0000000000097015
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000096d7d
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000000096b95
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x00000000000968d9
- (void)dealloc;	// IMP=0x0000000000096864
- (id)initWithURL:(id)arg1 isHLS:(_Bool)arg2 disableMetadataMenu:(_Bool)arg3 bookmarkID:(id)arg4 bookmarkOverrideTime:(id)arg5 disableResumeMenu:(_Bool)arg6 dsid:(id)arg7;	// IMP=0x00000000000965ce
- (id)initWithURL:(id)arg1 traits:(id)arg2;	// IMP=0x000000000009658f

@end

