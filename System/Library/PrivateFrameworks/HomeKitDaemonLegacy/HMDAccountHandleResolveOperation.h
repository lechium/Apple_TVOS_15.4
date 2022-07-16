//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/IDSServiceDelegate-Protocol.h>

@class HMDAccountHandle, HMDIDSMessageContext, IDSService, NSMutableArray, NSString;

@interface HMDAccountHandleResolveOperation : HMFOperation <HMFLogging, IDSServiceDelegate>
{
    HMDAccountHandle *_handle;	// 8 = 0x8
    IDSService *_service;	// 16 = 0x10
    HMDIDSMessageContext *_messageContext;	// 24 = 0x18
    NSMutableArray *_resolveBlocks;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000003d9c49
+ (double)timeout;	// IMP=0x00000000003d9b6b
- (void).cxx_destruct;	// IMP=0x00000000003d9889
@property(readonly) NSMutableArray *resolveBlocks; // @synthesize resolveBlocks=_resolveBlocks;
@property(retain, nonatomic) HMDIDSMessageContext *messageContext; // @synthesize messageContext=_messageContext;
@property(readonly) IDSService *service; // @synthesize service=_service;
@property(readonly, copy) HMDAccountHandle *handle; // @synthesize handle=_handle;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000003d91b8
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x00000000003d8f51
- (void)addResolveBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003d8ea0
- (void)main;	// IMP=0x00000000003d8730
- (id)initWithHandle:(id)arg1;	// IMP=0x00000000003d85ad
- (id)initWithQualityOfService:(long long)arg1 timeout:(double)arg2;	// IMP=0x00000000003d8505
- (id)initWithTimeout:(double)arg1;	// IMP=0x00000000003d845d
- (id)init;	// IMP=0x00000000003d83b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

