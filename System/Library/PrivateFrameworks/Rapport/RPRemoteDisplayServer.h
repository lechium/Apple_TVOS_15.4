//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPAuthenticatable-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplayServer : NSObject <NSSecureCoding, RPAuthenticatable>
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    _Bool _invalidateDone;	// 10 = 0xa
    NSMutableDictionary *_sessions;	// 16 = 0x10
    NSXPCConnection *_xpcCnx;	// 24 = 0x18
    unsigned int _pairSetupFlags;	// 32 = 0x20
    unsigned int _pairVerifyFlags;	// 36 = 0x24
    int _passwordType;	// 40 = 0x28
    int _passwordTypeActual;	// 44 = 0x2c
    unsigned int _internalAuthFlags;	// 48 = 0x30
    NSArray *_allowedMACAddresses;	// 56 = 0x38
    NSArray *_pairSetupACL;	// 64 = 0x40
    NSString *_password;	// 72 = 0x48
    CDUnknownBlockType _authCompletionHandler;	// 80 = 0x50
    CDUnknownBlockType _showPasswordHandler;	// 88 = 0x58
    CDUnknownBlockType _hidePasswordHandler;	// 96 = 0x60
    CDUnknownBlockType _promptForPasswordHandler;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 112 = 0x70
    CDUnknownBlockType _interruptionHandler;	// 120 = 0x78
    CDUnknownBlockType _invalidationHandler;	// 128 = 0x80
    CDUnknownBlockType _sessionStartHandler;	// 136 = 0x88
    CDUnknownBlockType _sessionEndedHandler;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004d7b7
- (void).cxx_destruct;	// IMP=0x000000000004e9f7
@property(readonly, nonatomic) unsigned int internalAuthFlags; // @synthesize internalAuthFlags=_internalAuthFlags;
@property(copy, nonatomic) CDUnknownBlockType sessionEndedHandler; // @synthesize sessionEndedHandler=_sessionEndedHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionStartHandler; // @synthesize sessionStartHandler=_sessionStartHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
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
- (void)remoteDisplayHidePasswordWithFlags:(unsigned int)arg1;	// IMP=0x000000000004e7d2
- (void)remoteDisplayShowPassword:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x000000000004e724
- (void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 sessionID:(id)arg5;	// IMP=0x000000000004e635
- (void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 sessionID:(id)arg4;	// IMP=0x000000000004e565
- (void)remoteDisplaySessionEndedWithID:(id)arg1;	// IMP=0x000000000004e4d8
- (void)remoteDisplayStartServerSessionID:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004e35d
- (void)tryPassword:(id)arg1;	// IMP=0x000000000004e2f4
- (void)_invalidated;	// IMP=0x000000000004e1cc
- (void)invalidate;	// IMP=0x000000000004e0c1
- (void)_interrupted;	// IMP=0x000000000004e035
- (void)_ensureXPCStarted;	// IMP=0x000000000004de24
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;	// IMP=0x000000000004da5d
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004d9ab
- (id)description;	// IMP=0x000000000004d96f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004d90d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004d836
- (id)init;	// IMP=0x000000000004d7bf

@end

