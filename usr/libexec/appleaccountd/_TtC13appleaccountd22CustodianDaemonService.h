//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC13appleaccountd22CustodianDaemonService : _TtCs12_SwiftObject
{
    MISSING_TYPE *container;	// 16 = 0x10
    MISSING_TYPE *xpcConnection;	// 56 = 0x38
    MISSING_TYPE *requestManager;	// 64 = 0x40
    MISSING_TYPE *pushService;	// 104 = 0x68
    MISSING_TYPE *messenger;	// 144 = 0x90
    MISSING_TYPE *custodianStorage;	// 184 = 0xb8
    MISSING_TYPE *storageController;	// 224 = 0xe0
    MISSING_TYPE *accountStore;	// 264 = 0x108
    MISSING_TYPE *recoveryController;	// 304 = 0x130
    MISSING_TYPE *manateeMigrator;	// 344 = 0x158
    MISSING_TYPE *flowPresenter;	// 384 = 0x180
    MISSING_TYPE *familyManager;	// 392 = 0x188
    MISSING_TYPE *statusUpdater;	// 432 = 0x1b0
    MISSING_TYPE *_healthCheckScheduler;	// 0 = 0x0
}

- (void)displayCustodianInviteWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x004000000004a920
- (void)displayTrustedContactFlowWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004a160
- (void)pullTrustedContactsFromCloudKitWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049d70
- (void)startManateeMigrationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049c60
- (void)startHealthCheckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049c40
- (void)respondToInviteWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048880
- (void)fetchCustodianRecoveryKeysWithSessionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000047e10
- (void)fetchCustodianPasswordResetInformationWithSessionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000047600
- (void)validateCustodianRecoveryCodeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000046d50
- (void)generateCustodianRecoveryCodeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000046710
- (void)fetchCustodianRecoveryConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000046360
- (_Bool)cancelCustodianRecoveryWithSessionID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000045af0
- (void)startCustodianRecoveryWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000450a0
- (void)fetchCustodianHealthStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045080
- (void)fetchSuggestedCustodiansWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044ab0
- (void)fetchCustodianshipInfoWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000044910
- (void)fetchCustodianshipInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044130
- (void)fetchTrustedContactsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043cc0
- (void)stopBeingCustodian:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043810
- (void)removeCustodian:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000432d0
- (void)reSendCustodianInvitationWithCustodianID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042dd0
- (void)setupCustodianshipWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040dc0

@end

