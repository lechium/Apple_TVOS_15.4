//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKBackgroundObservationExtensionXPCInterface-Protocol.h>

@class HKSampleType;

@protocol _HKBackgroundObservationExtensionRemoteXPCInterface <_HKBackgroundObservationExtensionXPCInterface>
- (void)performCleanup;
- (void)backgroundObservationExtensionTimeWillExpire;
- (void)didReceiveUpdateForSampleType:(HKSampleType *)arg1 completionHandler:(void (^)(void))arg2;
@end

