//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16SiriSessionStore20XPCActivitiesManager : NSObject
{
    MISSING_TYPE *activityQueue;	// 8 = 0x8
    MISSING_TYPE *xpcActivities;	// 16 = 0x10
    MISSING_TYPE *xpcActivitiesRegistered;	// 24 = 0x18
}

+ (id)shared;	// IMP=0x0000000000001d90
- (void).cxx_destruct;	// IMP=0x0000000000002d00
- (void)manageXPCActivities;	// IMP=0x0000000000002680
- (void)notifySiriSettingWasToggled;	// IMP=0x0000000000002110
- (id)init;	// IMP=0x0000000000002000

@end

