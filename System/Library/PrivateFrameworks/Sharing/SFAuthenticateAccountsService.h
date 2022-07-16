//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, HMDeviceSetupOperationHandler, NSArray, NSMutableArray, SFService, SFSession;
@protocol CDPStateUIProvider, OS_dispatch_queue, SFAuthenticateAccountsServiceDelegate;

@interface SFAuthenticateAccountsService : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    SFService *_sfService;	// 16 = 0x10
    SFSession *_sfSession;	// 24 = 0x18
    ACAccountStore *_accountStore;	// 32 = 0x20
    id <CDPStateUIProvider> _cdpUIProvider;	// 40 = 0x28
    NSMutableArray *_authenticatedAccounts;	// 48 = 0x30
    NSArray *_knownHomeUserIdentifiers;	// 56 = 0x38
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;	// 64 = 0x40
    _Bool _isHomeSharingSetupNeeded;	// 72 = 0x48
    _Bool _isHomeKitSetupNeeded;	// 73 = 0x49
    _Bool _homeKitSetupDidSucceed;	// 74 = 0x4a
    unsigned int _targetedAccountTypes;	// 76 = 0x4c
    id <SFAuthenticateAccountsServiceDelegate> _delegate;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 88 = 0x58
    CDUnknownBlockType _progressHandler;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000003eb91
@property(nonatomic) _Bool homeKitSetupDidSucceed; // @synthesize homeKitSetupDidSucceed=_homeKitSetupDidSucceed;
@property(nonatomic) _Bool isHomeKitSetupNeeded; // @synthesize isHomeKitSetupNeeded=_isHomeKitSetupNeeded;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) __weak id <SFAuthenticateAccountsServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isHomeSharingSetupNeeded; // @synthesize isHomeSharingSetupNeeded=_isHomeSharingSetupNeeded;
@property(nonatomic) unsigned int targetedAccountTypes; // @synthesize targetedAccountTypes=_targetedAccountTypes;
- (void)_handleRequest:(id)arg1 flags:(unsigned int)arg2 session:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003e7b7
- (void)_saveRemoteVerifiedAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003e5a1
- (void)_saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003e174
- (unsigned int)_accountTypeForTRAccountService:(unsigned long long)arg1;	// IMP=0x000000000003e15f
- (unsigned long long)_nextTRServiceTypeForTRAccountServices:(id)arg1;	// IMP=0x000000000003e0d9
- (long long)_nextServiceTypeForTRAccountServices:(id)arg1;	// IMP=0x000000000003e04d
- (void)_authenticateGameCenterWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003dd2c
- (void)_authenticateiTunesWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d735
- (void)_authenticateiCloudWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d20c
- (void)_authenticateWithServiceType:(unsigned long long)arg1 authResults:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003d14b
- (void)_authenticateWithServiceTypes:(id)arg1 authResults:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003cb91
- (void)__runAuthenticateiCloudWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003caf8
- (void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 password:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003c998
- (void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 companionDevice:(id)arg3 anisetteDataProvider:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000003c805
- (void)_handleTRProxyAuthenticationRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003bfb0
- (void)_handleTRProxyDeviceRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003beab
- (void)_handleTRCompanionAuthenticationRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b5ad
- (_Bool)_shouldSignInAccountsInInfoRequest:(id)arg1;	// IMP=0x000000000003b312
- (void)_handleInfoExchange:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003af34
- (void)_handleSessionEnded:(id)arg1;	// IMP=0x000000000003ad29
- (void)_handleSessionStarted:(id)arg1;	// IMP=0x000000000003a995
- (void)_sfServiceStart;	// IMP=0x000000000003a432
- (void)_invalidate;	// IMP=0x000000000003a372
- (void)invalidate;	// IMP=0x000000000003a311
- (void)_activate;	// IMP=0x000000000003a0e8
- (void)activate;	// IMP=0x000000000003a087
- (void)_cleanup;	// IMP=0x000000000003a02d
- (id)init;	// IMP=0x0000000000039fcf

@end

