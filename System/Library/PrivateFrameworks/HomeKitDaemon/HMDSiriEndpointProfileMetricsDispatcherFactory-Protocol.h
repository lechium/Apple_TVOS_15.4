//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDSiriEndpointProfileMetricsDispatcher, NSUUID;
@protocol HMMLogEventSubmitting;

@protocol HMDSiriEndpointProfileMetricsDispatcherFactory <NSObject>
- (HMDSiriEndpointProfileMetricsDispatcher *)createSiriEndpointProfileMetricsDispatcherWithAccessoryUUID:(NSUUID *)arg1 homeUUID:(NSUUID *)arg2 logEventSubmitter:(id <HMMLogEventSubmitting>)arg3;
@end

