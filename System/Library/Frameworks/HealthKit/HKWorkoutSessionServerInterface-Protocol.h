//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@protocol HKWorkoutSessionServerInterface
- (void)remote_recoverWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_setTargetState:(long long)arg1 date:(NSDate *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

