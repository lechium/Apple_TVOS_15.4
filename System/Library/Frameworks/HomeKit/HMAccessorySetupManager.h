//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>

@class NSString, _HMContext;

@interface HMAccessorySetupManager : NSObject <HMFLogging>
{
    _HMContext *_context;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0000000000265a8a
+ (id)UUID;	// IMP=0x0000000000265a5a
- (void).cxx_destruct;	// IMP=0x000000000026448e
- (void)failAccessorySetupForAddAccessoryRequest:(id)arg1 withError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000264476
- (void)failAccessorySetupWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000263fb9
- (void)finishAccessorySetupForAddAccessoryRequest:(id)arg1 withSetupCompletedInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000263fa1
- (void)finishAccessorySetupWithSetupCompletedInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000263c76
- (void)finishAccessorySetupForAddAccessoryRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000263c61
- (void)finishAccessorySetupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000263a0e
- (void)resumeAccessorySetupWithUserInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000263553
- (void)fetchPendingSetupAccessoryDescriptionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002631c1
- (void)addAndSetUpAccessoriesForTopology:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000026308e
- (void)performMatterEcosystemAccessorySetupUsingRequest:(id)arg1 topology:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000262a63
- (void)performAccessorySetupUsingRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002623ca
- (id)initWithContext:(id)arg1;	// IMP=0x000000000026235f
- (id)init;	// IMP=0x0000000000262292

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

