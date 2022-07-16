//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDCameraSnapshotSessionID, HMFOSTransaction, IDSService, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotIDSStream : HMFObject <IDSServiceDelegate, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMDCameraSnapshotSessionID *_sessionID;	// 16 = 0x10
    IDSService *_idsProxyService;	// 24 = 0x18
    HMFOSTransaction *_snapshotStreamTransaction;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000005df045
- (void).cxx_destruct;	// IMP=0x00000000005deff2
@property(retain, nonatomic) HMFOSTransaction *snapshotStreamTransaction; // @synthesize snapshotStreamTransaction=_snapshotStreamTransaction;
@property(readonly, nonatomic) IDSService *idsProxyService; // @synthesize idsProxyService=_idsProxyService;
@property(readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)dealloc;	// IMP=0x00000000005dee7c
- (id)logIdentifier;	// IMP=0x00000000005dee2c
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000005dec8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
