//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKFeatureAvailabilityProvidingObserver-Protocol.h>
#import <HealthKit/HKFeatureAvailabilityRequirementSatisfactionObserver-Protocol.h>
#import <HealthKit/HKFeatureStatusProviding-Protocol.h>

@class HKFeatureAvailabilityRequirementEvaluationDataSource, HKFeatureAvailabilityRequirementSet, HKFeatureStatus, HKObserverSet, NSString, _HKDelayedOperation;
@protocol HKFeatureAvailabilityProviding, OS_dispatch_queue;

@interface HKFeatureStatusManager : NSObject <HKFeatureAvailabilityProvidingObserver, HKFeatureAvailabilityRequirementSatisfactionObserver, HKFeatureStatusProviding>
{
    id <HKFeatureAvailabilityProviding> _featureAvailabilityProviding;	// 8 = 0x8
    HKFeatureAvailabilityRequirementEvaluationDataSource *_dataSource;	// 16 = 0x10
    HKObserverSet *_observers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _HKDelayedOperation *_notifyObserversOperation;	// 40 = 0x28
    HKFeatureStatus *_currentFeatureStatus;	// 48 = 0x30
    HKFeatureAvailabilityRequirementSet *_requirements;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000042f92
@property(retain, nonatomic) HKFeatureAvailabilityRequirementSet *requirements; // @synthesize requirements=_requirements;
@property(retain, nonatomic) HKFeatureStatus *currentFeatureStatus; // @synthesize currentFeatureStatus=_currentFeatureStatus;
@property(retain, nonatomic) _HKDelayedOperation *notifyObserversOperation; // @synthesize notifyObserversOperation=_notifyObserversOperation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HKObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) id <HKFeatureAvailabilityProviding> featureAvailabilityProviding; // @synthesize featureAvailabilityProviding=_featureAvailabilityProviding;
- (void)_updateSatisfactionOfRequirement:(id)arg1 isSatisfied:(_Bool)arg2;	// IMP=0x0000000000042bd7
- (void)_updateOverriddenSatisfactionOfRequirement:(id)arg1 overriddenSatisfaction:(id)arg2;	// IMP=0x00000000000428e8
- (void)featureAvailabilityRequirement:(id)arg1 didUpdateSatisfaction:(_Bool)arg2;	// IMP=0x0000000000042747
- (void)_queue_attemptFeatureStatusUpdate;	// IMP=0x00000000000426a0
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;	// IMP=0x00000000000425c5
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;	// IMP=0x00000000000424ea
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;	// IMP=0x000000000004240f
@property(readonly, copy) NSString *description;
- (void)_notifyObserversWithFeatureStatus:(id)arg1;	// IMP=0x00000000000421c9
- (void)__unregisterForFeatureStatusChanges;	// IMP=0x0000000000041e2f
- (void)_queue_unregisterForFeatureStatusChanges;	// IMP=0x0000000000041e07
- (void)_registerForRequirementSatisfactionOverrideChangesForRequirements:(id)arg1;	// IMP=0x0000000000041a84
- (void)_queue_registerForFeatureStatusChanges;	// IMP=0x000000000004177f
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000004165a
- (void)registerObserver:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000041514
- (void)registerObserver:(id)arg1;	// IMP=0x0000000000041500
- (id)_requirementSatisfactionOverrides;	// IMP=0x0000000000041499
- (id)_queue_updateFeatureStatusAndNotifyObserversWithError:(id *)arg1;	// IMP=0x0000000000040eeb
- (id)featureStatusWithError:(id *)arg1;	// IMP=0x0000000000040bb7
@property(readonly, copy, nonatomic) NSString *featureIdentifier;
- (void)dealloc;	// IMP=0x0000000000040b4a
- (id)initWithFeatureAvailabilityProviding:(id)arg1 featureAvailabilityDataSource:(id)arg2;	// IMP=0x00000000000408b2
- (id)initWithFeatureAvailabilityProviding:(id)arg1 healthDataSource:(id)arg2;	// IMP=0x000000000004082c
- (id)initWithFeatureIdentifier:(id)arg1 healthStore:(id)arg2 currentCountryCode:(id)arg3;	// IMP=0x000000000004071c
- (id)initWithFeatureIdentifier:(id)arg1 healthStore:(id)arg2;	// IMP=0x0000000000040707

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

