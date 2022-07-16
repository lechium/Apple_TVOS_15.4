//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/ICEnvironmentMonitorObserver-Protocol.h>
#import <Radio/MCProfileConnectionObserver-Protocol.h>

@class NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface RadioAvailabilityController : NSObject <ICEnvironmentMonitorObserver, MCProfileConnectionObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_restrictionLoadQueue;	// 24 = 0x18
    _Bool _hasSuccessfullyLoadedURLBag;	// 32 = 0x20
    _Bool _isRadioAvailable;	// 33 = 0x21
    NSNumber *_isRadioAvailableFromBag;	// 40 = 0x28
    _Bool _isRadioRestricted;	// 48 = 0x30
    NSNumber *_lastActiveAccountUniqueIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000026468
- (id)_userDefaultsDomain;	// IMP=0x0000000000026411
- (void)_updateRadioAvailabilityAllowingNotifications:(_Bool)arg1;	// IMP=0x000000000002639e
- (void)_updateRadioAvailabilityWithStoreBagDictionary:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000261f2
- (void)_reloadRadioRestriction;	// IMP=0x00000000000261a7
- (void)_reloadRadioBagAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000260b9
- (void)_currentStoreFrontIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025fde
- (id)_currentStoreFrontIdentifier;	// IMP=0x0000000000025ec4
- (_Bool)_calculateRadioRestricted;	// IMP=0x0000000000025e6b
- (void)getRadioAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025de0
@property(readonly, nonatomic, getter=isRadioAvailable) _Bool radioAvailable;
@property(readonly, nonatomic) _Bool hasLoadedRadioAvailability;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000025cb2
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000025ca0
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x0000000000025c3f
- (void)dealloc;	// IMP=0x0000000000025b90
- (id)init;	// IMP=0x0000000000025961

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
