//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DMCBackgroundActivityManager : NSObject
{
    NSMutableDictionary *_activities;	// 8 = 0x8
}

+ (void)cancelActivity:(id)arg1;	// IMP=0x00000000000049f4
+ (void)scheduleOneShotActivity:(id)arg1 interval:(double)arg2 gracePeriod:(double)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x000000000000454c
+ (id)sharedInstance;	// IMP=0x0000000000004481
- (void).cxx_destruct;	// IMP=0x0000000000004b39
@property(retain, nonatomic) NSMutableDictionary *activities; // @synthesize activities=_activities;
- (id)initPrivate;	// IMP=0x00000000000044e6

@end

