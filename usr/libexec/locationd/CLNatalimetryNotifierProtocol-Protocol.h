//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class NSArray, NSDictionary, NSObject, NSUUID;
@protocol OS_xpc_object;

@protocol CLNatalimetryNotifierProtocol <CLNotifierServiceProtocol>
- (void)onCalorieAggregationActivity:(NSObject<OS_xpc_object> *)arg1;
- (void)queryWorkoutMets:(NSUUID *)arg1 withReply:(void (^)(CMWorkoutMetsData *, int))arg2;
- (void)queryVO2MaxInputsFromRecord:(struct VO2MaxInput)arg1 withReply:(void (^)(NSArray *, int))arg2;
- (void)queryMetMinutesInTimeRange:(CDStruct_2c43369c)arg1 withReply:(void (^)(NSArray *, int))arg2;
- (int)syncgetQueryExerciseMinuteDataSince:(struct CLExerciseMinuteData *)arg1 records:(void *)arg2;
- (int)syncgetQueryNatalieDataSince:(struct CLNatalieData *)arg1 records:(void *)arg2;
- (void)resetUserProfileForKeys:(NSArray *)arg1;
- (void)setUserProfile:(NSDictionary *)arg1 merge:(_Bool)arg2;
- (void)setUserProfileFromCMNatalimeter:(NSDictionary *)arg1;
- (NSDictionary *)syncgetUserProfileInternal;
- (void)setActiveVo2maxOverride:(_Bool)arg1;
- (void)refreshMetrics;
- (void)resume;
- (void)pause;
- (void)updatePAL:(double)arg1;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end

