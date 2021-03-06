//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMDeviceSetupSessionDelegate-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/TROperationHandler-Protocol.h>

@class HMDeviceSetupSession, NSString;

@interface HMDeviceSetupOperationHandler : NSObject <HMDeviceSetupSessionDelegate, HMFLogging, TROperationHandler>
{
    HMDeviceSetupSession *_setupSession;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x000000000003f31c
- (void).cxx_destruct;	// IMP=0x000000000003f0e5
@property(readonly, nonatomic) HMDeviceSetupSession *setupSession; // @synthesize setupSession=_setupSession;
- (id)logIdentifier;	// IMP=0x000000000003f061
- (void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ef42
- (void)setupSession:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x000000000003ef3c
- (void)_handleReceivedRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003eb7d
- (void)registerMessageHandlersForSession:(id)arg1;	// IMP=0x000000000003e9c0
- (void)dealloc;	// IMP=0x000000000003e955
- (id)init;	// IMP=0x000000000003e8e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

