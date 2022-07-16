//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TRIPBTimestamp;

@interface TRIMLRuntimeSchedulingPolicy
{
}

+ (id)descriptor;	// IMP=0x0000000000016bb4

// Remaining properties
@property(retain, nonatomic) TRIPBTimestamp *endsAt; // @dynamic endsAt;
@property(nonatomic) _Bool hasEndsAt; // @dynamic hasEndsAt;
@property(nonatomic) _Bool hasMaxEvaluations; // @dynamic hasMaxEvaluations;
@property(nonatomic) _Bool hasPeriodicIntervalSeconds; // @dynamic hasPeriodicIntervalSeconds;
@property(nonatomic) _Bool hasQos; // @dynamic hasQos;
@property(nonatomic) _Bool hasStartsAfter; // @dynamic hasStartsAfter;
@property(nonatomic) unsigned int maxEvaluations; // @dynamic maxEvaluations;
@property(nonatomic) unsigned int periodicIntervalSeconds; // @dynamic periodicIntervalSeconds;
@property(nonatomic) int qos; // @dynamic qos;
@property(retain, nonatomic) TRIPBTimestamp *startsAfter; // @dynamic startsAfter;

@end

