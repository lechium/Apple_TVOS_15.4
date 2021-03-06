//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KTApplicationPublicKeyStore, KTLogClient, NSString, TransparencyManagedDataStore;

@interface KTContextVerifier : NSObject
{
    KTApplicationPublicKeyStore *_applicationKeyStore;	// 8 = 0x8
    TransparencyManagedDataStore *_dataStore;	// 16 = 0x10
    NSString *_applicationID;	// 24 = 0x18
    KTLogClient *_logClient;	// 32 = 0x20
}

+ (_Bool)verifyLoggableDataSignatures:(id)arg1 accountKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000aef50
+ (_Bool)verifyServerLoggableDatas:(id)arg1 againstSyncedLoggableDatas:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a972e
+ (long long)verifyMutation:(id)arg1 record:(id)arg2;	// IMP=0x00000000000a83e7
- (void).cxx_destruct;	// IMP=0x00000000000af202
@property(retain) KTLogClient *logClient; // @synthesize logClient=_logClient;
@property(retain) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain) KTApplicationPublicKeyStore *applicationKeyStore; // @synthesize applicationKeyStore=_applicationKeyStore;
- (void)processSTHsFromGossipPeers:(id)arg1 verifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ae7dd
- (void)checkHeadEpoch:(id)arg1;	// IMP=0x00000000000ae2d9
- (_Bool)verifyRevisionLogInclusionProofResponse:(id)arg1 receivedRevisions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ad8e3
- (unsigned long long)verifyRevisionLogTopLevelProof:(id)arg1 patSTH:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ad58e
- (unsigned long long)verifyRevisionLogProofLogEntry:(id)arg1 patSTH:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000000ad08c
- (_Bool)setInclusionVerifiedState:(unsigned long long)arg1 logEntry:(id)arg2 failure:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000acfd6
- (_Bool)setInclusionVerifiedState:(unsigned long long)arg1 topLevelTreeLogEntry:(id)arg2 failure:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000ac5c6
- (_Bool)setInclusionVerifiedState:(unsigned long long)arg1 perApplicationTreeLogEntry:(id)arg2 failure:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000abada
- (void)verifyMapHeadMMDs:(id)arg1;	// IMP=0x00000000000ab58c
- (void)verifySTHs:(id)arg1;	// IMP=0x00000000000aadb7
- (unsigned long long)verifyConsistencyProofResponse:(id)arg1 startRevision:(long long)arg2 receivedRevisions:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000aa6c0
- (unsigned long long)verifyLogConsistencyResponse:(id)arg1 startRevision:(long long)arg2 receivedRevisions:(id)arg3 forwards:(_Bool)arg4 serverHint:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000aa268
- (unsigned long long)verifyInclusionProof:(id)arg1 mapLeaf:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000000aa17c
- (unsigned long long)verifyAccountKeyWitness:(id)arg1 accountKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a9f64
- (unsigned long long)verifyUriWitness:(id)arg1 uri:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a9d2e
- (void)verifyKTSMTsMerged:(id)arg1 queryResponse:(id)arg2 uri:(id)arg3;	// IMP=0x00000000000a8508
- (void)verifyKTSMTs:(id)arg1;	// IMP=0x00000000000a7be3
- (void)deleteSMT:(id)arg1 error:(id)arg2;	// IMP=0x00000000000a7b0c
- (void)failSMTsIfOverMMD:(id)arg1 proof:(id)arg2 underlyingError:(id)arg3 errorCode:(long long)arg4 serverHint:(id)arg5;	// IMP=0x00000000000a7af0
- (void)failSMTsIfOverMMD:(id)arg1 proof:(id)arg2 underlyingError:(id)arg3 errorCode:(long long)arg4 savePendingError:(_Bool)arg5 serverHint:(id)arg6;	// IMP=0x00000000000a7212
- (id)createChainOfErrorsFromSMTFailures:(id)arg1;	// IMP=0x00000000000a708f
- (id)createErrorFromSMTFailure:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00000000000a6fcc
- (_Bool)areSMTsOverMMD:(id)arg1;	// IMP=0x00000000000a6e25
- (void)reportVerifySMTFailure:(id)arg1 serverHint:(id)arg2 error:(id)arg3;	// IMP=0x00000000000a6e00
- (void)reportVerifySMTFailure:(id)arg1 serverHint:(id)arg2 uri:(id)arg3 accountKey:(id)arg4 error:(id)arg5;	// IMP=0x00000000000a6aaa
- (unsigned long long)verifySMTs:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a65b7
- (id)initWithApplicationKeyStore:(id)arg1 dataStore:(id)arg2 applicationID:(id)arg3;	// IMP=0x00000000000a6500

@end

