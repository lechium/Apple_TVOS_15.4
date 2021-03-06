//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKFitnessMachineConnectionInitiatorClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKTaskServerProxyProvider, NSString, NSUUID;
@protocol _HKFitnessMachineConnectionInitiatorDelegate;

@interface _HKFitnessMachineConnectionInitiator : NSObject <HKFitnessMachineConnectionInitiatorClientInterface, _HKXPCExportable>
{
    _Atomic _Bool _requiresRegistration;	// 8 = 0x8
    HKTaskServerProxyProvider *_proxyProvider;	// 16 = 0x10
    id <_HKFitnessMachineConnectionInitiatorDelegate> _delegate;	// 24 = 0x18
}

+ (id)taskIdentifier;	// IMP=0x0000000000052941
- (void).cxx_destruct;	// IMP=0x0000000000053185
@property(nonatomic) __weak id <_HKFitnessMachineConnectionInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_simulateAccept;	// IMP=0x0000000000053130
- (void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1;	// IMP=0x00000000000530c5
- (void)clientRemote_encounteredError:(id)arg1;	// IMP=0x0000000000053050
- (void)clientRemote_workoutAppReady;	// IMP=0x0000000000053004
- (void)clientRemote_updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;	// IMP=0x0000000000052f89
- (void)clientRemote_updatedFitnessMachine:(id)arg1 fitnessMachineSessionUUID:(id)arg2;	// IMP=0x0000000000052f00
- (void)clientRemote_updatedConnectionState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;	// IMP=0x0000000000052de3
- (void)_fetchProxyWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000052d17
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1;	// IMP=0x0000000000052c6d
- (void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2;	// IMP=0x0000000000052bb8
- (void)registerClientIfNeeded;	// IMP=0x0000000000052a82
- (void)connectionInvalidated;	// IMP=0x00000000000529ee
- (void)connectionInterrupted;	// IMP=0x0000000000052967
- (id)remoteInterface;	// IMP=0x000000000005295d
- (id)exportedInterface;	// IMP=0x0000000000052953
@property(readonly, nonatomic) NSUUID *UUID;
- (id)initWithHealthStore:(id)arg1;	// IMP=0x000000000005274b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

