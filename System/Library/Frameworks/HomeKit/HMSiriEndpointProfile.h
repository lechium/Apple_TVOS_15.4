//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/_HMSiriEndpointProfileDelegate-Protocol.h>

@class HMSiriEndpointProfileAssistant, NSArray, NSNumber, NSString, NSUUID;
@protocol HMSiriEndpointProfileDelegate;

@interface HMSiriEndpointProfile <_HMSiriEndpointProfileDelegate, HMFLogging, HMFObject>
{
    id <HMSiriEndpointProfileDelegate> _delegate;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0000000000248bc7
+ (id)shortDescription;	// IMP=0x0000000000248bb5
- (void).cxx_destruct;	// IMP=0x00000000002487bd
@property __weak id <HMSiriEndpointProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;	// IMP=0x000000000024870c
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)setNotifications:(_Bool)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002481d5
- (void)refreshStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000248134
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x0000000000247fdc
- (void)siriEndpointProfile:(id)arg1 didUpdateMultifunctionButton:(long long)arg2;	// IMP=0x0000000000247dc9
- (void)siriEndpointProfile:(id)arg1 didUpdateManuallyDisabled:(_Bool)arg2;	// IMP=0x0000000000247bb8
- (void)siriEndpointProfile:(id)arg1 didUpdateAssistants:(id)arg2;	// IMP=0x0000000000247998
- (void)siriEndpointProfile:(id)arg1 didUpdateActiveIdentifier:(id)arg2;	// IMP=0x000000000024774f
- (void)siriEndpointProfile:(id)arg1 didUpdateSupportsOnboarding:(_Bool)arg2;	// IMP=0x000000000024753e
- (void)siriEndpointProfile:(id)arg1 didUpdateNeedsOnboarding:(_Bool)arg2;	// IMP=0x000000000024732d
- (void)siriEndpointProfile:(id)arg1 didUpdateSiriEngineVersion:(id)arg2;	// IMP=0x000000000024710d
- (void)siriEndpointProfile:(id)arg1 didUpdateSessionHubIdentifier:(id)arg2;	// IMP=0x0000000000246eed
- (void)siriEndpointProfile:(id)arg1 didUpdateSessionState:(long long)arg2;	// IMP=0x0000000000246cff
- (_Bool)supportsOnBoarding;	// IMP=0x0000000000246ced
@property(readonly) HMSiriEndpointProfileAssistant *currentAssistant;
@property(readonly) NSArray *assistants;
@property(readonly) long long multifunctionButton;
@property(readonly) _Bool manuallyDisabled;
@property(readonly) NSNumber *activeIdentifier;
@property(readonly) _Bool supportsOnboarding;
@property(readonly, getter=isNeedsOnboarding) _Bool needsOnboarding;
@property(readonly) NSString *capabilityToString;
@property(readonly) unsigned long long capability;
@property(readonly) NSString *siriEngineVersion;
@property(readonly) NSString *siriEndpointVersion;
@property(readonly, copy) NSUUID *sessionHubIdentifer;
@property(readonly) long long sessionState;
- (id)siriEndpointProfile;	// IMP=0x000000000024653c
- (void)deleteSiriHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000246422
- (void)applyOnboardingSelections:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002462e0
- (id)initWithSiriEndpointProfile:(id)arg1;	// IMP=0x0000000000246275
- (id)init;	// IMP=0x00000000002461cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

