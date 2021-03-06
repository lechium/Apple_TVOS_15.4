//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPAuthenticatable-Protocol.h>
#import <Rapport/RPMessageable-Protocol.h>
#import <Rapport/RPRemoteDisplayXPCClientInterface-Protocol.h>

@class CUBonjourDevice, NSArray, NSMutableDictionary, NSNumber, NSString, NSXPCConnection, RPRemoteDisplayDevice, RPRemoteDisplayServer;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplaySession : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface, RPAuthenticatable, RPMessageable>
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableDictionary *_eventRegistrations;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    NSMutableDictionary *_requestRegistrations;	// 32 = 0x20
    _Bool _needsAWDL;	// 40 = 0x28
    unsigned int _pairSetupFlags;	// 44 = 0x2c
    unsigned int _pairVerifyFlags;	// 48 = 0x30
    int _passwordType;	// 52 = 0x34
    int _passwordTypeActual;	// 56 = 0x38
    unsigned int _internalAuthFlags;	// 60 = 0x3c
    NSArray *_allowedMACAddresses;	// 64 = 0x40
    NSArray *_pairSetupACL;	// 72 = 0x48
    NSString *_password;	// 80 = 0x50
    CDUnknownBlockType _authCompletionHandler;	// 88 = 0x58
    CDUnknownBlockType _showPasswordHandler;	// 96 = 0x60
    CDUnknownBlockType _hidePasswordHandler;	// 104 = 0x68
    CDUnknownBlockType _promptForPasswordHandler;	// 112 = 0x70
    NSString *_serviceType;	// 120 = 0x78
    unsigned long long _controlFlags;	// 128 = 0x80
    RPRemoteDisplayDevice *_destinationDevice;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 144 = 0x90
    CDUnknownBlockType _errorHandler;	// 152 = 0x98
    CDUnknownBlockType _interruptionHandler;	// 160 = 0xa0
    CDUnknownBlockType _invalidationHandler;	// 168 = 0xa8
    CUBonjourDevice *_bonjourDevice;	// 176 = 0xb0
    RPRemoteDisplayDevice *_daemonDevice;	// 184 = 0xb8
    RPRemoteDisplayServer *_server;	// 192 = 0xc0
    NSNumber *_sessionID;	// 200 = 0xc8
    NSXPCConnection *_xpcCnx;	// 208 = 0xd0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004eaac
- (void).cxx_destruct;	// IMP=0x00000000000512b7
@property(retain, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(copy, nonatomic) NSNumber *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) RPRemoteDisplayServer *server; // @synthesize server=_server;
@property(nonatomic) _Bool needsAWDL; // @synthesize needsAWDL=_needsAWDL;
@property(readonly, nonatomic) unsigned int internalAuthFlags; // @synthesize internalAuthFlags=_internalAuthFlags;
@property(retain, nonatomic) RPRemoteDisplayDevice *daemonDevice; // @synthesize daemonDevice=_daemonDevice;
@property(retain, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) RPRemoteDisplayDevice *destinationDevice; // @synthesize destinationDevice=_destinationDevice;
@property(nonatomic) unsigned long long controlFlags; // @synthesize controlFlags=_controlFlags;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) CDUnknownBlockType promptForPasswordHandler; // @synthesize promptForPasswordHandler=_promptForPasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType hidePasswordHandler; // @synthesize hidePasswordHandler=_hidePasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType showPasswordHandler; // @synthesize showPasswordHandler=_showPasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authCompletionHandler; // @synthesize authCompletionHandler=_authCompletionHandler;
@property(readonly, nonatomic) int passwordTypeActual; // @synthesize passwordTypeActual=_passwordTypeActual;
@property(nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
@property(retain, nonatomic) NSArray *pairSetupACL; // @synthesize pairSetupACL=_pairSetupACL;
@property(retain, nonatomic) NSArray *allowedMACAddresses; // @synthesize allowedMACAddresses=_allowedMACAddresses;
- (void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000050e1c
- (void)_sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000050a6d
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000050884
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000050855
- (void)deregisterRequestID:(id)arg1;	// IMP=0x0000000000050751
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005056f
- (void)remoteDisplaySessionError:(id)arg1;	// IMP=0x000000000005051a
- (void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;	// IMP=0x000000000005034c
- (void)_sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000004ffe5
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000004fdfc
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004fdcd
- (void)deregisterEventID:(id)arg1;	// IMP=0x000000000004fcc9
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004fae7
- (void)remoteDisplayAuthCompleted:(id)arg1;	// IMP=0x000000000004fa3f
- (void)remoteDisplayPromptForPasswordWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x000000000004f997
- (void)tryPassword:(id)arg1;	// IMP=0x000000000004f8b1
- (void)_invalidated;	// IMP=0x000000000004f77d
- (void)invalidate;	// IMP=0x000000000004f5e2
- (void)_interrupted;	// IMP=0x000000000004f550
- (void)_ensureXPCStarted;	// IMP=0x000000000004f318
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;	// IMP=0x000000000004eeed
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ee38
- (id)description;	// IMP=0x000000000004ed93
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004eccb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004eb27
- (id)init;	// IMP=0x000000000004eab4

@end

