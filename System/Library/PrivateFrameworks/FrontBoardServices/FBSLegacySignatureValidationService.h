//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSApplicationTrustDataProvider-Protocol.h>

@class FBSApplicationInfo, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface FBSLegacySignatureValidationService : NSObject <FBSApplicationTrustDataProvider>
{
    FBSApplicationInfo *_appInfo;	// 8 = 0x8
    _Bool _hasUniversalProvisioningProfile;	// 16 = 0x10
    _Bool _hasFreeDeveloperProvisioningProfile;	// 17 = 0x11
    _Bool _isManaged;	// 18 = 0x12
    NSArray *_provisioningProfiles;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000642ef
- (_Bool)_workQueue_signatureNeedsExplicitUserTrust;	// IMP=0x00000000000640a4
- (id)_workQueue_expirationDateForProvisioningProfile;	// IMP=0x0000000000063e2e
- (void)_initializeProfiles:(id)arg1;	// IMP=0x0000000000063a18
- (unsigned long long)trustStateForApplication:(id)arg1;	// IMP=0x000000000006387e
- (id)initWithApplicationInfo:(id)arg1 andProvisioningProfiles:(id)arg2 isManaged:(_Bool)arg3;	// IMP=0x0000000000063734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

