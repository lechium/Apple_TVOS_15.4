//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSMutableArray, NSString, RPCompanionLinkClient;

@interface HMDRapportDeviceClientWrapper : NSObject <HMFLogging>
{
    RPCompanionLinkClient *_client;	// 8 = 0x8
    long long _activateState;	// 16 = 0x10
    NSMutableArray *_requestQueue;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000928a26
- (void).cxx_destruct;	// IMP=0x00000000009288c3
- (void)_completeQueuedRequestsWithError:(id)arg1;	// IMP=0x00000000009285c2
- (void)_queueRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000092831d
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000009280ae
- (void)invalidate;	// IMP=0x0000000000927fce
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000927c69
- (id)initWithClient:(id)arg1;	// IMP=0x0000000000927be4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

