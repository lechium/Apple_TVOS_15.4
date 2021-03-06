//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DNDSModeConfigurationManager, DNDSStateProvider;
@protocol OS_dispatch_queue;

@interface DNDSUserAvailabilityCoordinator : NSObject
{
    _Bool _active;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_extensionLaunchQueue;	// 24 = 0x18
    DNDSModeConfigurationManager *_modeConfigurationManager;	// 32 = 0x20
    DNDSStateProvider *_stateProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000019460
- (_Bool)_isTCCUserAvailabilityGrantedForMessages;	// IMP=0x0000000000019458
- (id)_userAvailabilityTCCApprovedBundleIds;	// IMP=0x0000000000019450
- (id)publishStatusKitAvailabilityForced:(_Bool)arg1 error:(out id *)arg2;	// IMP=0x000000000001943c
- (id)publishStatusKitAvailabilityReturningError:(out id *)arg1;	// IMP=0x0000000000019425
- (void)_publishStatusKitAvailability:(_Bool)arg1 activityIdentifier:(id)arg2 local:(_Bool)arg3 scheduled:(_Bool)arg4 date:(id)arg5 forced:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000001940b
- (void)_publishStatusKitAvailability:(_Bool)arg1 activityIdentifier:(id)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000193dc
- (void)_publishStatusKitCurrentAvailabilityForced:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000193c4
- (_Bool)userAvailabilityInActiveModeForContactHandle:(id)arg1 withError:(out id *)arg2;	// IMP=0x00000000000193bc
- (id)allowedModesForContactHandle:(id)arg1 withError:(out id *)arg2;	// IMP=0x0000000000018f7b
- (_Bool)isTCCUserAvailabilityGrantedForBundleId:(id)arg1;	// IMP=0x0000000000018f73
- (_Bool)isLocalUserAvailableForApplicationIdentifier:(id)arg1 withError:(out id *)arg2;	// IMP=0x0000000000018e7c
- (_Bool)_isLocalUserAvailableForAppId:(id)arg1 modeIdentifier:(id)arg2 withError:(out id *)arg3;	// IMP=0x0000000000018d21
- (void)sendStatusKitInvitationsForContacts:(id)arg1;	// IMP=0x0000000000018d1b
- (void)coordinateUserAvailability:(id)arg1 fromConfiguration:(id)arg2 toConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000018578
- (void)suspend;	// IMP=0x000000000001856e
- (void)resume;	// IMP=0x0000000000018564
- (id)initWithConfigurationManger:(id)arg1 stateProvider:(id)arg2;	// IMP=0x000000000001844e

@end

