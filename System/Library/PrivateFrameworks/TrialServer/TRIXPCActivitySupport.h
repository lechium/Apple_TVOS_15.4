//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TRIXPCActivitySupport : NSObject
{
}

+ (_Bool)unsafe_immediatelyScheduleActivityWithLaunchDaemonDescriptor:(id)arg1;	// IMP=0x000000000010141e
+ (void)assertRegistrationOfLaunchdPlistActivities:(id)arg1;	// IMP=0x0000000000101094
+ (void)registerActivityWithLaunchDaemonDescriptor:(id)arg1 checkInBlock:(CDUnknownBlockType)arg2 asyncHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001009cb
+ (id)_registeredActivities;	// IMP=0x0000000000100928
+ (id)nameForActivityState:(long long)arg1;	// IMP=0x0000000000100884

@end

