//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCameraIDSDeviceConnectionSenderDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraIDSSessionInitiatorDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraStreamControlManagerProtocol-Protocol.h>
#import <HomeKitDaemon/HMDStreamingManagerDelegate-Protocol.h>

@class HMDCameraLocalStreamSession, HMDCameraMediaConfigGenerator, HMDCameraStreamMetrics, HMDCameraSupportedConfigurationCache, NSNumber, NSString;

@interface HMDCameraLocalStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>
{
    HMDCameraLocalStreamSession *_streamSession;	// 8 = 0x8
    HMDCameraMediaConfigGenerator *_configGenerator;	// 16 = 0x10
    HMDCameraSupportedConfigurationCache *_supportedConfigCache;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000700dde
- (void).cxx_destruct;	// IMP=0x00000000006ff846
@property(readonly) HMDCameraSupportedConfigurationCache *supportedConfigCache; // @synthesize supportedConfigCache=_supportedConfigCache;
@property(readonly) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(retain) HMDCameraLocalStreamSession *streamSession; // @synthesize streamSession=_streamSession;
- (void)_sendUpdatedConfiguration;	// IMP=0x00000000006ff509
- (void)_reconfigureStreams;	// IMP=0x00000000006ff3b5
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;	// IMP=0x00000000006ff298
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;	// IMP=0x00000000006ff0a2
- (void)streamingManagerDidNetworkImprove:(id)arg1;	// IMP=0x00000000006feeac
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;	// IMP=0x00000000006fee11
- (void)streamingManagerDidStartRelay:(id)arg1;	// IMP=0x00000000006fedff
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1;	// IMP=0x00000000006feded
- (void)streamingManager:(id)arg1 didStartStreamWithError:(id)arg2;	// IMP=0x00000000006fece3
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000006febef
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000006fea02
- (void)sessionInitiator:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000006fe90e
- (void)sessionInitiator:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000006fe72e
- (void)_streamStarted;	// IMP=0x00000000006fe670
- (void)_cleanUpStreamSessionWithError:(id)arg1;	// IMP=0x00000000006fe4e8
- (void)_writeStopConfig:(id)arg1;	// IMP=0x00000000006fdfa7
- (void)_writeSelectConfig:(id)arg1 reconfigure:(_Bool)arg2;	// IMP=0x00000000006fdcbe
- (void)_writeReselectConfig;	// IMP=0x00000000006fdb46
- (void)_writeStartConfig;	// IMP=0x00000000006fd9d1
- (void)_stopCurrentStreamSessionWithError:(id)arg1;	// IMP=0x00000000006fd863
- (void)stopStreamWithError:(id)arg1;	// IMP=0x00000000006fd7b2
- (void)_reconfigureStream:(id)arg1;	// IMP=0x00000000006fd701
- (void)reconfigureStream:(id)arg1;	// IMP=0x00000000006fd650
- (void)_startStreamingManager;	// IMP=0x00000000006fd048
- (id)_calculateMTU;	// IMP=0x00000000006fcd76
- (void)_startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000006fc420
- (void)_removeServerStreamSession;	// IMP=0x00000000006fc3a9
- (void)_addServerStreamSession;	// IMP=0x00000000006fc332
- (void)startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000006fc281
- (_Bool)_validateSetupEndPointReadWithWrite;	// IMP=0x00000000006fbeb9
- (void)_handleSetupEndPointRead:(id)arg1;	// IMP=0x00000000006fb69f
- (void)_sendSetupEndPointRead;	// IMP=0x00000000006fb3e7
- (void)_writeSetupEndPoint;	// IMP=0x00000000006fa94c
- (void)_handleSupportedParameters:(id)arg1;	// IMP=0x00000000006f9ebd
- (void)_getSupportedConfigurations;	// IMP=0x00000000006f9b08
- (void)_negotiateStream;	// IMP=0x00000000006f944b
- (void)negotiateStream;	// IMP=0x00000000006f93da
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000006f92fe
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x00000000006f9282
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000006f91bb
@property(readonly, getter=isSendingStream) _Bool sendingStream;
@property(readonly, copy) NSNumber *aspectRatio;
@property(readonly) unsigned long long audioStreamSetting;
@property(readonly, copy) NSNumber *slotIdentifier;
- (void)dealloc;	// IMP=0x00000000006f8ecf
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 supportedConfigCache:(id)arg8 streamSession:(id)arg9;	// IMP=0x00000000006f8c92
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 localNetworkConfig:(id)arg10 remoteCapabilities:(id)arg11 supportedConfigCache:(id)arg12 streamPreference:(id)arg13;	// IMP=0x00000000006f8810

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMDCameraStreamMetrics *streamMetrics;
@property(readonly) Class superclass;

@end

