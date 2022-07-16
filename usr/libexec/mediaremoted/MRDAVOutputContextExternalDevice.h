//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalDevice.h>

@class MRAVOutputContext, MRAVOutputDevice, MRDOriginForwarder, MRDeviceInfo, MROrigin, MROutputContextController, NSArray, NSMutableArray, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDAVOutputContextExternalDevice : MRExternalDevice
{
    unsigned int _connectionState;	// 8 = 0x8
    MRDeviceInfo *_deviceInfo;	// 16 = 0x10
    MRDOriginForwarder *_originForwarder;	// 24 = 0x18
    NSMutableArray *_pendingCommitRequests;	// 32 = 0x20
    MROutputContextController *_outputContextController;	// 40 = 0x28
    NSMutableSet *_clientBundleIDs;	// 48 = 0x30
    NSArray *subscribedPlayerPaths;	// 56 = 0x38
    MRAVOutputDevice *_designatedGroupLeader;	// 64 = 0x40
    MRAVOutputContext *_outputContext;	// 72 = 0x48
    MROrigin *_origin;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_serialQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_workerQueue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 104 = 0x68
    CDUnknownBlockType _connectionStateCallback;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;	// 120 = 0x78
    CDUnknownBlockType _outputDevicesUpdatedCallback;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_outputDevicesUpdatedCallbackQueue;	// 136 = 0x88
    CDUnknownBlockType _outputDevicesRemovedCallback;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_outputDevicesRemovedCallbackQueue;	// 152 = 0x98
    CDUnknownBlockType _volumeCallback;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_volumeCallbackQueue;	// 168 = 0xa8
    CDUnknownBlockType _volumeControlCapabilitiesCallback;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_volumeControlCapabilitiesCallbackQueue;	// 184 = 0xb8
}

+ (id)_resolveReason:(id)arg1 uid:(id)arg2 name:(id)arg3 requestID:(id)arg4;	// IMP=0x00200000000b99ba
+ (void)_createPlayerForClient:(id)arg1 playerPath:(id)arg2 deviceInfo:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b1f53
+ (void)_createPlayerAndWaitForCanBeNowPlaying:(id)arg1 deviceInfo:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b1165
+ (void)_createPlayerAndWaitForConnection:(id)arg1 command:(id)arg2 deviceInfo:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b02f0
+ (void)prewarmApp:(id)arg1 origin:(id)arg2 deviceInfo:(id)arg3;	// IMP=0x00100000000acec3
+ (void)initialize;	// IMP=0x00100000000ac93e
- (void).cxx_destruct;	// IMP=0x00200000000b9fbd
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeControlCapabilitiesCallbackQueue; // @synthesize volumeControlCapabilitiesCallbackQueue=_volumeControlCapabilitiesCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeControlCapabilitiesCallback; // @synthesize volumeControlCapabilitiesCallback=_volumeControlCapabilitiesCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue; // @synthesize volumeCallbackQueue=_volumeCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeCallback; // @synthesize volumeCallback=_volumeCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesRemovedCallbackQueue; // @synthesize outputDevicesRemovedCallbackQueue=_outputDevicesRemovedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesRemovedCallback; // @synthesize outputDevicesRemovedCallback=_outputDevicesRemovedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesUpdatedCallbackQueue; // @synthesize outputDevicesUpdatedCallbackQueue=_outputDevicesUpdatedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesUpdatedCallback; // @synthesize outputDevicesUpdatedCallback=_outputDevicesUpdatedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // @synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionStateCallback; // @synthesize connectionStateCallback=_connectionStateCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) MROrigin *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) MRAVOutputContext *outputContext; // @synthesize outputContext=_outputContext;
@property(retain, nonatomic) MRAVOutputDevice *designatedGroupLeader; // @synthesize designatedGroupLeader=_designatedGroupLeader;
- (void)setSubscribedPlayerPaths:(id)arg1;	// IMP=0x00100000000b9d93
- (id)subscribedPlayerPaths;	// IMP=0x00100000000b9d82
- (void)_onQueue_destroyPlayerPathsForOrigin:(id)arg1;	// IMP=0x00100000000b9a75
- (id)_resolveReason:(id)arg1;	// IMP=0x00100000000b9908
- (void)_maybeForwardOriginToLocalOrigin:(id)arg1;	// IMP=0x00100000000b9570
- (void)commitOutputDeviceToContextIfNeededWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b897b
- (id)outputDeviceForUID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b873e
- (_Bool);	// IMP=0x00100000000b82e7
- (void)verifyGroupLeaderForReason:(id)arg1;	// IMP=0x00100000000b80d1
- (void)cleanUp;	// IMP=0x00100000000b80bd
- (void)clusterController:(id)arg1 clusterTypeDidChange:(unsigned int)arg2;	// IMP=0x00100000000b803d
- (void)anyDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x00100000000b7fc2
- (void)_notifyActiveSessionMaybeWillBeHijackedByNativePlaybackFromOutputContextModification:(id)arg1;	// IMP=0x00100000000b7e4b
- (void)outputContextDidAddLocalDeviceNotification:(id)arg1;	// IMP=0x00100000000b7e39
- (void)outputContexWillAddLocalOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000b7e27
- (void)anyOutputContextDidAddOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000b7d22
- (void)outputContextDataSourceVolumeDidChangeNotification:(id)arg1;	// IMP=0x00100000000b7a62
- (void)outputContextDataSourceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;	// IMP=0x00100000000b77e5
- (void)outputContextDataSourceDidRemoveOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000b694b
- (void)outputContextDataSourceDidAddOutputDeviceNotification:(id)arg1;	// IMP=0x00100000000b67b3
- (void)outputContextDataSourceOutputDevicesDidChangeNotification:(id)arg1;	// IMP=0x00100000000b6655
- (void)registerForNotifications;	// IMP=0x00100000000b6393
- (void)onQueue_registerCustomOriginWithName:(id)arg1 originID:(unsigned int)arg2 deviceInfo:(id)arg3;	// IMP=0x00100000000b6167
- (void)sendClientUpdatesConfigMessage;	// IMP=0x00100000000b6161
- (id)currentClientUpdatesConfigMessage;	// IMP=0x00100000000b6159
- (id)errorForCurrentState;	// IMP=0x00100000000b6151
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;	// IMP=0x00100000000b614b
- (void)setWantsSystemEndpointNotifications:(_Bool)arg1;	// IMP=0x00100000000b6145
- (_Bool)wantsSystemEndpointNotifications;	// IMP=0x00100000000b613d
- (void)setWantsOutputDeviceNotifications:(_Bool)arg1;	// IMP=0x00100000000b6137
- (_Bool)wantsOutputDeviceNotifications;	// IMP=0x00100000000b612f
- (void)setWantsVolumeNotifications:(_Bool)arg1;	// IMP=0x00100000000b6129
- (_Bool)wantsVolumeNotifications;	// IMP=0x00100000000b6121
- (void)setWantsNowPlayingArtworkNotifications:(_Bool)arg1;	// IMP=0x00100000000b611b
- (_Bool)wantsNowPlayingArtworkNotifications;	// IMP=0x00100000000b6113
- (void)setWantsNowPlayingNotifications:(_Bool)arg1;	// IMP=0x00100000000b610d
- (_Bool)wantsNowPlayingNotifications;	// IMP=0x00100000000b6105
- (_Bool)isUsingSystemPairing;	// IMP=0x00100000000b60fd
- (_Bool)isPaired;	// IMP=0x00100000000b60f5
- (void)setDiscoveryOutputDevicesChangedCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b60ef
- (void)setDiscoveryEndpointsChangedCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b60e9
- (void)setDiscoveryMode:(unsigned int)arg1 forConfiguration:(id)arg2;	// IMP=0x00100000000b60e3
- (void)sendCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000b60dd
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000b60d7
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000b60d1
- (id)supportedMessages;	// IMP=0x00100000000b60a3
- (void)removeFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b603b
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000b6035
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000b602f
- (void)unpair;	// IMP=0x00100000000b6029
- (void)disconnect:(id)arg1;	// IMP=0x00100000000b5daf
- (id)_generateDeviceInfoWithDesignatedGroupLeader:(id)arg1 outputContext:(id)arg2;	// IMP=0x00100000000b58c9
- (void)connectWithOptions:(unsigned int)arg1 clientBundleIdentifier:(id)arg2 userInfo:(id)arg3;	// IMP=0x00100000000b52e9
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;	// IMP=0x00100000000b5257
- (void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterAwareDeviceUIDs:(id)arg4 removingClusterAwareDeviceUIDs:(id)arg5 settingClusterAwareDeviceUIDs:(id)arg6 withReplyQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000000b4326
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b420b
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b3f57
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b3e32
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000b3cf5
- (void)setOutputDevicesRemovedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000b3bb8
- (void)setOutputDevicesUpdatedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000b3a7b
- (void)setVolumeControlCapabilitiesCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000b393e
- (void)setVolumeChangedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000b3801
- (void)_handlePlaybackSessionMigrateEndRequest:(id)arg1 error:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b360b
- (void)_handlePlaybackSessionMigrateBeginRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b343f
- (void)_handlePlaybackSessionMigrateRequest:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b311a
- (void)_handlePlaybackSessionRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b2f04
- (void)_handlePlaybackQueueRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b2b2a
- (void)_sendMessageForPlayerPath:(id)arg1 timeout:(double)arg2 reason:(id)arg3 factory:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b27bc
- (void)sendMessageWithType:(unsigned long long)arg1 playerPath:(id)arg2 timeout:(double)arg3 reason:(id)arg4 factory:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000b2590
- (void)_createPlayerAndWaitForCanBeNowPlaying:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b10c7
- (void)_createPlayerAndWaitForConnection:(id)arg1 command:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b00c7
- (id)_createResolvedPlayerPathFromPlayerPath:(id)arg1;	// IMP=0x00100000000afde7
- (void)_sendCommandPreview:(unsigned int)arg1 options:(id)arg2 playerPath:(id)arg3;	// IMP=0x00100000000afb31
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 playerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000af0bf
- (void)setDeviceInfo:(id)arg1;	// IMP=0x00100000000ae598
- (void)_reevaluateDeviceInfo;	// IMP=0x00100000000ae4fe
- (id)uid;	// IMP=0x00100000000ae051
- (void)setConnectionState:(unsigned int)arg1;	// IMP=0x00100000000ade35
- (unsigned int)connectionState;	// IMP=0x00100000000add6e
- (id)deviceInfo;	// IMP=0x00100000000adc50
- (id)customOrigin;	// IMP=0x00100000000adb32
- (long long)port;	// IMP=0x00100000000adb2a
- (id)hostName;	// IMP=0x00100000000adb22
- (id)name;	// IMP=0x00100000000ad9fc
@property(readonly, nonatomic) _Bool containsLocalDevice;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)debugDictionaryRepresentation;	// IMP=0x00100000000ad5f4
- (id)dictionaryRepresentation;	// IMP=0x00100000000ad3fa
- (void)dealloc;	// IMP=0x00100000000ac872
- (id)initWithOutputContext:(id)arg1 designatedGroupLeader:(id)arg2;	// IMP=0x00100000000ac5e8

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
