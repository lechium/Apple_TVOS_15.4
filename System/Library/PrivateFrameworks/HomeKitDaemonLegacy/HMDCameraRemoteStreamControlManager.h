//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCameraIDSDeviceConnectionReceiverDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraIDSDeviceConnectionSenderDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraIDSSessionReceiverDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraStreamControlManagerProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDStreamingManagerDelegate-Protocol.h>

@class HMDCameraMediaConfigGenerator, HMDCameraRemoteStreamSession, HMDCameraResidentMessageHandler, HMDCameraStreamMetrics, NSNumber, NSString, NSUUID;

@interface HMDCameraRemoteStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>
{
    NSUUID *_profileUniqueIdentifier;	// 8 = 0x8
    HMDCameraResidentMessageHandler *_residentMessageHandler;	// 16 = 0x10
    HMDCameraMediaConfigGenerator *_configGenerator;	// 24 = 0x18
    HMDCameraRemoteStreamSession *_streamSession;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000002ae48a
- (void).cxx_destruct;	// IMP=0x00000000002ad86a
@property(retain) HMDCameraRemoteStreamSession *streamSession; // @synthesize streamSession=_streamSession;
@property(readonly) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(readonly, copy, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
- (void)_sendUpdatedConfiguration;	// IMP=0x00000000002ad4ec
- (void)_dispatchReconfigureToResident:(id)arg1;	// IMP=0x00000000002ad2d0
- (void)_reconfigureStreams;	// IMP=0x00000000002ad142
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;	// IMP=0x00000000002ad025
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;	// IMP=0x00000000002ace2f
- (void)streamingManagerDidNetworkImprove:(id)arg1;	// IMP=0x00000000002acc39
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;	// IMP=0x00000000002acaef
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1;	// IMP=0x00000000002acadd
- (void)streamingManager:(id)arg1 didStartStreamWithError:(id)arg2;	// IMP=0x00000000002ac8cf
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000002ac7db
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000002ac6c7
- (void)deviceConnectionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000002ac5d3
- (void)deviceConnectionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000002ac5be
- (void)sessionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x00000000002ac4ca
- (void)sessionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x00000000002ac4b5
- (void)_cleanUpStreamSessionWithError:(id)arg1;	// IMP=0x00000000002ac309
- (void)_sendStopMessageToResident;	// IMP=0x00000000002ac10a
- (void)_stopCurrentStreamSessionWithError:(id)arg1;	// IMP=0x00000000002abf89
- (void)stopStreamWithError:(id)arg1;	// IMP=0x00000000002abed8
- (void)_setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000002abda0
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x00000000002abcef
- (void)_reconfigureStream:(id)arg1;	// IMP=0x00000000002abc3e
- (void)reconfigureStream:(id)arg1;	// IMP=0x00000000002abb8d
- (void)_streamStarted;	// IMP=0x00000000002aba9b
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg1 audioSSRC:(id)arg2;	// IMP=0x00000000002ab568
- (void)_startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000002aaea5
- (void)startStreamWithRemoteSettings:(id)arg1;	// IMP=0x00000000002aadf4
- (void)_relaySessionStarted:(id)arg1;	// IMP=0x00000000002aab9c
- (void)_idsSessionCreatedAndConfigNegotiated;	// IMP=0x00000000002aa91c
- (void)_setParametersSelected:(id)arg1;	// IMP=0x00000000002aa033
- (void)_negotiateStream;	// IMP=0x00000000002a9c1f
- (void)negotiateStream;	// IMP=0x00000000002a9bae
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a9ad2
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x00000000002a9a56
@property(readonly, copy) NSNumber *aspectRatio;
@property(readonly) unsigned long long audioStreamSetting;
@property(readonly, copy) NSNumber *slotIdentifier;
- (void)dealloc;	// IMP=0x00000000002a97cd
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 profileUniqueIdentifier:(id)arg8 residentMessageHandler:(id)arg9 streamSession:(id)arg10;	// IMP=0x00000000002a9555
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 profileUniqueIdentifier:(id)arg11 residentMessageHandler:(id)arg12 remoteAccessDevice:(id)arg13 streamPreference:(id)arg14;	// IMP=0x00000000002a9154

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMDCameraStreamMetrics *streamMetrics;
@property(readonly) Class superclass;

@end

