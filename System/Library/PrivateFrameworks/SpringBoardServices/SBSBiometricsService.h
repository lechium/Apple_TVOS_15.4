//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBSBiometricsService
{
}

- (void)_acquireBiometricAssertionOfType:(unsigned char)arg1 assertionName:(id)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007961
- (void)acquireWalletPreArmSuppressionAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000793d
- (void)acquireUnlockSuppressionAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000791c
- (void)fetchUnlockCredentialSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000773b

@end

