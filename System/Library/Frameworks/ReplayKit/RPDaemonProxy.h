//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReplayKit/NSXPCConnectionDelegate-Protocol.h>
#import <ReplayKit/RPClientProtocol-Protocol.h>
#import <ReplayKit/RPDaemonProtocol-Protocol.h>

@class NSString, NSURL, NSXPCConnection;

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol>
{
    NSURL *_broadcastURL;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
}

+ (id)daemonProxy;	// IMP=0x000000000000d8a4
- (void).cxx_destruct;	// IMP=0x000000000000e8bf
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSURL *broadcastURL; // @synthesize broadcastURL=_broadcastURL;
- (oneway void)resumeInAppClipWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e886
- (oneway void)exportClipToURL:(id)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e876
- (oneway void)stopClipBufferingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e866
- (oneway void)startClipBufferingWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000e852
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x000000000000e618
- (oneway void)recordingTimerDidUpdate:(id)arg1;	// IMP=0x000000000000e573
- (oneway void)recordingLockInterrupted:(id)arg1;	// IMP=0x000000000000e4ce
- (oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;	// IMP=0x000000000000e3d2
- (oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;	// IMP=0x000000000000e2c3
- (oneway void)updateBroadcastURL:(id)arg1;	// IMP=0x000000000000e181
- (oneway void)updateBroadcastServiceInfo:(id)arg1;	// IMP=0x000000000000e0dc
- (oneway void)recordingDidPause;	// IMP=0x000000000000e051
- (oneway void)shouldResumeSessionType:(id)arg1;	// IMP=0x000000000000dfac
- (oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;	// IMP=0x000000000000dee7
- (oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1;	// IMP=0x000000000000de42
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;	// IMP=0x000000000000de3c
- (oneway void)reportCameraUsage:(long long)arg1;	// IMP=0x000000000000de36
- (oneway void)saveClipToCameraRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000de26
- (oneway void)saveVideoToCameraRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000de16
- (oneway void)saveVideo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000de06
- (oneway void)macApplicationDidBecomeActiveWithContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ddf2
- (oneway void)macApplicationDidResignActive;	// IMP=0x000000000000ddec
- (oneway void)consumeSandboxExtension:(id)arg1 processNewConnection:(_Bool)arg2;	// IMP=0x000000000000dc9b
- (oneway void)getSystemBroadcastExtensionInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dc89
- (oneway void)stopSystemRecordingWithURLHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dc77
- (oneway void)stopSystemRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dc67
- (oneway void)startSystemRecordingWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000dc57
- (oneway void)resumeInAppBroadcastWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dc43
- (oneway void)pauseInAppBroadcast;	// IMP=0x000000000000dc3d
- (oneway void)stopInAppBroadcastWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dc2d
- (oneway void)startInAppBroadcastWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 listenerEndpoint:(id)arg5 withHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000000dc18
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000dc07
- (oneway void)resumeInAppCaptureWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dbf3
- (oneway void)pauseInAppCapture;	// IMP=0x000000000000dbed
- (oneway void)stopInAppCaptureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dbdd
- (oneway void)startInAppCaptureWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000dbc9
- (oneway void)resumeInAppRecordingWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dbb5
- (oneway void)pauseInAppRecording;	// IMP=0x000000000000dbaf
- (oneway void)discardInAppRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dba4
- (oneway void)stopInAppRecordingWithUrl:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000db94
- (oneway void)stopInAppRecordingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000db82
- (oneway void)startInAppRecordingWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(_Bool)arg3 cameraEnabled:(_Bool)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000db6e
- (oneway void)stopAllActiveClients;	// IMP=0x000000000000db68
- (oneway void)stopCurrentActiveSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000db62
- (id)issueSandboxExtensionForClientFileWrite:(id)arg1;	// IMP=0x000000000000d9be
- (void)issueSandboxExtensionForMainBundleRead;	// IMP=0x000000000000d928
- (id)init;	// IMP=0x000000000000d8f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
