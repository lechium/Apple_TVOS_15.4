//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRMediaRemoteServiceClient;

@interface MRNotificationServiceClient : NSObject
{
    MRMediaRemoteServiceClient *_serviceClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000150359
- (void)registerCallbacks;	// IMP=0x0000000000150010
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x000000000014fe60
- (void)_handleVolumeDidChangeNotification:(id)arg1;	// IMP=0x000000000014fca6
- (void)_handleVolumeControlCapabilitiesDidChangeNotification:(id)arg1;	// IMP=0x000000000014faec
- (void)_handleDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x000000000014f8e5
- (void)_handlePlayerStateDidChangeNotification:(id)arg1;	// IMP=0x000000000014f6f5
- (void)_handlePlayerIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x000000000014f3e0
- (void)_handlePlayerPlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x000000000014f14f
- (void)_handlePlayerNowPlayingInfoDidChangeNotification:(id)arg1;	// IMP=0x000000000014f076
- (void)_handlePlayerSupportedCommandsDidChangeNotification:(id)arg1;	// IMP=0x000000000014ee2a
- (void)_handlePlayerContentItemArtworkDidChangeNotification:(id)arg1;	// IMP=0x000000000014ec39
- (void)_handlePlayerContentItemsDidChangeNotification:(id)arg1;	// IMP=0x000000000014e82f
- (void)_handlePlayerPlaybackQueueDidChangeNotification:(id)arg1;	// IMP=0x000000000014e4ef
- (void)_handlePlayerDidUnregisterNotification:(id)arg1;	// IMP=0x000000000014e09b
- (void)_handlePlayerDidRegisterNotification:(id)arg1;	// IMP=0x000000000014dfc1
- (void)_handleActivePlayerDidChangeNotification:(id)arg1;	// IMP=0x000000000014de80
- (void)_handleApplicationDidForegroundNotification:(id)arg1;	// IMP=0x000000000014dda7
- (void)_handleApplicationDisplayNameDidChangeNotification:(id)arg1;	// IMP=0x000000000014dcce
- (void)_handleApplicationClientStateDidChangeNotification:(id)arg1;	// IMP=0x000000000014db6a
- (void)_handleApplicationDidUnregisterNotification:(id)arg1;	// IMP=0x000000000014d7b3
- (void)_handleApplicationDidRegisterNotification:(id)arg1;	// IMP=0x000000000014d6d9
- (void)_handleActiveApplicationDidChangeNotification:(id)arg1;	// IMP=0x000000000014d654
- (void)_handleOriginDidUnregisterNotification:(id)arg1;	// IMP=0x000000000014d474
- (void)_handleOriginDidRegisterNotification:(id)arg1;	// IMP=0x000000000014d305
- (void)_handleActiveOriginDidChangeNotification:(id)arg1;	// IMP=0x000000000014d20c
- (void)_notificationFired:(id)arg1 originNotification:(id)arg2 nowPlayingNotification:(id)arg3;	// IMP=0x000000000014cf5c
- (void)_notificationFired:(id)arg1 clientNotification:(id)arg2 originNotification:(id)arg3 nowPlayingNotification:(id)arg4;	// IMP=0x000000000014cb7c
- (void)_notificationFired:(id)arg1 playerPathNotifcation:(id)arg2 originNotification:(id)arg3 nowPlayingNotification:(id)arg4;	// IMP=0x000000000014c823
- (_Bool)_processNeedsNonPlayerPathBasedNotificationsForBackwardCompatabilitySupport;	// IMP=0x000000000014c6f9
- (_Bool)_shouldPostNotifications;	// IMP=0x000000000014c6e7
- (void)_postDefaultOriginNotifications:(id)arg1;	// IMP=0x000000000014c574
- (void)_postDefaultAppilicationNotifications:(id)arg1;	// IMP=0x000000000014c401
- (void)_postDefaultPlayerNotificationsWithUserInfo:(id)arg1 object:(id)arg2;	// IMP=0x000000000014c241
- (void)_processPlayerInvalidationHandlersForNotification:(id)arg1;	// IMP=0x000000000014bdc1
- (void)_processApplicationInvalidationHandlersForNotification:(id)arg1;	// IMP=0x000000000014babc
- (void)_processOriginInvalidationHandlersForNotification:(id)arg1;	// IMP=0x000000000014b99d
- (void)_processActivePlayerInvalidationHandlersForNotification:(id)arg1;	// IMP=0x000000000014b55f
- (void)_processActiveApplicationInvalidationHandlersForNotification:(id)arg1;	// IMP=0x000000000014b241
- (void)_processActiveOriginInvalidationHandlersForNotification:(id)arg1;	// IMP=0x000000000014b1ee
- (id)initWithServiceClient:(id)arg1;	// IMP=0x000000000014b173

@end

