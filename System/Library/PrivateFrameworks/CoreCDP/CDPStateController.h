//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CDPStateController
{
}

- (void)fetchEscrowRecordDevicesWithContext:(id)arg1 usingCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000189ff
- (void)handleURLActionWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001888e
- (void)handleURLActionWithInfo:(id)arg1;	// IMP=0x000000000001887a
- (id)generateRandomRecoveryKey:(id *)arg1;	// IMP=0x0000000000018557
- (void)isRecoveryKeyAvailableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001811b
- (_Bool)isRecoveryKeyAvailableWithError:(id *)arg1;	// IMP=0x0000000000017d51
- (_Bool)deleteRecoveryKeyWithError:(id *)arg1;	// IMP=0x0000000000017a20
- (void)verifyRecoveryKey:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017633
- (void)deleteRecoveryKey:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017246
- (void)generateNewRecoveryKey:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016e59
- (_Bool)shouldPerformRepairWithOptionForceFetch:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000016b4f
- (void)finishCyrusFlowAfterTermsAgreementWithContext:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016790
- (void)finishOfflineLocalSecretChangeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000163d1
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015fdb
- (void)attemptToEscrowPreRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015c1d
- (void)attemptToEscrowPreRecord:(id)arg1 preRecordUUID:(id)arg2 secretType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015c05
- (void)recoverWithSquirrel:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015846
- (void)recoverAndSynchronizeWithSquirrel:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015487
- (void)startCircleApplicationApprovalServerSkipEscrowFetches:(CDUnknownBlockType)arg1;	// IMP=0x00000000000153bb
- (void)startCircleApplicationApprovalServer:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015021
- (void)repairCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000148c6
- (void)handleCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000140b7
- (_Bool)isManateeAvailable:(id *)arg1;	// IMP=0x0000000000013f04

@end

