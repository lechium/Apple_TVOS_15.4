//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CDPCABackupRecoveryReporter
{
    unsigned long long _attemptedMethods;	// 8 = 0x8
    unsigned long long _availableMethods;	// 16 = 0x10
    long long _escrowDeviceCount;	// 24 = 0x18
}

- (void)backupRecoveryDidFailWithError:(id)arg1;	// IMP=0x0000000000035dad
- (void)backupRecoverySetAttemptedMethod:(unsigned long long)arg1;	// IMP=0x0000000000035cf7
- (void)backupRecoverySetJoinFromBundleID:(id)arg1;	// IMP=0x0000000000035cde
- (void)backupRecoveryDidReset;	// IMP=0x0000000000035c7c
- (void)backupRecoveryDidCancel;	// IMP=0x0000000000035c1a
- (void)backupRecoveryDidSucceedWithoutLocalSecret;	// IMP=0x0000000000035bb8
- (void)backupRecoveryDidSucceed;	// IMP=0x0000000000035b56
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000035983

@end

