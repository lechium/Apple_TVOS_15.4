//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface RPLegacyService : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    _Bool _invalidateDone;	// 10 = 0xa
    NSMutableDictionary *_requestMap;	// 16 = 0x10
    struct BonjourAdvertiserPrivate *_bonjourAdvertiser;	// 24 = 0x18
    int _listenerPort;	// 32 = 0x20
    int _tcpSockV4;	// 36 = 0x24
    int _tcpSockV6;	// 40 = 0x28
    unsigned char _deviceActionType;	// 44 = 0x2c
    _Bool _needsSetup;	// 45 = 0x2d
    unsigned int _advertiseRate;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    NSString *_label;	// 64 = 0x40
    NSString *_serviceType;	// 72 = 0x48
    NSDictionary *_txtDictionary;	// 80 = 0x50
    CDUnknownBlockType _errorHandler;	// 88 = 0x58
    CDUnknownBlockType _interruptionHandler;	// 96 = 0x60
    CDUnknownBlockType _invalidationHandler;	// 104 = 0x68
    CDUnknownBlockType _sessionStartedHandler;	// 112 = 0x70
    CDUnknownBlockType _sessionEndedHandler;	// 120 = 0x78
    CDUnknownBlockType _showPINHandler;	// 128 = 0x80
    CDUnknownBlockType _hidePINHandler;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000043937
@property(copy, nonatomic) CDUnknownBlockType hidePINHandler; // @synthesize hidePINHandler=_hidePINHandler;
@property(copy, nonatomic) CDUnknownBlockType showPINHandler; // @synthesize showPINHandler=_showPINHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionEndedHandler; // @synthesize sessionEndedHandler=_sessionEndedHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionStartedHandler; // @synthesize sessionStartedHandler=_sessionStartedHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) NSDictionary *txtDictionary; // @synthesize txtDictionary=_txtDictionary;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) _Bool needsSetup; // @synthesize needsSetup=_needsSetup;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned char deviceActionType; // @synthesize deviceActionType=_deviceActionType;
@property(nonatomic) unsigned int advertiseRate; // @synthesize advertiseRate=_advertiseRate;
- (int)_tcpStart;	// IMP=0x000000000004368f
- (int)_bonjourUpdateTXT;	// IMP=0x00000000000430f9
- (int)_bonjourUpdateService;	// IMP=0x0000000000042f3b
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000042d1d
- (void)_invalidated;	// IMP=0x0000000000042c39
- (void)_invalidate;	// IMP=0x0000000000042b5e
- (void)invalidate;	// IMP=0x0000000000042afd
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000428db
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042833
- (id)description;	// IMP=0x00000000000427f7
- (void)_cleanup;	// IMP=0x000000000004275f
- (void)dealloc;	// IMP=0x0000000000042704
- (id)init;	// IMP=0x000000000004269e

@end

