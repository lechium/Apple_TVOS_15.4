//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class AFDeviceContext, AFInstanceContext, NSString, NSXPCConnection, _AFDeviceContextServiceDelegateProxy;
@protocol AFDeviceContextConnectionDelegate, OS_dispatch_queue;

@interface AFDeviceContextConnection : NSObject <AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    _AFDeviceContextServiceDelegateProxy *_serviceDelegateProxy;	// 24 = 0x18
    id <AFDeviceContextConnectionDelegate> _delegate;	// 32 = 0x20
    NSXPCConnection *_xpcConnection;	// 40 = 0x28
    _Bool _isInvalid;	// 48 = 0x30
    _Bool _isUpdatingLocalDeviceContext;	// 49 = 0x31
    AFDeviceContext *_localDeviceContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000145df2
- (void)_updateLocalDeviceContext:(id)arg1;	// IMP=0x0000000000145b18
- (void)_endUpdateLocalDeviceContext;	// IMP=0x000000000014591a
- (void)_beginUpdateLocalDeviceContext;	// IMP=0x000000000014558e
- (void)_fetchLocalDeviceContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001451c1
- (id)_remoteServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000014505f
- (void)_invalidate;	// IMP=0x0000000000144f58
- (void)_clearXPCConnection;	// IMP=0x0000000000144e79
- (void)_handleXPCConnectionInterruption;	// IMP=0x0000000000144dba
- (void)_handleXPCConnectionInvalidation;	// IMP=0x0000000000144cfb
- (id)_xpcConnection;	// IMP=0x00000000001449a1
- (void)invalidate;	// IMP=0x0000000000144940
- (void)donateSerializedContextMapByPrivacyClass:(id)arg1 withMetadataMap:(id)arg2 forType:(id)arg3 pushToRemote:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001446df
- (void)endUpdateLocalDeviceContext;	// IMP=0x000000000014467e
- (void)beginUpdateLocalDeviceContext;	// IMP=0x000000000014461d
- (void)getLocalDeviceContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000144522
- (id)initWithQueue:(id)arg1 instanceContext:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000014436e
- (void)dealloc;	// IMP=0x00000000001442aa
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
