//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDLogicalDeviceContext, CKDXPCConnection;
@protocol CKXPCLogicalDeviceScopedClient;

@interface CKDLogicalDeviceScopedClientProxy : NSObject
{
    _Bool _hasBeenThrottled;	// 8 = 0x8
    int _pid;	// 12 = 0xc
    CKDXPCConnection *_clientConnection;	// 16 = 0x10
    id <CKXPCLogicalDeviceScopedClient> _logicalDeviceScopedClientProxyCreator;	// 24 = 0x18
    CKDLogicalDeviceContext *_deviceContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001c390c
@property(nonatomic) __weak CKDLogicalDeviceContext *deviceContext; // @synthesize deviceContext=_deviceContext;
@property(retain, nonatomic) id <CKXPCLogicalDeviceScopedClient> logicalDeviceScopedClientProxyCreator; // @synthesize logicalDeviceScopedClientProxyCreator=_logicalDeviceScopedClientProxyCreator;
@property(nonatomic) __weak CKDXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property _Bool hasBeenThrottled; // @synthesize hasBeenThrottled=_hasBeenThrottled;
- (void)addThrottle:(id)arg1;	// IMP=0x00000000001c376a
- (void)resetThrottles;	// IMP=0x00000000001c367b
- (id)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000001c31a3
- (id)openFileWithOpenInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c2d15
- (void)_getLogicalDeviceScopedClientProxyCreatorSynchronous:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c2870
- (void)getLogicalDeviceScopedClientProxySynchronous:(_Bool)arg1 errorHandler:(CDUnknownBlockType)arg2 clientProxyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c270e
- (void)tearDown;	// IMP=0x00000000001c2708
- (_Bool)processIsAttached;	// IMP=0x00000000001c26ef
- (id)initWithClientConnection:(id)arg1 deviceContext:(id)arg2;	// IMP=0x00000000001c2621
- (id)description;	// IMP=0x00000000001c260f
- (id)CKPropertiesDescription;	// IMP=0x00000000001c2574

@end

