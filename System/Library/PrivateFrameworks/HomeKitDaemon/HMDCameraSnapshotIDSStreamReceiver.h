//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>
#import <HomeKitDaemon/IDSSessionDelegate-Protocol.h>

@class HMDSnapshotFile, IDSSession, NSObject, NSString;
@protocol HMDCameraSnapshotIDSStreamReceiverDelegate, OS_dispatch_queue;

@interface HMDCameraSnapshotIDSStreamReceiver <IDSServiceDelegate, IDSSessionDelegate, HMFLogging>
{
    HMDSnapshotFile *_snapshotFile;	// 8 = 0x8
    IDSSession *_idsSession;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    id <HMDCameraSnapshotIDSStreamReceiverDelegate> _delegate;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000089b156
- (void).cxx_destruct;	// IMP=0x000000000089b0e4
@property(nonatomic) __weak id <HMDCameraSnapshotIDSStreamReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property(readonly, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000000089ad99
- (void)_callFileReceived:(id)arg1;	// IMP=0x000000000089ac97
- (void)dealloc;	// IMP=0x000000000089abb2
- (id)logIdentifier;	// IMP=0x000000000089ab62
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 snapshotFile:(id)arg3 delegate:(id)arg4 queue:(id)arg5;	// IMP=0x000000000089aa88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

