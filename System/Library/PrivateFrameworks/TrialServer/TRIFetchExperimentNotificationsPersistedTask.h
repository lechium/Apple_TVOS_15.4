//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, TRIPBTimestamp, TRIPersistedTaskAttribution;

@interface TRIFetchExperimentNotificationsPersistedTask : TRIPBMessage
{
}

+ (id)descriptor;	// IMP=0x00000000000ef207

// Remaining properties
@property(retain, nonatomic) TRIPBTimestamp *earliestTimestamp; // @dynamic earliestTimestamp;
@property(nonatomic) _Bool hasEarliestTimestamp; // @dynamic hasEarliestTimestamp;
@property(nonatomic) _Bool hasLimitedCarryOnly; // @dynamic hasLimitedCarryOnly;
@property(nonatomic) _Bool hasRetryCount; // @dynamic hasRetryCount;
@property(nonatomic) _Bool hasRollbacksOnly; // @dynamic hasRollbacksOnly;
@property(nonatomic) _Bool hasTaskAttribution; // @dynamic hasTaskAttribution;
@property(nonatomic) _Bool limitedCarryOnly; // @dynamic limitedCarryOnly;
@property(retain, nonatomic) NSMutableArray *namespacesArray; // @dynamic namespacesArray;
@property(readonly, nonatomic) unsigned long long namespacesArray_Count; // @dynamic namespacesArray_Count;
@property(nonatomic) int retryCount; // @dynamic retryCount;
@property(nonatomic) _Bool rollbacksOnly; // @dynamic rollbacksOnly;
@property(retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution; // @dynamic taskAttribution;

@end
