//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMApplicationSettingsDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadDiagnosticSubmission;	// 16 = 0x10
    NSNumber *_payloadAppAnalytics;	// 24 = 0x18
    NSNumber *_payloadAllowDiagnosticSubmission;	// 32 = 0x20
    NSArray *_payloadAutonomousSingleAppModePermittedAppIDs;	// 40 = 0x28
    NSNumber *_payloadAllowActivityContinuation;	// 48 = 0x30
    NSNumber *_payloadAllowEnterpriseAppTrust;	// 56 = 0x38
    NSNumber *_payloadAllowDiagnosticSubmissionModification;	// 64 = 0x40
    NSNumber *_payloadAllowAutomaticAppUpdates;	// 72 = 0x48
    NSNumber *_payloadAllowAutomaticAppUpdatesModification;	// 80 = 0x50
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x0000000000021ce8
+ (id)buildWithIdentifier:(id)arg1 withDiagnosticSubmission:(id)arg2 withAppAnalytics:(id)arg3 withAllowDiagnosticSubmission:(id)arg4 withAutonomousSingleAppModePermittedAppIDs:(id)arg5 withAllowActivityContinuation:(id)arg6 withAllowEnterpriseAppTrust:(id)arg7 withAllowDiagnosticSubmissionModification:(id)arg8 withAllowAutomaticAppUpdates:(id)arg9 withAllowAutomaticAppUpdatesModification:(id)arg10;	// IMP=0x0000000000021a30
+ (id)restrictionPayloadKeys;	// IMP=0x0000000000021923
+ (id)allowedPayloadKeys;	// IMP=0x0000000000021828
+ (id)profileType;	// IMP=0x000000000002181b
+ (id)registeredIdentifier;	// IMP=0x000000000002180e
+ (id)registeredClassName;	// IMP=0x0000000000021801
- (void).cxx_destruct;	// IMP=0x00000000000227e3
@property(copy, nonatomic) NSNumber *payloadAllowAutomaticAppUpdatesModification; // @synthesize payloadAllowAutomaticAppUpdatesModification=_payloadAllowAutomaticAppUpdatesModification;
@property(copy, nonatomic) NSNumber *payloadAllowAutomaticAppUpdates; // @synthesize payloadAllowAutomaticAppUpdates=_payloadAllowAutomaticAppUpdates;
@property(copy, nonatomic) NSNumber *payloadAllowDiagnosticSubmissionModification; // @synthesize payloadAllowDiagnosticSubmissionModification=_payloadAllowDiagnosticSubmissionModification;
@property(copy, nonatomic) NSNumber *payloadAllowEnterpriseAppTrust; // @synthesize payloadAllowEnterpriseAppTrust=_payloadAllowEnterpriseAppTrust;
@property(copy, nonatomic) NSNumber *payloadAllowActivityContinuation; // @synthesize payloadAllowActivityContinuation=_payloadAllowActivityContinuation;
@property(copy, nonatomic) NSArray *payloadAutonomousSingleAppModePermittedAppIDs; // @synthesize payloadAutonomousSingleAppModePermittedAppIDs=_payloadAutonomousSingleAppModePermittedAppIDs;
@property(copy, nonatomic) NSNumber *payloadAllowDiagnosticSubmission; // @synthesize payloadAllowDiagnosticSubmission=_payloadAllowDiagnosticSubmission;
@property(copy, nonatomic) NSNumber *payloadAppAnalytics; // @synthesize payloadAppAnalytics=_payloadAppAnalytics;
@property(copy, nonatomic) NSNumber *payloadDiagnosticSubmission; // @synthesize payloadDiagnosticSubmission=_payloadDiagnosticSubmission;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002253c
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000002234a
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000021dcf
- (id)assetReferences;	// IMP=0x0000000000021a23
- (int)activationLevel;	// IMP=0x0000000000021a18
- (_Bool)mustBeSupervised;	// IMP=0x0000000000021a10
- (_Bool)multipleAllowed;	// IMP=0x0000000000021a08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

