//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDSnapshotFile, NSObject, NSString;
@protocol HMDCameraSnapshotIDSStreamInitiatorDelegate, OS_dispatch_queue;

@interface HMDCameraSnapshotIDSStreamInitiator <IDSServiceDelegate, HMFLogging>
{
    HMDSnapshotFile *_snapshotFile;	// 8 = 0x8
    NSString *_destinationID;	// 16 = 0x10
    NSString *_sendFileIdentifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    id <HMDCameraSnapshotIDSStreamInitiatorDelegate> _delegate;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0000000000b3d478
- (void).cxx_destruct;	// IMP=0x0000000000b3d3d8
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotIDSStreamInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSString *sendFileIdentifier; // @synthesize sendFileIdentifier=_sendFileIdentifier;
@property(retain, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(retain, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000b3d167
- (void)_callFileTransferFailed:(id)arg1;	// IMP=0x0000000000b3d065
- (void)dealloc;	// IMP=0x0000000000b3cf80
- (void)_sendFile:(id)arg1;	// IMP=0x0000000000b3ca17
- (void)sendFile:(id)arg1;	// IMP=0x0000000000b3c966
- (id)logIdentifier;	// IMP=0x0000000000b3c916
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;	// IMP=0x0000000000b3c83c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

