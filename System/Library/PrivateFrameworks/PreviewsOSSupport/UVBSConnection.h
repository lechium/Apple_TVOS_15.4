//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PreviewsOSSupport/UVBSClientConnection-Protocol.h>
#import <PreviewsOSSupport/UVBSServerConnection-Protocol.h>

@class BSServiceConnection, NSString, UVObjCSingleFireEvent;

@interface UVBSConnection : NSObject <UVBSClientConnection, UVBSServerConnection>
{
    BSServiceConnection *_serviceConnection;	// 8 = 0x8
    UVObjCSingleFireEvent *_invalidationEvent;	// 16 = 0x10
    UVObjCSingleFireEvent *_activationEvent;	// 24 = 0x18
    int _serverPid;	// 32 = 0x20
    int _clientPid;	// 36 = 0x24
}

+ (id)_connectionError:(id)arg1;	// IMP=0x0000000000002c58
+ (id)_machLookupError:(id)arg1;	// IMP=0x0000000000002c33
+ (id)createWithEndpoint:(id)arg1 clientContextBuilder:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000000000026c7
+ (id)createWithMachName:(id)arg1 service:(id)arg2 instance:(id)arg3 clientContextBuilder:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x0000000000002592
- (void).cxx_destruct;	// IMP=0x0000000000002c8f
@property(readonly) int clientPid; // @synthesize clientPid=_clientPid;
@property(readonly) int serverPid; // @synthesize serverPid=_serverPid;
- (id)remoteTarget:(id *)arg1;	// IMP=0x0000000000002b2f
- (id)remoteTarget;	// IMP=0x0000000000002b1b
- (void)activateWithInterface:(id)arg1 targetQueue:(id)arg2 serviceQuality:(id)arg3 interfaceTarget:(id)arg4;	// IMP=0x00000000000027c0
- (void)_didInvalidate;	// IMP=0x000000000000257c
- (void)_didActivate;	// IMP=0x0000000000002566
- (void)onInvalidation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002550
- (void)onActivation:(CDUnknownBlockType)arg1;	// IMP=0x000000000000253a
- (void)invalidate;	// IMP=0x00000000000024f7
- (void)initializeWithClientContext:(id)arg1;	// IMP=0x00000000000024f1
- (id)initWithServiceConnection:(id)arg1 context:(id)arg2;	// IMP=0x000000000000243c
- (void)dealloc;	// IMP=0x000000000000237b
- (id)initWithServiceConnection:(id)arg1;	// IMP=0x00000000000022d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
