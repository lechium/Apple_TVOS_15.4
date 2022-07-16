//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/IDSServiceDelegate-Protocol.h>

@class HMFOSTransaction, IDSService, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotIDSRelay : HMFObject <HMFLogging, IDSServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSUUID *_sessionID;	// 16 = 0x10
    IDSService *_idsStreamService;	// 24 = 0x18
    HMFOSTransaction *_snapshotRelayTransaction;	// 32 = 0x20
    NSString *_logIdentifier;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00000000006a8330
- (void).cxx_destruct;	// IMP=0x00000000006a82cc
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMFOSTransaction *snapshotRelayTransaction; // @synthesize snapshotRelayTransaction=_snapshotRelayTransaction;
@property(readonly) IDSService *idsStreamService; // @synthesize idsStreamService=_idsStreamService;
@property(readonly) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)dealloc;	// IMP=0x00000000006a8140
- (id)initWithSessionID:(id)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3;	// IMP=0x00000000006a7fb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

