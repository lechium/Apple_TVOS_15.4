//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDRemoteDeviceConfirmationHandler, HMFMessage, HMFOperation, HMFTimer, NSObject;
@protocol OS_dispatch_queue;

@protocol HMDRemoteDeviceMonitorFactory <NSObject>
- (HMDRemoteDeviceConfirmationHandler *)newConfirmationHandlerWithTimeout:(double)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2 handler:(void (^)(NSError *))arg3;
- (HMFOperation *)newSendMessageOperationWithMessage:(HMFMessage *)arg1;
- (HMFOperation *)newSendLocalMessageOperationWithMessage:(HMFMessage *)arg1;
- (HMFTimer *)newDeviceMonitoringTimer;
- (HMFTimer *)newRepeatingDeviceHealthTimer;
- (HMFTimer *)newInitialDeviceHealthTimer;
@end

