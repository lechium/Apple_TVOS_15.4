//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDPrimaryResidentElectionAddOn-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDResidentDevice, HMFTimer, NSHashTable, NSString, NSUUID;
@protocol HMDPrimaryResidentElectionAddOnDelegate, HMDResidentDeviceManagerContext, OS_dispatch_queue;

@interface HMDPrimaryElectionLegacyAddOn : NSObject <HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDPrimaryResidentElectionAddOn>
{
    _Bool _confirming;	// 8 = 0x8
    id <HMDPrimaryResidentElectionAddOnDelegate> _delegate;	// 16 = 0x10
    HMDResidentDevice *_preferredElector;	// 24 = 0x18
    HMFTimer *_residentMonitorTimer;	// 32 = 0x20
    NSHashTable *_devicePreferenceDataSources;	// 40 = 0x28
    id <HMDResidentDeviceManagerContext> _context;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0000000000748e4c
+ (long long)compareElectionVersions:(id)arg1 otherVersion:(id)arg2;	// IMP=0x0000000000748b3d
- (void).cxx_destruct;	// IMP=0x00000000007437d5
@property(readonly, nonatomic) __weak id <HMDResidentDeviceManagerContext> context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSHashTable *devicePreferenceDataSources; // @synthesize devicePreferenceDataSources=_devicePreferenceDataSources;
@property(retain, nonatomic) HMFTimer *residentMonitorTimer; // @synthesize residentMonitorTimer=_residentMonitorTimer;
@property(readonly, nonatomic) HMDResidentDevice *preferredElector; // @synthesize preferredElector=_preferredElector;
@property(nonatomic, getter=isConfirming) _Bool confirming; // @synthesize confirming=_confirming;
@property __weak id <HMDPrimaryResidentElectionAddOnDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dumpState;	// IMP=0x000000000074374a
- (id)logIdentifier;	// IMP=0x00000000007436a9
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)addDataSource:(id)arg1;	// IMP=0x000000000074353f
- (void)atHomeLevelChanged:(long long)arg1;	// IMP=0x00000000007433ea
- (void)_handleConfirmResidentDevice:(id)arg1;	// IMP=0x0000000000742e5b
- (void)_handleResidentElectionParameters:(id)arg1;	// IMP=0x0000000000742cff
@property(readonly, nonatomic) _Bool isAtHome;
- (void)confirmPrimaryResident;	// IMP=0x00000000007427ff
- (void)confirmOnAvailability;	// IMP=0x00000000007422f2
- (void)confirmAsResident;	// IMP=0x0000000000741f9d
- (void)__handleConfirmationRequest:(id)arg1;	// IMP=0x0000000000741c4d
- (void)confirmWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000741879
- (id)computePreferredElector:(unsigned long long *)arg1;	// IMP=0x00000000007412cc
- (void)handleBatteryLevelChange:(id)arg1;	// IMP=0x0000000000741208
- (void)handleBatteryStateChange:(id)arg1;	// IMP=0x0000000000741144
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000740f4e
- (void)primaryResidentChanged:(id)arg1;	// IMP=0x0000000000740f44
- (void)performElectionWithReason:(unsigned long long)arg1;	// IMP=0x00000000007409f8
- (void)performElection;	// IMP=0x00000000007409f2
- (void)registerForMessages;	// IMP=0x00000000007406ce
- (void)start;	// IMP=0x000000000074065d
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000740360

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
