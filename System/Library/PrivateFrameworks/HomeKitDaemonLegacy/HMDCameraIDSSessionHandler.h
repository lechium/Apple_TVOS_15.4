//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDCameraRemoteStreamProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/IDSServiceDelegate-Protocol.h>

@class HMDCameraStreamSessionID, IDSService, IDSSession, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraIDSSessionHandler : HMFObject <HMFLogging, IDSServiceDelegate, HMDCameraRemoteStreamProtocol>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMDCameraStreamSessionID *_sessionID;	// 16 = 0x10
    IDSService *_idsStreamService;	// 24 = 0x18
    IDSSession *_idsSession;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0000000000644af4
- (void).cxx_destruct;	// IMP=0x0000000000644aa1
@property(retain, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property(readonly, nonatomic) IDSService *idsStreamService; // @synthesize idsStreamService=_idsStreamService;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x00000000006449f9
- (void)startKeepAlive;	// IMP=0x00000000006449f3
- (void)dealloc;	// IMP=0x00000000006448da
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000644790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

