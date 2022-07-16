//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol DMCEnrollmentFlowMCBridge, DMCUnenrollmentFlowPresenter;

@interface DMCUnenrollmentFlowController
{
    _Bool _isAppleMAID;	// 8 = 0x8
    id <DMCUnenrollmentFlowPresenter> _presenter;	// 16 = 0x10
    id <DMCEnrollmentFlowMCBridge> _managedConfigurationHelper;	// 24 = 0x18
    CDUnknownBlockType _unenrollmentCompletionHandler;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
    NSString *_profileIdentifier;	// 48 = 0x30
    NSString *_personaID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000013135
@property(nonatomic) _Bool isAppleMAID; // @synthesize isAppleMAID=_isAppleMAID;
@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(retain, nonatomic) NSString *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) CDUnknownBlockType unenrollmentCompletionHandler; // @synthesize unenrollmentCompletionHandler=_unenrollmentCompletionHandler;
@property(retain, nonatomic) id <DMCEnrollmentFlowMCBridge> managedConfigurationHelper; // @synthesize managedConfigurationHelper=_managedConfigurationHelper;
@property(retain, nonatomic) id <DMCUnenrollmentFlowPresenter> presenter; // @synthesize presenter=_presenter;
- (id)_nameForStep:(unsigned long long)arg1;	// IMP=0x0000000000013006
- (void)_uninstallEnrollmentProfileWithIdentifier:(id)arg1 personaID:(id)arg2 altDSID:(id)arg3 isAppleMAID:(_Bool)arg4;	// IMP=0x0000000000012e4c
- (void)_askForPasscodeIfNeeded;	// IMP=0x0000000000012bb7
- (void)_askForUserConfirmationIsAppleMAID:(_Bool)arg1;	// IMP=0x0000000000012952
- (void)_preflightUnenrollmentWithAccoutAltDSID:(id)arg1;	// IMP=0x00000000000126c5
- (id)_unenrollmentSteps;	// IMP=0x00000000000126b8
- (void)_flowTerminatedWithError:(id)arg1 canceled:(_Bool)arg2;	// IMP=0x0000000000012490
- (void)_workerQueue_flowCompleted;	// IMP=0x0000000000012398
- (void)_workerQueue_performFlowStep:(unsigned long long)arg1;	// IMP=0x00000000000120c4
- (void)_resetToInitialSteps;	// IMP=0x0000000000012053
- (void)unenrollAccountWithAltDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011fd6
- (id)initWithPresenter:(id)arg1 managedConfigurationHelper:(id)arg2;	// IMP=0x0000000000011f34

@end

