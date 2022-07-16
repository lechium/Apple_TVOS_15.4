//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KTContextStore, NSArray, NSData, NSDate, NSDictionary, NSString, TransparencyTrustedKeyStore, VRFPublicKey;

@interface KTApplicationPublicKeyStore : NSObject
{
    _Bool _unsupported;	// 8 = 0x8
    int _tltEarliestVersion;	// 12 = 0xc
    int _patEarliestVersion;	// 16 = 0x10
    int _vrfType;	// 20 = 0x14
    VRFPublicKey *_vrfKey;	// 24 = 0x18
    TransparencyTrustedKeyStore *_appSmtKeyStore;	// 32 = 0x20
    TransparencyTrustedKeyStore *_appSthKeyStore;	// 40 = 0x28
    TransparencyTrustedKeyStore *_tltKeyStore;	// 48 = 0x30
    unsigned long long _patLogBeginningMs;	// 56 = 0x38
    unsigned long long _tltLogBeginningMs;	// 64 = 0x40
    unsigned long long _shutDown;	// 72 = 0x48
    KTContextStore *_store;	// 80 = 0x50
    NSDate *_receiptTime;	// 88 = 0x58
    NSString *_application;	// 96 = 0x60
    NSData *_patConfigProof;	// 104 = 0x68
    NSData *_tltConfigProof;	// 112 = 0x70
    NSData *_patClosedProof;	// 120 = 0x78
    NSDictionary *_trustedAppSigningKeys;	// 128 = 0x80
    NSArray *_trustedAppLeafs;	// 136 = 0x88
    NSDictionary *_trustedTltSigningKeys;	// 144 = 0x90
    NSArray *_trustedTltLeafs;	// 152 = 0x98
    NSArray *_trustedIntermediates;	// 160 = 0xa0
    KTContextStore *_contextStore;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000007796e
@property __weak KTContextStore *contextStore; // @synthesize contextStore=_contextStore;
@property(retain) NSArray *trustedIntermediates; // @synthesize trustedIntermediates=_trustedIntermediates;
@property(retain) NSArray *trustedTltLeafs; // @synthesize trustedTltLeafs=_trustedTltLeafs;
@property(retain) NSDictionary *trustedTltSigningKeys; // @synthesize trustedTltSigningKeys=_trustedTltSigningKeys;
@property(retain) NSArray *trustedAppLeafs; // @synthesize trustedAppLeafs=_trustedAppLeafs;
@property(retain) NSDictionary *trustedAppSigningKeys; // @synthesize trustedAppSigningKeys=_trustedAppSigningKeys;
@property int vrfType; // @synthesize vrfType=_vrfType;
@property(retain) NSData *patClosedProof; // @synthesize patClosedProof=_patClosedProof;
@property(retain) NSData *tltConfigProof; // @synthesize tltConfigProof=_tltConfigProof;
@property(retain) NSData *patConfigProof; // @synthesize patConfigProof=_patConfigProof;
@property(retain) NSString *application; // @synthesize application=_application;
@property(retain) NSDate *receiptTime; // @synthesize receiptTime=_receiptTime;
@property(readonly) KTContextStore *store; // @synthesize store=_store;
@property unsigned long long shutDown; // @synthesize shutDown=_shutDown;
@property int patEarliestVersion; // @synthesize patEarliestVersion=_patEarliestVersion;
@property int tltEarliestVersion; // @synthesize tltEarliestVersion=_tltEarliestVersion;
@property unsigned long long tltLogBeginningMs; // @synthesize tltLogBeginningMs=_tltLogBeginningMs;
@property unsigned long long patLogBeginningMs; // @synthesize patLogBeginningMs=_patLogBeginningMs;
@property _Bool unsupported; // @synthesize unsupported=_unsupported;
@property(retain) TransparencyTrustedKeyStore *tltKeyStore; // @synthesize tltKeyStore=_tltKeyStore;
@property(retain) TransparencyTrustedKeyStore *appSthKeyStore; // @synthesize appSthKeyStore=_appSthKeyStore;
@property(retain) TransparencyTrustedKeyStore *appSmtKeyStore; // @synthesize appSmtKeyStore=_appSmtKeyStore;
@property(retain) VRFPublicKey *vrfKey; // @synthesize vrfKey=_vrfKey;
- (id)createTLTApplicationPublicKeyStore;	// IMP=0x00000000000774ad
- (id)initWithApplication:(id)arg1 dataStore:(id)arg2 diskState:(id)arg3 contextStore:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000077289
- (_Bool)processDiskState:(id)arg1 dataStore:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000076988
- (id)initWithApplication:(id)arg1 dataStore:(id)arg2 response:(id)arg3 contextStore:(id)arg4 error:(id *)arg5;	// IMP=0x000000000007686a
@property(readonly) _Bool inResetWindow;
- (void)startKeyStoreStateSampler;	// IMP=0x00000000000764fb
- (_Bool)processPublicKeysResponse:(id)arg1 dataStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000758ef
- (_Bool)processKeyData:(id)arg1 tltLeafs:(id)arg2 intermediates:(id)arg3 patConfigProof:(id)arg4 tltConfigProof:(id)arg5 patClosedProof:(id)arg6 dataStore:(id)arg7 saveTreeHeads:(_Bool)arg8 error:(id *)arg9;	// IMP=0x000000000007557a
- (_Bool)processPatClosedProof:(id)arg1 dataStore:(id)arg2 saveTreeHeads:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000007529a
- (_Bool)processTltConfigProof:(id)arg1 dataStore:(id)arg2 saveTreeHeads:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000074a6a
- (_Bool)processPatConfigProof:(id)arg1 dataStore:(id)arg2 saveTreeHeads:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000007440a
- (_Bool)detectEpochChangeAndResetData:(unsigned long long)arg1 patLogBeginningMs:(unsigned long long)arg2 dataStore:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000073d29
- (void)notifyTreeResetDetected:(_Bool)arg1;	// IMP=0x0000000000073ad8
- (id)createTrustedSthKeyStoreFromProofSPKI:(id)arg1 signingKeysMap:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000738c7
- (id)copyVRFKeyFromConfigProof:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007362d
- (_Bool)verifyConfigProof:(id)arg1 dataStore:(id)arg2 saveTreeHeads:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000073536
- (_Bool)verifyCertificates:(id)arg1 intermediates:(id)arg2 application:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000073185
- (id)copyKeyStoreState;	// IMP=0x0000000000072f48
- (void)clearState:(id *)arg1;	// IMP=0x0000000000072e0d
- (_Bool)triggerRefreshFromServerStatus:(int)arg1;	// IMP=0x0000000000072ba7
@property(readonly) _Bool ready;

@end

