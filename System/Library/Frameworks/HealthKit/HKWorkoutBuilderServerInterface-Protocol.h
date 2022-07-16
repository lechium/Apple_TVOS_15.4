//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKDevice, HKQuantityType, NSArray, NSDate, NSDictionary, NSString;

@protocol HKWorkoutBuilderServerInterface <NSObject>
- (void)remote_setShouldCollectEvents:(_Bool)arg1;
- (void)remote_setStatisticsComputationMethod:(long long)arg1 forType:(HKQuantityType *)arg2;
- (void)remote_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(HKQuantityType *)arg2;
- (void)remote_updateDevice:(HKDevice *)arg1;
- (void)remote_recoverWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_removeMetadata:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_addMetadata:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_addWorkoutEvents:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_addSamples:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_removeDataSourcesWithIdentifiers:(NSArray *)arg1;
- (void)remote_addDataSourcesWithIdentifiers:(NSArray *)arg1;
- (void)remote_setTargetConstructionState:(long long)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
@end

