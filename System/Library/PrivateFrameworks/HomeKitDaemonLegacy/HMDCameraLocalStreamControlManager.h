//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCameraIDSDeviceConnectionSenderDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraIDSSessionInitiatorDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraStreamControlManagerProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDStreamingManagerDelegate-Protocol.h>

@class HMDCameraLocalStreamSession, HMDCameraMediaConfigGenerator, HMDCameraStreamMetrics, HMDCameraSupportedConfigurationCache, NSNumber, NSString;

@interface HMDCameraLocalStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>
{
    HMDCameraLocalStreamSession *_streamSession;	// 8 = 0x8
    HMDCameraMediaConfigGenerator *_configGenerator;	// 16 = 0x10
    HMDCameraSupportedConfigurationCache *_supportedConfigCache;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000685290
- (void).cxx_destruct;	// IMP=0x0000000000683cf8
@property(readonly) HMDCameraSupportedConfigurationCache *supportedConfigCache; // @synthesize supportedConfigCache=_supportedConfigCache;
@property(readonly) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(retain) HMDCameraLocalStreamSession *streamSession; // @synthesize streamSession=_streamSession;
- (void)_sendUpdatedConfiguration;	// IMP=0x00000000006839bb
- (void)_reconfigureStreams;	// IMP=0x0000000000683867
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;	// IMP=0x000000000068374a
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;	// IMP=0x0000000000683554
- (void)streamingManagerDidNetworkImprove:(id)arg1;	// IMP=0x000000000068335e
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;	// IMP=0x00000000006832c3
- (void)streamingManagerDidStartRelay:(id)arg1;	// IMP=0x00000000006832b1
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1;	// IMP=0x000000000068329f
- (void)streamingManager:(id)arg1 didStartStreamWithError:(id)arg2;	// IMP=0x0000000000683195
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000006830a1
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x0000000000682eb4
- (void)sessionInitiator:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x0000000000682dc0
- (void)sessionInitiator:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x0000000000682be0
- (void)_streamStarted;	// IMP=0x0000000000682b22
- (void)_cleanUpStreamSessionWithError:(id)arg1;	// IMP=0x000000000068299a
- (void)_writeStopConfig:(id)arg1;	// IMP=0x0000000000682459
- (void)_writeSelectConfig:(id)arg1 reconfigure:(_Bool)arg2;	// IMP=0x0000000000682170
- (void)_writeReselectConfig;	// IMP=0x0000000000681ff8
- (void)_writeStartConfig;	// IMP=0x0000000000681e83
- (void)_stopCurrentStreamSessionWithError:(id)arg1;	// IMP=0x0000000000681d15
- (void)stopStreamWithError:(id)arg1;	// IMP=0x0000000000681c64
- (void)_reconfigureStream:(id)arg1;	// IMP=0x0000000000681bb3
- (void)reconfigureStream:(id)arg1;	// IMP=0x0000000000681b02
- (void)_startStreamingManager;	// IMP=0x00000000006814fa
- (id)_calculateMTU;	// IMP=0x0000000000681228
- (void)_startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000006808d2
- (void)_removeServerStreamSession;	// IMP=0x000000000068085b
- (void)_addServerStreamSession;	// IMP=0x00000000006807e4
- (void)startStreamWithRemoteSettings:(id)arg1;	// IMP=0x0000000000680733
- (_Bool)_validateSetupEndPointReadWithWrite;	// IMP=0x000000000068036b
- (void)_handleSetupEndPointRead:(id)arg1;	// IMP=0x000000000067fb51
- (void)_sendSetupEndPointRead;	// IMP=0x000000000067f899
- (void)_writeSetupEndPoint;	// IMP=0x000000000067edfe
- (void)_handleSupportedParameters:(id)arg1;	// IMP=0x000000000067e36f
- (void)_getSupportedConfigurations;	// IMP=0x000000000067dfba
- (void)_negotiateStream;	// IMP=0x000000000067d8fd
- (void)negotiateStream;	// IMP=0x000000000067d88c
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000067d7b0
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x000000000067d734
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x000000000067d66d
@property(readonly, getter=isSendingStream) _Bool sendingStream;
@property(readonly, copy) NSNumber *aspectRatio;
@property(readonly) unsigned long long audioStreamSetting;
@property(readonly, copy) NSNumber *slotIdentifier;
- (void)dealloc;	// IMP=0x000000000067d381
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 supportedConfigCache:(id)arg8 streamSession:(id)arg9;	// IMP=0x000000000067d144
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 localNetworkConfig:(id)arg10 remoteCapabilities:(id)arg11 supportedConfigCache:(id)arg12 streamPreference:(id)arg13;	// IMP=0x000000000067ccc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMDCameraStreamMetrics *streamMetrics;
@property(readonly) Class superclass;

@end
