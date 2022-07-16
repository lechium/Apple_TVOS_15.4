//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraSnapshotIDSRelayReceiverDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCameraSnapshotReceiverProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDCameraSnapshotIDSRelayReceiver, NSString;
@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate;

@interface HMDCameraSnapshotRemoteRelayReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSRelayReceiverDelegate, HMFLogging>
{
    id <HMDCameraSnapshotRemoteRelayReceiverDelegate> _delegate;	// 8 = 0x8
    HMDCameraSnapshotIDSRelayReceiver *_relayReceiver;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0000000000644729
- (void).cxx_destruct;	// IMP=0x0000000000644330
@property(retain, nonatomic) HMDCameraSnapshotIDSRelayReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property(nonatomic) __weak id <HMDCameraSnapshotRemoteRelayReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)relayReceiverIDSSessionDidStart:(id)arg1;	// IMP=0x000000000064429a
- (void)relayReceiverDidAcceptIDSInvitation:(id)arg1;	// IMP=0x0000000000644256
- (void)relayReceiver:(id)arg1 didReceiveData:(id)arg2 error:(id)arg3;	// IMP=0x000000000064402e
- (void)_callDidSaveImageDelegateWithError:(id)arg1;	// IMP=0x0000000000643dc3
- (void)_callGettingImageDelegate:(id)arg1;	// IMP=0x0000000000643b99
- (void)snapShotSendFailed:(id)arg1;	// IMP=0x0000000000643ae8
- (void)_getSnapshot:(unsigned long long)arg1;	// IMP=0x0000000000643697
- (void)getSnapshot:(unsigned long long)arg1;	// IMP=0x000000000064361b
- (id)logIdentifier;	// IMP=0x00000000006435cb
- (void)dealloc;	// IMP=0x00000000006434e6
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8 residentMessageHandler:(id)arg9;	// IMP=0x0000000000643447

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

