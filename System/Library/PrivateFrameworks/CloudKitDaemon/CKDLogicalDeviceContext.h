//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDAccountDataSecurityObserver, CKDLogicalDeviceScopedStateManager, CKDMetadataCache, CKDOperationInfoCache, CKDThrottleManager, CKDTokenRegistrationScheduler, CKTestDevice, CKTestDeviceReference, CKTestServer, NSURL;

@interface CKDLogicalDeviceContext : NSObject
{
    _Bool _hasValidCredentials;	// 8 = 0x8
    CKTestDeviceReference *_testDeviceReference;	// 16 = 0x10
    CKDLogicalDeviceScopedStateManager *_deviceScopedStateManager;	// 24 = 0x18
    CKDAccountDataSecurityObserver *_accountDataSecurityObserver;	// 32 = 0x20
    CKTestServer *_testServer;	// 40 = 0x28
    CKDMetadataCache *_metadataCache;	// 48 = 0x30
    CKDOperationInfoCache *_operationInfoCache;	// 56 = 0x38
    CKDThrottleManager *_throttleManager;	// 64 = 0x40
    CKDTokenRegistrationScheduler *_tokenRegistrationScheduler;	// 72 = 0x48
}

+ (id)deviceContextForTestDeviceReference:(id)arg1;	// IMP=0x00000000002bd760
+ (id)existingDefaultContext;	// IMP=0x00000000002bd726
+ (id)defaultContext;	// IMP=0x00000000002bd6a1
- (void).cxx_destruct;	// IMP=0x00000000002be4ae
@property(retain, nonatomic) CKDTokenRegistrationScheduler *tokenRegistrationScheduler; // @synthesize tokenRegistrationScheduler=_tokenRegistrationScheduler;
@property(retain, nonatomic) CKDThrottleManager *throttleManager; // @synthesize throttleManager=_throttleManager;
@property(retain, nonatomic) CKDOperationInfoCache *operationInfoCache; // @synthesize operationInfoCache=_operationInfoCache;
@property(retain, nonatomic) CKDMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;
@property(retain, nonatomic) CKTestServer *testServer; // @synthesize testServer=_testServer;
@property(readonly, nonatomic) _Bool hasValidCredentials; // @synthesize hasValidCredentials=_hasValidCredentials;
@property(retain, nonatomic) CKDAccountDataSecurityObserver *accountDataSecurityObserver; // @synthesize accountDataSecurityObserver=_accountDataSecurityObserver;
@property(retain, nonatomic) CKDLogicalDeviceScopedStateManager *deviceScopedStateManager; // @synthesize deviceScopedStateManager=_deviceScopedStateManager;
@property(readonly, nonatomic) CKTestDeviceReference *testDeviceReference; // @synthesize testDeviceReference=_testDeviceReference;
@property(readonly, nonatomic) _Bool wantsFlowControl;
@property(readonly, nonatomic) _Bool wantsPushRegistration;
@property(readonly, nonatomic) NSURL *cacheDirectory;
@property(readonly, nonatomic) _Bool isLiveDevice;
@property(readonly, nonatomic) CKTestDevice *testDevice;
- (id)_initWithTestDeviceReference:(id)arg1;	// IMP=0x00000000002bd9d6

@end

