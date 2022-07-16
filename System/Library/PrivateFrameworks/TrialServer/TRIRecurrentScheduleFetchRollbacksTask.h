//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRITask-Protocol.h>

@class NSArray, NSDate, NSString;
@protocol TRITaskAttributing, TRITaskQueueStateProviding;

@interface TRIRecurrentScheduleFetchRollbacksTask <TRITask>
{
    id <TRITaskAttributing> _taskAttribution;	// 8 = 0x8
    _Bool _isRepeatedInstance;	// 16 = 0x10
    int taskType;	// 20 = 0x14
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000060d39
+ (id)parseFromData:(id)arg1;	// IMP=0x0000000000060aec
+ (id)taskWithAttribution:(id)arg1;	// IMP=0x000000000005fe94
- (void).cxx_destruct;	// IMP=0x0000000000060f05
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000060e15
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000060d41
- (unsigned long long)requiredCapabilities:(id)arg1;	// IMP=0x0000000000060cea
- (id)serialize;	// IMP=0x00000000000609fe
- (id)_asPersistedTask;	// IMP=0x0000000000060978
@property(readonly, nonatomic) int taskType; // @synthesize taskType;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000060782
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;	// IMP=0x0000000000060636
- (id)_fetchRollbacksTaskUsingContext:(id)arg1;	// IMP=0x00000000000605f5
- (_Bool)_shouldScheduleUsingContext:(id)arg1 withTaskQueue:(id)arg2;	// IMP=0x00000000000603a2
- (_Bool)_experimentsExistUsingContext:(id)arg1;	// IMP=0x0000000000060238
- (id)_nextRecurrentTaskUsingContext:(id)arg1;	// IMP=0x0000000000060023
@property(readonly, nonatomic) NSArray *tags;
- (id)initWithTaskAttribution:(id)arg1 isRepeatedInstance:(_Bool)arg2;	// IMP=0x000000000005fee3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDate *startTime;
@property(nonatomic) __weak id <TRITaskQueueStateProviding> stateProvider;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *taskName;

@end

