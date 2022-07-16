//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@class NSArray, NSDate, NSUUID, SPUnauthorizedTrackingAdvertisement, SPUnauthorizedTrackingObservation;

@protocol SPTrackingAvoidanceServiceProtocol <NSObject>
- (void)playUnauthorizedSoundOnBeaconByUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)acceptUTForBeaconUUID:(NSUUID *)arg1;
- (void)ignoreBeaconByAdvertisement:(SPUnauthorizedTrackingAdvertisement *)arg1 until:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)ignoreBeaconByUUID:(NSUUID *)arg1 untilDate:(NSDate *)arg2 completion:(void (^)(NSError *))arg3;
- (void)ignoreBeaconByUUID:(NSUUID *)arg1 until:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)ignoreBeaconByUUID:(NSUUID *)arg1 until:(unsigned long long)arg2;
- (void)unauthorizedTrackingTypeWithCompletion:(SPUnauthorizedTrackingAdvertisement *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)ignoringUnauthorizedTrackingWithCompletion:(SPUnauthorizedTrackingAdvertisement *)arg1 completion:(void (^)(NSDate *, NSError *))arg2;
- (void)didWithdrawUnauthorizedTrackingWithCompletion:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didUpdateUnauthorizedTrackingWithCompletion:(SPUnauthorizedTrackingObservation *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didDetectUnauthorizedTrackingWithCompletion:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
@end

