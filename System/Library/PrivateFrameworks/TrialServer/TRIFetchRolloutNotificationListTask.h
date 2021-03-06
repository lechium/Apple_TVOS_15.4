//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRIMetricsProviding-Protocol.h>
#import <TrialServer/TRIRetryableTask-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSSet, NSString;
@protocol TRITaskAttributing, TRITaskQueueStateProviding;

@interface TRIFetchRolloutNotificationListTask <TRIRetryableTask, TRIMetricsProviding>
{
    NSMutableArray *_metrics;	// 8 = 0x8
    NSMutableArray *_dimensions;	// 16 = 0x10
    NSMutableArray *_nextTasks;	// 24 = 0x18
    NSDate *_startingFetchDateOverride;	// 32 = 0x20
    NSSet *_namespaceNames;	// 40 = 0x28
    id <TRITaskAttributing> _taskAttribution;	// 48 = 0x30
    _Bool wasDeferred;	// 56 = 0x38
    int retryCount;	// 60 = 0x3c
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ac075
+ (id)parseFromData:(id)arg1;	// IMP=0x00000000000abd31
+ (id)taskWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttribution:(id)arg3;	// IMP=0x00000000000aa392
- (void).cxx_destruct;	// IMP=0x00000000000ac281
@property(nonatomic) _Bool wasDeferred; // @synthesize wasDeferred;
@property(nonatomic) int retryCount; // @synthesize retryCount;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ac151
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ac07d
- (unsigned long long)requiredCapabilities:(id)arg1;	// IMP=0x00000000000ac001
- (id)serialize;	// IMP=0x00000000000abc43
- (id)_asPersistedTask;	// IMP=0x00000000000abafa
- (id)trialSystemTelemetry;	// IMP=0x00000000000abad3
- (id)dimensions;	// IMP=0x00000000000aba70
- (id)metrics;	// IMP=0x00000000000aba0d
- (void)_addDimension:(id)arg1;	// IMP=0x00000000000ab967
- (void)_addMetric:(id)arg1;	// IMP=0x00000000000ab8c1
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ab5e1
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;	// IMP=0x00000000000aa894
- (void)_processRolloutArtifact:(id)arg1 context:(id)arg2 taskQueue:(id)arg3;	// IMP=0x00000000000aa54b
- (long long)nextTaskCount;	// IMP=0x00000000000aa52e
- (void)_addNextTask:(id)arg1;	// IMP=0x00000000000aa511
- (id)initWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttribution:(id)arg3;	// IMP=0x00000000000aa427
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) int taskType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSArray *dependencies;
@property(copy, nonatomic) NSDate *startTime;
@property(nonatomic) __weak id <TRITaskQueueStateProviding> stateProvider;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *taskName;

@end

