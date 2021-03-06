//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRClient, MROrigin, NSMutableDictionary;

@interface MRDOriginForwarder : NSObject
{
    MROrigin *_sourceOrigin;	// 8 = 0x8
    MROrigin *_destinationOrigin;	// 16 = 0x10
    MRClient *_destinationClient;	// 24 = 0x18
    NSMutableDictionary *_playerPathMapping;	// 32 = 0x20
}

+ (id)localizedPlayerIDFromPlayerPath:(id)arg1;	// IMP=0x0040000000026578
- (void).cxx_destruct;	// IMP=0x00200000000266d9
@property(retain, nonatomic) NSMutableDictionary *playerPathMapping; // @synthesize playerPathMapping=_playerPathMapping;
@property(readonly, nonatomic) MRClient *destinationClient; // @synthesize destinationClient=_destinationClient;
@property(readonly, nonatomic) MROrigin *destinationOrigin; // @synthesize destinationOrigin=_destinationOrigin;
@property(readonly, nonatomic) MROrigin *sourceOrigin; // @synthesize sourceOrigin=_sourceOrigin;
- (id)createLocalizePlayerPath:(id)arg1;	// IMP=0x00100000000264a7
- (void)_handlePlayerPlaybackQueueContentItemArtworkDidChangeNotification:(id)arg1;	// IMP=0x0010000000026223
- (void)_handlePlayerPlaybackQueueContentItemsDidChangeNotification:(id)arg1;	// IMP=0x0010000000025fe2
- (void)_handlePlayerPlaybackQueueDidChangeNotification:(id)arg1;	// IMP=0x0010000000025cd3
- (void)_handlePlayerPlaybackQueueCapabilitiesDidChangeNotification:(id)arg1;	// IMP=0x0010000000025a48
- (void)_handleSupportedCommandsDidChangeNotification:(id)arg1;	// IMP=0x00100000000257af
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x001000000002554d
- (void)_handleActivePlayerDidChangeNotification:(id)arg1;	// IMP=0x001000000002534b
- (void)_handlePlayerStateDidChangeNotification:(id)arg1;	// IMP=0x00100000000250cc
- (void)_handlePlayerDidUnregisterCanBeNowPlayingNotification:(id)arg1;	// IMP=0x0010000000024ed2
- (void)_handlePlayerDidRegisterCanBeNowPlayingNotification:(id)arg1;	// IMP=0x0010000000024cd5
- (void)_handlePlayerDidUnregisterNotification:(id)arg1;	// IMP=0x0010000000024a95
- (void)_handlePlayerDidRegisterNotification:(id)arg1;	// IMP=0x001000000002483b
- (void)_handleActiveApplicationDidChangeNotification:(id)arg1;	// IMP=0x0010000000024609
- (void)_handleApplicationClientStateDidChangeNotification:(id)arg1;	// IMP=0x0010000000024334
- (void)_handleApplicationDidUnregisterNotification:(id)arg1;	// IMP=0x00100000000240f7
- (void)_handleApplicationDidRegisterNotification:(id)arg1;	// IMP=0x0010000000023e32
- (void)_handleVolumeCapabilitiesDidChangeNotification:(id)arg1;	// IMP=0x0010000000023baa
- (void)initializeDestinationOriginWithSourceOriginData;	// IMP=0x00100000000231ec
- (void)registerDestinationOriginCallbacksToRelayToSourceOrigin;	// IMP=0x001000000002223d
- (void)registerSourceOriginNotifications;	// IMP=0x0010000000021fd4
- (id)debugDescription;	// IMP=0x0010000000021f1e
- (void)dealloc;	// IMP=0x0010000000021e83
- (id)initWithOrigin:(id)arg1 destinationOrigin:(id)arg2;	// IMP=0x0010000000021d33

@end

