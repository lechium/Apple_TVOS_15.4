//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPushHandler, IDSRateLimiter, IDSUserStore, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSPreflightStackStore;

@interface IDSSMSRegistrationCenter : NSObject
{
    NSMutableArray *_registrations;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    id <IDSPreflightStackStore> _preflightStackStore;	// 24 = 0x18
    IDSPushHandler *_pushHandler;	// 32 = 0x20
    NSMutableDictionary *_registrationReasonByUserID;	// 40 = 0x28
    NSMutableDictionary *_stateMachineByUserID;	// 48 = 0x30
    NSMutableSet *_userConsentDeniedForCTPNR;	// 56 = 0x38
    IDSRateLimiter *_smallWindowSMSTimeoutRateLimiter;	// 64 = 0x40
    IDSRateLimiter *_wideWindowSMSTimeoutRateLimiter;	// 72 = 0x48
    IDSRateLimiter *_registrationAttemptRateLimiter;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x002000000024a7b0
- (void).cxx_destruct;	// IMP=0x0020000000250900
@property(retain, nonatomic) IDSRateLimiter *registrationAttemptRateLimiter; // @synthesize registrationAttemptRateLimiter=_registrationAttemptRateLimiter;
@property(retain, nonatomic) IDSRateLimiter *wideWindowSMSTimeoutRateLimiter; // @synthesize wideWindowSMSTimeoutRateLimiter=_wideWindowSMSTimeoutRateLimiter;
@property(retain, nonatomic) IDSRateLimiter *smallWindowSMSTimeoutRateLimiter; // @synthesize smallWindowSMSTimeoutRateLimiter=_smallWindowSMSTimeoutRateLimiter;
@property(retain, nonatomic) NSMutableSet *userConsentDeniedForCTPNR; // @synthesize userConsentDeniedForCTPNR=_userConsentDeniedForCTPNR;
@property(retain, nonatomic) NSMutableDictionary *stateMachineByUserID; // @synthesize stateMachineByUserID=_stateMachineByUserID;
@property(retain, nonatomic) NSMutableDictionary *registrationReasonByUserID; // @synthesize registrationReasonByUserID=_registrationReasonByUserID;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(readonly, nonatomic) id <IDSPreflightStackStore> preflightStackStore; // @synthesize preflightStackStore=_preflightStackStore;
@property(readonly, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
- (void)requestUserConsentToValidatePhoneNumberForCTPNR:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000024f930
- (void)_sendABCForFailureForIdentifier:(id)arg1 WithEvent:(long long)arg2 context:(id)arg3;	// IMP=0x001000000024f690
- (void)_resetRateLimitersForSMSTimeoutForIdentifier:(id)arg1;	// IMP=0x001000000024f610
- (_Bool)_hasThresholdReachedForSMSTimeoutForIdentifier:(id)arg1;	// IMP=0x001000000024f530
- (void)validator:(id)arg1 handleABCEvent:(long long)arg2;	// IMP=0x001000000024f380
- (void)validator:(id)arg1 failedIdentificationWithRegistrationError:(long long)arg2;	// IMP=0x001000000024f280
- (void)validator:(id)arg1 identifiedPhoneNumber:(id)arg2 token:(id)arg3 phoneBookNumber:(id)arg4;	// IMP=0x001000000024ef60
- (id)_identifierForValidator:(id)arg1;	// IMP=0x001000000024ec40
- (void)_notifyNeedsNewIdentification;	// IMP=0x001000000024e8d0
- (void)_notifySuccess:(id)arg1 token:(id)arg2 identifier:(id)arg3;	// IMP=0x001000000024d990
- (void)_notifyFailureWithError:(long long)arg1 registration:(id)arg2 identifier:(id)arg3;	// IMP=0x001000000024cf30
- (void)removeListener:(id)arg1;	// IMP=0x001000000024ced0
- (void)addListener:(id)arg1;	// IMP=0x001000000024ce10
- (void)_noteRegistrationAttemptForIdentifier:(id)arg1 withRegistrationInfo:(id)arg2;	// IMP=0x001000000024c960
- (void)notePhoneNumberRegistrationReset;	// IMP=0x001000000024c750
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x001000000024c6a0
- (void)_clearConsentDenialsForUniqueIdentifier:(id)arg1;	// IMP=0x001000000024c4f0
- (void)clearConsentDenialsForPhoneUser:(id)arg1;	// IMP=0x001000000024c460
- (void)clearConsentDenialsForRegistration:(id)arg1;	// IMP=0x001000000024c3d0
- (void)_cleanupUntrackedValidators;	// IMP=0x001000000024bee0
- (void)sendRegistration:(id)arg1;	// IMP=0x001000000024b1f0
- (void)setRegistrationReason:(long long)arg1 forUserUniqueIdentifier:(id)arg2;	// IMP=0x001000000024b140
- (void)setRegistrationReason:(long long)arg1 forPhoneNumber:(id)arg2;	// IMP=0x001000000024ad10
- (void)dealloc;	// IMP=0x001000000024aa90
- (id)init;	// IMP=0x001000000024a890
@property(readonly, nonatomic) IDSUserStore *userStore;
@property(readonly, nonatomic) NSArray *validators;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
