//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>
#import <Sharing/SFXPCInterface-Protocol.h>

@class CUAppleIDClient, NSData, NSDictionary, NSMutableDictionary, NSString, NSUUID, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface SFService : NSObject <NSSecureCoding, SFXPCInterface>
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _activateInProgress;	// 9 = 0x9
    _Bool _activateCompleted;	// 10 = 0xa
    _Bool _invalidateCalled;	// 11 = 0xb
    _Bool _invalidateDone;	// 12 = 0xc
    NSMutableDictionary *_requestQueue;	// 16 = 0x10
    NSMutableDictionary *_sessions;	// 24 = 0x18
    struct LogCategory *_ucatCore;	// 32 = 0x20
    struct LogCategory *_ucatCrypto;	// 40 = 0x28
    CDUnknownBlockType _pairSetupCompletion;	// 48 = 0x30
    _Bool _pairSetupEnded;	// 56 = 0x38
    unsigned int _pairSetupFlags;	// 60 = 0x3c
    struct PairingSessionPrivate *_pairSetupSession;	// 64 = 0x40
    unsigned int _pairSetupXID;	// 72 = 0x48
    NSXPCConnection *_xpcCnx;	// 80 = 0x50
    unsigned char _deviceActionType;	// 88 = 0x58
    _Bool _duetSync;	// 89 = 0x59
    _Bool _needsAWDL;	// 90 = 0x5a
    _Bool _needsKeyboard;	// 91 = 0x5b
    _Bool _needsSetup;	// 92 = 0x5c
    _Bool _overrideScreenOff;	// 93 = 0x5d
    _Bool _pairSetupDisabled;	// 94 = 0x5e
    _Bool _hasProblem;	// 95 = 0x5f
    _Bool _supportsAirPlayReceiver;	// 96 = 0x60
    _Bool _wakeDevice;	// 97 = 0x61
    _Bool _autoUnlockEnabled;	// 98 = 0x62
    _Bool _autoUnlockWatch;	// 99 = 0x63
    unsigned char _deviceClassCode;	// 100 = 0x64
    unsigned char _deviceColorCode;	// 101 = 0x65
    unsigned char _deviceModelCode;	// 102 = 0x66
    unsigned char _serviceType;	// 103 = 0x67
    _Bool _touchRemoteEnabled;	// 104 = 0x68
    _Bool _watchLocked;	// 105 = 0x69
    _Bool _wifiP2P;	// 106 = 0x6a
    unsigned int _pinType;	// 108 = 0x6c
    unsigned int _sessionFlags;	// 112 = 0x70
    long long _advertiseRate;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 128 = 0x80
    NSString *_fixedPIN;	// 136 = 0x88
    NSString *_identifier;	// 144 = 0x90
    NSString *_label;	// 152 = 0x98
    NSDictionary *_pairSetupACL;	// 160 = 0xa0
    NSDictionary *_pairVerifyACL;	// 168 = 0xa8
    NSString *_myAppleID;	// 176 = 0xb0
    CUAppleIDClient *_myAppleIDInfoClient;	// 184 = 0xb8
    NSString *_peerAppleID;	// 192 = 0xc0
    CDUnknownBlockType _interruptionHandler;	// 200 = 0xc8
    CDUnknownBlockType _invalidationHandler;	// 208 = 0xd0
    CDUnknownBlockType _showPINHandlerEx;	// 216 = 0xd8
    CDUnknownBlockType _showPINHandler;	// 224 = 0xe0
    CDUnknownBlockType _hidePINHandler;	// 232 = 0xe8
    CDUnknownBlockType _promptForPINHandler;	// 240 = 0xf0
    CDUnknownBlockType _receivedObjectHandler;	// 248 = 0xf8
    CDUnknownBlockType _receivedRequestHandler;	// 256 = 0x100
    CDUnknownBlockType _sessionStartedHandler;	// 264 = 0x108
    CDUnknownBlockType _sessionEndedHandler;	// 272 = 0x110
    CDUnknownBlockType _sessionSecuredHandler;	// 280 = 0x118
    CDUnknownBlockType _peerDisconnectedHandler;	// 288 = 0x120
    CDUnknownBlockType _pairSetupCompletionHandler;	// 296 = 0x128
    NSData *_targetAuthTag;	// 304 = 0x130
    CDUnknownBlockType _errorHandler;	// 312 = 0x138
    CDUnknownBlockType _eventMessageHandler;	// 320 = 0x140
    CDUnknownBlockType _requestMessageHandler;	// 328 = 0x148
    NSData *_authTagOverride;	// 336 = 0x150
    unsigned long long _problemFlags;	// 344 = 0x158
    CDUnknownBlockType _receivedFramePeerHandler;	// 352 = 0x160
    NSString *_requestSSID;	// 360 = 0x168
    CDUnknownBlockType _responseMessageInternalHandler;	// 368 = 0x170
    CDUnknownBlockType _sendFramePeerHandler;	// 376 = 0x178
    NSUUID *_serviceUUID;	// 384 = 0x180
    NSXPCListenerEndpoint *_testListenerEndpoint;	// 392 = 0x188
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f7770
- (void).cxx_destruct;	// IMP=0x00000000000fcd5e
@property(nonatomic) _Bool wifiP2P; // @synthesize wifiP2P=_wifiP2P;
@property(nonatomic) _Bool watchLocked; // @synthesize watchLocked=_watchLocked;
@property(nonatomic) _Bool touchRemoteEnabled; // @synthesize touchRemoteEnabled=_touchRemoteEnabled;
@property(retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;
@property(copy, nonatomic) NSUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(nonatomic) unsigned char serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) CDUnknownBlockType sendFramePeerHandler; // @synthesize sendFramePeerHandler=_sendFramePeerHandler;
@property(copy, nonatomic) CDUnknownBlockType responseMessageInternalHandler; // @synthesize responseMessageInternalHandler=_responseMessageInternalHandler;
@property(copy, nonatomic) NSString *requestSSID; // @synthesize requestSSID=_requestSSID;
@property(copy, nonatomic) CDUnknownBlockType receivedFramePeerHandler; // @synthesize receivedFramePeerHandler=_receivedFramePeerHandler;
@property(nonatomic) unsigned long long problemFlags; // @synthesize problemFlags=_problemFlags;
@property(nonatomic) unsigned char deviceModelCode; // @synthesize deviceModelCode=_deviceModelCode;
@property(nonatomic) unsigned char deviceColorCode; // @synthesize deviceColorCode=_deviceColorCode;
@property(nonatomic) unsigned char deviceClassCode; // @synthesize deviceClassCode=_deviceClassCode;
@property(nonatomic) _Bool autoUnlockWatch; // @synthesize autoUnlockWatch=_autoUnlockWatch;
@property(nonatomic) _Bool autoUnlockEnabled; // @synthesize autoUnlockEnabled=_autoUnlockEnabled;
@property(copy, nonatomic) NSData *authTagOverride; // @synthesize authTagOverride=_authTagOverride;
@property(nonatomic) _Bool wakeDevice; // @synthesize wakeDevice=_wakeDevice;
@property(nonatomic) _Bool supportsAirPlayReceiver; // @synthesize supportsAirPlayReceiver=_supportsAirPlayReceiver;
@property(copy, nonatomic) CDUnknownBlockType requestMessageHandler; // @synthesize requestMessageHandler=_requestMessageHandler;
@property(nonatomic) _Bool hasProblem; // @synthesize hasProblem=_hasProblem;
@property(copy, nonatomic) CDUnknownBlockType eventMessageHandler; // @synthesize eventMessageHandler=_eventMessageHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSData *targetAuthTag; // @synthesize targetAuthTag=_targetAuthTag;
@property(copy, nonatomic) CDUnknownBlockType pairSetupCompletionHandler; // @synthesize pairSetupCompletionHandler=_pairSetupCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType peerDisconnectedHandler; // @synthesize peerDisconnectedHandler=_peerDisconnectedHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionSecuredHandler; // @synthesize sessionSecuredHandler=_sessionSecuredHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionEndedHandler; // @synthesize sessionEndedHandler=_sessionEndedHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionStartedHandler; // @synthesize sessionStartedHandler=_sessionStartedHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedRequestHandler; // @synthesize receivedRequestHandler=_receivedRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedObjectHandler; // @synthesize receivedObjectHandler=_receivedObjectHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) CDUnknownBlockType hidePINHandler; // @synthesize hidePINHandler=_hidePINHandler;
@property(copy, nonatomic) CDUnknownBlockType showPINHandler; // @synthesize showPINHandler=_showPINHandler;
@property(copy, nonatomic) CDUnknownBlockType showPINHandlerEx; // @synthesize showPINHandlerEx=_showPINHandlerEx;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) NSString *peerAppleID; // @synthesize peerAppleID=_peerAppleID;
@property(retain, nonatomic) CUAppleIDClient *myAppleIDInfoClient; // @synthesize myAppleIDInfoClient=_myAppleIDInfoClient;
@property(copy, nonatomic) NSString *myAppleID; // @synthesize myAppleID=_myAppleID;
@property(nonatomic) unsigned int sessionFlags; // @synthesize sessionFlags=_sessionFlags;
@property(nonatomic) unsigned int pinType; // @synthesize pinType=_pinType;
@property(copy, nonatomic) NSDictionary *pairVerifyACL; // @synthesize pairVerifyACL=_pairVerifyACL;
@property(nonatomic) _Bool pairSetupDisabled; // @synthesize pairSetupDisabled=_pairSetupDisabled;
@property(copy, nonatomic) NSDictionary *pairSetupACL; // @synthesize pairSetupACL=_pairSetupACL;
@property(nonatomic) _Bool overrideScreenOff; // @synthesize overrideScreenOff=_overrideScreenOff;
@property(nonatomic) _Bool needsSetup; // @synthesize needsSetup=_needsSetup;
@property(nonatomic) _Bool needsKeyboard; // @synthesize needsKeyboard=_needsKeyboard;
@property(nonatomic) _Bool needsAWDL; // @synthesize needsAWDL=_needsAWDL;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *fixedPIN; // @synthesize fixedPIN=_fixedPIN;
@property(nonatomic) _Bool duetSync; // @synthesize duetSync=_duetSync;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned char deviceActionType; // @synthesize deviceActionType=_deviceActionType;
@property(nonatomic) long long advertiseRate; // @synthesize advertiseRate=_advertiseRate;
- (void)serviceSessionFailed:(id)arg1 error:(id)arg2;	// IMP=0x00000000000fc62b
- (void)serviceReceivedResponse:(id)arg1;	// IMP=0x00000000000fc470
- (void)serviceReceivedRequest:(id)arg1;	// IMP=0x00000000000fc3ec
- (void)serviceReceivedFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;	// IMP=0x00000000000fbee4
- (void)serviceReceivedEvent:(id)arg1;	// IMP=0x00000000000fbe60
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;	// IMP=0x00000000000fbbdc
- (void)serviceError:(id)arg1;	// IMP=0x00000000000fbb9b
- (void)pairSetupTryPIN:(id)arg1 peer:(id)arg2;	// IMP=0x00000000000fba39
- (void)pairSetupWithFlags:(unsigned int)arg1 peer:(id)arg2;	// IMP=0x00000000000fb900
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;	// IMP=0x00000000000fb788
- (void)sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;	// IMP=0x00000000000fb6a0
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 unencryptedObject:(id)arg3;	// IMP=0x00000000000fb3df
- (void)sendToPeer:(id)arg1 flags:(unsigned int)arg2 object:(id)arg3;	// IMP=0x00000000000fb1d8
- (void)sendResponse:(id)arg1;	// IMP=0x00000000000fb005
- (void)sendRequest:(id)arg1;	// IMP=0x00000000000fadf7
- (void)sendEvent:(id)arg1;	// IMP=0x00000000000fac1f
- (void)_performActivateSafeChange:(CDUnknownBlockType)arg1;	// IMP=0x00000000000faa74
- (void)_invalidated;	// IMP=0x00000000000fa5f3
- (void)invalidate;	// IMP=0x00000000000fa4f3
- (void)_interrupted;	// IMP=0x00000000000fa221
- (void)_ensureXPCStarted;	// IMP=0x00000000000fa001
- (void)_activated;	// IMP=0x00000000000f9fa9
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f9544
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f9436
- (void)updateWithService:(id)arg1;	// IMP=0x00000000000f931d
- (void)clearEncryptionInfoForPeer:(id)arg1;	// IMP=0x00000000000f8e0c
- (int)setEncryptionReadKey:(const char *)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char *)arg3 writeKeyLen:(unsigned long long)arg4 peer:(id)arg5;	// IMP=0x00000000000f8d8b
- (id)description;	// IMP=0x00000000000f836d
- (void)_cleanup;	// IMP=0x00000000000f821e
- (void)dealloc;	// IMP=0x00000000000f818b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f7e63
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f77eb
- (id)init;	// IMP=0x00000000000f7778

@end
