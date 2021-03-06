//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MCProfile : NSObject
{
    int _trustQueueTrustLevel;	// 8 = 0x8
    _Bool _trustQueueTrustHasBeenEvaluated;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_trustEvaluationQueue;	// 16 = 0x10
    NSString *_signerQueueSignerSummary;	// 24 = 0x18
    NSArray *_signerQueueSignerCertificates;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_signerEvaluationQueue;	// 40 = 0x28
    _Bool _encrypted;	// 48 = 0x30
    _Bool _isLocked;	// 49 = 0x31
    _Bool _needsReboot;	// 50 = 0x32
    _Bool _isStub;	// 51 = 0x33
    _Bool _mustInstallNonInteractively;	// 52 = 0x34
    NSString *_profileDescription;	// 56 = 0x38
    NSString *_displayName;	// 64 = 0x40
    NSString *_identifier;	// 72 = 0x48
    NSString *_UUID;	// 80 = 0x50
    NSString *_organization;	// 88 = 0x58
    long long _version;	// 96 = 0x60
    NSDate *_installDate;	// 104 = 0x68
    NSDate *_expiryDate;	// 112 = 0x70
    unsigned long long _targetDeviceType;	// 120 = 0x78
    NSString *_removalPasscode;	// 128 = 0x80
    NSString *_productVersion;	// 136 = 0x88
    NSString *_productBuildVersion;	// 144 = 0x90
    NSDate *_removalDate;	// 152 = 0x98
    NSDictionary *_installOptions;	// 160 = 0xa0
    NSString *_localizedConsentText;	// 168 = 0xa8
}

+ (id)profileWithData:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(_Bool)arg3 outError:(id *)arg4;	// IMP=0x000000000009ca75
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000009ca4b
+ (id)profileWithData:(id)arg1 outError:(id *)arg2;	// IMP=0x000000000009ca24
+ (id)stringForDeviceType:(unsigned long long)arg1;	// IMP=0x00000000000a40da
+ (id)newProfileSignatureVersion;	// IMP=0x00000000000a40b3
+ (id)dataFromCMSEncodedData:(id)arg1 outSignerCertificates:(id *)arg2;	// IMP=0x00000000000a3e3f
+ (id)signerSummaryOfCertificate:(struct __SecCertificate *)arg1;	// IMP=0x00000000000a3d6b
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToInstallUnsupportedPayloads:(_Bool *)arg3 outIsAllowedToWriteDefaults:(_Bool *)arg4 outIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(_Bool *)arg5;	// IMP=0x00000000000a37a1
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToInstallUnsupportedPayloads:(_Bool *)arg3 outIsAllowedToWriteDefaults:(_Bool *)arg4;	// IMP=0x00000000000a377e
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToWriteDefaults:(_Bool *)arg3;	// IMP=0x00000000000a3766
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2;	// IMP=0x00000000000a3751
+ (int)evaluateTrust:(struct __SecTrust *)arg1;	// IMP=0x00000000000a36a4
+ (_Bool)checkString:(id)arg1 isOneOfStrings:(id)arg2 key:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 errorString:(id)arg6 outError:(id *)arg7;	// IMP=0x00000000000a35b9
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id *)arg6;	// IMP=0x00000000000a341e
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id *)arg8;	// IMP=0x00000000000a31fc
+ (id)removeOptionalObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id *)arg7;	// IMP=0x00000000000a3093
+ (id)removeRequiredObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 missingDataCode:(long long)arg5 missingDataErrorString:(id)arg6 invalidDataCode:(long long)arg7 invalidDataErrorString:(id)arg8 outError:(id *)arg9;	// IMP=0x00000000000a2e68
+ (id)profileWithDictionary:(id)arg1 options:(id)arg2 signerCerts:(id)arg3 fileName:(id)arg4 allowEmptyPayload:(_Bool)arg5 outError:(id *)arg6;	// IMP=0x00000000000a04d1
+ (id)profileDictionaryFromProfileData:(id)arg1 outSignerCerts:(id *)arg2 outError:(id *)arg3;	// IMP=0x000000000009fd44
+ (id)profileWithData:(id)arg1 options:(id)arg2 fileName:(id)arg3 allowEmptyPayload:(_Bool)arg4 outError:(id *)arg5;	// IMP=0x000000000009f946
+ (id)missingFieldErrorWithField:(id)arg1;	// IMP=0x000000000009f8c2
+ (id)badFieldTypeErrorWithField:(id)arg1;	// IMP=0x000000000009f83e
+ (id)_unsupportedProfileTypeError;	// IMP=0x000000000009f7bd
+ (id)_unsupportedEnrollmentServiceProfileError;	// IMP=0x000000000009f73c
+ (id)_malformedProfileError;	// IMP=0x000000000009f6bb
+ (id)profileWithData:(id)arg1 options:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000009f696
- (void).cxx_destruct;	// IMP=0x000000000009f5b7
@property(readonly, nonatomic) NSString *localizedConsentText; // @synthesize localizedConsentText=_localizedConsentText;
@property(nonatomic) _Bool mustInstallNonInteractively; // @synthesize mustInstallNonInteractively=_mustInstallNonInteractively;
@property(retain, nonatomic) NSDictionary *installOptions; // @synthesize installOptions=_installOptions;
@property(readonly, nonatomic) NSDate *removalDate; // @synthesize removalDate=_removalDate;
@property(readonly, retain, nonatomic) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(readonly, retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(readonly, nonatomic) _Bool isStub; // @synthesize isStub=_isStub;
@property(readonly, nonatomic) _Bool needsReboot; // @synthesize needsReboot=_needsReboot;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_isLocked;
@property(readonly, nonatomic) unsigned long long targetDeviceType; // @synthesize targetDeviceType=_targetDeviceType;
@property(retain, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, retain, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(nonatomic, getter=isEncrypted) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, retain, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
- (id)payloadsOfKindOfClass:(Class)arg1;	// IMP=0x000000000009f300
@property(readonly, nonatomic) _Bool isSupervisionProfile;
@property(readonly, nonatomic) NSString *managingProfileIdentifier;
@property(readonly, nonatomic) _Bool isManagedByMDM;
- (void)replacePayloadWithUUID:(id)arg1 withPayload:(id)arg2;	// IMP=0x000000000009f1da
@property(readonly, nonatomic) _Bool shouldHaveFullSSLTrust;
- (id)appAccessibilityParameters;	// IMP=0x000000000009f0de
- (id)restrictionsWithHeuristicsAppliedOutError:(id *)arg1;	// IMP=0x000000000009eadb
- (_Bool)mayInstallWithOptions:(id)arg1 hasInteractionClient:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x000000000009e59e
- (_Bool)isProfileUIInstallationEffectivelyAllowed;	// IMP=0x000000000009e545
- (_Bool)doesSigningAllowReplacementWithProfile:(id)arg1 useOriginalCheck:(_Bool)arg2;	// IMP=0x000000000009e315
- (_Bool)doesSigningAllowReplacementWithProfile:(id)arg1;	// IMP=0x000000000009e29f
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009e1bb
- (void)evaluateSignerTrust;	// IMP=0x000000000009e186
@property(readonly, nonatomic) _Bool isManagedByProfileService;
@property(readonly, retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, retain, nonatomic) NSDate *earliestCertificateExpiryDate;
@property(readonly, retain, nonatomic) NSArray *localizedManagedPayloadSummaryByType;
@property(readonly, retain, nonatomic) NSArray *localizedPayloadSummaryByType;
- (id)serializedDictionary;	// IMP=0x000000000009d90f
- (id)verboseDescription;	// IMP=0x000000000009d672
- (id)description;	// IMP=0x000000000009d298
@property(readonly, retain, nonatomic) NSString *friendlyName;
@property(readonly, nonatomic) _Bool isInstalledForUser;
@property(readonly, nonatomic) _Bool isInstalledForSystem;
@property(readonly, nonatomic) long long installType;
@property(readonly, nonatomic) _Bool isSigned;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)arg1;	// IMP=0x000000000009cff0
- (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;	// IMP=0x000000000009cfe8
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1;	// IMP=0x000000000009cfe0
- (struct __SecCertificate *)copyCertificateFromPayloadWithUUID:(id)arg1;	// IMP=0x000000000009cfd8
- (id)payloadWithUUID:(id)arg1;	// IMP=0x000000000009cfd0
@property(readonly, retain, nonatomic) NSArray *managedPayloads;
@property(readonly, retain, nonatomic) NSArray *payloadsContentInfo;
@property(readonly, retain, nonatomic) NSArray *payloads;
- (id)installationWarningsIncludeUnsignedProfileWarning:(_Bool)arg1;	// IMP=0x000000000009c613
@property(readonly, retain, nonatomic) NSArray *installationWarnings;
@property(retain, nonatomic) NSArray *signerCertificates;
@property(readonly, nonatomic) NSString *signerSummary;
@property(readonly, nonatomic) NSArray *signerCertificatesData;
@property(readonly, nonatomic) struct __SecCertificate *signerCertificate;
@property(readonly, nonatomic) int trustLevel;
- (id)hasRequiredAppIDForMDM;	// IMP=0x000000000009bd3e
@property(retain, nonatomic) NSString *removalPasscode; // @synthesize removalPasscode=_removalPasscode;
- (_Bool)isUserEnrollmentProfile;	// IMP=0x00000000000033ba
- (id)loggingID;	// IMP=0x00000000000a4150
- (id)signatureVersion;	// IMP=0x00000000000a4020
- (unsigned long long)countOfPayloadsOfClass:(Class)arg1;	// IMP=0x00000000000a2d27
- (_Bool)containsOnlyPayloadsOfClasses:(id)arg1;	// IMP=0x00000000000a2bb2
- (_Bool)containsAnyPayloadOfClasses:(id)arg1;	// IMP=0x00000000000a2a40
- (_Bool)containsPayloadOfClass:(Class)arg1;	// IMP=0x00000000000a2911
- (id)stubDictionary;	// IMP=0x00000000000a2348
- (_Bool)writeStubToPath:(id)arg1;	// IMP=0x00000000000a22d1
- (_Bool)writeStubToDirectory:(id)arg1;	// IMP=0x00000000000a2238
- (id)malformedProfileErrorWithError:(id)arg1;	// IMP=0x00000000000a214c
- (id)initWithDictionary:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(_Bool)arg3 outError:(id *)arg4;	// IMP=0x00000000000a083a
@property(readonly, retain, nonatomic) NSString *profileDataFileName;
@property(readonly, retain, nonatomic) NSString *profileIDHashFileName;
@property(readonly, retain, nonatomic) NSString *stubFileName;
- (id)payloadsWithClass:(Class)arg1;	// IMP=0x00000000000aabef

@end

