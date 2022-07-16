//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDLogEventDailyProvider-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSArray, NSString, NSUUID;
@protocol HMDSiriEndpointProfileMetricsDispatcherDataSource, HMMLogEventSubmitting;

@interface HMDSiriEndpointProfileMetricsDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>
{
    id <HMDSiriEndpointProfileMetricsDispatcherDataSource> _dataSource;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
    NSUUID *_accessoryUUID;	// 24 = 0x18
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000063140a
- (void).cxx_destruct;	// IMP=0x0000000000630b39
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property __weak id <HMDSiriEndpointProfileMetricsDispatcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x0000000000630a7a
@property(readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
- (id)dataSourceProfileFields;	// IMP=0x0000000000630876
- (id)dataSourceCompositeSettingsControllerManager;	// IMP=0x000000000063068d
- (id)dataSourceAccessoryCategoryType;	// IMP=0x0000000000630567
- (_Bool)dataSourceShouldSubmitRoutineConfigurationEvent;	// IMP=0x0000000000630454
- (id)fetchAccessorySettingFields;	// IMP=0x00000000006302b7
- (void)submitRoutineConfigurationEventWithAccessorySettingFields:(id)arg1;	// IMP=0x00000000006301cd
- (void)submitRoutineConfigurationEvent;	// IMP=0x0000000000630039
- (id)initWithAccessoryUUID:(id)arg1 homeUUID:(id)arg2 logEventSubmitter:(id)arg3;	// IMP=0x000000000062ff3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

