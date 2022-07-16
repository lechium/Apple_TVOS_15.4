//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TRIAssignment, TRIPBTimestamp, TRIShadowEvaluation;

@interface TRIClientExperiment
{
}

+ (id)descriptor;	// IMP=0x0000000000023ebb

// Remaining properties
@property(retain, nonatomic) TRIAssignment *assignment; // @dynamic assignment;
@property(nonatomic) unsigned int deploymentId; // @dynamic deploymentId;
@property(retain, nonatomic) TRIPBTimestamp *endDate; // @dynamic endDate;
@property(copy, nonatomic) NSString *experimentId; // @dynamic experimentId;
@property(nonatomic) _Bool hasAssignment; // @dynamic hasAssignment;
@property(nonatomic) _Bool hasDeploymentId; // @dynamic hasDeploymentId;
@property(nonatomic) _Bool hasEndDate; // @dynamic hasEndDate;
@property(nonatomic) _Bool hasExperimentId; // @dynamic hasExperimentId;
@property(nonatomic) _Bool hasPriority; // @dynamic hasPriority;
@property(nonatomic) _Bool hasProjectId; // @dynamic hasProjectId;
@property(nonatomic) _Bool hasProjectName; // @dynamic hasProjectName;
@property(nonatomic) _Bool hasSeed; // @dynamic hasSeed;
@property(nonatomic) _Bool hasShadowEvaluation; // @dynamic hasShadowEvaluation;
@property(nonatomic) _Bool hasStartDate; // @dynamic hasStartDate;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int priority; // @dynamic priority;
@property(nonatomic) int projectId; // @dynamic projectId;
@property(copy, nonatomic) NSString *projectName; // @dynamic projectName;
@property(nonatomic) unsigned int seed; // @dynamic seed;
@property(retain, nonatomic) TRIShadowEvaluation *shadowEvaluation; // @dynamic shadowEvaluation;
@property(retain, nonatomic) TRIPBTimestamp *startDate; // @dynamic startDate;
@property(nonatomic) int type; // @dynamic type;

@end

