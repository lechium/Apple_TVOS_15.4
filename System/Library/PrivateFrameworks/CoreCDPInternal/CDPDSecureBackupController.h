//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPContext, CDPDSecureBackupConfiguration, NSDictionary;
@protocol CDPDOctagonTrustProxy, CDPDSecureBackupDelegate, CDPDSecureBackupProxy, CDPStateUIProviderInternal;

@interface CDPDSecureBackupController : NSObject
{
    _Bool _fakeNearlyDepletedRecords;	// 8 = 0x8
    CDPContext *_context;	// 16 = 0x10
    id <CDPStateUIProviderInternal> _uiProvider;	// 24 = 0x18
    id <CDPDSecureBackupDelegate> _delegate;	// 32 = 0x20
    NSDictionary *_cachedAccountInfo;	// 40 = 0x28
    id <CDPDSecureBackupProxy> _secureBackupProxy;	// 48 = 0x30
    id <CDPDOctagonTrustProxy> _octagonTrustProxy;	// 56 = 0x38
    CDPDSecureBackupConfiguration *_configuration;	// 64 = 0x40
}

+ (id)_printableAccountInfo:(id)arg1;	// IMP=0x00000000000225dd
+ (id)_sanitizedInfoDictionary:(id)arg1;	// IMP=0x000000000002245d
+ (id)_dateWithSecureBackupDateString:(id)arg1;	// IMP=0x000000000001c0ec
- (void).cxx_destruct;	// IMP=0x0000000000022999
@property(retain, nonatomic) CDPDSecureBackupConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) id <CDPDOctagonTrustProxy> octagonTrustProxy; // @synthesize octagonTrustProxy=_octagonTrustProxy;
@property(retain, nonatomic) id <CDPDSecureBackupProxy> secureBackupProxy; // @synthesize secureBackupProxy=_secureBackupProxy;
@property(nonatomic) _Bool fakeNearlyDepletedRecords; // @synthesize fakeNearlyDepletedRecords=_fakeNearlyDepletedRecords;
@property(retain, nonatomic) NSDictionary *cachedAccountInfo; // @synthesize cachedAccountInfo=_cachedAccountInfo;
@property(nonatomic) __weak id <CDPDSecureBackupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
- (_Bool)_disableRecoveryKey:(id *)arg1;	// IMP=0x000000000002232e
- (void)disableRecoveryKeyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002217a
- (_Bool)_disableSecureBackup:(id *)arg1;	// IMP=0x0000000000021fab
- (void)disableSecureBackupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021df7
- (void)_deleteSingleICSCBackupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021b15
- (void)deleteSingleICSCBackupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021919
- (void)_deleteAllBackupRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000216df
- (void)deleteAllBackupRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000214e3
- (id)_recoveryInfoDictionaryFromContext:(id)arg1;	// IMP=0x0000000000020fdd
- (id)_recoverBackupDictionaryWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000020dbc
- (void)recoverSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002099b
- (void)performEscrowRecoveryWithRecoveryContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002046f
- (id)performEscrowRecoveryWithRecoveryContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001fce4
- (_Bool)recordIsEmpty:(id)arg1;	// IMP=0x000000000001faf5
- (id)performSilentEscrowRecoveryWithCDPContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001eec1
- (id)performEscrowRecoveryWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ed4a
- (id)_clientMetadataWithSecretType:(unsigned long long)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000001e9f2
- (id)_currentAnisetteData;	// IMP=0x000000000001e80c
- (_Bool)_disableThenEnableWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e728
- (void)_authenticatedEnableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d65c
- (_Bool)authenticatedEnableSecureBackupWithRecoveryKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d4c5
- (void)enableSecureBackupWithRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d288
- (void)_enableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d015
- (_Bool)supportsRecoveryKey;	// IMP=0x000000000001cde9
- (void)checkForExistingRecordMatchingPredicate:(id)arg1 forceFetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001cb1a
- (void)checkForExistingRecordWithPeerId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c966
- (void)checkForExistingRecord:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c8cd
- (void)checkAndRemoveExistingThenEnableSecureBackupRecordWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c6e1
- (void)upgradeICSCRecordsThenEnableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c22c
- (void)enableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c21a
- (void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b5ca
- (void)_getOctagonEscrowBackupRecordDevicesWithOptionForceFetch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001afb0
- (id)handleCDPDevices:(id)arg1;	// IMP=0x000000000001a95e
- (void)getBackupRecordDevicesWithOptionForceFetch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a8c5
- (void)backupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a67a
- (void)isEligibleForCDPWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a5d8
- (id)_accountInfo:(id *)arg1;	// IMP=0x000000000001a52e
- (void)clearAccountInfoCache;	// IMP=0x000000000001a4b4
- (void)accountInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a11e
- (void)fetchAllEscrowRecordsWithOptionForceFetch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019be3
- (void)fetchEscrowRecordsWithOptionForceFetch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001962d
- (void)synchronizeKeyValueStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001957f
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000019480
- (id)initWithContext:(id)arg1 secureBackupProxy:(id)arg2 octagonTrustProxy:(id)arg3;	// IMP=0x0000000000019398

@end
