//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRIMetricsProviding-Protocol.h>
#import <TrialServer/TRITask-Protocol.h>

@class NSArray, NSDate, NSString, TRIRolloutDeployment, TRIRolloutTaskSupport;
@protocol TRIFactorPackSetId, TRITaskAttributing, TRITaskQueueStateProviding;

@interface TRIActivateTargetedRolloutDeploymentTask <TRITask, TRIMetricsProviding>
{
    id <TRITaskAttributing> _taskAttribution;	// 8 = 0x8
    TRIRolloutTaskSupport *_support;	// 16 = 0x10
    TRIRolloutDeployment *_deployment;	// 24 = 0x18
    NSString<TRIFactorPackSetId> *_factorPackSetId;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b000a
+ (id)parseFromData:(id)arg1;	// IMP=0x00000000000afb0b
+ (id)taskWithDeployment:(id)arg1 factorPackSetId:(id)arg2 taskAttribution:(id)arg3;	// IMP=0x00000000000ac89d
- (void).cxx_destruct;	// IMP=0x00000000000b01f8
@property(readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId; // @synthesize factorPackSetId=_factorPackSetId;
@property(readonly, nonatomic) TRIRolloutDeployment *deployment; // @synthesize deployment=_deployment;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b00e6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b0012
@property(readonly, copy) NSString *description;
- (unsigned long long)requiredCapabilities:(id)arg1;	// IMP=0x00000000000aff0a
- (id)serialize;	// IMP=0x00000000000afa1d
- (id)_asPersistedTask;	// IMP=0x00000000000af931
- (id)trialSystemTelemetry;	// IMP=0x00000000000af914
- (id)dimensions;	// IMP=0x00000000000af8f7
- (id)metrics;	// IMP=0x00000000000af8da
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000af73a
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;	// IMP=0x00000000000ad66b
- (_Bool)_notifyUpdatedShadowEvaluationsWithDeployments:(id)arg1 context:(id)arg2 usingTransaction:(id)arg3;	// IMP=0x00000000000accb5
- (void)runDequeueHandlerUsingContext:(id)arg1;	// IMP=0x00000000000acb63
- (void)runEnqueueHandlerUsingContext:(id)arg1;	// IMP=0x00000000000aca51
@property(readonly, nonatomic) NSArray *dependencies;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) int taskType;
- (id)initWithDeployment:(id)arg1 factorPackSetId:(id)arg2 taskAttribution:(id)arg3;	// IMP=0x00000000000ac4b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSDate *startTime;
@property(nonatomic) __weak id <TRITaskQueueStateProviding> stateProvider;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *taskName;

@end
