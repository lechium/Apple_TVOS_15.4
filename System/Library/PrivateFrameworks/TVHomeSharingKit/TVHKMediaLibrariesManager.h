//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHomeSharingKit/TVHKMediaServerManagerDelegate-Protocol.h>

@class NSMutableSet, NSOperationQueue, NSSet, NSString, TVHKMediaServerDiscoveryConfiguration, TVHKMediaServerManager;
@protocol OS_dispatch_queue;

@interface TVHKMediaLibrariesManager : NSObject <TVHKMediaServerManagerDelegate>
{
    _Bool _started;	// 8 = 0x8
    TVHKMediaServerDiscoveryConfiguration *_discoveryConfiguration;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationDispatchQueue;	// 32 = 0x20
    unsigned long long _accessMode;	// 40 = 0x28
    NSOperationQueue *_serialProcessingOperationQueue;	// 48 = 0x30
    NSOperationQueue *_verifyMediaServerAvailableOperationQueue;	// 56 = 0x38
    TVHKMediaServerManager *_mediaServerManager;	// 64 = 0x40
    NSMutableSet *_mutableMediaLibraries;	// 72 = 0x48
}

+ (_Bool)automaticallyNotifiesObserversOfStarted;	// IMP=0x000000000006c79e
+ (_Bool)automaticallyNotifiesObserversOfDiscoveryConfiguration;	// IMP=0x000000000006c796
+ (id)new;	// IMP=0x000000000006b8ac
- (void).cxx_destruct;	// IMP=0x000000000006ea3f
@property(retain, nonatomic) NSMutableSet *mutableMediaLibraries; // @synthesize mutableMediaLibraries=_mutableMediaLibraries;
@property(retain, nonatomic) TVHKMediaServerManager *mediaServerManager; // @synthesize mediaServerManager=_mediaServerManager;
@property(retain, nonatomic) NSOperationQueue *verifyMediaServerAvailableOperationQueue; // @synthesize verifyMediaServerAvailableOperationQueue=_verifyMediaServerAvailableOperationQueue;
@property(retain, nonatomic) NSOperationQueue *serialProcessingOperationQueue; // @synthesize serialProcessingOperationQueue=_serialProcessingOperationQueue;
@property(readonly, nonatomic) unsigned long long accessMode; // @synthesize accessMode=_accessMode;
- (void)_postNotificationWithNotificationName:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000006e83b
- (void)_enqueueAsyncProcessingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006e7cb
- (void)_enqueueSyncProcessingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006e74f
- (id)_operationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006e627
- (void)_removeMediaLibrariesWithMediaServers:(id)arg1;	// IMP=0x000000000006e3a0
- (void)_addMediaLibrariesWithMediaServers:(id)arg1;	// IMP=0x000000000006df73
- (void)_handleUpdatedMediaServerDiscoveryConfiguration:(id)arg1;	// IMP=0x000000000006de4d
- (void)_stopObservingMediaServerManager:(id)arg1;	// IMP=0x000000000006de24
- (void)_startObservingMediaServerManager:(id)arg1;	// IMP=0x000000000006ddf5
- (void)_stopObservingMediaServerDiscoverySettings:(id)arg1;	// IMP=0x000000000006ddcc
- (void)_startObservingMediaServerDiscoverySettings:(id)arg1;	// IMP=0x000000000006dd9d
- (void)_stopObservingDeviceSleepNotifications;	// IMP=0x000000000006dd57
- (void)_startObservingDeviceSleepNotifications;	// IMP=0x000000000006d9a7
- (void)_stopObservingNetworkReachabilityCenter;	// IMP=0x000000000006d947
- (void)_startObservingNetworkReachabilityCenter;	// IMP=0x000000000006d8e0
- (void)_logDiscoveredMediaServers;	// IMP=0x000000000006d629
- (void)_disconnectMediaLibraries:(id)arg1;	// IMP=0x000000000006d458
- (void)_disconnectAllMediaLibraries;	// IMP=0x000000000006d40c
- (void)_removeAllMediaLibrariesAndNotify:(_Bool)arg1;	// IMP=0x000000000006d3bb
- (void)_removeMediaLibraries:(id)arg1 andNotify:(_Bool)arg2;	// IMP=0x000000000006d1ec
- (void)_addMediaLibraries:(id)arg1;	// IMP=0x000000000006d041
- (void)_stopMediaServerManagerAndNotify:(_Bool)arg1;	// IMP=0x000000000006cfaf
- (void)_startMediaServerManagerWithDiscoveryConfiguration:(id)arg1;	// IMP=0x000000000006cebf
- (void)_stopAndNotify:(_Bool)arg1;	// IMP=0x000000000006ce11
- (void)_start;	// IMP=0x000000000006cd9a
@property(retain, nonatomic) TVHKMediaServerDiscoveryConfiguration *discoveryConfiguration; // @synthesize discoveryConfiguration=_discoveryConfiguration;
@property(nonatomic) _Bool started; // @synthesize started=_started;
- (void)_handleNetworkReachabilityDidChangeNotification:(id)arg1;	// IMP=0x000000000006cae7
- (void)mediaServerManager:(id)arg1 verifyMediaServerIsAvailable:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006c7a6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000006c454
- (void)restartIfNotConnectedToAnyMediaLibraries;	// IMP=0x000000000006c3a3
- (void)stop;	// IMP=0x000000000006c32e
- (void)start;	// IMP=0x000000000006c2bb
- (id)mediaLibraryForMediaServerIdentifier:(id)arg1;	// IMP=0x000000000006c0a1
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationDispatchQueue; // @synthesize notificationDispatchQueue=_notificationDispatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
@property(readonly, copy, nonatomic) NSSet *connectedMediaLibraries;
@property(readonly, copy, nonatomic) NSSet *connectableMediaLibraries;
@property(readonly, copy, nonatomic) NSSet *mediaLibraries;
- (void)dealloc;	// IMP=0x000000000006ba76
- (id)initWithAccessMode:(unsigned long long)arg1;	// IMP=0x000000000006b94a
- (id)init;	// IMP=0x000000000006b8db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

