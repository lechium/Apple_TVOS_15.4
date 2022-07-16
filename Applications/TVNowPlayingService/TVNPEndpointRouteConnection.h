//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVEndpointRoute, MPArtworkCatalog, MPRequestResponseController, NSMutableDictionary, NSNumber, NSString, UIImage;

@interface TVNPEndpointRouteConnection : NSObject
{
    _Bool _automaticResponseLoading;	// 8 = 0x8
    _Bool _wantsPlaybackMetadata;	// 9 = 0x9
    _Bool _attemptingConnection;	// 10 = 0xa
    float _rate;	// 12 = 0xc
    float _defaultPlaybackRate;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_artist;	// 32 = 0x20
    NSString *_album;	// 40 = 0x28
    UIImage *_artworkImage;	// 48 = 0x30
    MPArtworkCatalog *_artworkCatalog;	// 56 = 0x38
    NSNumber *_trackNumber;	// 64 = 0x40
    NSNumber *_totalNumberOfTracks;	// 72 = 0x48
    NSString *_contentItemIdentifier;	// 80 = 0x50
    long long _playbackState;	// 88 = 0x58
    double _duration;	// 96 = 0x60
    double _elapsedTime;	// 104 = 0x68
    double _lastUpdate;	// 112 = 0x70
    unsigned long long _connectionState;	// 120 = 0x78
    MPRequestResponseController *_requestController;	// 128 = 0x80
    NSMutableDictionary *_observerTokensToHandlers;	// 136 = 0x88
    struct CGSize _artworkSize;	// 144 = 0x90
}

+ (id)keyPathsForValuesAffectingPaired;	// IMP=0x0020000000042e20
- (void).cxx_destruct;	// IMP=0x0020000000047360
@property(readonly, nonatomic) NSMutableDictionary *observerTokensToHandlers; // @synthesize observerTokensToHandlers=_observerTokensToHandlers;
@property(readonly, nonatomic) MPRequestResponseController *requestController; // @synthesize requestController=_requestController;
@property(nonatomic, getter=isAttemptingConnection) _Bool attemptingConnection; // @synthesize attemptingConnection=_attemptingConnection;
@property(readonly, nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(readonly, nonatomic) float defaultPlaybackRate; // @synthesize defaultPlaybackRate=_defaultPlaybackRate;
@property(readonly, nonatomic) float rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, copy, nonatomic) NSString *contentItemIdentifier; // @synthesize contentItemIdentifier=_contentItemIdentifier;
@property(readonly, copy, nonatomic) NSNumber *totalNumberOfTracks; // @synthesize totalNumberOfTracks=_totalNumberOfTracks;
@property(readonly, copy, nonatomic) NSNumber *trackNumber; // @synthesize trackNumber=_trackNumber;
@property(nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property(readonly, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(readonly, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(readonly, copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(readonly, copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic, setter=_setWantsPlaybackMetadata:) _Bool _wantsPlaybackMetadata; // @synthesize _wantsPlaybackMetadata;
@property(nonatomic, setter=_setAutomaticResponseLoading:) _Bool _automaticResponseLoading; // @synthesize _automaticResponseLoading;
- (id)_preloadArtwork;	// IMP=0x0010000000046ec0
- (id)_placeholderArtwork;	// IMP=0x0010000000046dc0
- (void)_updateState;	// IMP=0x0010000000046b60
- (void)_updateAutomaticResponseLoading;	// IMP=0x0010000000046a70
- (void)_connectPairingIfNeeded:(_Bool)arg1;	// IMP=0x0010000000046420
- (void)_connectionDidInvalidate:(id)arg1;	// IMP=0x0010000000046260
- (void)_updateMetadata;	// IMP=0x0010000000044130
- (void)_createRequestController;	// IMP=0x0010000000043ab0
- (void)_reloadPlayerPathWithRoute:(id)arg1;	// IMP=0x00100000000437e0
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043590
- (void);	// IMP=0x00100000000430a0
- (void)playPause;	// IMP=0x0010000000043070
- (void)deregisterMetadataUpdateHandler:(id)arg1;	// IMP=0x0010000000042fe0
- (id)registerMetadataUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000042f00
@property(retain, nonatomic) MPAVEndpointRoute *route;
- (id)response;	// IMP=0x0010000000042d80
- (id)playerPath;	// IMP=0x0010000000042c90
@property(readonly, copy, nonatomic) NSString *bundleID;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
- (void)connectAndPair;	// IMP=0x0010000000042aa0
@property(readonly, copy) NSString *description;
- (id)initWithRoute:(id)arg1;	// IMP=0x00100000000426f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
