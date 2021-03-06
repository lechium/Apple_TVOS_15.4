//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REExportedInterface-Protocol.h>

@class CMMotionActivityManager;

@protocol REDeviceMotionPredictorProperties <REExportedInterface>
@property(readonly) unsigned long long motionType;
@property(readonly, getter=isStationary) _Bool stationary;
@property(readonly, nonatomic) CMMotionActivityManager *activityManager;
@end

