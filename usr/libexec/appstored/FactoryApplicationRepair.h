//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, ApplicationProxy, NSArray, NSString, UnfairLock;
@protocol AMSBagProtocol, ApplicationRepairDelegate;

@interface FactoryApplicationRepair : NSObject
{
    ApplicationProxy *_application;	// 8 = 0x8
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
    UnfairLock *_lock;	// 32 = 0x20
    NSString *_logUUID;	// 40 = 0x28
    _Bool _establishesActiveAccount;	// 48 = 0x30
    _Bool _ignoresPreviousClaimAttempts;	// 49 = 0x31
    id <ApplicationRepairDelegate> _delegate;	// 56 = 0x38
    NSArray *_repairedBundleIDs;	// 64 = 0x40
}

+ (void)_setClaimBuildVersion:(id)arg1 forAccount:(id)arg2;	// IMP=0x00200000000ac2bd
+ (id)_requestParametersWithAccount:(id)arg1 unclaimedApps:(id)arg2 logUUID:(id)arg3;	// IMP=0x00100000000ac0c5
+ (id)_lastClaimBuildVersionWithAccount:(id)arg1;	// IMP=0x00100000000abd3c
+ (_Bool)_isFactoryInstallAppProxy:(id)arg1 logUUID:(id)arg2;	// IMP=0x00100000000ab757
+ (id)_copyUnclaimedApplicationsWithLogUUID:(id)arg1;	// IMP=0x00100000000ab279
+ (void)addRequiredBagKeysToAggregator:(id)arg1;	// IMP=0x00100000000aad2b
+ (id)bagKeySet;	// IMP=0x00100000000aac52
+ (_Bool)shouldAttemptToRepairApplication:(id)arg1 options:(id)arg2 logUUID:(id)arg3;	// IMP=0x00100000000aa046
- (void).cxx_destruct;	// IMP=0x00200000000ad6fc
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ad693
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ad4a0
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ad1ee
- (id)_updateAppsUsingResponseDictionary:(id)arg1 account:(id)arg2;	// IMP=0x00100000000ac3be
- (id)_performClaimForAccount:(id)arg1 unclaimedApplications:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000abe44
- (id)_attemptAuthenticationWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000aae09
- (_Bool)repairApplication:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000aa13a
@property(readonly, nonatomic) NSString *repairType;
- (void)setRepairedBundleIDs:(id)arg1;	// IMP=0x00100000000a9f7a
@property(readonly, nonatomic) NSArray *repairedBundleIDs; // @synthesize repairedBundleIDs=_repairedBundleIDs;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(readonly, nonatomic) int fairPlayStatus;
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool ignoresPreviousClaimAttempts; // @synthesize ignoresPreviousClaimAttempts=_ignoresPreviousClaimAttempts;
@property(nonatomic) _Bool establishesActiveAccount; // @synthesize establishesActiveAccount=_establishesActiveAccount;
- (id)initWithApplication:(id)arg1 clientInfo:(id)arg2;	// IMP=0x00100000000a97f0
- (id)init;	// IMP=0x00100000000a9765

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

