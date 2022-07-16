//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface CuttlefishXPCWrapper : NSObject
{
    id <NSXPCProxyCreating> _cuttlefishXPCConnection;	// 8 = 0x8
}

+ (_Bool)retryable:(id)arg1;	// IMP=0x002000000002461a
- (void).cxx_destruct;	// IMP=0x002000000001fd71
@property(readonly) id <NSXPCProxyCreating> cuttlefishXPCConnection; // @synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection;
- (void)recoverTLKSharesForInheritorWithContainer:(id)arg1 context:(id)arg2 crk:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001fb39
- (void)prepareInheritancePeerWithContainer:(id)arg1 context:(id)arg2 epoch:(unsigned long long)arg3 machineID:(id)arg4 bottleSalt:(id)arg5 bottleID:(id)arg6 modelID:(id)arg7 deviceName:(id)arg8 serialNumber:(id)arg9 osVersion:(id)arg10 policyVersion:(id)arg11 policySecrets:(id)arg12 syncUserControllableViews:(int)arg13 secureElementIdentity:(id)arg14 signingPrivKeyPersistentRef:(id)arg15 encPrivKeyPersistentRef:(id)arg16 crk:(id)arg17 reply:(CDUnknownBlockType)arg18;	// IMP=0x001000000001f785
- (void)fetchAccountSettingsWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f598
- (void)fetchRecoverableTLKSharesWithContainer:(id)arg1 context:(id)arg2 peerID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001f38f
- (void)resetAccountCDPContentsWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001f1a2
- (void)removeEscrowCacheWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001efb5
- (void)fetchViableEscrowRecordsWithContainer:(id)arg1 context:(id)arg2 forceFetch:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001edbc
- (void)getSupportAppInfoWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ebcf
- (void)requestHealthCheckWithContainer:(id)arg1 context:(id)arg2 requiresEscrowCheck:(_Bool)arg3 knownFederations:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001e9bc
- (void)pushHealthInquiryWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e7cf
- (void)reportHealthWithContainer:(id)arg1 context:(id)arg2 stateMachineState:(id)arg3 trustState:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001e5ab
- (void)removeCustodianRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e3a2
- (void)createCustodianRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 recoveryKey:(id)arg3 salt:(id)arg4 ckksKeys:(id)arg5 uuid:(id)arg6 kind:(int)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x001000000001e130
- (void)setRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 recoveryKey:(id)arg3 salt:(id)arg4 ckksKeys:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001dee5
- (void)fetchTrustStateWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001dcf8
- (void)validatePeersWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001db0b
- (void)fetchCurrentPolicyWithContainer:(id)arg1 context:(id)arg2 modelIDOverride:(id)arg3 isInheritedAccount:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001d8f8
- (void)fetchPolicyDocumentsWithContainer:(id)arg1 context:(id)arg2 versions:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001d6ef
- (void)fetchEscrowContentsWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d502
- (void)fetchViableBottlesWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d315
- (void)updateTLKsWithContainer:(id)arg1 context:(id)arg2 ckksKeys:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001d0f1
- (void)setPreapprovedKeysWithContainer:(id)arg1 context:(id)arg2 preapprovedKeys:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001cee8
- (void)updateWithContainer:(id)arg1 context:(id)arg2 forceRefetch:(_Bool)arg3 deviceName:(id)arg4 serialNumber:(id)arg5 osVersion:(id)arg6 policyVersion:(id)arg7 policySecrets:(id)arg8 syncUserControllableViews:(id)arg9 secureElementIdentity:(id)arg10 reply:(CDUnknownBlockType)arg11;	// IMP=0x001000000001cc20
- (void)attemptPreapprovedJoinWithContainer:(id)arg1 context:(id)arg2 ckksKeys:(id)arg3 tlkShares:(id)arg4 preapprovedKeys:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001c9d5
- (void)preflightPreapprovedJoinWithContainer:(id)arg1 context:(id)arg2 preapprovedKeys:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001c7cc
- (void)joinWithContainer:(id)arg1 context:(id)arg2 voucherData:(id)arg3 voucherSig:(id)arg4 ckksKeys:(id)arg5 tlkShares:(id)arg6 preapprovedKeys:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x001000000001c547
- (void)vouchWithCustodianRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 crk:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001c323
- (void)vouchWithRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 recoveryKey:(id)arg3 salt:(id)arg4 tlkShares:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001c0d8
- (void)preflightVouchWithCustodianRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 crk:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001becf
- (void)preflightVouchWithRecoveryKeyWithContainer:(id)arg1 context:(id)arg2 recoveryKey:(id)arg3 salt:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001bcab
- (void)vouchWithBottleWithContainer:(id)arg1 context:(id)arg2 bottleID:(id)arg3 entropy:(id)arg4 bottleSalt:(id)arg5 tlkShares:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000001ba40
- (void)preflightVouchWithBottleWithContainer:(id)arg1 context:(id)arg2 bottleID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001b837
- (void)vouchWithContainer:(id)arg1 context:(id)arg2 peerID:(id)arg3 permanentInfo:(id)arg4 permanentInfoSig:(id)arg5 stableInfo:(id)arg6 stableInfoSig:(id)arg7 ckksKeys:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x001000000001b595
- (void)establishWithContainer:(id)arg1 context:(id)arg2 ckksKeys:(id)arg3 tlkShares:(id)arg4 preapprovedKeys:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000001b34a
- (void)prepareWithContainer:(id)arg1 context:(id)arg2 epoch:(unsigned long long)arg3 machineID:(id)arg4 bottleSalt:(id)arg5 bottleID:(id)arg6 modelID:(id)arg7 deviceName:(id)arg8 serialNumber:(id)arg9 osVersion:(id)arg10 policyVersion:(id)arg11 policySecrets:(id)arg12 syncUserControllableViews:(int)arg13 secureElementIdentity:(id)arg14 setting:(id)arg15 signingPrivKeyPersistentRef:(id)arg16 encPrivKeyPersistentRef:(id)arg17 reply:(CDUnknownBlockType)arg18;	// IMP=0x001000000001af96
- (void)fetchEgoEpochWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ada9
- (void)fetchAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001abbc
- (void)removeAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 machineIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a9b3
- (void)addAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 machineIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a7aa
- (void)setAllowedMachineIDsWithContainer:(id)arg1 context:(id)arg2 allowedMachineIDs:(id)arg3 honorIDMSListChanges:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001a597
- (void)localResetWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001a3aa
- (void)resetWithContainer:(id)arg1 context:(id)arg2 resetReason:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a1b2
- (void)trustStatusWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019fc5
- (void)distrustPeerIDsWithContainer:(id)arg1 context:(id)arg2 peerIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000019dbc
- (void)departByDistrustingSelfWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019bcf
- (void)dumpWithContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000199e2
- (void)pingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019849
- (id)initWithCuttlefishXPCConnection:(id)arg1;	// IMP=0x00100000000197de

@end

