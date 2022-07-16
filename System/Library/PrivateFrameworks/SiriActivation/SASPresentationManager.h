//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SASPresentationManagerDelegate;

@interface SASPresentationManager : NSObject
{
    _Bool _lastReportedShouldRejectNewActivations;	// 8 = 0x8
    id <SASPresentationManagerDelegate> _presentationManagerDelegate;	// 16 = 0x10
    NSMutableDictionary *_presentations;	// 24 = 0x18
}

+ (_Bool)_shouldKeepPingingForRequestState:(long long)arg1;	// IMP=0x000000000001b4e0
+ (_Bool)_canTransitionToActiveFromState:(long long)arg1 presentationIdentifier:(long long)arg2;	// IMP=0x00000000000192af
+ (_Bool)_canTransitionToStoppingFromState:(long long)arg1;	// IMP=0x000000000001929e
+ (_Bool)_canTransitionToStartingFromState:(long long)arg1;	// IMP=0x000000000001928d
+ (_Bool)_canTransitionToHeatedFromState:(long long)arg1;	// IMP=0x000000000001927d
+ (_Bool)_canTransitionToOffFromState:(long long)arg1;	// IMP=0x0000000000019268
+ (_Bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2 presentationIdentifier:(long long)arg3;	// IMP=0x00000000000191fc
+ (_Bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000000191e7
- (void).cxx_destruct;	// IMP=0x000000000001b50c
@property(retain, nonatomic) NSMutableDictionary *presentations; // @synthesize presentations=_presentations;
- (void)_forceAllPresentationsOff;	// IMP=0x000000000001b0c1
- (void)pongWithPresentationIdentifier:(long long)arg1;	// IMP=0x000000000001afc0
- (void)_teardownPingTimerForPresentationIdentifier:(long long)arg1;	// IMP=0x000000000001ac2c
- (void)_waitForPongFromPresentationWithPresentationIdentifier:(long long)arg1;	// IMP=0x000000000001a77b
- (void)_setupPingTimerForPresentationIdentifier:(long long)arg1;	// IMP=0x0000000000019f9e
- (void)presentationWithPresentationIdentifierWakeScreenAfterActivation:(long long)arg1 reason:(id)arg2;	// IMP=0x0000000000019e81
- (void)presentationWithPresentationIdentifier:(long long)arg1 activationDeterminedShouldDeferWake:(_Bool)arg2;	// IMP=0x0000000000019d67
- (void)presentationRequestedWithPresentationIdentifier:(long long)arg1 presentationOptions:(id)arg2 requestOptions:(id)arg3;	// IMP=0x0000000000019bf7
- (long long)_presentationsLock_nextPresentationToActivate;	// IMP=0x0000000000019ac6
- (long long)nextPresentationToActivate;	// IMP=0x0000000000019902
- (void)_transitionPresentationWithPresentationIdentifier:(long long)arg1 toState:(long long)arg2;	// IMP=0x000000000001932d
- (void)presentationWithPresentationIdentifierBecameOff:(long long)arg1;	// IMP=0x0000000000019319
- (void)presentationWithPresentationIdentifierBecameActive:(long long)arg1;	// IMP=0x0000000000019302
- (void)presentationWithPresentationIdentifierBeganStopping:(long long)arg1;	// IMP=0x00000000000192eb
- (void)presentationWithPresentationIdentifierBeganStarting:(long long)arg1;	// IMP=0x00000000000192d4
- (_Bool)activePresentationsAreIdleAndQuiet;	// IMP=0x0000000000018e3a
- (void)activePresentations_bulletinManagerDidChangeBulletins;	// IMP=0x0000000000018db4
- (void)startingAndActiveAndStoppingPresentations_presentationDismissalRequestedWithOptions:(id)arg1;	// IMP=0x0000000000018c7a
- (void)activeAndStartingPresentations_updateCurrentLockState:(unsigned long long)arg1;	// IMP=0x0000000000018b33
- (void)activePresentations_deviceWonMyriadElection;	// IMP=0x0000000000018aad
- (void)startingPresentations_cancelPendingActivationWithReason:(unsigned long long)arg1;	// IMP=0x0000000000018976
- (void)activePresentations_handleRequestWithOptions:(id)arg1;	// IMP=0x000000000001884c
- (void)sendButtonEventCompletionToPresentations:(CDUnknownBlockType)arg1 forButtonEventType:(unsigned long long)arg2;	// IMP=0x0000000000018075
- (void)_sendBlockToStoppingPresentations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017d52
- (void)_sendBlockToStartingPresentations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017a2f
- (void)_sendBlockToActivePresentations:(CDUnknownBlockType)arg1;	// IMP=0x000000000001770c
- (void)_sendBlock:(CDUnknownBlockType)arg1 toPresentationWithPresentationIdentifier:(long long)arg2;	// IMP=0x00000000000173ef
- (_Bool)_shouldRejectNewActivations;	// IMP=0x00000000000173d1
- (void)_notifyDelegateOfShouldRejectNewActivationsChangeIfNecessary;	// IMP=0x0000000000017251
- (void)setPresentationManagerDelegate:(id)arg1;	// IMP=0x00000000000171fd
- (void)_presentationsLock_cancelAllPreheatedPresentations;	// IMP=0x0000000000016e3c
- (void)cancelAllPreheatedPresentations;	// IMP=0x0000000000016c7e
- (void)preheatNextPresentationToActivate;	// IMP=0x00000000000167f6
- (void)unregisterSiriPresentationWithIdentifier:(long long)arg1;	// IMP=0x00000000000164c9
- (void)registerSiriPresentation:(id)arg1 withIdentifier:(long long)arg2;	// IMP=0x0000000000016190
- (long long)requestState;	// IMP=0x0000000000015c4e
- (id)init;	// IMP=0x0000000000015bf8

@end

