//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRITask-Protocol.h>

@class NSArray, NSDate, NSMutableSet, NSString;
@protocol TRITaskQueueStateProviding;

@interface TRIPostUpgradeCleanupTask <TRITask>
{
    NSMutableSet *_invalidExperimentDeployments;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000045fe8
+ (id)parseFromData:(id)arg1;	// IMP=0x0000000000045f2b
+ (id)task;	// IMP=0x0000000000043efd
- (void).cxx_destruct;	// IMP=0x00000000000461b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000460c4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045ff0
- (id)serialize;	// IMP=0x0000000000045e3d
- (id)_asPersistedTask;	// IMP=0x0000000000045e24
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;	// IMP=0x00000000000458b1
- (_Bool)_removePromotionsUsingPaths:(id)arg1;	// IMP=0x000000000004583d
- (_Bool)_activeRolloutIsCompatible:(id)arg1 upgradeNCVs:(id)arg2 downloadNCVs:(id)arg3;	// IMP=0x000000000004501c
- (_Bool)_validateRolloutNamespaceNCVs:(id)arg1 downloadNCVs:(id)arg2 rolloutDatabase:(id)arg3;	// IMP=0x0000000000044b19
- (_Bool)_validateDynamicNamespaceRolloutsWithDatabase:(id)arg1 usingPaths:(id)arg2;	// IMP=0x000000000004476a
- (_Bool)_validateExperimentDescriptorsWithNamespaceCompatibilityVersions:(id)arg1 database:(id)arg2;	// IMP=0x0000000000044310
- (_Bool)_validateRolloutDescriptorsWithNamespaceCompatibilityVersions:(id)arg1 usingPaths:(id)arg2;	// IMP=0x0000000000043fe3
- (id)_nextTasksForRunStatus:(int)arg1;	// IMP=0x0000000000043f16
@property(readonly, nonatomic) int taskType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *startTime;
@property(nonatomic) __weak id <TRITaskQueueStateProviding> stateProvider;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) NSString *taskName;

@end

